#include<iostream>
using namespace std;
int main()
{

 int X;
    cout<<"Input Your Score :   ";
    cin>>X;
 if (X>=86)
    cout<< "Grade Is A ";
   else if (X>=72)
    cout<< "Grade Is B ";
   else if (X>=60)
    cout<< "Grade Is C";
   else if (X>=50)
    cout<< "Grade Is D";
   else if (X<50)
    cout<< "Grade Is F";
    
    return 0;

}