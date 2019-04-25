#include <iostream>
#include <list>
using namespace std;
class complex {//класс complex
    private:
    float re,im;
    public:
    void constr(float a,float b){//конструктор и гетеры
        re=a;
        im=b;
        }

    float getre(){
        return re;}
    float getim(){
        return im;}
    };
using namespace std;
int main(){
    complex t;
    float r,m;
    int w;
    cout<<"Enter number of complex numbers: ";
    cin>>w;
    list<complex> clist;//создан пустой список
    cout<<"Enter complex numbers.\n";
    for (int i=0;i<w;i++){
        cin>>r>>m;
        t.constr(r,m);//заполнение его элементами

        clist.push_back(t);
        }
    cout<<"List of complex numbers:\n";
    for (complex n : clist){//вывод списка
        cout << n.getre()<<"+"<<n.getim() << "i\n";}
    return 0;
}
