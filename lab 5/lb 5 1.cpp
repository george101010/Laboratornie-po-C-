#include<iostream>
#include<string>
#include<math.h>
// создание класса комплексное число
//поля класса действительная часть и мнимая
using namespace std;
class complex{
    private:
        float re;
        float im;
    public://конструктор  класса
        complex(float r,float i){
            re=r;
            im=i;}
        //деструктор  класса
        //~complex(){cout<<"Complex number was deleted."<<endl;}
    friend ostream& operator<< (ostream &out, const complex &complex);// перегрузка cout
    friend istream& operator>>(istream& cin, complex &complex);// перегрузка cin
    friend  complex operator++(complex& a,int);//перегрузка инкремента
    friend  complex operator--(complex& a,int);//перегрузка декремента
     complex& operator=(const complex& right){//перегрузка присваивания
    this->re=right.re;
    this->im=right.im;
    return *this;}
    friend bool  operator>(complex& lef,complex& rig);//перегрузка  знака больше
    friend bool  operator<(complex& lef,complex& rig);//перегрузка  знака меньше
    friend bool  operator==(complex& lef,complex& rig);//перегрузка  знака =
};

ostream& operator<< (ostream &out, const complex &a){ // перегрузка cout
     if (a.re!=0){
        out<<a.re;}
     if (a.im==0){
        return out;
     }
     if (a.im>0){out<<"+";}
    out<<a.im<<"i";
    return out;}

istream& operator>>(istream& cin, complex &a){  //перегрузка cin
    cin>>a.re>>a.im;
    return cin;
    }

complex  operator++(complex& a,int){//перегрузка  знака ++
    complex s(a.re++,a.im);
    return s;}

complex  operator--(complex& a,int){ //перегрузка  знака --
    complex s(a.re--,a.im);
    return s;}
bool operator>(complex& lef,complex& rig){ //перегрузка  знака >

        return pow(lef.re*lef.re+lef.im*lef.im,0.5)>pow(rig.re*rig.re+rig.im*rig.im,0.5);
        }
bool operator<(complex& lef,complex& rig){ //перегрузка  знака <

        return pow(lef.re*lef.re+lef.im*lef.im,0.5)<pow(rig.re*rig.re+rig.im*rig.im,0.5);
        }
bool operator==(complex& lef,complex& rig){ //перегрузка  знака ==

        return pow(lef.re*lef.re+lef.im*lef.im,0.5)==pow(rig.re*rig.re+rig.im*rig.im,0.5);
        }
int main(){ //основная программа ввод и вывод данных объекта класса complex



    complex q(0,0);
    cout<<"Enter first complex number: ";
    cin>>q;
    complex wer(0,0);
    cout<<"Enter second complex number: ";
    cin>>wer;
    q++;
    cout<<"Increment: "<<q<<endl;
    wer--;
    cout<<"Decrement: "<<wer<<endl;
    if (q>wer) {
        cout<<q<<" more than "<<wer<<endl;
    }
    else {
        cout<<wer<<" more than "<<q<<endl;
    }

    if (q<wer) {
        cout<<q<<" less than "<<wer<<endl;
    }
    else {
        cout<<wer<<"less than "<<q<<endl;
    }
    if (q==wer) {
        cout<<q<<" equal "<<wer<<endl;
    }
    else {
        cout<<wer<<" not equal "<<q<<endl;
    }
    return 0;
    }
