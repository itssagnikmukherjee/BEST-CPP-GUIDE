#include<iostream>
using namespace std;

/*

Data types are mainly divided into 3 categories 
|
|---- Primitive (int,char,bool,float,double,void)
|
|---- User Defined (class, struct, union, enum)
|
|---- Derived (function , array, pointer)

learn more : https://www.geeksforgeeks.org/cpp-data-types/

*/

int main(){
    
    // Premitive 
    
    int x = 10; // x is storing an integer constant value 10
    
    float f = 17.5; // f is storing a float constant value 17.5
    
    double g = 15.5484951; // g is storing an integer constant value 15.5484951
    
    char ch = 'A'; // ch is storing a character value 'A'
    
    // User Defined
    
    class abc{      // abc is a class which has a member function print()
        void print(){
            cout<<"Sagnik Mukherjee"<<endl;
        }
    };

    struct {        // struct is a structure which contains elements of different datatypes
        int name;         
        float weight;
        char sec;
    }; 

    union {         //  union is used where the amount of memory used is a key factor. 
        int a;
        float b;
        char c;
        double d;
    };

    enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday }; // helps to find the index value

    int myFunction(int a, int b){  // myFunction is a function which takes
        return (a+b);              //  value of a and b and returns the sum
    }

    int arr[5] = {1,2,3,15,5} // arr is an array which can store 5 elements of same datatype

    int i;
    int *ptr = &i; // ptr is a pointer that stores the address of i  

return 0;
}