/*Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class called
{
private:
   int ac,bl,w;
public:
    int di()
    {
        cout<<"enter your account number:";
        cin>>ac;
        cout<<"enter deposit amunt:";
        cin>>bl;
    }
    int wi()
    {
        cout<<"your account number :"<<ac;
        cout<<endl<<"enter withdraw amount:";
        cin>>w;
        bl=bl-w;
        cout<<"after withdraw amount your balence:"<<bl;
    }
};
int main(int argc, char const *argv[])
{
    called ca;
    ca.di();
    ca.wi();
    return 0;
}
