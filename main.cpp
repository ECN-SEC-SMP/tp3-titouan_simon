#include "Point.hpp"
#include "Forme.hpp"
#include "Rectangle.hpp"
#include "Carree.hpp"
#include <iostream>


int main() {
    Point<int> pp(0, 0);

    pp.translater(1, 1);
    pp.translateX(3);
    pp.translateY(2);

    std::cout << pp << std::endl;

    Point<int> pc(0, 0);

    Rectangle<int> r(pc, 4, 6);
    Carree<int> c(pc, 4);

    std::cout << r << std::endl;


    std::cout << "r perimetre = " << r.perimetre()
              << ", surface = " << r.surface() << std::endl;

    std::cout << "c perimetre = " << c.perimetre()
              << ", surface = " << c.surface() << std::endl;
            
    return 0;
}
