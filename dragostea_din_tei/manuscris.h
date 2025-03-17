//
// Created by Alex on 03.06.2024.
//

#ifndef DRAGOSTEA_DIN_TEI_MANUSCRIS_H
#define DRAGOSTEA_DIN_TEI_MANUSCRIS_H

#include <iostream>

using namespace std;

class Manuscris {
private:
    int nr, an;
    string titlu;
public:
    Manuscris() {}

    Manuscris(int nr, int an, const string &titlu) : nr(nr), an(an), titlu(titlu) {}

    int getNr() const {
        return nr;
    }

    int getAn() const {
        return an;
    }

    const string &getTitlu() const {
        return titlu;
    }

    void setAn(int an) {
        Manuscris::an = an;
    }

    void setNr(int nr) {
        Manuscris::nr = nr;
    }

    void setTitlu(const string &titlu) {
        Manuscris::titlu = titlu;
    }

    bool operator==(const Manuscris &rhs) const {
        return nr == rhs.nr &&
               an == rhs.an &&
               titlu == rhs.titlu;
    }

    bool operator!=(const Manuscris &rhs) const {
        return !(rhs == *this);
    }

    bool operator<(const Manuscris &rhs) const {
        if (nr < rhs.nr)
            return true;
        if (rhs.nr < nr)
            return false;
        if (an < rhs.an)
            return true;
        if (rhs.an < an)
            return false;
        return titlu < rhs.titlu;
    }

    bool operator>(const Manuscris &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Manuscris &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Manuscris &rhs) const {
        return !(*this < rhs);
    }

    friend ostream &operator<<(ostream &os, const Manuscris &manuscris) {
        os << "nr: " << manuscris.nr << " an: " << manuscris.an << " titlu: " << manuscris.titlu;
        return os;
    }

};

#endif //DRAGOSTEA_DIN_TEI_MANUSCRIS_H
