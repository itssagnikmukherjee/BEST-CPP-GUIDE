// WAP to find Area, Perimeter of a circle and rectangle given radius, length, breadth

#include<bits/stdc++.h>
using namespace std;

int main(){
 int r,l,b;
 cout<<"Enter radius of circle : "<<endl;
 cin>>r;

 int arCir,perCir;
 arCir = 3.14 * r * r;
 perCir = 2 * 3.14 * r;
 cout<<"Perimeter of the circle is : "<<perCir<<endl;
 cout<<"Area of the circle is : "<<arCir<<endl;
 
 cout<<"Enter length of rectangle : "<<endl;
 cin>>l;

 cout<<"Enter breadth of rectangle : "<<endl;
 cin>>b;

 int arRec,perRec;
 arRec = l*b;
 perRec = 2*(l+b);
 
 cout<<"Perimeter of the rectangle is : "<<perRec<<endl;
 cout<<"Area of the rectangle is : "<<arRec<<endl;

return 0;
}