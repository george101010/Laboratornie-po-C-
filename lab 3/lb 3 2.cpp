#include<iostream>
#include<string>
// создание класса child
//поля класса брэнд, длина, ширина, цена
using namespace std;
class tiles{
    private:
        string brand;
        int size_h;
        int size_w;
        int price;
    public://сетеры класса
        void setbrand(string s);
        void setsizeh(int c);
        void setsizew(int c);
        void setprice(int c);

        //гетеры класса
        void getdata();

        };
void tiles::setsizew(int c){
    size_w=c;}
void tiles::setsizeh(int c){
    size_h=c;}
void tiles::setbrand(string s){
    brand=s;}
void tiles::setprice(int c){
    price=c;}

void tiles::getdata(){
    cout<<brand<<" "<<size_h<<" "<<size_w<<" "<<price<<" ";}
int main(){ //основная программа ввод и вывод данных объекта класса tiles
    string br;
    int h,w,p;

    tiles tl;
    cout<<"Enter brand, height and wideness and price of tile through the gap: ";
    cin>>br>>h>>w>>p;
    tl.setbrand(br);
    tl.setsizeh(h);
    tl.setsizew(w);
    tl.setprice(p);
    cout<<"Data of this tile(brand, height, wideness, price): ";
    tl.getdata();

    return 0;}
