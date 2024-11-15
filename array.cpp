// Напишите программу на языке C++, которая выполняет следующие действия:
// Создает массив целых чисел размером N (где N вводится пользователем).
// Заполняет массив случайными числами в диапазоне от -100 до 100.
// Выводит массив на экран
// Находит и выводит на экран минимальный и максимальный элементы массива.
// Сортирует массив по возрастанию и выводит отсортированный массив на экран.
#include<iostream>
#include<ctime>
#include <algorithm>
using namespace std;
int main(){
    srand(time(0));
    int a,b,c;
    cout<<"введите размер массива: "<<endl;
    cin>>a;
    int arr[a];
    cout<<"массив: "<<endl;
    for(int i=0;i<a;i++){
        arr[i]=rand() % (100-(-100)+1)+(-100);
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]<min){min=arr[i];}
        if(arr[i]>max){max=arr[i];}
    }
    cout<<"минимальный элемент: "<<min<<endl;
    cout<<"максимальный элемент: "<<max<<endl;
    cout<<"отсортированный массив: ";
    sort(arr,arr+a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}


