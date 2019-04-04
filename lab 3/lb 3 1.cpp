#include<iostream>
#include<string>
// создание класса child
using namespace std;
class child{
    private:
        string name;
        string surname;
        int age;
    public://сетеры класса
        void setage(int c);
        void setname(string s);
        void setsurname(string s);
        //гетеры класса
        int getage();
        string getname();
        string getsurname();
        };
void child::setage(int c){
    age=c;}
void child::setname(string s){
    name=s;}
void child::setsurname(string s){
    surname=s;}

string child::getname(){
    return name;}

string child::getsurname(){
    return surname;}

int child::getage(){
    return age;}
int main(){ //основная программа ввод и вывод данных 2 объектов класса child
    string sur,nm;
    int ag;

    child ch1;
    cout<<"Enter surname, name and age of child N1 through the gap: ";
    cin>>sur>>nm>>ag;
    ch1.setage(ag);
    ch1.setname(nm);
    ch1.setsurname(sur);
    cout<<"Child N1:"<<ch1.getsurname()<<" "<<ch1.getname()<<" "<< ch1.getage()<<endl;
    child ch2;
    cout<<"Enter surname, name and age of child N2 through the gap: ";
    cin>>sur>>nm>>ag;
    ch2.setage(ag);
    ch2.setname(nm);
    ch2.setsurname(sur);
    cout<<"Child N2:"<<ch2.getsurname()<<" "<<ch2.getname()<<" "<< ch2.getage()<<endl;
    return 0;}
