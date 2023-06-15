#include "Controller.h"

void changeData (string data) {
  cout << "New data: " << data <<endl; 
}
 
int main() {
  Model model("Model");
  View view(model);    
  model.registerEvent (&changeData);

  Controller controller(model, view); // binds model and view

  controller.boot(); // app starts
  model.setData("Booting...");
  return 0;
}
