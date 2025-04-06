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

// // Создайте указатель на массив и выведите его элементы
// #include<iostream>
// #include<ctime>
// using namespace std;
// int main(){
//     srand(time(0));
//     int* a=new int[10];
//     for(int i=0;i<10;i++){
//         a[i]=rand()%10;
//         cout<<a[i]<<" ";
//     }
//     delete []a;
// }

// // // Напишите программу, которая считывает строку, введенную пользователем и выводит
// //  ее символы в обратном порядке
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string v;
//     getline(cin,v);
//     for(int i = v.length();i>0-1;i--){
//         cout<<v[i];
//     }
// }

// // Напишите программу, которая считывает с клавиатуры число, а затем проверяет и выводит в консоль
// // ответ - является число ПРОСТЫМ или нет
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int a,k;
//     cin>>a;
//     for(int i =1;i<=a;i++){
//         if(a%i==0){
//         k++;
//         }
//     }
//     if(k==2){
//         cout<<"простое";
//         return 0;
//     }
//     else{cout<<"не простое";}
//     return 0;
// }

// //Напишите программу, которая проверяет, является ли введенное пользователем число палиндромом.
// //Число считается палиндромом, если оно читается одинаково как слева направо, так и справа налево (например, 121 или 12321).
// #include <iostream>
// #include<string>
// using namespace std;
// int main(){
//     string v,b;
//     getline(cin,v);
//     for(int i = v.length()-1;i<v.length();i--){
//         b+=v[i];
//     }
//     if(v==b){
//         cout<<"слово палиндром";
//     }
//     else{cout<<"слово не палиндром";}
// }



// // Разработайте программу, которая моделирует систему управления заказами в ресторане.
// // Программа должна управлять меню ресторана, которое включает блюда с ценами,
// // категориями (салаты, основные блюда, десерты, напитки) и калорийностью.
// // Пользователь может посмотреть меню; оформить заказ, выбрав несколько блюд.
// #include<iostream>
// #include<string>
// #include<vector>
// #include<map>
// #include<iomanip>
// using namespace std;
// struct menu{
//     string name;
//     string categories;
//     int price;
//     int calories;
// };
// int main(){
//     int a;
//     int sum=0;
//     menu salati;
//     salati.categories = "салат";
//     salati.price=300;
//     salati.calories=250;
//     map<string, menu> food;
//     food["4:цезарь"]= salati;
//     menu osnblud;
//     osnblud.categories="основные блюда";
//     osnblud.price=450;
//     osnblud.calories=700;
//     food["1:карбонара"] = osnblud;
//     menu des;
//     des.categories="десерты";
//     des.price=350;
//     des.calories=400;
//     food["3:тирамису"]=des;
//     menu napitk;
//     napitk.categories="напитки";
//     napitk.price=150;
//     napitk.calories=120;
//     food["2:лимонад"]=napitk;
//     cout << "Меню ресторана:" << endl;
//     cout << "Название\tКатегория\tЦена\tКалории" << endl;
//     for (const auto& o : food) {
//         cout <<o.first << "\t"
//              <<o.second.categories << "\t"
//              <<o.second.price << " руб.\t"
//              << o.second.calories << " ккал" << endl;
//     }
//     cout<<"ваш заказ?(1,2,3,4)"<<endl;
//     do{
//         cin >> a;
//         if (a==1){
//             sum+=osnblud.price;
//             cout<<"вы добавили карбонару"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }else if(a==2){
//             sum+=napitk.price;
//             cout<<"вы добавили лимонад"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }else if(a==3){
//             sum+=des.price;
//             cout<<"вы добавили тирамису"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }else if(a==4){
//             sum+=salati.price;cout<<"вы добавили цезарь"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }
//         else if(a>4){
//             cout<<"такой позиции не существует)"<<endl;
//         }
//         cout<<"сумма заказа: "<<sum<<endl;
//     }while(a!=0);
//     cout<<"Заказ оформлен! Общая стоимость: "<<sum<<"руб";  
// }

