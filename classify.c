#include "typewise-alert.h"
BreachType PASSIVE_COOLING_BREACH_type()
{
  temperatureInC=0;
lowerLimit = 0;
upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}

BreachType HI_ACTIVE_COOLING_type()
{
  temperatureInC=0;
lowerLimit = 0;
upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}

BreachType MED_ACTIVE_COOLING_type()
{
temperatureInC=0;
lowerLimit = 0;
upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}
