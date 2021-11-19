#include <iostream>
using namespace std;
int main()
{int money,hund,fifty,twenty,ten,five,amount;
cout<<"Please Enter Your money"<<endl;
cin>>money;
if(money >=100)
{
hund=money/100;
cout <<"the hunred rupee notes required = "<<hund<<endl;
amount=money%100;
//cout<<amount;
}
if(amount>=50)
{
fifty=amount/50;
cout <<"the Fifty rupee notes required = "<<fifty<<endl;
amount=amount%50;
}
if(amount>=20)
{
twenty=amount/20;
cout <<"the Twenty rupee notes required = "<<twenty<<endl;
amount=amount%20;
}if(amount>=10)
{
ten=amount/10;
cout <<"the ten rupee notes required = "<<ten<<endl;
amount=amount%10;
}
if(amount>=5)
{
five=amount/5;
cout <<"the Five rupee notes required = "<<five<<endl;
amount=amount%5;
}
if(amount !=0)
cout<<"Sorry, but the change is not possibile"<<endl;


}