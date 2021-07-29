#include <LiquidCrystal.h>

#define RS 12
#define E 11

char str[]="Hello, students. You are so smart and handsome!";
LiquidCrystal mylcd(RS, E, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  mylcd.begin(16, 2);
  mylcd.print(&str[0]);
  mylcd.setCursor(0,1);
  mylcd.print(&str[16]);
}

void loop() {
  // put your main code here, to run repeatedly:

}
