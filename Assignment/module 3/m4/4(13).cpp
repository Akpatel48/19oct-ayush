/*without using third variable
13.Write a program to find the max number from given two numbers
using friend function*/
#include<iostream>
using namespace std;
class Swap
{
    int a,b;
public:
    friend int Swa(Swap &obj);
};
int Swa(Swap &obj)
{
    cout<<"enter first number:";
    cin>>obj.a;
    cout<<"enter secand number:";
    cin>>obj.b;
    if (obj.a<obj.b)
    {
        cout<<obj.b<<" is max";
    }
    else
    {
        cout<<obj.b<<" is max";
    }
}
int main(int argc, char const *argv[])
{
    Swap s1;
    Swa(s1);
    return 0;
}
