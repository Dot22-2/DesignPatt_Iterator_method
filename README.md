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
UserCollection collection;
collection.add(new User("Dmytro"));
collection.add(new User("Olena"));

IUserIterator* it = collection.createIterator();
while (it->hasNext()) {
    std::cout << "[User] " << it->next()->getName() << "\n";
}
// Output:
// [User] Dmytro
// [User] Olena
