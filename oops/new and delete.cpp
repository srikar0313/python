#include<iostream>
using namespace std;
int main()
{   int *p=new int(4);
    cout<<*p<<endl;
    int *arr=new int[3];
    arr[1]=10;
    arr[2]=20;
    arr[0]=30;
    cout<<"hi"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<arr[2]<<endl;
    delete[]arr;
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
}