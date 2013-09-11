/* 
 * File:   main.cpp
 * Author: DIANA
 *
 * Created on September 12, 2013, 1:15 AM
 */ 

#include <stdlib.h>
#include<iostream>

using namespace std;

int substract_five(int a) {
    return a - 5;
}

int add_twelve(int a) {
    return a + 12;
}

int multiply_by_3(int a) {
    return a * 3;
}

int add_56(int a) {
    return a + 56;
}

int collection(int a) {
    cout << "[" << substract_five(a) << ",";
    cout << add_twelve(a) << ", ";
    cout << multiply_by_3(a) << ", ";
    cout << add_56(a) << "]" << endl;

}

int main() {
    int i;
    cout << "i= ";
    cin >> i;
    collection(i);
    system("PAUSE");
    return 0;
}



