#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
     queue<int> carsforwash;
     cout<<"Enter number of cars: " ;
     int n;//������� ����� ����� � �������
     cin>>n;
     for (int i=0;i<n;i++){
          carsforwash.push(i+1 );//��������� ����� � �������
     }//������ ���� � ��������� �������
     cout<<"Cars were washed in next order:"<<endl;
      for (int i=0;i<n;i++){
//������� ����� � �������� �� �� �������
          cout<<"Car N"<<carsforwash.front()<<endl;
          carsforwash.pop();
    }

    return 0;
}
