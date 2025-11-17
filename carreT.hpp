#pragma once
#include <iostream>

#include "rectangleT.hpp"

template<typename T, typename P, typename S>
class carreT : public rectangleT<T, P, S> {
private:
    T c;
public:
    //constructor
    carreT(T x, T y, T c);
};

template<typename T, typename P, typename S>
carreT<T, P, S>::carreT(T x, T y, T c) : rectangleT<T, P, S>(x, y, c, c) {
    this->c = c;
} 