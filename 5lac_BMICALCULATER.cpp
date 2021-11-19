#include <iostream>
using namespace std;
int main()
{
//lets make a body mass indicator :)
float weight, height,bmi;
cout << "please enter your weight(kg) and height(m)"<<endl;
cin >> weight>> height;
bmi = weight/(height*height);//this is the process of bmi or to mesure bmi formula
if (bmi<18)
cout<< "underweight"<<endl;
else if (bmi>25)
cout<< "overweight"<<endl;
else
cout<< "normal weight"<<endl;}