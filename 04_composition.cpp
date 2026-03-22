#include <iostream>

class Engine {
private:
    int power;
public:
    Engine(int p = 100) : power(p) {
        std::cout << "Engine() constructor, power=" << power << std::endl;
    }

    ~Engine() {
        std::cout << "~Engine() destructor" << std::endl;
    }

    void start() const {
        std::cout << "Engine started (power=" << power << ")" << std::endl;
    }
};

class Car {
private:
    Engine engine;          // КОМПОЗИЦИЯ: объект (создаётся автоматически)
    Engine* extraEngine;    // КОМПОЗИЦИЯ: указатель (создаём вручную)

public:
    Car(int power, int extraPower) : engine(power) {
        std::cout << "Car() constructor" << std::endl;
        extraEngine = new Engine(extraPower);
    }

    ~Car() {
        std::cout << "~Car() destructor" << std::endl;
        delete extraEngine;   // обязательно удаляем!
    }

    void test() const {
        std::cout << "Testing car:" << std::endl;
        engine.start();
        extraEngine->start();
    }
};

int main() {
    std::cout << "=== Creating Car ===" << std::endl;
    Car myCar(150, 200);
    
    std::cout << "\n=== Testing ===" << std::endl;
    myCar.test();
    
    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}