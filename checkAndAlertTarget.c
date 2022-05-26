#include "typewise-alert.h"
#include <stdio.h>
void checkAndAlert(  void (*Alert(breachType)), BatteryCharacter batteryChar, double temperatureInC)
 {
  //BreachType breachType = classifyTemperatureBreach( batteryChar.coolingType, temperatureInC );

Alert(breachType);
 }



//alert functions called with function pointer Alert(breachType)
sendToEmailForToo_Low((BreachType breachType)
{
 const char* recepient = "a.b@c.com";
  printf("To: %s\n", recepient);
  printf("Hi, the temperature is too low\n");
}


sendToEmailForToo_High(BreachType breachType)
{
 const char* recepient = "a.b@c.com";
 printf("To: %s\n", recepient);
      printf("Hi, the temperature is too high\n");
}

void sendToController(BreachType breachType)
{
  const unsigned short header = 0xfeed;
  printf("%x : %x\n", header, breachType);
}
