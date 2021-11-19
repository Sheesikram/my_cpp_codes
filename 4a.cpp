#include <iostream>
using namespace std;
int main()
{ float a,b,c;
  cout << "enter a,b,c"<<endl;
  cin >> a>>b>>c;
  if (a==b && b==c)
      {cout<< "equalater"<<endl;}
 else if (a!=b && b!=c && c!=a)
      {
          cout<<"scalene"<<endl;
        
      }
 else 
          cout <<"isoceles"<<endl;
      
//system("cls");5
//system("pause");




}