#include<iostream>
using namespace std;
int main()
{
    int x;
    int a,b,c;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;

    cout<<"Enter choice 1 for addition , 2 for subtraction, 3 for multiplication 4, for division:"<<endl;
    cin>>x;

    switch (x)
    {
        case 1:
        {
            c=a+b;
            cout<<"Additrion is: "<<c;

        }
        break;
        case 2:
        {
            c=a-b;
            cout<<"sub is: "<<c;

        }
        break;
        case 3:
        {
           c=a*b;
            cout<<"mul is: "<<c;

        }
        break;
        case 4:
        {
             c=a*b;
            cout<<"div is: "<<c;


        }
        break;



    }

}
