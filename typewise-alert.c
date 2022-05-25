#include "typewise-alert.h"
#include <stdio.h>

BreachType inferBreach(double value, double lowerLimit, double upperLimit) {
  if(value < lowerLimit) {
    return TOO_LOW;
  }
  if(value > upperLimit) {
    return TOO_HIGH;
  }
  return NORMAL;
}

BreachType classifyTemperatureBreach (BreachType (*Classify())) 


{
 int lowerLimit = 0;
  int upperLimit = 0;
  BreachType type=Classify();
return type;
 }


