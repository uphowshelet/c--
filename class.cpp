// // объявите классы в с++
// // выберите любой обстрактный или физический объект
// // опишите его 3-5 полями разного типа
// // для каждого поля объявите функции доступа(сеттер геттер)
// // в функции main создайте объект данного класса
// // и заполните все его поля с помощью сеттер 
// #include<iostream>
// #include<string>
// using namespace std;
// class litenergy{
//     private:
//         string taste; 
//         float volume;
//         string color;
//     public:
//         void setTaste(string a){
//             taste = a;
//         }
//         string getTaste(){
//             return taste;
//         }
//         void setVolume(float b){
//             volume = b;
//         }
//         float getVolume(){
//             return volume;
//         }
//         void setColor(string c){
//             color = c;
//         }
//         string getColor(){
//             return color;
//         }
//         litenergy(){
//             taste = "peach";
//         }
//         litenergy(float x, string v){
//             volume = x;
//             color = v;
//         }
//         ~litenergy(){
//             cout << "Object " << color << " destroyed";
//         }
// };
// int main(){
//     litenergy litenergy1;
//     litenergy1.setTaste("classic");
//     litenergy1.setVolume(0.330);
//     litenergy1.setColor("tiffani&black");
//     cout<<litenergy1.getTaste()<<endl;
//     cout<<litenergy1.getVolume()<<endl;
//     cout<<litenergy1.getColor()<<endl;
// }

// Создайте объект класса `Person` и выведите его поля.

// // Добавьте метод в класс `Person`, который выводит информацию о человеке.
// #include<iostream>
// #include<string>
// using namespace std;
// class person{
//     private:
//         string name;
//         int age;
//     public:
//         void setName(string a){
//             name =a;
//         }
//         string getName(){
//             return name;
//         }
//         void setAge(int a){
//             age =a;
//         }
//         int getAge(){
//             return age;
//         }
// };
// int main(){
//     setlocale(LC_ALL,"ru");
//     cout<<"введите имя пользователя 1: "<<endl;
//     string a2;
//     cin>>a2;
//     cout<<"введите возвраст пользователя 1: "<<endl;
//     int b2;
//     cin>>b2;
//     string a;
//     cout<<"введите имя пользователя 2: "<<endl;
//     cin>>a;
//     cout<<"введите возвраст пользователя 2: "<<endl;
//     int b,c;
//     cin>>b;
//     person P,P2;
//     P.setName(a);
//     P.setAge(b);
//     P2.setName(a2);
//     P2.setAge(b2);
//     cout<<"выберете пользователя для получения информации: "<<endl;
//     cout<<"1- "<<P.getName()<<endl;
//     cout<<"2- "<<P2.getName()<<endl;
//     cin>>c;
//     if(c==1){
//         cout<<P.getName()<<endl;
//         cout<<P.getAge()<<endl;
//     }
//     if(c==2){
//         cout<<P2.getName()<<endl;
//         cout<<P2.getAge()<<endl;
//     }
// }

// // Создайте класс `Rectangle` с полями `width` и `height`, и напишите метод для вычисления площади.
// #include<iostream>
// using namespace std;
// class Rectangle{
//     private:
//         int width;
//         int height;
//     public:
//         int f() {
//             return width * height;
//         }
//         void setWidth(int w){
//             width=w;
//         }
//         int getWidth()const{
//             return width;
//         }
//         void setHeight(int h){
//             height=h;
//         }
//         int getHeight()const{
//             return height;
//         }
// };
// int main(){
//     Rectangle s1;
//     int a,b;
//     cout<<"введите ширину: "<<endl;
//     cin>>a;
//     cout<<"введите высоту: "<<endl;
//     cin>>b;
//     s1.setWidth(a);
//     s1.setHeight(b);
//     cout<<"S = "<<s1.f();
// }