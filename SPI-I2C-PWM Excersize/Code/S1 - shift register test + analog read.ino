#include <ShiftregS1.h>
ShiftregS1 dorito;

void setup(){
  
  }
void loop(){
  dorito.clearBoard();
  dorito.forwards(analogRead(A3));
  delay(1000); 
  
 }

 




