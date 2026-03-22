#include <iostream>

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {
        std::cout << "Point() constructor called" << std::endl;
    }

    Point(int x, int y) : x(x), y(y) {
        std::cout << "Point(int, int) constructor called" << std::endl;
    }

    // КОНСТРУКТОР КОПИРОВАНИЯ
    Point(const Point& other) : x(other.x), y(other.y) {
        std::cout << "Point(const Point&) COPY constructor called" << std::endl;
    }

    ~Point() {
        std::cout << "~Point() destructor called for (" << x << ", " << y << ")" << std::endl;
    }

    void print() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    std::cout << "=== Creating p1 ===" << std::endl;
    Point p1(10, 20);
    
    std::cout << "\n=== Copying p1 to p2 (copy constructor) ===" << std::endl;
    Point p2 = p1;  // вызов конструктора копирования
    
    std::cout << "\n=== p1 and p2 ===" << std::endl;
    p1.print();
    p2.print();
    
    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}