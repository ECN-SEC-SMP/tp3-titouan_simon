#pragma once
#include <iostream>

template<typename T>
class pointT {
protected:
    T x;
    T y;

public:
    //constructor
    pointT(T x,T y);
    pointT();
    //copy constructor
    pointT(pointT const& P);

    //getters and setters
    T getX() const;
    T getY() const;
    void setY(T y);
    void setX(T y);

    //methods
    void translater(T X, T Y);

    //friend function
    template<typename U>
    friend std::ostream& operator<<(std::ostream &, const pointT<U>&);

};

template<typename T>
pointT<T>::pointT(T x,T y){
    this->x = x;
    this->y = y;
}
template<typename T>
pointT<T>::pointT(){
    this->x = T();
    this->y = T();
}
template<typename T>
pointT<T>::pointT(pointT const& P){
    this->x = P.getX();
    this->y = P.getY();
}
template<typename T>
T pointT<T>::getX() const{
    return this->x;
}
template<typename T>
void pointT<T>::setX(T x){
    this->x = x;
}
template<typename T>
T pointT<T>::getY() const{
    return this->y;
}
template<typename T>
void pointT<T>::setY(T y){
    this->y = y;
}
template <typename T>
void pointT<T>::translater(T X, T Y){
    if(typeid(X)==typeid(getX())){
        setX(getX()+X);
        setY(getY()+Y);
    }
    else{
        std::cerr<< "Type error";
    }
}
template <typename T>
std::ostream& operator<<(std::ostream &o, const pointT<T>& P)
{
    o<<"("<<P.getX()<<","<<P.getY()<<") "<<std::endl;
    return o;
}