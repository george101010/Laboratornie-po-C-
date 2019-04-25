#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n=0;
    vector<string> stud;
    string data="";
    cout<<"Enter surname and name of students. "<< endl;
    cout<<"At the end enter empty string. "<< endl;
    do {
        getline(cin, data);
        if (data.size()>0){
            n++; //добавление одного элемента в вектор
            stud.push_back(data);
        }
    } while (data != "");

    //вывод заполненного вектора на экран
    cout<<"Students: "<< endl;
    for (int i=0;i<n;i++) {
        cout << stud[i] << endl; }
    return 0;
}
