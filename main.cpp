#include <iostream>

#include "Figure.h"

using namespace std;

int main() {

    Square square(10);
    Circle circle(10);

    cout << square.area() << " " << square.perimeter() << endl;
    cout << circle.area() << " " << circle.perimeter() << endl;

    return 0;
}
