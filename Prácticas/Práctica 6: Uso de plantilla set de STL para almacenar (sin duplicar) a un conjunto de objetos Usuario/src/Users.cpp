#include <iostream>
#include <iterator>
#include <set>
 
template<typename T1, typename T2>
class Users {
public:
    T1 name;
    T2 ID;
    // constructor
    Users(T1 name, T2 ID){
        this->name= name;
        this->ID = ID;
    }
    // overload `<` operator to use a `Users` object as a key in a `std::set`
    bool operator<(Users const &users) const {
        return name < users.name || (name == users.name && ID < users.ID);
    }
};
 
int main(){
    // set container
    std::set<Users<std::string, int>> set1;

    // SET1 (INITIAL STATE)
    std::cout << "EMPTY SET1: " << '\n';
    for (auto const &users: set1) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';

    // INSERT ELEMENTS
    std::cout << "\nINSERTING ELEMENTS IN SET1 ...\n";

    set1.insert({"Alberto",4});
    set1.insert({"Pablo",3});
    set1.insert({"Carla",5});
    set1.insert({"Pablo",3});
    set1.insert({"Julia",7});

    std::cout << "\nSET1: " << '\n';
    for (auto const &users: set1) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';

    // ERASE ELEMENTS
    std::cout << "ERASING ELEMENTS FROM SET1 ...\n";

    set1.erase({"Pablo",3});
    set1.erase({"Carla",5});

    std::cout << "\nSET1 AFTER ERASING: " << '\n';
    for (auto const &users: set1) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';
    
    // SIZE OF THE SET
    std::cout << "SIZE OF SET1: " << set1.size() << '\n';

    // MAXIMUM SIZE OF THE SET
    std::cout << "MAXIMUM SIZE OF SET1: " << set1.max_size() << '\n';

    // SWAP CONTENT FROM ONE SET TO ANOTHER
    std::set<Users<std::string, int>> set2;

    // CONTENT OF SET1 AND SET2 BEFORE SWAPPING
    std::cout << "\nSET1 BEFORE SWAPPING: " << '\n';
    for (auto const &users: set1) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';
    std::cout << "\nSET2 BEFORE SWAPPING: " << '\n';
    for (auto const &users: set2) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';

    set1.swap(set2);
    std::cout << "\nSWAPPING CONTENT FROM SET1 TO SET2 ...\n";

    std::cout << "\nSET1 AFTER SWAPPING: " << '\n';
    for (auto const &users: set1) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';
    std::cout << "\nSET2 AFTER SWAPPING: " << '\n';
    for (auto const &users: set2) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';

    // CLEAR ALL ELEMENTS FROM SET2
    set2.clear();
    std::cout << "CLEARING ALL ELEMENTS FROM SET2 ...\n";
    std::cout << "\nSET2 AFTER CLEARING: " << '\n';
    for (auto const &users: set2) {
        std::cout << "[" << users.name << "," << users.ID << "]\n";
    }
    std::cout << '\n';
}
