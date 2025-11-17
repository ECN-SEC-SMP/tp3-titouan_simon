#include <iostream>
#pragma once

template<typename T>
class Point;

template<typename T> 
std::ostream& operator<<(std::ostream &,Point<T> const& p);

template<typename T> 
class Point {
    protected:
        T x;
        T y;
    public:
        Point(T x,T y); // constructeur avec les deux parametres
        Point(Point const &p ); //Recopie de p

        //Setteurs et Guetteurs
        T getX() const;
        void setX(T x); 
        T getY() const;
        void setY(T y);

        //Translation
        void translateX(T a);
        void translateY(T b);
        void translater(T a,T b);

        // opérateur d'affichage
       friend std::ostream& operator<< <T>(std::ostream& s, Point<T> const& p);

};

template<typename T> 
Point<T>::Point(T x,T y){
    this->x = x;
    this->y =y ;
}

template<typename T>
T Point<T>::getX() const{
    return this->x;
} 

template<typename T> 
void Point<T>::setX(T x){
    this->x = x;
}

template<typename T>
T Point<T>::getY() const{
    return this->y;
}

template<typename T>
void Point<T>::setY(T y){
    this->y = y;
}

template<typename T>
void Point<T>::translateX(T a){
    this->x += a;
}

template<typename T>
void Point<T>::translateY(T b){
    this->y += b;
}

template<typename T>
void Point<T>::translater(T a,T b){
    this->x += a;
    this->y += b;
}


template <typename T> 
std::ostream& operator<<(std::ostream &o, Point<T> const &p) {
    o << "x = " << p.getX() << ", y = " << p.getY();
    return o;
}

template<typename T>
Point<T>::Point(Point<T> const& p) : x(p.x), y(p.y) {}