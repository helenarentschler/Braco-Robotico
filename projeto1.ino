#include "Servo.h"
#include "Analog.h"

Analog analog1(A8, A9, 22);
Analog analog2(A10, A11, 23);

Servo servo1(11, 0, 180);
Servo servo2(10, 0, 180);
Servo servo3(9, 0, 180);
Servo servo4(8, 0, 100);

int x1 = 0, y1 = 0, y2 = 0, x2 = 0;

void setup() {
  
  servo1.begin();
  servo2.begin();
  servo3.begin();
  servo4.begin();

  analog1.begin();
  analog2.begin();

  servo1.setBase(analog1.getBaseValue(analog1._pinX));
  servo2.setBase(analog1.getBaseValue(analog1._pinY));
  servo3.setBase(analog2.getBaseValue(analog2._pinY));
  servo4.setBase(analog2.getBaseValue(analog2._pinX));

}

void loop() {

  x1=analogRead(analog1._pinX);
  y1=analogRead(analog1._pinY);
  y2=analogRead(analog2._pinY);
  x2=analogRead(analog2._pinX);

  servo1.move(x1);
  servo2.move(y1);
  servo3.move(y2);
  servo4.move(x2);

  servo1.write();
  servo2.write();
  servo3.write();
  servo4.write();

}
