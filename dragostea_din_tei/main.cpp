#include <iostream>
#include "UI.h"

int main() {
    Manuscris m1(100, 1900, "povestea lui Mihai");
    Manuscris m4(49, 1900, "povestea lui Mihai");
    Manuscris m2(201, 1900, "povestirea lui Mihai");
    Manuscris m3(205, 1900, "story lui Mihai");
    Repo r;
    r.add(m1);
    r.add(m2);
    r.add(m3);
    r.add(m4);
    Service s(r);
    UI ui(s);
    ui.run();
    return 0;
}
