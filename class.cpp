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

// создайте структуру и класс "день", для каждого дня должны быть случайно сгенерированы-
// 1)Температура(от -30 до 40)
// 2)скорость ветра(от 0 до 30)
// 3)тип осадка (дождь, снег, без осадков)
// -----------------
// заполните вектор или массив(из "дней"),размером 30 элементов
// -----------------
// расчитайте - среднюю температуру за месяцб максимальную и минимальную температуру
// кол-во дождевых дней
#include<iostream>
#include<vector>
#include<ctime>
#include<string>
#include<algorithm>
using namespace std;
class day{
    private:
    int t;
    int speed;
    string o;
    int a;
    public:
    day(){
        t=rand()%(40-(-30)+1)+(-30);
        speed=rand()%(30-(-0)+1)+(-0);
        int a= rand()%3;
        if(a==0 and t<0){
            o="снег";
        }
        else if(a==1 and t>0){
            o="дождь";
        }
        else {
            o="без осадков";
        }
    }
    int getT(){
        return t;
    }
    int getSpeed(){
        return speed;
    }
    string getO(){
        return o;
    }
};
int main(){
    float sum=0;
    int c,n;
    int k=0;
    vector<day>v(30);
    vector<int>g;
    srand(time(0));
    for (int i = 0; i < 30; i++) {
        cout << "день " << i + 1 << ": ";
        cout << "температура: " << v[i].getT() <<endl;
        cout << "скорость ветра: " << v[i].getSpeed() <<endl;
        cout << "тип осадков: " << v[i].getO() << endl;
    }
    cout<<endl;
    for(int i = 0; i < 30; i++){
        sum+=v[i].getT();
    }
    for(int i = 0; i < 30; i++){
        g.push_back(v[i].getT());
    }
    c=*max_element(g.begin(),g.end());
    n=*min_element(g.begin(),g.end());
    
    for(int i = 0;i<30;i++){
        if(v[i].getO()=="дождь"){
            k++;
        }
        else{
            k=k-0;
        }
    }
    cout<<"средняя temp: "<<sum/30<<endl;
    cout<<"min temp: "<<n<<endl;
    cout<<"max temp: "<<c<<endl;
    cout<<"кол-во дождевых дней: "<<k;
}
