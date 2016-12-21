#include <wiringpi.h>
#include <stdio.h>
#nclude <time.h>

class InputMapper {

public:
void init(ControlMapping m);
void update(int power, float angle);
void close();

}

void init(ControlMapping m) {
  for(int i = 0; len(m); i++) {
    z[i] = m[i].map;
  }
  this.engine = wiringPi.init(z[0]);
  this.steering = wiringPi.init(z[1]);
}

void update(int power, float angle) {
  double delta = time.Now - this.old;
  double normalizedPwr = power / delta
  PowerMapping x = new PowerMapping([normalzedPwr, nPwr > 0 ? 1 : 0, null, null]);
  this.engine.pwmWrite(normalizedPwr, pins.ENGINE_PWM);
  this.steering.write();
  this.old = time.Now();
}
