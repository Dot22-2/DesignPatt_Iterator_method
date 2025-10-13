#include "User.hpp"

User::User(const std::string& n) : name(n) {}

std::string User::getName() const {
    return name;
}
