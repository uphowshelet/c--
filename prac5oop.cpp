#include <bits/stdc++.h>
using namespace std;

class Author {
    public: 
    string name;
};
class Book {
    public: string title;
    Author* author;
    void printInfo() {
        cout << "книга: " << title << ", автор: " << author->name<< endl;
    }
};
int main() {
    Author a1("Лев Толстой");
    Author a2("Фёдор Достоевский");

    Book book1("Война и мир", &a1);
    Book book2("Преступление и наказание", &a2);

    book1.printInfo();
    book2.printInfo();
}


// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;

// class Student {
//     public:
//         string name;
//         int year;
//     };
// class Group {
//     public:
//         string title;
//         vector<Student*> students; // группа «собирает» студентов, но не владеет ими

//         void addStudent(Student* s) {
//             students.push_back(s);
//         }
//         void printGroup(){
//             cout<<"группа: "<<title<<endl;
//             for(int i=i; i<students.size();i++){
//                 cout<<students[i]->name<<" - "<<students[i]->year<<" год"<<endl;
//             }
//         }
//     };
// int main(){
//     Student student1("Иван Копылов",2);
//     Student student2("Антон Астафьев",1);

//     Group group("195-3");
//     group.addStudent(&student1);
//     group.addStudent(&student2);

//     group.printGroup();
// }


// #include <bits/stdc++.h>

// #include<vector>

// using namespace std;
// class Room {
//     public: string name;
//     double area;
// };
// class House {
//     public: string address;
//     vector < Room > rooms; // комнаты – часть дома
//     void addRoom(const string & roomName, double roomArea) {
//         Room r;
//         r.name = roomName;
//         r.area = roomArea;
//         rooms.push_back(r);
//     }
//     double totalArea() {
//         double total = 0;
//         for (int i = 0; i < rooms.size(); i++) {
//             total += rooms[i].area;
//         }
//         return total;
//     }
//     void printInfo() {
//         cout << "Адрес " << address << endl;
//         cout << "Комнаты: " << endl;
//         for (int i = 0; i < rooms.size(); i++) {
//             cout << rooms[i].name << ": " << rooms[i].area << endl;

//         }
//         cout << "общая площадь: " << totalArea() << endl;
//     }
// };
// int main() {
//     House house;
//     house.address = "ул. Вершинина, д.123";

//     house.addRoom("Гостинная", 43.4);
//     house.addRoom("Спальня", 23.5);

//     house.printInfo();
// }






