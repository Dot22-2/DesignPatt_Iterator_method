# C++ Iterator Method

This repository demonstrates a clean implementation of the **Iterator** design pattern in C++ for a console-based application.

---

## Project Structure

- `IUser.hpp` – Interface for user objects  
- `User.hpp / User.cpp` – Concrete user implementation  
- `UserCollection.hpp / UserCollection.cpp` – Container class holding users  
- `UserIterator.hpp / UserIterator.cpp` – Iterator class for traversing the collection  
- `main.cpp` – Entry point showcasing iteration over user collection  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
UserCollection users;
users.addUser(new User("Alice"));
users.addUser(new User("Bob"));

UserIterator* iterator = users.createIterator();
while (iterator->hasNext()) {
    IUser* user = iterator->next();
    user->print(); // Output: Alice, then Bob
}
