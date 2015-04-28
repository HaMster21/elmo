#include <iostream>
#include <locale>

void make_locale_aware() {
    std::locale::global(std::locale(""));
    std::cout.imbue(std::locale(""));
}

int main() {
    make_locale_aware();
    std::cout << "Hello world" << std::endl;
}

