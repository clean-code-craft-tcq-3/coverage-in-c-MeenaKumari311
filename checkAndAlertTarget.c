#include "typewise-alert.h"
#include <stdio.h>

void checkAndAlert(  void (*Alert()),void (*DefineLimits()), double temperatureInC)
 {
DefineLimits();
breachType=inferBreachAndAlert(void (*Alert()), temperatureInC, lowerLimit, upperLimit);
}

BreachType inferBreachAndAlert(void (*Alert()), double value, double lowerLimit, double upperLimit)
{
	  if(value < lowerLimit)
	{
	return breachType;
	Alert();
	 }
	  if(value > upperLimit) 
	{
	return breachType;
	Alert();
	  }
}
