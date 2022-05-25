#include "typewise-alert.h"
BreachType PASSIVE_COOLING_BREACH(temperatureInC)
{
lowerLimit = 0;
upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}

BreachType HI_ACTIVE_COOLING(temperatureInC)
{
lowerLimit = 0;
upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}

BreachType MED_ACTIVE_COOLING(temperatureInC)
{
lowerLimit = 0;
upperLimit = 35;
return inferBreach(temperatureInC, lowerLimit, upperLimit);
}
