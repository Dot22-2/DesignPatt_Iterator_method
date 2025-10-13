#include "UserCollection.hpp"
#include "UserIterator.hpp"
#include <iostream>

int main() {
    UserCollection collection;
    collection.add(new User("Dmytro"));
    collection.add(new User("Olena"));
    collection.add(new User("Olga"));

    IUserIterator* it = collection.createIterator();
    while (it->hasNext()) {
        std::cout << "[User] " << it->next()->getName() << "\n";
    }

    delete it;

    return 0;
}
