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
    public://конструктор  класса 
        vect(float X,float Y,float Z){
            ox=X;
            oy=Y;
            oz=Z;}
        friend ostream& operator<< (ostream &out, const vect &a);// перегрузка cout
        friend istream& operator>>(istream& cin, vect &vect);// перегрузка cin
        //сравниваются модули векторов
        friend bool  operator>(vect& lef,vect& rig);//перегрузка  знака больше
        friend bool  operator<(vect& lef,vect& rig);//перегрузка  знака меньше
        friend bool  operator==(vect& lef,vect& rig);//перегрузка  знака =
        vect& operator=(const vect& right){//перегрузка присваивания
        this->ox=right.ox;
        this->oy=right.oy;
        this->oz=right.oz;
        return *this;}
        friend bool  operator>(vect& lef,vect& rig);//перегрузка  знака больше
        friend bool  operator<(vect& lef,vect& rig);//перегрузка  знака меньше
        friend bool  operator==(vect& lef,vect& rig);//перегрузка  знака =




        };
ostream& operator<< (ostream &out, const vect &a){ // перегрузка cout

    out<<a.ox<<" " <<a.oy<<" " <<a.oz;
    return out;}

istream& operator>>(istream& cin, vect &a){  //перегрузка cin
    cin>>a.ox>>a.oy>>a.oz;
    return cin;
    }

bool operator>(vect& lef,vect& rig){ //перегрузка  знака >

        return pow(lef.ox*lef.ox+lef.oy*lef.oy+lef.oz*lef.oz,0.5)>pow(rig.ox*rig.ox+rig.oy*rig.oy+rig.oz*rig.oz,0.5);
        }
bool operator<(vect& lef,vect& rig){ //перегрузка  знака <

        return pow(lef.ox*lef.ox+lef.oy*lef.oy+lef.oz*lef.oz,0.5)<pow(rig.ox*rig.ox+rig.oy*rig.oy+rig.oz*rig.oz,0.5);
        }
bool operator==(vect& lef,vect& rig){ //перегрузка  знака ==

        return pow(lef.ox*lef.ox+lef.oy*lef.oy+lef.oz*lef.oz,0.5)==pow(rig.ox*rig.ox+rig.oy*rig.oy+rig.oz*rig.oz,0.5);
        }


int main(){
    vect q(0,0,0);
    vect wer(0,0,0);
    cout<<"Enter coordinates of first vector: ";
    cin>>q;
    wer=q;
    cout<<"Enter coordinates of second vector: ";
    cin>>q;
    if (q>wer) {
        cout<<"Module of "<<q<<" more than module of "<<wer<<endl;
    }
    else {
        cout<<"Module of "<<wer<<" more than module of "<<q<<endl;
    }

    if (q<wer) {
        cout<<"Module of "<<q<<" less than module of "<<wer<<endl;
    }
    else {
        cout<<"Module of "<<wer<<" less than module of "<<q<<endl;
    }
    if (q==wer) {
        cout<<"Module of "<<q<<" equal module of "<<wer<<endl;
    }
    else {
        cout<<"Module of "<<wer<<" not equal module of "<<q<<endl;
    }
    return 0;}
