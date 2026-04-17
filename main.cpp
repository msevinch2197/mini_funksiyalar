#include <iostream>
using namespace std;

// 1. Ism bilan salom
void salomBer(string ism) {
    cout << "Salom, " << ism << "!" << endl;
}

// 2. Raqam chiqarish
void raqamChiqar(int son) {
    cout << "Raqam: " << son << endl;
}

// 3. Ikkita raqam qo‘shish
void yigindi(int a, int b) {
    cout << "Yig‘indi: " << a + b << endl;
}

// 4. Ism va yosh
void ismYosh(string ism, int yosh) {
    cout << ism << " " << yosh << " yoshda." << endl;
}

int main() {
    // 1
    salomBer("Ali");

    // 2
    raqamChiqar(100);

    // 3
    yigindi(5, 7);

    // 4
    ismYosh("Vali", 20);

    return 0;
}
