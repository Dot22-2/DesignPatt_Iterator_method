#pragma once
#include "User.hpp"

class IUserIterator {
public:
    virtual ~IUserIterator() = default;
    virtual bool hasNext() const = 0;
    virtual User* next() = 0;
};
