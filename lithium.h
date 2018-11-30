#include ".../lithium.c"
#include ".../Data/AW18650.h"

uint8_t GivePercent(float voltage, uint8_t capType);
// Returns remaining percentage of the battery
// Use capType = 0 for capacity
// Use capType = 1 for energy