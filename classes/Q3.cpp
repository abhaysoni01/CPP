#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string nam,int ag){
        name = nam;
        age = ag;
    }
};
class Student:public Person{
    public:
    int studentID;
    Student(string nam,int ag,int id):Person(nam,ag){
        studentID = id;
    }
    void displayStudentInfo(){
        cout<<"StudentID: "<<studentID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age:  "<<age<<endl;
    }
};

int main(){
    Student s1("Neji Hyuga",18,101);
    s1.displayStudentInfo();
}