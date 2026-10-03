#include <iostream>
#include <limits>

void test_asan() {
    int* array = new int[5];
    array[0] = 10;

    // выход за границы динамического массива. Исправлен
    array[4] = 42; 
    
    std::cout << "ASan test value: " << array[0] << std::endl;
    delete[] array;
}

void test_ubsan() {
    // деление на ноль. Исправлен
    int num = 101/1;
    
    std::cout << "UBSan test value: " << num << std::endl;
}

int main() {
    std::cout << "--- Запуск теста ASan ---" << std::endl;
    test_asan();
    
    std::cout << "\n--- Запуск теста UBSan ---" << std::endl;
    test_ubsan();
    
    return 0;
}
