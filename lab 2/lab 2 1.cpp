#include<iostream>
using namespace std;
int mins(int a,int b){
    return (b-a);}// ���������� �������� �����
int umn(int a,int b){
    return (a*b);// ���������� ������������ �����
    }
int main() {
     int n,v;
     cin>>n>>v;
     int (*q)(int a,int b);
     if (v>n) {q=mins;}//��� v>n ��������� ���������
     else {q=umn;}//����� ��������� ���������

     cout<<q(n,v);
     return 0;}
