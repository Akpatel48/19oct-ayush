/*Write a C++ Program display Student Mark sheet using Multiple inheritance*/
#include<iostream>
using namespace std;
class student_name  //get student name
{
public:
    string name;
    int marks;
    student_name()
    {
        cout<<"enter student name:";
        cin>>name;
    }
};
class get_marks //get subject marks
{
public:
    int math,since,ss,gujarati,pr,total;
    get_marks()
    {
        cout<<"enter math marks:";
        cin>>math;
        cout<<"entre since marks:";
        cin>>since;
        cout<<"enter ss marks:";
        cin>>ss;
        cout<<"enter gujarati marks:";
        cin>>gujarati;
        total=math+since+ss+gujarati;
        pr=total/4;
    }
};
class show : public student_name,get_marks  //inheritance multipel
{
public:
    show()
    {
        cout<<"student name"<<name;
        cout<<endl<<"student totle marks"<<total;
        cout<<endl<<"student persntg"<<pr;
    }

};
int main(int argc, char const *argv[])
{
    show s1;
    return 0;
}
