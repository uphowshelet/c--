// #include<iostream>
// #include<string>
// using namespace std;
// class human{
//     private:
//     string name;
//     public:
//     void setName(string a){
//         name = a;
//     }
//     string getName(){
//         return name;
//     }
// };
// class student: public human
// {
//     public:
//     void learn(){
//         cout<<"я учусь!"<<endl;
//     };
//     string group;
// };
// class professor: public human
// {
//     public:
    
//     string subject;
// };
// class extramuralstudent: public student{
//     public:
//     void learn(){
//         cout<<"я бываю в универе редко"<<endl;
//     }
// };

// int main(){
// student st;
// st.learn();
// st.setName("ваня");
// cout<<st.getName()<<endl;

// extramuralstudent exstst;
// exstst.learn();

// professor pr;
// pr.subject;

// human h;
// h.setName("ибрабим");
// cout<<h.getName();
// }

#include<iostream>
#include<string>
using namespace std;
class a{
    public:
    string msgOne = "сообщение один";

    private:
    string msgTwo = "сообщение два";

    protected:
    string msgThree = "сообщение три";

};

class b: public a{
    public:
    void printmsg(){
        cout<<msgThree<<endl;
    }
};
int main(){
    b b;
    b.printmsg();
}