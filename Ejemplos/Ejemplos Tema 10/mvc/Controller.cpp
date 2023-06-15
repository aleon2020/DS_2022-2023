#include "Controller.h"

Controller::Controller() {}

Controller::Controller (const Model &model, const View &view) {
  this->setModel(model);
  this->setView(view);        
}

void Controller::setModel (const Model &model) {
  this->model = model;
}

void Controller::setView (const View &view) {
  this->view = view;
}

void Controller::boot () { // when system is booted
  this->view.renderData ();
}

