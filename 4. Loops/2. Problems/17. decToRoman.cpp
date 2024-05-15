//     1000 --> M
//      900 --> CM
//      500 --> D
//      400 --> CD
//      100 --> C
//       90 --> XC 
//       50 --> L
//       40 --> XL
//       10 --> X
//        9 --> IX
//        5 --> V
//        4 --> IV
//        1 --> I


#include <bits/stdc++.h>

using namespace std;

int main(){

    int dec;
    cout<<"Enter the decimal number : ";
    cin>>dec;

    cout<<"the roman number will be : ";

    while(dec){
        if(dec>=1000){
            cout<<"M";
            dec-=1000;
        }else if(dec>=900){
            cout<<"CM";
            dec-=900;
        }else if(dec>=500){
            cout<<"D";
            dec-=500;
        }else if(dec>=400){
            cout<<"CD";
            dec-=400;
        }else if(dec>=100){
            cout<<"C";
            dec-=100;
        }else if(dec>=90){
            cout<<"XC";
            dec-=90;
        }else if(dec>=50){
            cout<<"L";
            dec-=50;
        }else if(dec>=40){
            cout<<"XL";
            dec-=40;
        }else if(dec>=10){
            cout<<"X";
            dec-=10;
        }else if(dec>=9){
            cout<<"IX";
            dec-=9;
        }else if(dec>=5){
            cout<<"V";
            dec-=5;
        }else if(dec>=4){
            cout<<"IV";
            dec-=4;
        }else{
            cout<<"I";
            dec-=1;
        }
    }
    
    return 0;
}