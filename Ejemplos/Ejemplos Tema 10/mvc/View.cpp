#include "View.h"

View::View () {}

View::View (const Model &model) {
  this->model = model;
}

void View::setModel (const Model &model) {
  this->model = model;
}

void View::renderData () {
  cout << "Data = " << model.getData() << endl;
}

