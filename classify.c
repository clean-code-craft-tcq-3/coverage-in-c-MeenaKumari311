#include "typewise-alert.h"
BreachType PASSIVE_COOLING_BREACH_type()
{
  int temperatureInC=0;
int lowerLimit = 0;
int upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}

BreachType HI_ACTIVE_COOLING_type()
{
  int temperatureInC=0;
int lowerLimit = 0;
int upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}

BreachType MED_ACTIVE_COOLING_type()
{
int temperatureInC=0;
int lowerLimit = 0;
int upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}
