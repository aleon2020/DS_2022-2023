#include "Ball.h"

int main () {
  Ball* ball = Ball::getTheBall ();
  int posx = 0, posy = 0;
  
  cout << "You got the ball! Choose its position (x, y):\n";
  cout << "> ";
  cin >> posx;
  cout << "> ";
  cin >> posy;
  
  ball->move (posx, posy);
  ball->showPos();
  
  // Ball* anotherBall1 = Ball::getTheBall (); // exec. time error!
  // Ball* anotherBall2 = new Ball (); // comp. time error!
}
