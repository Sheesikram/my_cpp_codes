#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout << "Enter a,b,c"<<endl;
    cin>>a>>b>>c;
    if (a==b && a==c)
        cout<< "you enter a Equialateral Triangle\n";
   else if (a!=b && b!=c && a!=c)
   {
       cout<< "Scalene Triangle";
   }      
    else 
            cout << "isoceles Triangle";}

     