// // Разработайте программу, которая моделирует систему управления заказами в ресторане.
// // Программа должна управлять меню ресторана, которое включает блюда с ценами,
// // категориями (салаты, основные блюда, десерты, напитки) и калорийностью.
// // Пользователь может посмотреть меню; оформить заказ, выбрав несколько блюд.
// #include<iostream>
// #include<string>
// #include<vector>
// #include<map>
// #include<iomanip>
// using namespace std;
// struct menu{
//     string name;
//     string categories;
//     int price;
//     int calories;
// };
// int main(){
//     int a;
//     int sum=0;
//     menu salati;
//     salati.categories = "салат";
//     salati.price=300;
//     salati.calories=250;
//     map<string, menu> food;
//     food["4:цезарь"]= salati;
//     menu osnblud;
//     osnblud.categories="основные блюда";
//     osnblud.price=450;
//     osnblud.calories=700;
//     food["1:карбонара"] = osnblud;
//     menu des;
//     des.categories="десерты";
//     des.price=350;
//     des.calories=400;
//     food["3:тирамису"]=des;
//     menu napitk;
//     napitk.categories="напитки";
//     napitk.price=150;
//     napitk.calories=120;
//     food["2:лимонад"]=napitk;
//     cout << "Меню ресторана:" << endl;
//     cout << "Название\tКатегория\tЦена\tКалории" << endl;
//     for (const auto& o : food) {
//         cout <<o.first << "\t"
//              <<o.second.categories << "\t"
//              <<o.second.price << " руб.\t"
//              << o.second.calories << " ккал" << endl;
//     }
//     cout<<"ваш заказ?(1,2,3,4)"<<endl;
//     do{
//         cin >> a;
//         if (a==1){
//             sum+=osnblud.price;
//             cout<<"вы добавили карбонару"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }else if(a==2){
//             sum+=napitk.price;
//             cout<<"вы добавили лимонад"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }else if(a==3){
//             sum+=des.price;
//             cout<<"вы добавили тирамису"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }else if(a==4){
//             sum+=salati.price;cout<<"вы добавили цезарь"<<endl;
//             cout<<"желаете заказать что-то еще? (если нет введите ноль)"<<endl;
//         }
//         else if(a>4){
//             cout<<"такой позиции не существует)"<<endl;
//         }
//         cout<<"сумма заказа: "<<sum<<endl;
//     }while(a!=0);
//     cout<<"Заказ оформлен! Общая стоимость: "<<sum<<"руб";
    
// }
// #include <iostream>
// #include<vector>
// #include<map>
// #include<string>
// using namespace std;
// struct catalog{
//     float price;
//     string cat;
//     int colvo;
// };
// map<string, catalog> elec;
// void cata() {
//     cout << "Название\tКатегория\t     Цена      \tКоличество" << endl;
//     cout << "--------------------------------------------------" << endl;
//     for (const auto& o : elec) {
//         cout << o.first << "\t"
//              << o.second.cat << "\t"
//              << o.second.price << " руб.\t"
//              << o.second.colvo << endl;
//     }
//     cout << "--------------------------------------------------" << endl;
// };
// void find(){
//     cout<<"введите название товара: "<<endl;
//     getline(cin,string s);
//     if(s=="телевизор"){
//         cout<<tv;
// };
// void menu() {
//     int vibor;
//     do{
//         cout<< "1. Показать каталог товаров." << endl;
//         cout<< "2. Найти товар." << endl;
//         cout<< "3. Добавить товар в корзину." << endl;
//         cout<< "4. Удалить товар из корзины." << endl;
//         cout<< "5. Оформить заказ." << endl;
//         cout<< "6. Показать аналитику продаж." << endl;
//         cout<< "7. Выход" << endl;
//         cout<< "Выберите действие: ";
//         cin >>vibor;
//         switch (vibor){
//             case 1:
//                 cata();
//                 break;
//             case 2:
//                 find();
//                 break;
//             // case 3:
//             //     add();
//             //     break;
//             // case 4:
//             //     remove();
//             //     break;
//             // case 5:
//             //     checkout();
//             //     break;
//             // case 6:
//             //     analytics();
//             //     break;
//             case 7:
//                 cout << "выход из программыйоу" << endl;
//                 break;
//             default:
//                 cout << "неверный выбор" << endl;
//         }
//     } while (vibor != 7);
// }

