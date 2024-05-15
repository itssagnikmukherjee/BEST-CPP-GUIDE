// take an amount as input and break it into 1rs 2rs 5rs 10rs 20rs 50rs 100rs 200rs 500rs

/* Example : 
            RS 5723
500 ----> 10
200 ----> 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int amt;
 cout<<"Enter the amount : ";
 cin>>amt;
 int one,two,five,ten,twenty,fifty,hun,twoHun,fiveHun;
 fiveHun = amt/500;
 amt %= 500;
 twoHun = amt/200;
 amt %= 200;
 hun = amt/100;
 amt %= 100;
 fifty = amt/50;
 amt %= 50;
 twenty = amt/20;
 amt %= 20;
 ten = amt/10;
 amt %= 10;
 five = amt/5;
 amt %= 5;
 two = amt/2;
 amt %= 2;
 one = amt%1;
 cout<<"₹ 500 ----> "<<fiveHun<<endl;
 cout<<"₹ 200 ----> "<<twoHun<<endl;
 cout<<"₹ 100 ----> "<<hun<<endl;
 cout<<"₹ 50  ----> "<<fifty<<endl;
 cout<<"₹ 20  ----> "<<twenty<<endl;
 cout<<"₹ 10  ----> "<<ten<<endl;
 cout<<"₹ 5   ----> "<<five<<endl;
 cout<<"₹ 2   ----> "<<two<<endl;
 cout<<"₹ 1   ----> "<<one<<endl;
return 0;
}