#pragma once
#include <iostream>
#include "pointT.hpp"

template<typename T, typename P, typename S>
class formeT {
protected:
    pointT<T> Centre;

public:
    
    //constructor
    formeT(T x, T y);
    formeT();

    //methods
    virtual P perimetre() const = 0; 

    virtual S surface() const = 0;

};
template<typename T, typename P, typename S>
formeT<T, P, S>::formeT(T x, T y){
    Centre = pointT<T>(x, y);
}

template<typename T, typename P, typename S>
formeT<T, P, S>::formeT() {
    Centre = pointT<T>();
}
