/*Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;
class called
{
private:
    int l1,l2,l3;
public:
    called()
    {
        cout<<"enter triangel three side lenth:";
        cin>>l1>>l2>>l3;
    }
    int determine()
    {
        if (l1==l2 && l1==l3 && l2==l3)
        {
            cout<<"---------------------------equilateral tiangel---------------------------";
        }
        else if (l1==l2 || l1==l3||l2==l3)
        {
            cout<<"---------------------------isosceles tiangel---------------------------";
        }
        else
        {
            cout<<"---------------------------scalene tiangel---------------------------";
        }
    }
};
int main(int argc, char const *argv[])
{
    called ca;
    ca.determine();
    return 0;
}
