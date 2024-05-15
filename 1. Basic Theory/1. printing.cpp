/* "#include" is a 
Preprocessor Command 
(we will learn this in detail later) */

#include<iostream> 
// this namespace contains some predefined functions "cout" will not work without this line
using namespace std;
// "main()" is the only function which only gets executed (we will learn this in detail later) 
int main(){
    // "cout" displays the output and "endl" is used to create a new line
    cout<<"I am learning CPP"<<endl; 
    // std::cout<<"I am learning CPP"<<endl; --> if we don't use namespace we have to declare this so many times 
    // "return 0;" simply returns no errors to the OS after compilation 
    return 0;
}