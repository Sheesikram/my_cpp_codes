#include<iostream>
using namespace std;
int main()
// the armstrong number is that cubr is equals to the sum of that number like 153 = 1^3+5^3+3^3=153
{int  num,lastDigit,cube,number;
int armstrong=0;
cout<<"Enter Number"<<endl;
cin>>number;
num=number;
while (num!=0)
{
    lastDigit=num%10;
cube=lastDigit*lastDigit*lastDigit;
armstrong=armstrong+cube;
num/=10;

}
if (number==armstrong){
cout<<"the number is armstrong"<<endl;}
else 
cout<<"the number is not armstrong"<<endl;
}