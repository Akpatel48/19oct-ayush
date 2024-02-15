/*Write a C++ Program to show access to Private Public and Protected using 
Inheritance*/
#include<iostream>
using namespace std;
class A
{
    string a;
protected:
    string str;
    A()
    {
        cout<<"enter your name:";
        cin>>a;
        str=a;
    }
};
class B :virtual A
{
    public:
    int show()
    {
        cout<<"your name:"<<str;
    }
};
int main(int argc, char const *argv[])
{
    B b1;
    b1.show();
    return 0;
}
