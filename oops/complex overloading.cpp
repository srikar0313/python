#include<iostream>
using namespace std;
class complex{
     int real,img;
     public:
     void number(int r,int i)
     {
        real=r;
        img=i;
     }
     void print()
     {
        cout<<"the complex number is"<<real<<"+j"<<img<<endl;
     }
     complex operator -(complex);
};
complex complex::operator -(complex c){
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
     }
int main()
{
    complex c1,c2,c3;
    c1.number(1,2);
    c1.print();
    c2.number(3,4);
    c2.print();
    c3=c2-c1;
    c3.print();
}