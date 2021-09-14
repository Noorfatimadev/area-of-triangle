#include<iostream>
using namespace std;
int main()
{ int a,b,c ;
cout<<"Enter the length of first side of a triangle:"<<endl;
cin>>a;
cout<<"Enter the length of second side of a triangle:"<<endl;
cin>>b;
cout<<"Enter the length of third side of a triangle:"<<endl;
cin>>c;
int s,area;
s=(a+b+c)/2;
area=(s*(s-a)*(s-b)*(s-c))^(1/2);
cout<<"area of the triangle is:"<<area<<endl;
return 0;

}
