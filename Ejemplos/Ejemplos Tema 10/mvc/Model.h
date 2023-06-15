#ifndef MODEL_H
#define MODEL_H

#include "callbacks.h"

using namespace std;

class Model { // responsible for getting/setting data
public:
  Model ();
  Model (const string&);
  string getData ();
  void setData (const string&);
  void registerEvent (DataChangedCallback callback);

private:
  string data = "";
  DataChangedCallback event = nullptr;
};
#endif
