#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
     queue<int> carsforwash;
     cout<<"Enter number of cars: " ;
     int n;//задание числа машин в очереди
     cin>>n;
     for (int i=0;i<n;i++){
          carsforwash.push(i+1 );//установка машин в очередь
     }//машины моют в следующем порядке
     cout<<"Cars were washed in next order:"<<endl;
      for (int i=0;i<n;i++){
//помывка машин и удаление их из очереди
          cout<<"Car N"<<carsforwash.front()<<endl;
          carsforwash.pop();
    }

    return 0;
}
