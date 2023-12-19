// For correcting this LSP we made seperate class Flyingbird which contain fly feature 
// and removed it from bird feature so that penguine class does not violate its super class Bird 


#include <iostream> 

using namespace std;

class Bird {

    public:

    void Eat() {
        cout << "Bird is eating" << endl;
    }

};

class FlyingBird : public Bird {

    public:

    void Fly() {
        cout << "Bird is Flying" << endl;
    }

};


class Duck : public FlyingBird {

};

class Penguine : public Bird {

};


void MakingBirdFly(FlyingBird & fb) {

    fb.Fly();
}

int main() {

    Duck db;
    MakingBirdFly(db);
}