#include <iostream>
using namespace std;
int main()
{int  units,bill=0;
cout<<"Enter units"<<endl;
cin>>units;
if(units<=50)
{
    bill=0.50/units;
    cout<<"The bill is ="<<bill<<endl;

}
else if(units<=150)
{bill=0.75/units;
cout<<"The bill is ="<<bill;}
else if(units<=250)
{bill=1.20/units;
cout<<"The bill is ="<<bill;}
else if(units>250)
{bill=1.50/units;
bill=bill + (20/100);
cout<<"The bill is ="<<bill;

}









}