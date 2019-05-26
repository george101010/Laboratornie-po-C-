#include<iostream>
#include<string>
// создание класса student
using namespace std;
class student{
    protected:
        string name;
        string surname;
        int course;

    public://конструктор класса
        //создает класс с переданными в конструктор данными
        student(int c, string mn, string snm){
            course=c;
            surname=snm;
            name=mn;
        }


        //гетеры класса
        int getcourse();
        string getname();
        string getsurname(); };


int student::getcourse(){ return course; }
string student::getname(){  return name; }
string student::getsurname(){  return surname; }



//класс староста, наследуется от student
class elder:student{
    private:
        string name_of_group;//дополнительное поле название группы
    public://конструктор
     elder(int c,string mn,string snm,string name_of_group) : student( c, mn, snm) {
            this->name_of_group = name_of_group;
        }
    int getcourse_eld();
    string getname_eld();
    string getsurname_eld();
    string getname_of_group();//вывод  названия группы
};//печать имени группы
string elder::getname_of_group(){ return name_of_group; }


int elder::getcourse_eld(){ int w=getcourse(); return w; }
string elder::getname_eld(){ string w=getname(); return w; }
string elder::getsurname_eld(){ string w=getsurname(); return w; }

int main(){ //основная программа ввод и вывод данных объекта классов
//создание класса студент
    cout<<"Student.\n";
    student st(3,"Nikolai","Kravtsov");
    cout<<"Name: " << st.getname()<<"\n";
    cout<<"Surname: " << st.getsurname()<<"\n";
    cout<<"Course: " <<st.getcourse() <<"\n";
    cout<<"\nElder.\n";
//создание класса староста
    elder el(2,"Petr","Vahturin","SGN-0232");
    cout<<"Name: " << el.getname_eld() <<"\n";
    cout<< "Surname: "<<el.getsurname_eld()<<"\n";
    cout<< "Course: "<<el.getcourse_eld() <<"\n";
    cout<<"Name of the group: "<<el.getname_of_group() <<"\n";
    return 0;}
