#pragma once
#include "Rectangle.hpp"

template<typename Tc, typename Tp = double, typename Ts = double>
class Carree : public Rectangle<Tc,Tp,Ts> {
public:
    Carree(Point<Tc> const& c, Tc cote)
        : Rectangle<Tc,Tp,Ts>(c, cote, cote) {}

    void afficher(std::ostream& os) const override {
        os << ", cote=" << this->largeur   // largeur == hauteur
           << ", perimetre=" << this->perimetre()
           << ", surface=" << this->surface()
           << ")";
    }
};
