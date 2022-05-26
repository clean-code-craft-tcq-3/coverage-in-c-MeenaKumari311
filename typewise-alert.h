#pragma once

double lowerLimit = 0;
double upperLimit = 0;
BreachType breachType=NORMAL;

typedef enum {
  PASSIVE_COOLING,
  HI_ACTIVE_COOLING,
  MED_ACTIVE_COOLING
} CoolingType;

typedef enum {
  NORMAL,
  TOO_LOW,
  TOO_HIGH
} BreachType;

BreachType inferBreachAndAlert( void (*Alert()), double value, double lowerLimit, double upperLimit)
void DefineLimitsForPASSIVE_COOLING();
void DefineLimitsForHI_ACTIVE_COOLING();
void DefineLimitsForMED_ACTIVE_COOLING();
void sendToEmailForToo_Low(BreachType breachType);
void sendToEmailForToo_High(BreachType breachType);
void sendToController(BreachType breachType);

typedef enum {
  TO_CONTROLLER,
  TO_EMAIL
} AlertTarget;

typedef struct {
  CoolingType coolingType;
  char brand[48];
} BatteryCharacter;

void checkAndAlert(  void (*Alert(BreachType breachType)),void (*DefineLimits()), double temperatureInC);
