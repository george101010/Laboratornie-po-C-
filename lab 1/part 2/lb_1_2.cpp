#include"complex_number.h"
#include<string>
#include<iostream>
#include <fstream>

using namespace std;
int main() {
     int n;
     float maxmod=0;;
     compnum mxcm;
     mxcm.re=0;
     mxcm.im=0;
     ifstream in("complex.txt");
     in >> n;
     compnum *p = new compnum [n];
     for (int i=0;i<n;i++){
            in >> p[i].re;
            in >> p[i].im;
     }
     for (int i=0;i<n;i++){
          if (arifm( &p[i])>maxmod){
            maxmod=arifm( &p[i]);
            mxcm.re=p[i].re;
            mxcm.im=p[i].im;
          }
     }
     cout<<mxcm.re<<"+"<<mxcm.im<<"i";
     in.close();
     delete [] p;
     system("pause");
     return 0;}

