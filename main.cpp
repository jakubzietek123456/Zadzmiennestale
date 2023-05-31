#include <iostream>

int main() {
    int age = 25;   // zmienna przechowująca wiek
    const int maxAge = 100;   // stała przechowująca maksymalny wiek

    std::cout << "Aktualny wiek: " << age << std::endl;
    age = age + 1;
    std::cout << "Wiek po roku: " << age << std::endl;

    std::cout << "Maksymalny wiek: " << maxAge << std::endl;

    return 0;
}
