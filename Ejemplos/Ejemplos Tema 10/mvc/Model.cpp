#include "Model.h"

Model::Model () { }

Model::Model (const string& data) {
  this->setData (data);
}

string Model::getData () {
  return this->data;
}

void Model::setData (const string& data) {
  this->data = data;
  if (this->event != nullptr) // data changes callback event
    this->event (data);
}

// register the event when data changes
void Model::registerEvent (DataChangedCallback callback) {
  this->event = callback;
}
