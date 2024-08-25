#include<iostream>
using namespace std;
class student{
    protected:
         int rollno;
         public:
               void setrollno(int r)
               {
                rollno=r;
               }
};
class marks:public student{
          int marks1;
          public:
               void setmarks(int m)
               {
                marks1=m;
               }
               void display()
               {
                cout<<"the student roll no is"<<rollno<<endl;
                cout<<"the student marks is "<<marks1<<endl;
               }
};
int main(){
    int m1,r1;
    cout<<"enter the rollno,marks"<<endl;
    cin>>m1>>r1;
    marks m;
    m.setmarks(m1);
    m.setrollno(r1);
    m.display();
}