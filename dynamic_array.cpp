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

