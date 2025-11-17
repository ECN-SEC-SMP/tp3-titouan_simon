#include <iostream>
#pragma once
#include "Point.hpp"

template<typename Tc, typename Tp, typename Ts>
class Forme;

template<typename Tc, typename Tp, typename Ts>
std::ostream& operator<<(std::ostream &,Forme<Tc,Tp,Ts> const& p);

template<typename Tc, typename Tp, typename Ts>
class Forme {
    private:

        Point<Tc> centre;

    public:

        Forme(Point<Tc> const& c) : centre(c) {}

        virtual Tp perimetre() const = 0;
        virtual Ts surface() const = 0;

        virtual void afficher(std::ostream& os) const {
        os << "Forme(centre=" << centre << ")";
        }

        // Déclaration de l'opérateur << comme fonction amie
        friend std::ostream& operator<< <Tc,Tp,Ts>(std::ostream& os, Forme<Tc,Tp,Ts> const& f);
};

template<typename Tc, typename Tp, typename Ts>
std::ostream& operator<<(std::ostream& os, Forme<Tc,Tp,Ts> const& f) {
    f.afficher(os);  
    return os;
}