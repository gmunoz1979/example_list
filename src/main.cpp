#include <iostream>
#include <memory>

#include "list.h"

using namespace std;

int main() {
    List list(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);

    list.show();

    cout << endl;

    list.remove(1);

    list.show();

    return 0;
}