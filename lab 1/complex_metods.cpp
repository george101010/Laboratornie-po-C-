#include<iostream>
#include<string>
#include<math>
 
#include"complex_number.h"
using namespace std;
void arifm(compnum *a){
     cout<<pow(a.re*a.re+a.im*a.im,0.5);
     }
void arifm(string tk, compnum *a, compnum *b){
     switch (tk)
     case "+" :
                {   
                cout<<a.re+b.re<<"+"<<a.im+b.im<<"i";
                break;
                }
     case "-" : {cout<<a.re-b.re<<"+"<<a.im-b.im<<"i";
                break;}
     case "*" : {cout<<a.re*b.re-a.im*b.im<<"+"<<a.re*b.im+b.re*a.im<<"i";
                break;}
     case "/" :{if (b.im==0) and (b.re==0) {
                    cout<<"Devision by zero";}
                 else{
                 cout<<(a.re*b.re+a.im*b.im)/(b.im*b.im+b.re*b.re)<<"+"<<(b.re*a.im-a.re*b.im)/(b.im*b.im+b.re*b.re)<<"i";}
                break;}
     default:{
              cout<<"syntax error ";
                break;} }
