// push_back(value): Добавляет элемент в конец вектора.
// pop_back(): Удаляет последний элемент вектора.
// size(): Возвращает количество элементов в векторе.
// empty(): Проверяет, пуст ли вектор.
// at(index): Возвращает элемент по указанному индексу (с проверкой границ).
// front(): Возвращает первый элемент вектора.
// back(): Возвращает последний элемент вектора.
// clear(): Удаляет все элементы из вектора.
// erase(iterator): Удаляет элемент по указанному итератору.
// insert(iterator, value): Вставляет элемент перед указанным итератором.

// // Напиши программу, которая считывает целые числа в вектор и вычисляет сумму всех элементов вектора.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int sum=0;
//     int a,b;
//     cout<<"Введите сколько чисел вы хотите ввести: "<<endl;
//     cin>>a;
//     cout<<"Вводите числа: "<<endl;
//     for(int i =0;i<a;i++){
//         b=0;
//         cin>>b;
//         v.push_back(b);
//     }
//     for(int i=0;i<size(v);i++){
//         sum+=v[i];
//     }
//     cout<<"Сумма чисел: "<<sum;
// }

// // Напиши программу, которая считывает целые числа в вектор и находит максимальный элемент в векторе.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     int a,b,c;
//     cout<<"Введите сколько чисел вы хотите ввести: "<<endl;
//     cin>>a;
//     cout<<"Вводите числа: "<<endl;
//     for(int i =0;i<a;i++){
//         b=0;
//         cin>>b;
//         v.push_back(b);
//     }
//     c=*max_element(v.begin(),v.end());
//     cout<<"Максимальный элемент: "<<endl;
//     cout<<c;
// }

// // Напиши программу, которая считывает целые числа в вектор, удаляет все дубликаты, а затем сортирует вектор по убыванию.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     int a,b;
//     cout<<"введите размер вектора: "<<endl;
//     cin>>b;
//     cout<<"вводите элементы вектора: "<<endl;
//     for(int i=0;i<b;i++){
//         cin>>a;
//         v.push_back(a);
//     }
//     sort(v.begin(),v.end());
//     auto last = unique(v.begin(), v.end());
//     v.erase(last, v.end());
//     sort(v.rbegin(),v.rend());
//     cout<<"отсортированный вектор: "<<endl;
//     for(int i=0;i<size(v);i++){
//         cout<<v[i]<<" ";
//     }
// }

// //  Напиши программу, которая считывает целые числа в вектор и два индекса. 
// // Программа должна вычислить сумму элементов вектора между этими двумя индексами (включая элементы на этих индексах).
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int sum=0;
//     int a,b,c,d;
//     cout<<"введите размер вектора: "<<endl;
//     cin>>a;
//     cout<<"вводите элементы вектора: "<<endl;
//     for(int i =0;i<a;i++){
//         cin>>b;
//         v.push_back(b);
//     }
//     do{
//         cout<<"введите диапазон для подсчета суммы: "<<endl;
//         cin>>c>>d;
//     }while(c>d);
//     for(int i=c-1;i<d;i++){
//         sum+=v[i];
//     }
//     cout<<"сумма элементов("<<c<<" "<<d<<"): "<<sum;
// }