#include <iostream>
#include "pointT.hpp"

using namespace std;

int main() {
pointT<int> P1(2,3);
pointT<int> P2(P1);
cout << P1;
cout << P2;
P2.translater(1,1);
cout << P2;
return 0;
}
