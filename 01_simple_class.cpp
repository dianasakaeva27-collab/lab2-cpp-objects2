#include <iostream>

class Point {
private:
    int x, y;

public:
    // Конструктор без параметров
    Point() : x(0), y(0) {
        std::cout << "Point() constructor called" << std::endl;
    }

    // Конструктор с параметрами
    Point(int x, int y) : x(x), y(y) {
        std::cout << "Point(int, int) constructor called" << std::endl;
    }

    // Деструктор
    ~Point() {
        std::cout << "~Point() destructor called for (" << x << ", " << y << ")" << std::endl;
    }

    void print() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    std::cout << "=== Static creation ===" << std::endl;
    Point p1;               // конструктор без параметров
    Point p2(3, 4);         // конструктор с параметрами
    p1.print();
    p2.print();

    std::cout << "\n=== Dynamic creation ===" << std::endl;
    Point* p3 = new Point(5, 6);   // динамический объект
    p3->print();
    delete p3;                      // явное удаление

    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}