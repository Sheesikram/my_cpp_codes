#include <iostream>
using namespace std;
int main ()
{//lets make a calculator:)
float num1,num2;
char operation;
cout<< "***shees sheikh calculator***"<<endl;
cin>> num1>> operation >>num2;
switch (operation)
{
case '+' :cout<<num1 <<operation<<num2 <<"="<<num1 + num2; break;
case '-' :cout<<num1<<operation<<num2<<"="<<num1 - num2;break;
case '*' :cout<<num1<<operation<<num2<<"="<<num1 * num2;break;
case '/' :cout<<num1<<operation<<num2<<"="<<num1 / num2;break;

    

default:cout<<"wrong"<<endl;
}






}