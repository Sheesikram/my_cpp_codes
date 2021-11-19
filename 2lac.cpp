#include <iostream>
using namespace std;
int main()
{
float anualsalary;
cout<< "please enter your anual salary :)"<<endl;
cin >> anualsalary;

float mountlysalary = anualsalary/12;
cout<< "your mountly salary is :"<<mountlysalary<<endl;
float inTenYear = anualsalary *10;
cout << "in 10 years u will earn "<< inTenYear<<endl;
cout<< "the size of unsigned int is "<<sizeof(unsigned int)<<endl;
cout<< "the size of int is "<<sizeof(int)<<endl;
cout<< "the size of bool is "<<sizeof(bool)<<endl;

}