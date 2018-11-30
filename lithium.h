#include ".../lithium.c"


// Include the cell type you want to use

#include ".../Data/AW18650.h"
//#include ".../Data/SANYO18650_2600.h"
//#include ".../Data/PANASONIC_CGR_18650_CH.h"
//#include ".../Data/PANASONIC_NCR_18650_A.h"
//#include ".../Data/PANASONIC_NCR_18650_B.h"

uint8_t GivePercent(float voltage, uint8_t capType);
// Returns remaining percentage of the battery
// Use capType = 0 for capacity
// Use capType = 1 for energy