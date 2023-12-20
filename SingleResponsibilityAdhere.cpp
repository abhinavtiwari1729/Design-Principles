// Now Journal class is responsible for managing entries and 
// Persistence Manager class is responsible for saving and loading from file  



#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

class Journal{

    vector<string> records;

    public:

    void AddEntry(const string & entry){
        records.push_back(entry);
    }

    const vector<string> & GetRecords() const {
        return records;
    }
};


class PersistenceManager{

    static void SaveToFile(const Journal & jour , const string &filename) {
        
        ofstream ofs(filename);
        if(ofs.is_open()) {
            
            for(const auto &record : jour.GetRecords()){
                ofs << record << endl;
            }

            ofs.close();
            std::cout << "Journal is beign written to file " << filename << endl;
        }
        else {
            std::cerr << "Not able to open the file " << endl ;
        }
    }


    static void LoadFromFile(Journal & jour , const string &filename) {

        ifstream ifs(filename) ;
        if (ifs.is_open()) {
            string record;
           
            while(std::getline(ifs , record)) {

                jour.AddEntry(record);
            }
            ifs.close();

            std::cout << "Journal is beign loaded from file" << filename << endl ;
        }   
        else {
            std::cerr << "Not able to open the file" << endl ;

        }     



    }



};
