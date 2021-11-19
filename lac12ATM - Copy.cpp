#include<iostream>
using namespace std;
int main()
{int errorCounter=0,pin,userPin=786;

do
{   cout <<"Enter your pin"<<endl;
    cin>>pin;
    if (pin==userPin)
    {cout<<"you enter a correct pin"<<endl;
    cout<<"loading......."<<endl;}
    else {
    errorCounter++; 
    cout<<"your account is block bitch"<<endl;}
} while (errorCounter<3 );
;














}