// Class MyObject and main are included in this file.
// They should be in separated files.

#include<iostream>
#include<set>
#include<string>

class MyObject {
public:
  MyObject(std::string name_, std::string surname_) :
      name (name_), surname (surname_) {}
      
  bool operator< (const MyObject & object) const {
      std::string right = object.name + object.surname;
      std::string left = this->name + this->surname;
      return (left < right);
  }
  
  friend std::ostream& operator<<(std::ostream& os, const MyObject& obj);
  
private:
  std::string name;
  std::string surname;
}; // end class MyObject

std::ostream& operator<< (std::ostream& os, const MyObject& obj) { // friend method
    os << "Name: " << obj.name << " & "  << "Surname " << obj.surname << std::endl;
    return os;
}

//-----------------------------------------------

int main() {
    std::set<MyObject> mySetOfObjects;
    MyObject obj1("name1", "surname1");
    MyObject obj2("name2", "surname2");
    MyObject obj3("name3", "surname3");
    MyObject obj4("name1", "surname1"); // duplicate object
    mySetOfObjects.insert(obj1);
    mySetOfObjects.insert(obj2);
    mySetOfObjects.insert(obj3);
    mySetOfObjects.insert(obj4); // it will not be inserted because its duplicate

    // iteration through all the elements in the set to show them:
    for (std::set<MyObject>::iterator it=mySetOfObjects.begin(); it!=mySetOfObjects.end(); ++it)
      std::cout << *it;

    return 0;
}
