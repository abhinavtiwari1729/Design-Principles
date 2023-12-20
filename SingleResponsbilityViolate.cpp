// class journal which have responsibility for storing and persistence (saving and loading entries from/to files)



#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


class Journal{

    vector<string> records;

    public:

    void AddEntry(const string &entry) {
        records.push_back(entry);
    }

    void SaveToFile(const string &filename) {
        
        std::ofstream ofs(filename);
        if(ofs.is_open()){                      // check if file is open
            
            for(const auto & record : records) {

                ofs << record << endl;
            }

            ofs.close();
            std::cout << "Journal saved to file " << filename << endl;
        }
        else {
            cerr << "not able to open file" << endl ;
        }
    }

    void LoadFromFile(const string &filename) {

         ifstream ifs(filename);
         if(ifs.is_open()) {

            string entry;
            while(std::getline(ifs, entry)){
                records.push_back(entry);
            }

            ifs.close();
            std::cout << "Journal loaded from file " << filename << endl;
         }  
         else{
            std::cerr << "Not able to open file" << endl;
         } 
    }



};

//Journal class has two responsibilities one is adding entries to journal and
//other is to saving/loading entries to/from a file .this violated the SRP because 
// it has two reason to change. 