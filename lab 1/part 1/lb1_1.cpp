#include"complex_number.h"
#include<string>
#include<iostream>


using namespace std;
int main() {
     compnum A,B;
     string s;
     char q;
     cout<<"Enter complex number A real part: ";
     cin>>A.re;
     cout<<"Enter complex number A imagine part: ";
     cin>>A.im;
     cout<<"Enter sign of operation: ";
     cin>>s;
     if (s=="abs"){
                   cout<<arifm(&A);
                   }
     else {
          cout<<"Enter complex number B real part: ";
          cin>>B.re;
          cout<<"Enter complex number B imagine part: ";
          cin>>B.im;
          q=s[0];
          arifm(q, &A, &B);
          }
     system("pause");
     return 0;}

