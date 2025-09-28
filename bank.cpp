#include <iostream>
#include<ctime>
using namespace std;
class Account {
public:
    Account(string first, string middle, string last, int acc_num, double start_balance = 0.0) {
        first_name = first;
        middle_name = middle;
        last_name = last;
        account_number = acc_num;
        balance = start_balance;
        id = next_id++;
    }
    static Account registerAccount() {
        string first, middle, last;


        cout << "введите фамилию: ";
        cin >> last;
        cout << "введите имя: ";
        cin >> first;
        cout << "введите отчество: ";
        cin >> middle;
        int acc_num = generate_num();
        return Account(first, middle, last, acc_num);
    }
    void deposit(double sym) {
        if (sym > 0) {
            balance += sym;
            cout << "вополнение на " << sym << ".баланс: " << balance << endl;
        } else {
            cout << "нельзя внести отрицательную сумму!" << endl;
        }
    }

    void cash_withdrawal(double sym) {
        if (sym > 0 and sym <= balance) {
            balance -= sym;
            cout << "снято: " << sym << ".баланс: " << balance << endl;
        } else {
            cout << "неверная сумма или недостаточно средств" << endl;
        }
    }
    

    double print_balance() const {
        return balance;
    }

    void printInfo() const {
        cout << "ID: " << id
             << ", Владелец: " << last_name << " " << first_name << " " << middle_name
             << ", Номер счёта: " << account_number
             << ", Баланс: " << balance << endl;
    }

private:
    string first_name;
    string middle_name;
    string last_name;
    int id;
    double balance;
    int account_number;
    static int next_id;
    static int b;
    static int generate_num() {
      
        return rand() % 900000 + 100000;
    }
};
int Account::next_id = 1;

int main() {
    srand(time(0));
    cout << "=== Регистрация нового аккаунта ===" << endl;
    Account acc1 = Account::registerAccount();

    cout << "\n=== Информация об аккаунте ===" << endl;
    acc1.printInfo();

    acc1.deposit(500);
    acc1.cash_withdrawal(200);
}
