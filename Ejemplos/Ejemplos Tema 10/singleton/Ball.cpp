#include "Ball.h"

Ball* Ball::singleBall = nullptr;

Ball* Ball::getTheBall () {
  if (singleBall == nullptr)
    singleBall = new Ball ();
  else
    cout << "Error: trying to get another instance of a Ball singleton class!\n";

  return singleBall;
}

void Ball::move (int x, int y) {
  posx = x;
  posy = y;
}

void Ball::showPos () {
  cout << "Ball position: [" << singleBall->posx << ", " << singleBall->posy << "]\n";
}
