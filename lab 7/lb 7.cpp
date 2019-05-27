#include<iostream>
#include<string>
// создание класса Human
using namespace std;
class Human{
    protected:
        string name;
        string surname;
        string midname;
        int age;

    public://конструктор класса
        //создает класс с переданными в конструктор данными
        Human(){

        }

        Human(string snm, string nm, string mnm,int ag){
        name=nm;
        surname=snm;
        midname=mnm;
        age=ag;
        }
        ~Human(){}
        virtual void print (){}
        //гетеры класса
        int getcourse();
        string getname();
        string getsurname(); };

//класс Student, наследуется от Human
class Student:public Human{
    private:
        bool on_lesson;  
    public://конструктор
     Student(string snm, string nm, string mnm,int ag ,bool onl) : Human(snm, nm,  mnm, ag ) {
            on_lesson=onl;
        }
    Student() { }
    void print (){
        cout<<"Student: "<<surname << " "<<name <<" "<<midname <<"\n";
        cout<<"Age: "<<age<<endl;
        cout<<"On lesson ";
        if (on_lesson){ cout<<"Yes.\n";}
        else { cout<<"No.\n";}
        }
    ~Student(){}
};

class Boss:public Human{
    private:
        int numb_of_workers; 
    public://конструктор
     Boss(string snm, string nm, string mnm,int ag ,int nbw) : Human(snm, nm,  mnm, ag ) {
            numb_of_workers=nbw;
        }
    Boss()  { }
    void print (){
        cout<<"Boss: "<<surname << " "<<name <<" "<<midname <<"\n";
        cout<<"Age: "<<age<<endl;
        cout<<"Number of workers: "<<numb_of_workers<<endl;
 }
    ~Boss(){}
};

int main(){ //основная программа ввод и вывод данных классов
    Student s1("Bobrov","Oleg","Borisovich",19,1);
    Boss b1("Antonov","Vitaliy","Petrovich",32,26);
    s1.print();
    cout<<endl;
    b1.print();
    return 0;}
