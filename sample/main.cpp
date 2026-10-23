#include <unistd.h>
#include <iostream>
#include <thread>

int i;

void printHello() {
    std::cout << "Hello World " << i << '\n';
}

void incrementI() {
    i++;
}

int main() {
    while (true) {
        incrementI();
        printHello();

        usleep(500);
    }
}