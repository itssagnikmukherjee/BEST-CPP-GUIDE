// function is nothing but a block of code which performs a certain task, which is beneficial in : 

// ----> 1.Modularity : unctions allow you to break down a program into smaller, manageable parts. Each function can be responsible for a specific task or operation, making it easier to understand and work with the code.

// ---> 2. Reusability: Once you've defined a function, you can use it multiple times in your program without duplicating the same code. This promotes code reusability and reduces the potential for errors.

// ======BASIC FUNCTION STRUCTURE =====

// <datatype/ returnType> <functionName> (parameters) { body }

#include<bits/stdc++.h>
using namespace std;

int add(int a,int b){ // two parameters are passed a and b
    return a+b; // the function returns the value of a+b which is an integer
}

int main(){
    int a=5,b=10; // these are called arguments
    cout<<"Sum is : "<<add(a,b); // adds a and b
    int c=90,d=100;
    cout<<"Sum is : "<<add(c,d); // using this multiple times

return 0;
}