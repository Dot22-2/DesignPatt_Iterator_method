#include "UserIterator.hpp"

UserIterator::UserIterator(const std::vector<User*>& u) : users(u), index(0) {}

bool UserIterator::hasNext() const {
    return index < users.size();
}

User* UserIterator::next() {
    return hasNext() ? users[index++] : nullptr;
}
