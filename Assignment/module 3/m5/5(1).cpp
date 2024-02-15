/*Write a program of to swap the two values using template*/
#include<iostream>
using namespace std;
template<typename t>    //creat tamplet
class Swap
{
public:
    t no1,no2,temp;
    Swap()
    {
        cout<<"enter first number:";
        cin>>no1;
        cout<<"enter secand number:";
        cin>>no2;
    }
    int swa()
    {
        temp=no1;
        no1=no2;
        no2=temp;
    }
    int print()
    {
        cout<<"after swap number\n a="<<no1<<" &b="<<no2;

    }
};
int main(int argc, char const *argv[])
{
    Swap <int>s1;
    s1.swa();
    s1.print();
    return 0;
}
