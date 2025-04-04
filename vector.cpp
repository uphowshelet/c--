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

// // Напишите программу, которая запрашивает у пользователя длину массива (динамический массив или вектор),
// // затем заполняет массив случайными элементами от -10 до 10 (включительно).
// // Затем сортирует массив в порядке УБЫВАНИЯ, и выводит отсортированный массив на экран.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<ctime>
// using namespace std;
// int main(){
//     srand(time(0));
//     vector<int>v;
//     int a,b;
//     cin>>a;
//     for(int i =0;i<a;i++){
//         b=rand()%(10-(-10)+1)+(-10);
//         v.push_back(b);
//     }
//     sort(v.rbegin(),v.rend());
//     for(int i =0;i<a;i++){
//         cout<<v[i]<<" ";
//     }
// }

// // . Напишите программу, которая запрашивает у пользователя длину массива (динамический массив или вектор) 
// // и заполняет его случайными числами от -50 до 50 (включительно).
// // Программа должна найти и вывести второй по величине элемент массива (второй максимальный элемент).
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<ctime>
// using namespace std;
// int main(){
//     srand(time(0));
//     vector<int>v;
//     int a,b;
//     cin>>a;
//     for(int i =0;i<a;i++){
//         b=rand()%(50-(-50)+1)+(-50);
//         v.push_back(b);
//     }
//     for(int i = 0;i<a;i++){
//         cout<<v[i]<<" ";
//     }
//     sort(v.begin(),v.end());
//     cout<<endl;
//     cout<<v[a-2];
// }

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n = 5;
    vector<vector<double>> A(n, vector<double>(n, 0));
    vector<double> b(n, 0);
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        double sum = 0;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                A[i][j] = rand() % 100;
                sum += abs(A[i][j]);
            } else {
                A[i][j] = 0;
            }
        }
        A[i][i] = sum + rand() % 5 + 1;
        b[i] = rand() % 100;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout<<endl;
    for (int i = 0; i < n; ++i) {
        cout << b[i] << endl;
    }

    return 0;
}

