#include"complex_number.h"
#include<string>
 
#include<iostream>

 
using namespace std;
int main() {
     compnum A,B;
     string s;
     cout<<"Enter complex number real part: ";
     cin>>A.re;
     cout<<"Enter complex number imagine part: ";
     cin>>A.im;
     cout<<"Enter sign of operation: ";
     cin>>s;
     if (s=="abs"){
                   arifm(&A);
                   }
     else {
          arifm(s, &A, &B);}
     SUSTEM("PAUSE");
     return 0;)
