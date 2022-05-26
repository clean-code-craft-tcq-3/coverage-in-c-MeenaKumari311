#include "typewise-alert.h"
#include <stdio.h>
//alert functions called with function pointer Alert(breachType)
void sendToEmail()
{
 const char* recepient = "a.b@c.com";
  printf("To: %s\n", recepient);
  printf("Hi, the temperature is not in threshold \n");
}

void sendToController()
{
  const unsigned short header = 0xfeed;
  //printf("%x : %x\n", header, breachType);
 printf("Hi, the temperature is not in threshold \n");
}
