#include <iostream>
using namespace std;
int plus(int a,int b){
    return a+b;
}
float plus(float a,float b){
    return a+b;
}
double plus(double a,double b){
    return a+b;
}
double plus(int a,double b){
    return a+b;
}
double plus(double a,int b){
    return a+b;
}
int minus(int a,int b){
    return a-b;
}
float minus(float a,float b){
    return a-b;
}
double minus(double a,double b){
    return a-b;
}
double minus(int a,double b){
    return a-b;
}
double minus(double a,int b){
    return a-b;
}
int ymnog(int a,int b){
    return a*b;
}
float ymnog(float a,float b){
    return a*b;
}
double ymnog(double a,double b){
    return a*b;
}
double ymnog(int a,double b){
    return a*b;
}
double ymnog(double a,int b){
    return a*b;
}
int del(int a,int b){
    if(a==0 or b==0){
        cout<<"делить на ноль нельзяя"<<endl;
        return 0;
    }
    return a/b;
}
float del(float a,float b){
    if(a==0 or b==0){
        cout<<"делить на ноль нельзяя"<<endl;
        return 0;
    }
    return a/b;
}
double del(double a,double b){
    if(a==0 || b==0){
        cout<<"делить на ноль нельзяя"<<endl;
        return 0;
    }
    return a/b;
}
double del(int a,double b){
    if(a==0 || b==0){
        cout<<"делить на ноль нельзяя"<<endl;
        return 0;
    }
    return a/b;
}
double del(double a,int b){
    if(a==0 || b==0){
        cout<<"делить на ноль нельзяя"<<endl;
        return 0;
    }
    return a/b;
}
int main() {
    cout<<"";
}