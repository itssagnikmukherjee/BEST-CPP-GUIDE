// WAP to convert days into years months weeks and days

#include<bits/stdc++.h>
using namespace std;

int main(){
 int days;
 cout<<"Enter no of days : "<<endl;
 cin>>days;
 int years,months,weeks;
 years = days/365;
 days %= 365;
 
 months = days/30;
 days %= 30;

 weeks = days/7;
 days %= 7;

 cout<<years<<"years"<<endl;
 cout<<months<<"months"<<endl;
 cout<<weeks<<"weeks"<<endl;
 cout<<days<<"days"<<endl;

return 0;
}