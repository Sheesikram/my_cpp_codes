#include <iostream>
using namespace std ;
int main(){
	char grade;
	cout<<"Please enter a grade"<<endl;
	cin>>grade;
	if(grade=='A' || grade =='a')
	{cout<<"Ecellent"<<endl;
	
	}
	else if (grade =='b'|| grade == 'B')
	{
	cout<<"Good"<<endl;}
	else if (grade =='c'|| grade =='C')
	{
	cout<<"Average"<<endl;}
	else if (grade =='d' ||grade =='D')
	{
	cout<<"Poor"<<endl;}
	else if(grade=='f' || grade=='F')
	{cout<<"Fail"<<endl;}
	else
	cout<<"Wrong character"<<endl;
}
	
