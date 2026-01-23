#include<iostream>
using namespace std;

class Complex{
    public:
    int real,img;
    Complex(int r,int i){
        real = r;
        img = i;
    }
    Complex operator -(Complex &c1){
        int treal = this->real - c1.real;
        int timg = this->img - c1.img;
        Complex temp(treal,timg);
        return temp;
    }
    void showComplex(){
        cout<<"Real: "<<real<<endl;
        cout<<"Img: "<<img<<endl;
    }
};
int main(){

    Complex c1(1,5),c2(5,1);
    Complex c3 = c1 - c2;
    c1.showComplex();
    c2.showComplex();
    c3.showComplex();
    
    

}