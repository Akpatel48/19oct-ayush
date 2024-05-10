#include<iostream>
using namespace std;
char repit;
int quanitity,pizza,burger,sandwich,roll,biryani,choice,totle,sub_choice;
int a=80,b=100,c=120,d=150,e=200;
class custumer_name //enter custumer dityle
{
public:
    string n;
    void name()
    {
        cout<<"\t\t\t\t-------------------Tops Tech. Fast Food-------------------";
        cout<<"\nPlase Enter Your Name: ";
        cin>>n;
        cout<<"Hello "<<n;
        cout<<endl;
    }
};
class order //show menu
{
public:

    void orde()
    {
        cout<<"what would you like to order?";
        cout<<endl<<"\t\t\t\t\t-------------------Menu-------------------";
        cout<<"\n1) Pizzas\n2) Burgers\n3) Sandwich\n4) Rolls \n5) Biryani"<<endl;
        cout<<endl<<endl<<"Please Enter your Choice:";
        cin>>choice;
    }
};
class menu : public order   //inhrit class order
{
public:
    int pizzas()    //show type of pizza
    {
        cout<<"1 Sicilian pizza 100"<<"\n\t2 Greek pizza    Rs.120\n3\tMargherita pizza   Rs.150";
        cout<<endl<<"Please Enter wich Pizza you would like to have?:";
        cin>>pizza;
        sub_choice=pizza;
       return 0;
    }
    int burgers()   //show type of burgers
    {
        cout<<"\n1\tbeef burgers  Rs.120\n2\tchicken burgers Rs.150\n3\tlamb burgers   Rs.200";
        cout<<endl<<"Please Enter wich Burger you would like to have?:";
        cin>>burger;
        sub_choice=burger;
        return 0;
    }
    int sandwichs()    //show type of sandwich
    {
        cout<<"1\tGrilled Cheese  Rs.80\n2\tHam Sandwich    Rs.100\n3\tNutella Sandwich   Rs.120";
        cout<<endl<<"Please Enter wich Sandwich you would like to have?:";
        cin>>sandwich;
        sub_choice=sandwich;
        return 0;
    }
    int rolls() //show type of rolls
    {
        cout<<"1\tPotato Bread Rolls  Rs.120\n2\tHoney Wheat Rolls  Rs.150\n3\tEasy Dinner Rolls  Rs.200";
        cout<<endl<<"Please Enter wich Roll you would like to have?:";
        cin>>roll;
        sub_choice=roll;
        return 0;
    }
    int biryanis()  //show type of biryanis
    {
        cout<<"1\tHyderabadi Biryani  Rs.80\n2\tLucknowi Biryani    Rs.100\n3\tDindigul Biryani    Rs.120";
        cout<<endl<<"Please Enter wich Biryani you would like to have?:";
        cin>>biryani;
        sub_choice=biryani;
       return 0;
    }
    int main_manu() //select main menu
    {
        switch (choice)
        {
            case 1:
                pizzas();
                break;
            case 2:
                burgers();
                break;
            case 3:
                sandwichs();
                break;
            case 4:
                rolls();
                break;
            case 5:
                biryanis();
                break;
        }
        return 0;
    }
};
class submenu: public menu  //inherit class menu
{
public:
    int Quanitity()
    {
        cout<<"Please Enter Quanitity:";    //show messages enter Qunaitity
        cin>>quanitity; //enter food quantitiy
        return 0;
    }
    int Sicilianpizza()
    {
        totle+=quanitity*b;  //totale amunt of Bill
        return totle;
    }
    int Greekpizza()
    {
        totle+=quanitity*c;
        return totle;
    }
    int Margheritapizza()
    {
        totle+=quanitity*d;
        return totle;
    }
    int beefburgers()
    {
        totle+=quanitity*c;
        return totle;
    }
    int chickenburgers()
    {
        totle+=quanitity*d;
        return totle;
    }
    int lambburgers()
    {
        totle+=quanitity*e;
        return totle;
    }
    int GrilledCheese()
    {
        totle+=quanitity*a;
        return totle;
    }
    int HamSandwich()
    {
        totle+=quanitity*b;
        return totle;
    }
    int NutellaSandwich()
    {
        totle+=quanitity*c;
        return totle;
    }
    int PotatoBreadRolls()
    {
        totle+=quanitity*c;
        return totle;
    }
    int HoneyWheatRolls()
    {
        totle+=quanitity*d;
        return totle;
    }
    int EasyDinnerRolls()
    {
        totle+=quanitity*e;
        return totle;
    }
    int HyderabadiBiryani()
    {
        totle+=quanitity*a;
        return totle;
    }
    int LucknowiBiryani()
    {
        totle+=quanitity*b;
        return totle;
    }
    int DindigulBiryani()
    {
        totle+=quanitity*c;
        return totle;
    }
    int Submenu()   //select sub menu
    {
    if(choice==1)   //chek wich main menu ex.1.pizza
    {
        switch (pizza)  //select submanu item
        {
        case 1:
            cout<<"1\tSicilian pizza";   //show food name
            Sicilianpizza();
            break;
        case 2:
            cout<<"2\tGreek pizza";
            Greekpizza();
            break;
        case 3:
            cout<<"3\tMargherita pizza";
            Margheritapizza();
            break;
        }
    }
    else if (choice==2)
    {
        switch (burger)
        {
        case 1:
            cout<<"1\tbeef burgers";
            beefburgers();
            break;
        case 2:
            cout<<"2\tchicken burgers";
            chickenburgers();
            break;
        case 3:
            cout<<"3\tlamb burgers";
            lambburgers();
            break;
        }
    }
    else if (choice==3)
    {
        switch (sandwich)
        {
        case 1:
            cout<<"1\tGrilled Cheese";
            GrilledCheese();
            break;
        case 2:
            cout<<"2\tHam Sandwich";
            HamSandwich();
            break;
        case 3:
            cout<<"3\tNutella Sandwich";
            NutellaSandwich();
            break;
        }
    }
    else if (choice==4)
    {
        switch (roll)
        {
        case 1:
            cout<<"1\tPotato Bread Rolls";
            PotatoBreadRolls();
            break;
        case 2:
            cout<<"2\tHoney Wheat Rolls";
            HoneyWheatRolls();
            break;
        case 3:
            cout<<"3\tEasy Dinner Rolls";
            EasyDinnerRolls();
            break;
        }
    }
    else
    {
        switch (biryani)
        {
        case 1:
            cout<<"1\tHyderabadi Biryani";
            HyderabadiBiryani();
            break;
        case 2:
            cout<<"2\tLucknowi Biryani";
            LucknowiBiryani();
            break;
        case 3:
            cout<<"3\tDindigul Biryani";
            DindigulBiryani();
            break;
        }
    }
    return 0;
}
};
class print :public submenu //inherit calss submenu
{
public:
    int your_oder()
    {
        cout<<endl<<endl<<"\t\t\t----------------Your Order----------------"<<endl;
        return 0;
    }
    int prin() //print order dityel
    {
        cout<<endl<<"Your Total  Bill is:"<<totle;
        cout<<endl<<"Your Order Will be delivered in 40 Minutes";   //your foode delivererd time
        cout<<endl<<"Thank you For Ordering From Tops Tech Fast Food";
        cout<<endl<<"Would you like to order anything else?Y/N:"<<endl;
        cin>>repit;
        return 0;
    }
};
int     main(int argc, char const *argv[])
{
    custumer_name n1;
    char Y='Y';
    n1.name();
    top:
    print p1;
    orde:
    sub:
    p1.orde();  //foode menu class
    if (choice>5)
    {
        printf("\nenter valid choice\n\n");
        goto orde;
    }
    p1.main_manu();
    if (sub_choice>3)
    {
        printf("\nenter valid choice\n\n");
        goto sub;
    }
    p1.Quanitity();
    p1.your_oder();
    p1.Submenu();
    p1.prin();
    if(Y==toupper(repit)) //add more food dise
    {
        goto top;   //to ripit program
    }
    return 0;
}
