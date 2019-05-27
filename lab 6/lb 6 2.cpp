#include<iostream>
#include<string>
// создание класса alive
using namespace std;
class alive{
    protected:
        string name;
        int weight;
        int speed;

    public://конструктор класса
        //создает класс с переданными в конструктор данными
        alive( string mn,int w, int sp){
            name=mn;
            weight=w;
            speed=sp;
        }
        //гетеры класса
        int getspeed();
        int getweight();
        string getname(); };


int alive::getspeed(){ return speed; }
int alive::getweight(){  return weight; }
string alive::getname(){  return name; }



//класс bird, наследуется от alive
class bird:alive{
    private:
        int wingspan;//дополнительное поле: размах крыльев
    public://конструктор
    bird(string mn,int w,int sp,int ws) : alive( mn, w, sp) {
            this->wingspan = ws;
        }
    int getspeed_b();
    string getname_b();
    int getweight_b();
    int getwingspan();//вывод  размаха крыльев
};
int bird::getwingspan(){ return wingspan; }
int bird::getspeed_b(){ int z=getspeed(); return z; }
int bird::getweight_b(){ int z=getweight(); return z; }
string bird::getname_b(){ string z=getname(); return z; }

//класс fish, наследуется от alive
class fish:alive{
    private:
        int length;//дополнительное поле: длина
        bool flagocean;//является океанской (флаг)
    public://конструктор
    fish(string mn,int w,int sp,int ln,bool lo) : alive( mn, w, sp) {
            this->length = ln;
            this->flagocean= lo;
        }
    int getspeed_f();
    string getname_f();
    int getweight_f();
    int getlength();
    bool getflagocean();
    //вывод  флага
};
bool fish::getflagocean(){return flagocean;}
int fish::getlength(){ return length; }
int fish::getspeed_f(){ int z=getspeed(); return z; }
int fish::getweight_f(){ int z=getweight(); return z; }
string fish::getname_f(){ string z=getname(); return z; }

//класс animal, наследуется от alive
class animal:alive{
    private:

        bool fpredator;//является хищником (флаг)
    public://конструктор
    animal(string mn,int w,int sp,bool lo) : alive( mn, w, sp) {

            this->fpredator= lo;
        }
    int getspeed_a();
    string getname_a();
    int getweight_a();

    bool getfpredator();
    //вывод  флага
};
bool animal::getfpredator(){return fpredator;}

int animal::getspeed_a(){ int z=getspeed(); return z; }
int animal::getweight_a(){ int z=getweight(); return z; }
string animal::getname_a(){ string z=getname(); return z; }

int main(){ //основная программа ввод и вывод данных объекта классов


//создание класса bird
    bird brd("Rooster",4,5,50);
    cout<<"Name: " << brd.getname_b() <<"\n";
    cout<< "Speed: "<<brd.getspeed_b()<<" km/h\n";
    cout<< "Weight: "<<brd.getweight_b() <<" kg\n";
    cout<<"Wingspan: "<<brd.getwingspan() <<" cm\n";
//создание класса fish
    fish rib("Blue Whale",150,37,34,1);
    cout<<"\nName: " << rib.getname_f() <<"\n";
    cout<< "Speed: "<<rib.getspeed_f()<<" km/h\n";
    cout<< "Weight: "<<rib.getweight_f() <<" tones\n";
    cout<<"Length: "<<rib.getlength() <<" meters\n";
    cout<<"Live in ocean: ";
    if (brd.getwingspan()){cout <<" yes\n"; }
    else { cout<<" no\n"; }
//создание класса animal
    animal tiger("Tiger",101,60,1);
    cout<<"\nName: " << tiger.getname_a() <<"\n";
    cout<< "Speed: "<<tiger.getspeed_a()<<" km/h\n";
    cout<< "Weight: "<<tiger.getweight_a() <<" kg\n";
    cout<<"Predator: ";
    if (tiger.getfpredator()){cout <<" yes\n"; }
    else { cout<<" no\n"; }

    return 0;}
