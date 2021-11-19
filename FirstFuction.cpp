#include <iostream>
using namespace std;

void Fuction(string n ,string cty,int e);
int main ()
 {string name,city;
 int age;

      Fuction("shees","Lahore",50);
cout<<"hello World"<<endl;
Fuction("ali","fsd",9);
cout<<"Please Enter your name city : age "<<endl;
cin>>name>>city>>age;
Fuction(name,city,age);


}
void Fuction(string name ,string city,int age){

    cout<<"my name is : "<<name<<endl;
    cout<<"my city is : "<<city<<endl;
    cout<<"my age Is : "<<age<<endl;

   }