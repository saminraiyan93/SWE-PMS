#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    double len,wid,red,area;
    cout<<"Enter a digit :";
    cin>>num;
    switch (num)
    {
    case 1:

        cout<<"Enter length : ";
        cin>>len;
        cout<<"Enter width : ";
        cin>>wid;
        area=len*wid;
        cout<<"Area of rectangle is "<<area;
        break;

    case 2:

        cout<<"Enter length : ";
        cin>>len;
        cout<<"Enter width : ";
        cin>>wid;
        area=0.5*len*wid;
        cout<<"Area of triangle is "<<area;
        break ;

    case 3 :

        cout<<"Enter radius : ";
        cin>>red;

        area=0.5*red*red;
        cout<<"Area of circle is "<<area;
        break ;

    default :
        cout<<"No , area detected because Anik sir valo na.";
    }

    return 0;
    getch();
}
