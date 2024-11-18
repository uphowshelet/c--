// объявите классы в с++
// выберите любой обстрактный или физический объект
// опишите его 3-5 полями разного типа
// для каждого поля объявите функции доступа(сеттер геттер)
// в функции main создайте объект данного класса
// и заполните все его поля с помощью сеттер 
#include<iostream>
#include<string>
using namespace std;
class litenergy{
    private:
        string taste; 
        float volume;
        string color;
    public:
        void setTaste(string a){
            taste = a;
        }
        string getTaste(){
            return taste;
        }
        void setVolume(float b){
            volume = b;
        }
        float getVolume(){
            return volume;
        }
        void setColor(string c){
            color = c;
        }
        string getColor(){
            return color;
        }
};
int main(){
    litenergy litenergy1;
    litenergy1.setTaste("classic");
    litenergy1.setVolume(0.330);
    litenergy1.setColor("tiffani&black");
    cout<<litenergy1.getTaste()<<endl;
    cout<<litenergy1.getVolume()<<endl;
    cout<<litenergy1.getColor()<<endl;
}
