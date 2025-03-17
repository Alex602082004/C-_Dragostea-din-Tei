//
// Created by Alex on 03.06.2024.
//

#ifndef DRAGOSTEA_DIN_TEI_SERVICE_H
#define DRAGOSTEA_DIN_TEI_SERVICE_H

#include <ostream>
#include "repo.h"

class Service {
private:
    Repo repo;
public:
    Service() {}

    explicit Service(const Repo &repo) : repo(repo) {}

    vector<Manuscris> getall() {
        return repo.getall();
    }

    void add(const Manuscris &m) {
        repo.add(m);
    }

    int size() {
        return repo.size();
    }

    Manuscris getelem(int i) {
        return repo.getelem(i);
    }

    void remove(Manuscris &m) {
        repo.remove(m);
    }

    friend ostream &operator<<(ostream &os, const Service &service) {
        os << service.repo;
        return os;
    }
};

#endif //DRAGOSTEA_DIN_TEI_SERVICE_H
