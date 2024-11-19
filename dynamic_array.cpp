// // Пользователь вводит с клавиатуры числа: N, A, B.
// // Создайте массив длиной N элементов, заполненный
// // в диапазоне от A до B. 
// // Найдите второй наибольший элемент массива
// // 10 12 63 14 5 -> ответ 14
// #include<iostream>
// #include<ctime>
// #include<algorithm>
// using namespace std;
// int main(){
//     srand(time(0));
//     int n,a,b;
//     cout<<"введите длину массива: ";
//     cin>>n;
//     cout<<"начало массива: ";
//     cin>>a;
//     cout<<"конец массива: ";
//     cin>>b;
//     int* m = new int[n];
//     for(int i=0;i<n;i++){
//         m[i]=rand()%(b-a+1)+a;
//         cout<<m[i]<<" ";
//     }
//     cout<<endl;
//     sort(m,m+n);
//     cout<<"второй наибольший элемент массива: ";
//     cout<<endl<<m[n-2];
//     delete []m;
// }

// Пользователь вводит с клавиатуры число X.
// Необходимо создать одномерный динамический массив 
// размера X, который заполнен цифрами (0-9) случайно.
// Вывести на экран сколько раз встретилась каждая цифра
// в массиве.

// #include<iostream>
// #include<ctime>
// #include<algorithm>
// using namespace std;
// int main(){
//     srand(time(0));
//     int x;
//     int k = 1;
//     cin>>x;
//     int a[10]={0,0,0,0,0,0,0,0,0,0};
//     int* arr= new int[x];
//     for(int i=0;i<x;i++){
//         arr[i]=rand()%10;
//         cout<<arr[i]<<" ";
//         a[arr[i]]++;
//     }
//     cout<<endl;
//     for(int i=0;i<10;i++){
//         cout<<i<<"- "<<a[i]<<" раз"<<endl;
//     }
//     delete []arr;
// }
