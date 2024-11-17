// #include<iostream>
// using namespace std;

// void f(int& value){
//     value++;
// }

// int main(){
    // int a = 10;
    // int& ref =a;
    // cout<<ref;

    // int a = 10;
    // int& ref = a;
    // int b=15;
    // ref=b;
    // cout<<ref;

    // int a = 10;
    // int& ref = a;
    // ref = 25;
    // cout<<ref<<endl;
    // cout<<a;

    // int a = 20;
    // int& ref = a;
    // cout<<&a<<endl;
    // cout<<&ref<<endl;
// }



// Напишите программу, которая запрашивает у пользователя ввод двух чисел, а затем меняет их значения местами с использованием ссылок. После этого программа должна вывести новые значения чисел.
// #include<iostream>
// using namespace std;
// void f(int& a,int& b){
//     int t = a;
//     a=b;
//     b=t;
// } 
// int main(){
//     int a;
//     int b;
//     cout<<"Введите первое число: ";
//     cin>>a;
//     cout<<"Введите второе число: ";
//     cin>>b;
//     f(a,b);
//     cout<<"Числа после обмена: "<<endl;
//     cout<<"Первое число - "<<a<<endl<<"Второе число - "<<b;
// }

// Напишите программу, которая запрашивает у пользователя ввод массива целых чисел, а затем сортирует его с использованием функции, которая принимает ссылку на массив и его размер. После сортировки программа должна вывести отсортированный массив.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// void f(int*& arr,int a){
//     sort(arr,arr+a);
// }
// int main(){
//     int a;
//     cout<<"введите кол-во элементов массива: "<<endl;
//     cin>>a;
//     int* arr= new int[a];
//     cout<<"вводите эелементы: "<<endl;
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     f(arr,a);
//     cout<<"отсортированный массив: "<<endl;
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }








