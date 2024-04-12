
// LisKovSubstitution Principle 

// It’s the ability to replace any object of a parent class with any object of one of its child classes without affecting the correctness of the program.

// Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it.

#include <iostream>

using namespace std;

class Bird{

    public:

    virtual void Fly() {
        cout << "bird is flying"  << endl;
    }

    virtual void eat() {
        cout << "bird is eating" << endl;
    }

};
class Duck : public Bird{

    void Fly() override {
        cout << "Duck is flying "  << endl;
    }

    void eat() override {
        cout << "Duck is eating " << endl ;
    }
};

class Penguine : public Bird {

    void Fly() override {
        cout << "penguine can not fly " << endl;   // here LSP breaks because Penguine class does not behave how Bird class expected it to be     
    }
};

void MakeBirdFly (Bird &bird) {

    bird.Fly();
}

int main(){

    Bird b1;
    Duck d1;
    Penguine p1;
    MakeBirdFly(b1);
    MakeBirdFly(d1);
    MakeBirdFly(p1);

}


// Above scenerio violate LSP we can work it out by changing class structure as below :- 



