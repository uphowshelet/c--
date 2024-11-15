// // Создайте массив целых чисел и выведите его элементы.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,6,4,7,5};
//     for(int i=0;i<size(arr);i++){cout<<arr[i]<<endl;}
// }

// // Напишите программу, которая принимает на вход строку и подсчитывает количество слов в ней. Слова разделены пробелами.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     string a;
//     cout<<"Введите предложение для подсчета слов: "<<endl;
//     getline(cin,a);
//     for(char b:a){
//         if(b==' '){sum+=1;}
//         else{sum+=0;}
//     }
//     cout<<"Слов в предложении: "<<endl;
//     cout<<sum+1;
// }


// // Напишите программу, которая использует `switch` для выбора действия в зависимости от введенного числа.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Введите номер дня недели: "<<endl;
//     cin>>a;
//     switch(a){
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//             cout<<"Это будний день!"<<endl;
//             break;
//         case 6:
//         case 7:
//             cout<<"Это выходной!"<<endl;
//             break;
//         default:
//             break;
//     }
// }

// // Создайте функцию, которая принимает массив и возвращает его сумму.
// #include<iostream>
// using namespace std;
// int f(int a[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=a[i];
//     }
//     return sum;
// }
// int main(){
//     int b,size;
//     cout<<"Введите размер массива: "<<endl;
//     cin>>size;
//     int a[size];
//     cout<<"Вводите элементы для подсчета суммы: "<<endl;
//     for(int i=0;i<size;i++){
//         cin>>a[i];
//     }
//     cout<<"Сумма: "<<endl;
//     cout<<f(a,size);
// }

// //Используйте цикл `while` для вывода чисел от 10 до 1.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=11;
//     while(n!=1){
//         n--;
//         cout<<n<<endl;
//     }
// }

// // Напишите программу, которая использует `do-while` для вывода чисел от 1 до 5.
// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     do{
//         cout<<a++<<endl;
//     }while(a<6);
// }


// // указатели
// #include<iostream>
// using namespace std;
// int main(){
//     int a=100;
//     int* p_a = &a;
//     int volue = *p_a;
//     cout<<volue;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a =100;
//     int* p_a=&a;
//     int** p_p_a = &p_a;
//     int volue = **p_p_a;
//     cout<<volue;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int q = 10;
//     int* x = new int(10);
//     *x=12
//     cout<<"pointer size: "<<sizeof(x)<<endl;
//     cout<<"pointer value: "<<x<<endl;
//     cout<<"pointer value in heap: "<<*x<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=25;
//     int* x = &a;
//     *x=27;
//     int p=*x;
//     cout<<p;
// }



// // ссылки
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int& ref = a;

//     cout<<ref;
// }






cout<<dkeo























































