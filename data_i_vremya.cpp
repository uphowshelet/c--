#include <iostream>
#include <ctime>
using namespace std;
int main() {
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    cout << "Текущая дата и время: ";
    cout << localTime->tm_mday << "." << localTime->tm_mon + 1 << "." << localTime->tm_year + 1900 << " ";
    cout << localTime->tm_hour << ":" << localTime->tm_min << ":" << localTime->tm_sec << endl;
}