// int main() {
//     catalog tv;
//     tv.price=29990;
//     tv.cat="электронника";
//     tv.colvo=10;
//     elec["2:телевизор"]= tv;
//     catalog ytyg;
//     ytyg.price=5000;
//     ytyg.cat="бытовая техника";
//     ytyg.colvo=3;
//     elec["3:утюг    "]=ytyg;
//     catalog tele;
//     tele.price=50000;
//     tele.cat="телефоны      ";
//     tele.colvo=25;
//     elec["1:смартфон"]=tele;
//     menu();
// }

   
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"введите первое число: ";
//     cin>>a;
//     cout<<"введите второе число: ";
//     cin>>b;
//     cout<<"сумма: "<<a+b;
// }
    
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"введите число: ";
//     cin>>a;
//     if (a%2==0){cout<<"число "<<a<<" четное";}
//     else{cout<<"число "<<a<<" нечетное";}
// }
    
// #include<iostream>
// using namespace std;
// int main(){
//     int sun=0;
//     int a[5];
//     for(int i=0;i<5;i++){
//         cin>>a[i];
//     }
//     for(int i =0;i<5;i++){
//         sun+=a[i];
//     }
//     cout<<sun;
// }  
    
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int a;
//     int n=3;
//     cout<<"введите три числа: "<<endl;
//     for(int i =0 ;i<3;i++){
//         cin>>a;
//         v.push_back(a);
//     }
//     sort(v.begin(),v.end());
//     cout<<v[n-1];
// }
 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int b;
//     string a;
//     cin>>a;
//     b=a.size();
//     for(int i=b;i>=0;i--){
//         cout<<a[i];
//     }
// }
    
    
// #include<iostream>
// #include<ctime>
// #include<algorithm>
// using namespace std;
// int main(){
//     srand(time(0));
//     int a[5];
//     for(int i=0;i<5;i++){
//         a[i]=rand()%(10-(-10)+1)+(-10);
//         cout<<a[i]<<" ";
//     }
//     sort(a,a+5);
//     cout<<endl;
//     for(int i =0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     string s;
//     cout<<"введите первое число: ";
//     cin>>a;
//     cout<<"введите второе число: ";
//     cin>>b;
//     cout<<"введите операцию (+, -, *, /): ";
//     cin>>s;
//     if(s=="+"){cout<<"результат: "<<a+b;}
//     if(s=="-"){cout<<"результат: "<<a-b;}
//     if(s=="*"){cout<<"результат: "<<a*b;}
//     if(s=="/"){cout<<"результат: "<<a/b;}
// }    

// // Напиши программу, которая:
// // Запрашивает у пользователя размер массива.
// // Динамически выделяет память для массива.
// // Заполняет массив числами, введенными пользователем.
// // Выводит массив на экран.
// // Освобождает память.
// #include<iostream>
// using namespace std;
// int main(){
//     int* a=new int;
//     cout<<"введите размер массива: ";
//     cin>>*a;
//     int arr[*a];
//     for(int i=0;i<*a;i++){
//         cout<<"введите элемент "<<i+1<<": ";
//         cin>>arr[i];
//     }
//     cout<<"массив: ";
//     for(int i =0;i<*a;i++){
//         cout<<arr[i]<<" ";
//     }
//     delete a;
//     delete[] arr;
// }
    

// // Запрашивает у пользователя размер массива.
// // Динамически выделяет память для массива.
// // Заполняет массив числами, введенными пользователем.
// // Выводит массив на экран.
// // Переворачивает массив (первый элемент становится последним, второй — предпоследним и т.д.).
// // Выводит перевернутый массив на экран.
// // Освобождает память.
// #include<iostream>
// using namespace std;
// int main(){
//     int s;
//     cout<<"введите размер массива: ";
//     cin>>s;
//     int* arr=new int[s];
//     for(int i =0;i<s;i++){
//         cout<<"введите элемент массива №"<<i+1<<": ";
//         cin>>arr[i];
//     }
//     cout<<"исходный массив: ";
//     for(int i =0;i<s;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"перевернутый массив: ";
//     for(int i=s;i>0;i--){
//         cout<<arr[i-1]<<" ";
//     }
//     delete[] arr;
// }
    
    
// // Запрашивает у пользователя размер массива.
// // Динамически выделяет память для массива.
// // Заполняет массив числами, введенными пользователем.
// // Находит минимальный и максимальный элементы в массиве.
// // Выводит минимальный и максимальный элементы на экран.
// // Освобождает память.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int s;
//     cout<<"введите размер массива: ";
//     cin>>s;

