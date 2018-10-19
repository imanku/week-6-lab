#include<iostream>
using namespace std;
int main()
{

 int X;
    cout<<"Input Your Score :   "; //user input a score 

    cin>>X;
 if (X>=86)

 {
 cout<< "Grade Is A ";//logic flow determining which grade is proper for the score
 }  
 else if (X>=72)
 { 
   cout<< "Grade Is B ";
 }
  else if (X>=60)
 {
  cout<< "Grade Is C";
 }
  else if (X>=50)
 {
  cout<< "Grade Is D";
 }
  else
 {
  cout<< "Grade Is F";//the grade will come F if the score does not match any of the if else statements
 }
    
    return 0; //return the 0 value in return

}
