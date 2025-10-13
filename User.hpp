#pragma once
#include <string>

class User {
private:
    std::string name;

public:
    User(const std::string& n);
    std::string getName() const;
};