//     int* arr= new int[s];
//     for(int i =0;i<s;i++){
//         cout<<"введите элемент массива №"<<i+1<<": ";
//         cin>>arr[i];
//     }
//     sort(arr,arr+s);
//     cout<<"минимальный элемент: "<<arr[0]<<endl;
//     cout<<"максимальный элемент: "<<arr[s-1]<<endl;
//     delete[] arr;
// }

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     fstream outfile("qwe.txt",ios::in);
//     // outfile<<endl;
//     // outfile<<"wqeurhfwuh!";
//     string line;
//     while(getline(outfile,line)){
//         cout<<line<<endl;
//     }
//     outfile.close();
//     fstream outfile2("qwe.txt",ios::app);
//     outfile2<<endl;
//     outfile2<<"щалмукщшцлап";
//     outfile2.close();
// }
 
// // Запрашивает у пользователя имя файла.
// // Запрашивает несколько чисел и записывает их в файл.
// // Читает числа из файла и вычисляет их сумму.
// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     string namefile;
//     cout<<"введите имя файла: "<<endl;
//     cin>>namefile;
//     fstream outfile(namefile,ios::out);
//     if (!outfile.is_open()) {
//         cout << "Ошибка открытия файла!" << endl;
//         return 1;
//     }
//     int kol;
//     cout<<"сколько чисел вы хотите добавить в файл? "<<endl;
//     cin>>kol;
//     int* arr=new int[kol];
//     cout<<"вводите числа: "<<endl;
//     for(int i=0;i<kol;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<kol;i++){
//         outfile<<arr[i]<<" ";
//     }
//     outfile.close();


//     fstream infile(namefile,ios::in);
//     int sum=0;
//     for(int i=0;i<kol;i++){
//         sum+=arr[i];
//     }
//     string line;
//     cout<<"числа в файле "<<namefile<<": "<<endl;
//     while(getline(infile,line)){
//         cout<<line<<endl;
//     }
//     cout<<"сумма чисел в файле: "<<sum;
//     infile.close();
//     delete[] arr;
// }  
   
// #include <iostream>
// using namespace std;
// int plus(int a,int b){
//     return a+b;
// }
// float plus(float a,float b){
//     return a+b;
// }
// int plus(int a,int b){
//     return a+b;
// }
// int plus(int a,int b){
//     return a+b;
// }
// int plus(int a,int b){
//     return a+b;
// }
// int minus(int a,int b){
//     return a-b;
// }
// float minus(float a,float b){
//     return a-b;
// }
// int minus(int a,int b){
//     return a-b;
// }
// int minus(int a,int b){
//     return a-b;
// }
// int minus(int a,int b){
//     return a-b;
// }
// int ymnog(int a,int b){
//     return a*b;
// }
// float ymnog(float a,float b){
//     return a*b;
// }
// int ymnog(int a,int b){
//     return a*b;
// }
// int ymnog(int a,int b){
//     return a*b;
// }
// int ymnog(int a,int b){
//     return a*b;
// }
// int del(int a,int b){
//     if(a==0 or b==0){
//         cout<<"делить на ноль нельзяя"<<endl;
//         return 0;
//     }
//     return a/b;
// }
// float del(float a,float b){
//     if(a==0 or b==0){
//         cout<<"делить на ноль нельзяя"<<endl;
//         return 0;
//     }
//     return a/b;
// }
// int del(int a,int b){
//     if(a==0 || b==0){
//         cout<<"делить на ноль нельзяя"<<endl;
//         return 0;
//     }
//     return a/b;
// }
// int del(int a,int b){
//     if(a==0 || b==0){
//         cout<<"делить на ноль нельзяя"<<endl;
//         return 0;
//     }
//     return a/b;
// }
// int del(int a,int b){
//     if(a==0 || b==0){
//         cout<<"делить на ноль нельзяя"<<endl;
//         return 0;
//     }
//     return a/b;
// }
// int main() {
//     cout<<"";
// }


