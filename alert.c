#include "typewise-alert.h"
//alert functions called with function pointer Alert(breachType)
sendToEmail((BreachType breachType)
{
 const char* recepient = "a.b@c.com";
  printf("To: %s\n", recepient);
  printf("Hi, the temperature is too %x \n",breachType);
}

void sendToController(BreachType breachType)
{
  const unsigned short header = 0xfeed;
  printf("%x : %x\n", header, breachType);
}
