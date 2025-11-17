#pragma once
#include <iostream>
#include "formeT.hpp"

template<typename T, typename P, typename S>
class rectangleT : public formeT<T, P, S> {
protected:
    T l;
    T L;
public:
    //constructor
    rectangleT(T x, T y, T l, T L);

    //methods
    virtual P perimetre() const override;
    virtual S surface() const override;
};

template<typename T, typename P, typename S>
rectangleT<T, P, S>::rectangleT(T x, T y, T l, T L) : formeT<T, P, S>(x, y) {
    this->l = l;
    this->L = L;
}

template<typename T, typename P, typename S>
P rectangleT<T, P, S>::perimetre() const {
    return 2 * (l + L);
}

template<typename T, typename P, typename S>
S rectangleT<T, P, S>::surface() const {
    return l * L;
}
