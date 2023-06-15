#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
public:
   User (string = "", string = "", int = 0);
   void setNumRecord (int);
   int getNumRecord () const;
   void setName (string);
   string getName () const;
   void setSurname (string);
   string getSurname () const;
   void setPhone (int);
   int getPhone () const;
private:
   int numRecord;
   char name [10];
   char surname [15];
   int phone;
};
#endif
