//
// Created by Alex on 03.06.2024.
//

#ifndef DRAGOSTEA_DIN_TEI_UI_H
#define DRAGOSTEA_DIN_TEI_UI_H

#include <cstring>
#include "service.h"

class UI {
private:
    Service service;
public:
    UI() {};

    explicit UI(const Service &service) : service(service) {}

    void menu() {
        cout << "1.Afisare"
                "\n2.Afisare >50 pagini"
                "\n3.Modificare an"
                "\n4.Transformare"
                "\n5.Exit";
    }

    void run() {
        while (true) {
            menu();
            int option;
            cout << "\nAlegeti optiunea:";
            cin >> option;
            if (option == 1)
                afisare();
            if (option == 2)
                afisare_50();
            if (option == 3)
                modificare();
            if (option == 4)
                transformare();
            if (option == 5)
                break;

        }
    }

    void afisare() {
        cout << service;
    }

    void afisare_50() {
        for (int i = 0; i < service.size(); ++i) {
            if (service.getelem(i).getNr() < 50)
                cout << service.getelem(i) << endl;
        }
    }

    void modificare() {
        string cuvinte[] = {"poveste", "povestire", "story"};
        for (auto &i: cuvinte) {
            for (int j = 0; j < service.size(); ++j) {
                if (service.getelem(j).getTitlu().find(i)) {
                    Manuscris m=service.getelem(j);
                    service.remove(m);
                    m.setAn(2024);
                    service.add(m);
                }
            }
        }
    }

    void transformare() {
        for (int i = 0; i < service.size(); ++i) {
            if (service.getelem(i).getNr() > 200) {
                Manuscris m1 = service.getelem(i);
                Manuscris m2 = service.getelem(i);
                service.remove(m1);
                i--;
                m1.setNr(m1.getNr() / 2);
                m1.setTitlu(m1.getTitlu() + "Volum 1");
                m2.setTitlu(m2.getTitlu() + "Volum 2");
                m2.setNr(m2.getNr() / 2);
                service.add(m1);
                service.add(m2);
            }
        }
    }

};

#endif //DRAGOSTEA_DIN_TEI_UI_H