// // Создай структуру Book, которая будет хранить название книги, автора и год издания.
// // Создай переменную типа Book, заполни её данными и выведи их на экран.
// // Создай массив из 3 структур Book. Заполни его данными и выведи информацию о всех книгах.
// #include<iostream>
// #include<string>
// using namespace std;
// struct Book{
//     string nazvanie;
//     string avtor;
//     int god;
// };
// int main(){
//     // Book book1;
//     // book1.nazvanie="капитанская дочка";
//     // book1.avtor="Пушкин";
//     // book1.god=1111;
//     // cout<<book1.nazvanie<<endl;
//     // cout<<book1.avtor<<endl;
//     // cout<<book1.god<<endl;

//     int size;
//     cout<<"сколько книг вы хотите внести? "<<endl;
//     cin>>size;
//     Book book2[size];
//     for(int i =0;i<size;i++){
//         cout<<"введите название книги №"<<i+1<<": "<<endl;
//         cin>>book2[i].nazvanie;
//         cout<<"введите автора книги №"<<i+1<<": "<<endl;
//         cin>>book2[i].avtor;
//         cout<<"введите год издания книги №"<<i+1<<": "<<endl;
//         cin>>book2[i].god;
//     }
//     cout<<endl;
//     cout<<"----------------------------";
//     cout<<endl;
//     for(int i=0;i<size;i++){
//         cout<<"книга №"<<i+1<<":"<<book2[i].nazvanie<<endl;
//         cout<<"автор:"<<book2[i].avtor<<endl;
//         cout<<"год издания:"<<book2[i].god<<endl;
//         cout<<endl;
//     }
// }


// // // Создай программу с меню:
// // // В зависимости от выбора пользователя программа должна выполнять соответствующее действие.
// // // Добавь цикл, чтобы меню отображалось снова после выполнения действия (кроме выхода).
// #include<iostream>
// #include <ctime>
// using namespace std;
// int main(){
//     int n;
//     while(n!=3){
//         cout<<"1. Показать приветствие"<<endl;
//         cout<<"2. Показать текущую дату"<<endl;
//         cout<<"3. Выйти"<<endl;
//         cin>>n;

//         if(n==1){
//             cout<<"-----------------------"<<endl;
//             cout<<"здравствуйте господин)"<<endl;
//             cout<<"-----------------------"<<endl;
//         }
//         if(n==2){
//             cout<<"-----------------------"<<endl;
//             time_t now = time(nullptr);
//             tm* localTime = localtime(&now);
//             cout<<"текущая дата: ";
//             cout<<localTime->tm_mday<<"."<<localTime->tm_mon+1<<"."<<localTime->tm_year+1900<<endl;
//             cout<<"-----------------------"<<endl;
//         }
//     }
// }


// // Создай программу, которая запрашивает у пользователя имя и возраст, а затем записывает их в файл.
// // Напиши программу, которая читает данные из файла (имя и возраст) и выводит их на экран.
// // Добавление данных в файл:
// // Модифицируй программу так, чтобы она добавляла новые данные в конец файла, не удаляя старые.
// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main()
// {   
//     int age;
//     string name;
//     ofstream outFile("qwe.txt");
//     cout<<"введите возраст: "<<endl;
//     cin>>age;
//     cin.ignore();
//     cout<<"введите имя: "<<endl;
//     getline(cin,name);
//     outFile<<"age: "<<age<<endl;
//     outFile<<"name: "<<name<<endl;
//     outFile.close();
// }

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     fstream outFile("qwe.txt",ios::in);
//     string line;
//     while(getline(outFile,line)){
//         cout<<line<<endl;
//     }
//     outFile.close();
// }

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     fstream outFile("qwe.txt",ios::app);
//     int age;
//     string name;
//     cout<<"введите возраст: "<<endl;
//     cin>>age;
//     cin.ignore();
//     cout<<"введите имя: "<<endl;


// }


// #include <iostream>
// #include <ctime>
// using namespace std;
// int main() {
//     for(int i =0;i<100000;i++){
//         time_t now = time(nullptr);
//         tm* localTime = localtime(&now);
//         cout << "Текущая дата и время: ";
//         cout << localTime->tm_mday << "." << localTime->tm_mon + 1 << "." << localTime->tm_year + 1900 << " ";
//         cout << localTime->tm_hour << ":" << localTime->tm_min << ":" << localTime->tm_sec << endl;
//     }
// }



// #include <iostream>
// #include <ctime>
// #include <list>
// #include <vector>
// using namespace std;


