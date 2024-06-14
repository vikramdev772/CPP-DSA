//Classes & Objects
//objects are entities in the real world
//class like a blueprint of these entities

//Acess Modifiers

//private  data&methods accessible inside class
//public    data & methods accessible to everyone 
//protected data & methods accessible inside class  & to its derived class


#include <iostream>
#include <string>

using namespace std;

class Engineer{
    //prpertiess
    public:
    string name;
    string tech;
    double salary;

    //methods /member functions
    void changeTech(string newTech){
            tech = newTech;
    }
};

int main(){
    Engineer e1;
    Engineer e2;
    Engineer e3;
    Engineer e4;

    e1.name="Vikram";
    e2.tech="MERN";
    e3.salary=80000;

    cout<< e1.name<<endl;
    return 0;


}