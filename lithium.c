#include <math.h>
#include ".../lithium.h"
#include ".../Data/AW18650.h"

uint8_t GivePercent(float voltage, uint8_t capType){
	if(voltage == (roundf(voltage * 10) / 10)){
		for(uint8_t i = 0; i < 16; i++){
			if(batteryAh[i][0] == voltage){
				i = 16;
				return batteryAh[i][1+capType];
			}
		}
		return -1;
	}else{
		for(uint8_t i = 0; i < 16; i++){
			float lowerVoltageBorder = batteryAh[i][0];
			float upperVoltageBorder = batteryAh[i+1][0];
			if(upperVoltageBorder > voltage){
				uint8_t lowerPercentBorder = batteryAh[i][1+capType];
				uint8_t upperPercentBorder = batteryAh[i+1][1+capType];
				i = 16;
			}
		}
		return((voltage - lowerVoltageBorder) * (upperPercentBorder - lowerPercentBorder) / (upperVoltageBorder - lowerVoltageBorde) + lowerPercentBorder);
	}
	return -1;
}