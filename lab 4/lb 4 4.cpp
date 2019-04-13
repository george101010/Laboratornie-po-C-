#include<iostream>
#include<string>
#include<math.h>
// создание класса вектор 3д
//поля класса координаты по X,Y,Z
using namespace std;
class vect{
    private:
        float ox;
        float oy;
        float oz;
    public://конструктор и деструктор класса, получение модуля, сложение и вычитание
        vect(float X,float Y,float Z){
            ox=X;
            oy=Y;
            oz=Z;}
        ~vect( ){cout<<"Vector was deleted.\n";}
        void friend add(vect *a,vect *b);
        void friend subs(vect *a,vect *b);
        float getmod();
        };

void add(vect *a,vect *b){

    cout<<a->ox+b->ox<<" "<<a->oy+b->oy<<" "<<a->oz+b->oz;

}

void subs(vect *a,vect *b){
    cout<<a->ox-b->ox<<" "<<a->oy-b->oy<<" "<<a->oz-b->oz;
}

float vect::getmod(){
    return pow(ox*ox+oy*oy+oz*oz,0.5);}


int main(){ //основная программа ввод и вывод данных объекта класса vect
    float a,b,c;//вывод модуля, сложение и вычитание



    cout<<"First vector.\n";
    cout<<"Enter koordinate OX: ";
    cin>>a;

    cout<<"Enter koordinate OY: ";
    cin>>b;

    cout<<"Enter koordinate OZ: ";
    cin>>c;
    vect sd(a,b,c);

    cout<<"Second vector.\n";
    cout<<"Enter koordinate OX: ";
    cin>>a;

    cout<<"Enter koordinate OY: ";
    cin>>b;

    cout<<"Enter koordinate OZ: ";
    cin>>c;
    vect cv(a,b,c);

    cout<<"Module of first vector: "<<sd.getmod()<<endl;
    cout<<"Module of second vector: "<<cv.getmod()<<endl;

    cout<<"Summ of vectors: ";
    add(&cv,&sd);
    cout<<endl;
    cout<<"Substraction of vectors: ";
    subs(&cv,&sd);
    cout<<"\n";
    cv.~vect();
    sd.~vect();
    return 0;}
