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
    public://конструктор класса
        tiles(string brd,int sizh,int sizw,int prc){
        brand=brd;
        size_h=sizh;
        size_w=sizw;
        price=prc;}
        //деструктор класса
        ~tiles(){cout<<"Object tiles was destructed."<<endl;}
        //гетеры класса
        void getdata();

        };


void tiles::getdata(){
    cout<<brand<<" "<<size_h<<" "<<size_w<<" "<<price<<" ";}
int main(){ //основная программа ввод и вывод данных объекта класса tiles
    string br;
    int h,w,p;


    cout<<"Enter brand, height and wideness and price of tile through the gap: ";
    cin>>br>>h>>w>>p;
    tiles tl(br,h,w,p);
    cout<<"Data of this tile(brand, height, wideness, price): ";
    tl.getdata();
    cout<<endl;
    tl.~tiles();
    return 0;}
