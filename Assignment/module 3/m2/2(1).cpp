//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class clu
{
    int a,b,c;  //dicler veryebl
    public:
         clu()
        {
            cout<<"enter number:-"; //print massge
            cin>>a>>b;      //run time input
            cout<<"enter chose 1.add 2.sub 3.mul 4.div:-";
            cin>>c;
            switch (c)  //multiple choce select any one
            {
            case 1:
                cout<<"sum="<<a+b;
                break;
            case 2:
                cout<<"sub="<<a-b;
                break;
            case 3:
                cout<<"mul="<<a*b;
                break;
            case 4:
                cout<<"div="<<a/b;
            default:
                cout<<"enter velid chose";
                break;
            }
        }
};

int main(int argc, char const *argv[])
{
    clu c;
    return 0;
}
