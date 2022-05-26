#pragma once

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

BreachType inferBreach(double value, double lowerLimit, double upperLimit);
BreachType classifyTemperatureBreach (void (*Classify()));
void PASSIVE_COOLING_BREACH_type();
void HI_ACTIVE_COOLING_type();
void MED_ACTIVE_COOLING_type();
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

void checkAndAlert( void (*Alert()), BatteryCharacter batteryChar, double temperatureInC);

