// WAP to reverse a 5 digit no
 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
  int num;
  cout<<"Enter your 5 digit number : ";
  cin>>num;  
  int first_no,second_no,third_no,forth_no,fifth_no;
  fifth_no = num%10;
  num/=10;
  forth_no = num%10;
  num/=10;
  third_no = num%10;
  num/=10;
  second_no = num%10;
  num/=10;
  first_no = num%10;
  num/=10;

  int revNo = (fifth_no*10000)+(forth_no*1000)+(third_no*100)+(second_no*10)+(first_no);

    cout<<"Reverse of your num is : "<<revNo<<endl;

 return 0;
 }