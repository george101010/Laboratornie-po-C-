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
    public://сетеры класса

        void setre(float c);
        void setim(float c);


        //гетеры класса
        float arg();

        float getmod();
        };
void complex::setre(float c){
    re=c;}
void complex::setim(float c){
    im=c;}
float complex::arg(){
    return atan(im/re);}
float complex::getmod(){
    return pow(re*re+im*im,0.5);}

int main(){ //основная программа ввод и вывод данных объекта класса complex
    complex a;
    float x,y;
    cout<<"Enter real part:";
    cin>>x;
    cout<<"Enter im part:";
    cin>>y;
    a.setre(x);
    a.setim(y);
    cout<<"Abs of this complex number: "<<a.getmod()<<endl;
    cout<<"Arg of this complex number: "<<a.arg();
    return 0;}
