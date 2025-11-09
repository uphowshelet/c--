// #include <iostream>
// #include<ctime>
// using namespace std;
// class Account {
// public:
//     Account(string first, string middle, string last, int acc_num, double start_balance = 0.0) {
//         first_name = first;
//         middle_name = middle;
//         last_name = last;
//         account_number = acc_num;
//         balance = start_balance;
//         id = next_id++;
//     }
//     static Account registerAccount() {
//         string first, middle, last;


//         cout << "введите фамилию: ";
//         cin >> last;
//         cout << "введите имя: ";
//         cin >> first;
//         cout << "введите отчество: ";
//         cin >> middle;
//         int acc_num = generate_num();
//         return Account(first, middle, last, acc_num);
//     }
//     void deposit(double sym) {
//         if (sym > 0) {
//             balance += sym;
//             cout << "вополнение на " << sym << ".баланс: " << balance << endl;
//         } else {
//             cout << "нельзя внести отрицательную сумму!" << endl;
//         }
//     }

//     void cash_withdrawal(double sym) {
//         if (sym > 0 and sym <= balance) {
//             balance -= sym;
//             cout << "снято: " << sym << ".баланс: " << balance << endl;
//         } else {
//             cout << "неверная сумма или недостаточно средств" << endl;
//         }
//     }
    

//     double print_balance() const {
//         return balance;
//     }

//     void printInfo() const {
//         cout << "ID: " << id
//              << ", Владелец: " << last_name << " " << first_name << " " << middle_name
//              << ", Номер счёта: " << account_number
//              << ", Баланс: " << balance << endl;
//     }

// private:
//     string first_name;
//     string middle_name;
//     string last_name;
//     int id;
//     double balance;
//     int account_number;
//     static int next_id;
//     static int b;
//     static int generate_num() {
      
//         return rand() % 900000 + 100000;
//     }
// };
// int Account::next_id = 1;

// int main() {
//     srand(time(0));
//     cout << "=== Регистрация нового аккаунта ===" << endl;
//     Account acc1 = Account::registerAccount();

//     cout << "\n=== Информация об аккаунте ===" << endl;
//     acc1.printInfo();

//     acc1.deposit(500);
//     acc1.cash_withdrawal(200);
// }









#include <iostream>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

class Account {
public:
    Account(string first, string middle, string last, int acc_num, string pass, double start_balance = 0.0) {
        first_name = first;
        middle_name = middle;
        last_name = last;
        account_number = acc_num;
        password = pass;
        balance = start_balance;
        id = next_id++;
    }
    static Account sozdatAccount() {
        string first, middle, last, pass;
        cout << "Введите фамилию: ";
        cin >> last;
        cout << "Введите имя: ";
        cin >> first;
        cout << "Введите отчество: ";
        cin >> middle;
        cout << "Введите пароль: ";
        cin >> pass;  
        int acc_num = sgenerirovatNomerScheta();
        return Account(first, middle, last, acc_num, pass);
    }
    bool proveritParol(string pass) const {
        return password == pass;
    }
    void popolnit(double summa) {
        if (summa > 0) {
            balance += summa;
            cout << "Пополнение на " << summa << " руб. Баланс: " << balance << " руб." << endl;
        } else {
            cout << "Нельзя внести отрицательную сумму!" << endl;
        }
    }
    void snyatNalichnye(double summa) {
        if (summa > 0 && summa <= balance) {
            balance -= summa;
            cout << "Снято: " << summa << " руб. Баланс: " << balance << " руб." << endl;
        } else {
            cout << "Неверная сумма или недостаточно средств!" << endl;
        }
    }
    void perevesti(Account& poluchatel, double summa) {
        if (summa > 0 && summa <= balance) {
            this->balance -= summa;
            poluchatel.balance += summa;
            cout << "Перевод " << summa << " руб. на счет " << poluchatel.poluchitNomerScheta() << " выполнен!" << endl;
            cout << "Ваш баланс: " << balance << " руб." << endl;
        } else {
            cout << "Недостаточно средств для перевода!" << endl;
        }
    }
    double poluchitBalance() const {
        return balance;
    }
    int poluchitNomerScheta() const {
        return account_number;
    }
    string poluchitPolnoeImya() const {
        return last_name + " " + first_name + " " + middle_name;
    }
    void pokazatInfo() const {
        cout << "Владелец: " << poluchitPolnoeImya() << endl;
        cout << "Номер счёта: " << account_number << endl;
        cout << "Баланс: " << balance << " руб." << endl;
    }
private:
    string first_name;
    string middle_name;
    string last_name;
    string password;
    int id;
    double balance;
    int account_number;
    
    static int next_id;

