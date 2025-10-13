#pragma once
#include "IUser.hpp"
#include "UserCollection.hpp"

class UserIterator : public IUserIterator {
private:
    const std::vector<User*>& users;
    size_t index;

public:
    UserIterator(const std::vector<User*>& u);
    bool hasNext() const override;
    User* next() override;
};
