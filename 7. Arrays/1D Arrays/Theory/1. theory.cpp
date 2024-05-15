// Array is a linear DataStructure 
// an array has the following features :

//----> 1. Indexing : Each Element in an array has a particular index no

//----> 2. Fixed Size : the size of array on computer memory is fixed

//----> 3. Homogeneous : An array can only hold Homogeneus items i.e. the items should be of same data type


#include<bits/stdc++.h>
using namespace std;
int main(){
    int size = 10; // size is a var that stores the size of an array which is 10 here
    int array[size]; // an array of size 10 is created i.e. this array can contain upto 10 elems

// these 10 are the elements
// the idx no always starts from 0

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;
    array[5] = 60;
    array[6] = 70;
    array[7] = 80;
    array[8] = 90;
    array[9] = 100;

// arr: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

// to print the elems

cout<<"The first elem is : "<<array[0]<<endl;
cout<<"The second elem is : "<<array[1]<<endl;
cout<<"The third elem is : "<<array[2]<<endl;
cout<<"The fourth elem is : "<<array[3]<<endl;
cout<<"The fifth elem is : "<<array[4]<<endl;
cout<<"The sixth elem is : "<<array[5]<<endl;
cout<<"The seventh elem is : "<<array[6]<<endl;
cout<<"The eighth elem is : "<<array[7]<<endl;
cout<<"The ninth elem is : "<<array[8]<<endl;
cout<<"The tenth elem is : "<<array[9]<<endl;

return 0;
}