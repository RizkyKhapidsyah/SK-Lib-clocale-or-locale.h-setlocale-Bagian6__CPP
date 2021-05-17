#pragma warning(disable:4996)

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : Visual Studio 2019
*/

#include <clocale>
#include <iostream>
#include <conio.h>

int main() {
    std::setlocale(LC_ALL, "ja_JP.UTF-8");
    std::lconv* lc = std::localeconv();
    std::cout << "Japanese currency symbol: " << lc->currency_symbol << '(' << lc->int_curr_symbol << ")\n";

    _getch();
    return 0;;
}