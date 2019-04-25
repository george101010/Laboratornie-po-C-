#include<iostream>
using namespace std;
int mins(int a,int b){
    return (b-a);}// возвращает разность чисел
int umn(int a,int b){
    return (a*b);// возвращает произведение чисел
    }
int main() {
     int n,v;
     cin>>n>>v;
     int (*q)(int a,int b);
     if (v>n) {q=mins;}//при v>n сработает вычитание
     else {q=umn;}//иначе сработает умножение

     cout<<q(n,v);
     return 0;}