// vector<int>vector1;
// vector<int>vector2;
// void quuuiiick(vector<int>arr, int left, int right){
//    int i = left, j = right;
//    int opora=arr[left];
//    while (i<=j){
//        while(arr[i] < opora) i++;
//        while (arr[j] > opora) j--;
//        if (i <= j){
//            int temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//            i++; j--;
//        }
//    }
//    if (left < j) quuuiiick(arr, left, j);
//    if (i < right) quuuiiick(arr, i, right);
// }


// int main()
// {

// vector<int>unsorted;
// for (int i=7;i>0;i--) unsorted.push_back(i);
// int n = unsorted.size();
// for (int s=0; s<n;s++) cout << unsorted[s] << " ";
// quuuiiick(unsorted, 0, n-1);
// cout << endl;a
// for (int s=0; s<n;s++) cout << unsorted[s] << " ";



// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int size;
//     cin >> size;
//     vector<int> arr(size);
//     for (int i = 0; i < size; ++i) {
//         cin >> arr[i];
//     }
//     int x;
//     cin >> x;
//     int count = 0;
//     for (int i = 0; i < size; ++i) {
//         for (int j = i + 1; j < size; ++j) { 
//             if (arr[i] + arr[j] == x) {
//                 count++;
//                 cout << arr[i] << " " << arr[j] << endl;
//                 arr[i] = x+1;  
//                 arr[j] = x+1;  
//                 break;           
//             }
//         }
//     }
//     cout << "всего пар: " << count << endl;
// }

// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     int n = 5;
//     vector<vector<int>> A(n, vector<int>(n, 0));
//     vector<int> b(n, 0);
//     srand(time(0));
//     for (int i = 0; i < n; ++i) {
//         int sum = 0;
//         for (int j = 0; j < n; ++j) {
//             if (i != j) {
//                 A[i][j] = rand() % 100;
//                 sum += abs(A[i][j]);
//             } else {
//                 A[i][j] = 0;
//             }
//         }
//         A[i][i] = sum + rand() % 5 + 1;
//         b[i] = rand() % 100;
//     }

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout<<endl;
//     for (int i = 0; i < n; ++i) {
//         cout << b[i] << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <ctime>
// using namespace std;
// int main(){
// srand(time(0));
// int n, m; cin >> n;
// vector<vector<int>>matrix(n, vector<int>(n));
// vector<int>b(n);vector<int>x(n, 0);
// for (int i = 0; i < n; i++){
//     b[i]=rand()%(5+1);
// }
// for (int i = 0; i < n; i++)
//     for (int j = 0; j < n; j++){
//         matrix[i][j] = rand()%(101);
// }
// cout << "\n" << "UR MATRIX: " << "\t" << "|MATRIX B:" << "\n";
// for (int i = 0; i < n; i++){
//     for (int j = 0; j < n; j++) cout << matrix[i][j] << ' ';
//     cout << "\t" <<  "| " << b[i] << "\n";
// }

// for (int i=0;i<n;i++){
//     int maxrow = i;
//     for (int k=i+1;k<n;k++){
//         if (abs(matrix[k][i])>abs(matrix[maxrow][i])){
//             maxrow=k;
//         }
//     }
//     if (maxrow != i){
//         swap(matrix[i], matrix[maxrow]);
//         swap(b[i], b[maxrow]);
//     }
//     for (int j=i+1;j<n;j++){
//         int m = matrix[j][i]/matrix[i][i];
//         for (int k=i;k<m;k++){
//             matrix[j][k] -= m*matrix[i][k];
//         }
//         b[j] -= m*b[i];
//     }
// }
// cout << "\n" << "UR MATRIX: " << "\t" << "|MATRIX B:" << "\n";
// for (int i = 0; i < n; i++){
//     for (int j = 0; j < n; j++) cout << matrix[i][j] << ' ';
//     cout << "\t" <<  "| " << b[i] << "\n";
// }
// for (int i=n-1;i>=0;i--){
//     int sum = 0;
//     for (int j=i+1;i<n;i++){
//         sum+=matrix[i][j]*x[j];
//     }
//     x[i]=(b[i]-sum)/matrix[i][i];
// }
// cout << "SOLUTION: \n";
// for (int i=0;i<n;i++){
//     cout << "x[" << i << "] = " << x[i];
// }
// }


#



























