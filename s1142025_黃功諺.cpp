#include <iostream>
using namespace std;

class Point {
public:
    int x;
    int y;


    Point(int xValue, int yValue) {
        x = xValue;
        y = yValue;
    }


    Point operator*(Point otherPoint) {
        return Point(x * otherPoint.x, y * otherPoint.y);
    }

    void print() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);


    Point result = p1 * p2;

  
    result.print();
    cout << "The result of multiplying the two points is: "<< endl;
    return 0;
}