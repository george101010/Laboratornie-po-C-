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
        ~complex(){cout<<"Complex number was deleted."<<endl;}

        //гетеры класса
        float arg();

        float getmod();
        };

float complex::arg(){
    return atan(im/re);}
float complex::getmod(){
    return pow(re*re+im*im,0.5);}

int main(){ //основная программа ввод и вывод данных объекта класса complex
//вывод модуля и аргумента
    float x,y;
    cout<<"Enter real part: ";
    cin>>x;
    cout<<"Enter im part: ";
    cin>>y;
    complex a(x,y);
    cout<<"Abs of this complex number: "<<a.getmod()<<endl;
    cout<<"Arg of this complex number: "<<a.arg()<<"\n";

    return 0;}
