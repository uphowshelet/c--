// создайте программу которая генерирует и заполняет случайныйми числами(от 0 до 10) двумерный
// статический массив(3,3) выводит нв экран исходную и транспонированную версию
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int b;
    srand(time(0));
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b=rand()% 11;
            a[i][j]=b;
        }
    }   
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
}

// создайте двумерный вектор целых чисел размером(5 на 5)
// заполните случайо от -100 до 100
// распечатайте вектор и посчитайте сколько в нем отрицательных элементов
#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int b;
    vector<vector<int>> V;
    vector<int>t;
    for(int i =0;i<5;i++){
        t.clear();
        for(int j =0;j<5;j++){
            b=rand()%(100-(-100)+1)+(-100);
            t.push_back(b);
        }
        V.push_back(t);
    }
    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<V[i][j]<<" ";
        }
    cout<<endl;
    }
    int k = 0;
    for (int i=0;i<5;i++){
        for (int j =0;j<5;j++){
            if (V[i][j] < 0){
                k++;
            }
        }
    }
    cout<<"отрицательных чисел в массиве: "<<k;
}
