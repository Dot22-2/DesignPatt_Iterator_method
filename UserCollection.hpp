#pragma once
#include "User.hpp"
#include "IUser.hpp"
#include <vector>

class UserIterator;

class UserCollection {
private:
    std::vector<User*> users;

public:
    void add(User* user);
    UserIterator* createIterator() const;
    const std::vector<User*>& getUsers() const;
};
