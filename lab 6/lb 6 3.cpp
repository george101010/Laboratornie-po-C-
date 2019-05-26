#include<iostream>
#include<string>
// создание класса animal
using namespace std;
class animal{
    protected:
        string name;
        int weight;
        int speed;

    public://конструктор класса
        //создает класс с переданными в конструктор данными
        animal( string mn,int w, int sp){
            name=mn;
            weight=w;
            speed=sp;
        }
        //гетеры класса
        int getspeed();
        int getweight();
        string getname(); };


int animal::getspeed(){ return speed; }
int animal::getweight(){  return weight; }
string animal::getname(){  return name; }



//класс cat, наследуется от animal
class cat:animal{
    private:
        string poroda;//дополнительное поле: порода
    public://конструктор
    cat(string mn,int w,int sp,string pr) : animal( mn, w, sp) {
            this->poroda = pr;
        }
    int getspeed_c();
    string getname_c();
    int getweight_c();
    string getporoda();//вывод  порода
};
string cat::getporoda(){ return poroda; }
int cat::getspeed_c(){ int z=getspeed(); return z; }
int cat::getweight_c(){ int z=getweight(); return z; }
string cat::getname_c(){ string z=getname(); return z; }

//класс dog, наследуется от animal
class dog:animal{
    private:
        string poroda;//дополнительное поле: длина
        string nickname;//кличка
    public://конструктор
    dog(string mn,int w,int sp,string pr,string ni) : animal( mn, w, sp) {
            this->poroda = pr;
            this->nickname= ni;
        }
    int getspeed_d();
    string getname_d();
    int getweight_d();
    string getporoda();
    string getnickname();
    //вывод  флага
};
string dog::getporoda(){ return poroda; }
string dog::getnickname(){ return nickname; }
int dog::getspeed_d(){ int z=getspeed(); return z; }
int dog::getweight_d(){ int z=getweight(); return z; }
string dog::getname_d(){ string z=getname(); return z; }



int main(){ //основная программа ввод и вывод данных объекта классов


//создание класса cat
    cat kot("Cat",5,30,"Maine Coon");
    cout<<"Name: " << kot.getname_c() <<"\n";
    cout<< "Speed: "<<kot.getspeed_c()<<" km/h\n";
    cout<< "Weight: "<<kot.getweight_c() <<" kg\n";
    cout<<"Breed: "<<kot.getporoda() <<" \n";
//создание класса dog
    dog sharik("Dog",10,30,"Brtish dog","Sharik");
    cout<<"\nName: " << sharik.getname_d() <<"\n";
    cout<< "Speed: "<<sharik.getspeed_d()<<" km/h\n";
    cout<< "Weight: "<<sharik.getweight_d() <<" kg\n";
    cout<<"Breed: "<<sharik.getporoda() <<" \n";
    cout<<"Nickname: "<<sharik.getnickname() <<" \n";


    return 0;}
