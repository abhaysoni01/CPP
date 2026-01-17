#include<iostream>
using namespace std;

class User{
private:
    int id;
    string password;
public:
    string username;
    User(int id){
        this->id = id;
    }
    void setPassword(string pass){
        password = pass;
    }
    string getPassword(){
        return password;
    }


};

int main(){
    User u1(101);
    u1.setPassword("neji");
    u1.username = "Hyuga";
    cout<<"Username: "<<u1.username<<endl;
    cout<<"Password: "<<u1.getPassword()<<endl;
    return 0;

}