    static int sgenerirovatNomerScheta() {
        return rand() % 900000 + 100000;
    }
};
int Account::next_id = 1;
class Bank {
private:
    vector<Account> accounts;
    Account* tekushiyPolzovatel;
public:
    Bank() {
        tekushiyPolzovatel = nullptr;
    }
    void sozdatAccount() {
        cout << "\n=== СОЗДАНИЕ НОВОГО СЧЕТА ===" << endl;
        Account newAcc = Account::sozdatAccount();
        accounts.push_back(newAcc);
        cout << "Счет успешно создан!" << endl;
        newAcc.pokazatInfo();
    }
    Account* naytiAccount(int nomerScheta) {
        for (auto& acc : accounts) {
            if (acc.poluchitNomerScheta() == nomerScheta) {
                return &acc;
            }
        }
        return nullptr;
    }
    bool voiti() {
        int nomerScheta;
        string parol;
        cout << "Введите номер счета: ";
        cin >> nomerScheta;
        cout << "Введите пароль: ";
        cin >> parol;
        Account* foundAccount = naytiAccount(nomerScheta);
        if (foundAccount) {
            Account& userAccount = *foundAccount;
            if (userAccount.proveritParol(parol)) {
                tekushiyPolzovatel = foundAccount;
                cout << "Успешный вход! Добро пожаловать, " << userAccount.poluchitPolnoeImya() << "!" << endl;
                return true;
            }
        }   
        cout << "Неверный номер счета или пароль!" << endl;
        tekushiyPolzovatel = nullptr;
        return false;
    }
    void vyiti() {
        if (tekushiyPolzovatel) {
            Account& currentUser = *tekushiyPolzovatel;
            cout << "Выход из аккаунта " << currentUser.poluchitPolnoeImya() << endl;
            tekushiyPolzovatel = nullptr;
        }
    }
    bool polzovatelVoshiel() const {
        return tekushiyPolzovatel != nullptr;
    }
    void pokazatInfoTekushegoPolzovatelya() {
        if (tekushiyPolzovatel) {
            cout << "\n=== ИНФОРМАЦИЯ О СЧЕТЕ ===" << endl;
            Account& currentUser = *tekushiyPolzovatel;
            currentUser.pokazatInfo();
        }
    }
    void popolnitTekushiySchet() {
        if (!tekushiyPolzovatel) return;
        double summa;
        cout << "Введите сумму пополнения: ";
        cin >> summa;
        Account& currentUser = *tekushiyPolzovatel;
        currentUser.popolnit(summa);
    }
    void snyatSTekushegoScheta() {
        if (!tekushiyPolzovatel) return;
        double summa;
        cout << "Введите сумму для снятия: ";
        cin >> summa;
        Account& currentUser = *tekushiyPolzovatel;
        currentUser.snyatNalichnye(summa);
    }
    void perevestiNaDrugoySchet() {
        if (!tekushiyPolzovatel) return;
        int schetPoluchatelya;
        double summa;
        cout << "Введите номер счета получателя: ";
        cin >> schetPoluchatelya;
        cout << "Введите сумму перевода: ";
        cin >> summa;
        Account* poluchatel = naytiAccount(schetPoluchatelya);
        if (poluchatel) {
            Account& currentUser = *tekushiyPolzovatel;
            Account& recipient = *poluchatel;
            currentUser.perevesti(recipient, summa);
        } else {
            cout << "Счет получателя не найден!" << endl;
        }
    }
};
void pokazatGlavnoeMenu() {
    cout << "\n=== ГЛАВНОЕ МЕНЮ ===" << endl;
    cout << "1. Создать новый счет" << endl;
    cout << "2. Войти в аккаунт" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите действие: ";
}
void pokazatMenuPolzovatelya() {
    cout << "\n=== ЛИЧНЫЙ КАБИНЕТ ===" << endl;
    cout << "1. Информация о счете" << endl;
    cout << "2. Пополнить счет" << endl;
    cout << "3. Снять наличные" << endl;
    cout << "4. Перевод другому клиенту" << endl;
    cout << "5. Выйти из аккаунта" << endl;
    cout << "Выберите действие: ";
}
int main() {
    srand(time(0));
    Bank bank;
    int vibor;
    cout << "=== МОБИЛЬНЫЙ БАНК ===" << endl;
    do {
        if (!bank.polzovatelVoshiel()) {
            pokazatGlavnoeMenu();
            cin >> vibor;
            switch (vibor) {
                case 1:
                    bank.sozdatAccount();
                    break;
                case 2:
                    bank.voiti();
                    break;
                case 0:
                    cout << "До свидания!" << endl;
                    break;
                default:
                    cout << "Неверный выбор!" << endl;
                    break;
            }
        } else {
            pokazatMenuPolzovatelya();
            cin >> vibor;
            switch (vibor) {
                case 1:
                    bank.pokazatInfoTekushegoPolzovatelya();
                    break;
                case 2:
                    bank.popolnitTekushiySchet();
                    break;
                case 3:
                    bank.snyatSTekushegoScheta();
                    break;
                case 4:
                    bank.perevestiNaDrugoySchet();
                    break;
                case 5:
                    bank.vyiti();
                    break;
                default:
                    cout << "Неверный выбор!" << endl;
                    break;
            }
        }
    } while (vibor != 0);
}
