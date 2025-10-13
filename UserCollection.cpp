#include "UserCollection.hpp"
#include "UserIterator.hpp"

void UserCollection::add(User* user) {
    users.push_back(user);
}

UserIterator* UserCollection::createIterator() const {
    return new UserIterator(users);
}

const std::vector<User*>& UserCollection::getUsers() const {
    return users;
}
