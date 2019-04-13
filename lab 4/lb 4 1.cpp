#include<iostream>
#include<string>
// создание класса child
using namespace std;
class child{
    private:
        string name;
        string surname;
        int age;
    public://конструктор класса
        //создает класс с переданными в конструктор данными
        child(int c,string mn,string snm){
            age=c;
            surname=snm;
            name=mn;
        }
        //деструктор класса
        ~child(){cout<<"This object was destructed."<<endl;}
        //гетеры класса
        int getage();
        string getname();
        string getsurname();
        };


string child::getname(){
    return name;}

string child::getsurname(){
    return surname;}

int child::getage(){
    return age;}
int main(){ //основная программа ввод и вывод данных объекта класса child
    string sur,nm;
    int ag;


    cout<<"Enter surname, name and age of child N1 through the gap: ";
    cin>>sur>>nm>>ag;
    child ch1(ag,nm,sur);

    cout<<"Child: "<<ch1.getsurname()<<" "<<ch1.getname()<<" "<< ch1.getage()<<endl;
    ch1.~child();
    return 0;}
