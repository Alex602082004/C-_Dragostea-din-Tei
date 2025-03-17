//
// Created by Alex on 03.06.2024.
//

#ifndef DRAGOSTEA_DIN_TEI_REPO_H
#define DRAGOSTEA_DIN_TEI_REPO_H

#include "manuscris.h"
#include <iostream>
#include <vector>

using namespace std;

class Repo {
private:
    vector<Manuscris> carti;
public:
    Repo() {}

    explicit Repo(const vector<Manuscris> &carti) : carti(carti) {}

    void add(const Manuscris &m) {
        carti.push_back(m);
    }

    vector<Manuscris> getall() {
        return carti;
    }

    int size() const {
        return carti.size();
    }

    Manuscris getelem(int i) {
        return carti[i];
    }

    void remove(Manuscris& m){
        int j=0;
        for (int i = 0; i < carti.size(); ++i) {
            if(carti[i]==m)
                j=i;
        }
        carti.erase(carti.begin()+j);
    }

    friend ostream &operator<<(ostream &os, const Repo &repo) {
        for (int i = 0; i < repo.size(); ++i) {
            cout << repo.carti[i] << endl;
        }
        return os;
    }
};

#endif //DRAGOSTEA_DIN_TEI_REPO_H
