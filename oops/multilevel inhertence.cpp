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
    protected:
          int marks1,marks2;
          public:
               void setmarks(int m1)
               {
                marks1=m1;
               }
};
class grade:public marks{
    int grade1;
    public:
          void setgrade(int a)
          {
            grade1=a;
          }
          void display()
               {
                cout<<"the student roll no is"<<rollno<<endl;
                cout <<"the student marks is"<<marks1<<endl;
                cout<<"the student grade is"<<grade1<<endl;
               }    
};
int main(){
    int m1,r1,a;
    for(int i=0;i<3;i++)
    {
    cout<<"enter the "<<i+1<<" rollno,marks and grade"<<endl;
    cin>>m1>>r1>>a;
    grade m;
    m.setgrade(a);
    m.setmarks(m1);
    m.setrollno(r1);
    m.display();
    }
}