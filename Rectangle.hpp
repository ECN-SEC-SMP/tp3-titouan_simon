#pragma once
#include "Forme.hpp"

template<typename Tc, typename Tp = double, typename Ts = double>

class Rectangle : public Forme<Tc,Tp,Ts> {
protected:

    Tc largeur;
    Tc hauteur;

public:
    Rectangle(Point<Tc> const& c, Tc L, Tc H)
        : Forme<Tc,Tp,Ts>(c), largeur(L), hauteur(H) {}

    Tp perimetre() const override {
        return static_cast<Tp>(2 * (largeur + hauteur));
    }

    Ts surface() const override {
        return static_cast<Ts>(largeur * hauteur);
    }

    void afficher(std::ostream& os) const override {
        os << ", largeur=" << largeur
           << ", hauteur=" << hauteur
           << ", perimetre=" << perimetre()
           << ", surface=" << surface()
           << ")";
    }
};
