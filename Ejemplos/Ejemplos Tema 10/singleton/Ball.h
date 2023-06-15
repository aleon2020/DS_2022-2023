#include <iostream>

using namespace std;

class Ball {
public:
  static Ball* getTheBall();
  void move (int x, int y);
  void showPos ();
  Ball (Ball &otherBall) = delete; // singletons should not be cloneable
  void operator= (const Ball&) = delete; // singletons should not be assignable

protected:
  Ball () : posx (0), posy (0) {}; // it will be called by getTheBall()

private:
  int posx, posy;
  static Ball* singleBall;
};
