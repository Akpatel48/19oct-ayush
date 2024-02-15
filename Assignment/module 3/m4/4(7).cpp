/*Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"grant parnt class";
    }
};
class B :public A
{
public:
    B()
    {
        cout<<endl<<"parnt class";
    }
};
class C :public B
{
public:
    C()
    {
        cout<<endl<<"child class";
    }
};
int main(int argc, char const *argv[])
{
    C c1;
    return 0;
}
