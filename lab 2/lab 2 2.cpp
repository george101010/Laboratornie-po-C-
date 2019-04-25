#include<iostream>
using namespace std;
typedef int* (*z)(int *a,int n);
int*  sortvozr(int *a,int n){
    int mn,N;
    for (int i=0;i<n-1;i++){//функция сортировки по возрастанию
        mn=a[i];
        N=i;
        for (int k=i+1;k<n;k++){
            if (mn>a[k]){
                mn=a[k];
                N=k;
            }
        }
        swap(a[i],a[N]);
        }
        return a;
    }

int*  sortubl(int *a,int n){//функция сортировки по убыванию
    int mn,N;
    for (int i=0;i<n-1;i++){
        mn=a[i];
        N=i;
        for (int k=i+1;k<n;k++){
            if (mn<a[k]){
                mn=a[k];
                N=k;
            }
        }
        swap(a[i],a[N]);
        }
        return a;
    }

int*  invert(int *a,int n){//функция инвертирования массива
    int e=n/2;
    for (int i=0;i<(e);i++){
        swap(a[i],a[n-i-1]);
            }
        return a;
    }


z funcdef(int *a,int n){//функция для выбора функции
        int* (*q)(int *a,int n);//для работы с массивом

        int s=0;
        for (int i=0;i<n;i++){
            s=s+a[i];
        }
        if (s==a[0]) {q=&invert; return q;}
        if (s>a[0]) {q=&sortvozr;}
        else  {q=&sortubl;}
        return q;
    }
int main() {//выбирается функция и действие с массивом
      int k;//в зависимости от суммы элементов
      cout<<"Enter size of massive: ";
      cin>>k;
      int* mas = new int[k];
      for (int i=0;i<k;i++){
        cout<<"Enter element N"<<i+1<<": ";
        cin>>mas[i];
      }
      funcdef(mas,k)(mas,k);
      for (int i=0;i<k;i++){
        cout<<mas[i]<<" ";
      }


     return 0;}
