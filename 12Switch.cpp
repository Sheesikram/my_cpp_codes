#include<iostream>
using namespace std;
int main(){
	char grade;
	cout<<"Enter Grade : ";
	cin>>grade;
	(grade=='A')?(cout<<"Excellent"):((grade=='B')?(cout<<"Good"):((grade=='C')?(cout<<"Average"):((grade=='D')?(cout<<"Poor"):((grade=='F')?(cout<<"Fail"):(cout<<"INVALID INPUT")))));
	return 0;
}
