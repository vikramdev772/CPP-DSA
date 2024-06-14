#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <string>
using namespace std;

class Developer {
private:
    double salary;
public:
    string name;
    string techstack;

    void changeTech(string newTech){
         techstack = newTech;
    };
    void setSalary(double s){
        salary =s ;
    }
    double getSalary(){
        return salary;
    }
};

#endif // DEVELOPER_H
