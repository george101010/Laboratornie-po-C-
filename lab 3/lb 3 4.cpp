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
    public://сетеры класса, получение модуля, сложение и вычитание
        void setox(float c);
        void setoy(float c);
        void setoz(float c);
        void friend add(vect *a,vect *b);
        void friend subs(vect *a,vect *b);
        float getmod();
        };
void vect::setox(float c){
    ox=c;}
void vect::setoy(float c){
    oy=c;}
void vect::setoz(float c){
    oz=c;}
void add(vect *a,vect *b){

    cout<<a->ox+b->ox<<" "<<a->oy+b->oy<<" "<<a->oz+b->oz;

}

void subs(vect *a,vect *b){
    cout<<a->ox-b->ox<<" "<<a->oy-b->oy<<" "<<a->oz-b->oz;
}

float vect::getmod(){
    return pow(ox*ox+oy*oy+oz*oz,0.5);}


int main(){ //основная программа ввод и вывод данных объекта класса vect
    float zl;
    vect sd,cv,nx;
    nx.setox(0);
    nx.setoy(0);
    nx.setoz(0);

    cout<<"First vector.\n";
    cout<<"Enter koordinate OX: ";
    cin>>zl;
    sd.setox(zl);
    cout<<"Enter koordinate OY: ";
    cin>>zl;
    sd.setoy(zl);
    cout<<"Enter koordinate OZ: ";
    cin>>zl;
    sd.setoz(zl);

    cout<<"Second vector.\n";
    cout<<"Enter koordinate OX: ";
    cin>>zl;
    cv.setox(zl);
    cout<<"Enter koordinate OY: ";
    cin>>zl;
    cv.setoy(zl);
    cout<<"Enter koordinate OZ: ";
    cin>>zl;
    cv.setoz(zl);

    cout<<"Module of first vector: "<<sd.getmod()<<endl;
    cout<<"Module of second vector: "<<cv.getmod()<<endl;

    cout<<"Summ of vectors: ";
    add(&cv,&sd);
    cout<<endl;
    cout<<"Substraction of vectors: ";
    subs(&cv,&sd);

    return 0;}
