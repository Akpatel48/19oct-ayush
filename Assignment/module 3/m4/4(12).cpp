/*Write a program to swap the two numbers using friend function
without using third variable*/
#include<iostream>
using namespace std;
class Swap
{
    int a,b;
public:
    friend int Swa(Swap &obj1, Swap &obj2);
};
int Swa(Swap &obj1, Swap&obj2)
{
    cout<<"enter first number:";
    cin>>obj1.a;
    cout<<"enter secand number:";
    cin>>obj2.b;
    cout<<"before swaping a="<<obj1.a<<" b="<<obj2.b;
    obj1.a=obj1.a+obj2.b;
    obj2.b=obj1.a-obj2.b;
    obj1.a=obj1.a-obj2.b;
    cout<<endl<<"a="<<obj1.a<<endl<<"b="<<obj2.b;
}
int main(int argc, char const *argv[])
{
    Swap s1,s2;
    Swa(s1,s2);
    return 0;
}
