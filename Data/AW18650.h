// This file contains the information of a battery type cell.
// It is important to use the same size table for all battery types.
// First row is the voltage
// Second row is the percentage in capacity
// Third row is the percentage in energy


uint8_t batteryAh[][] = {
	{2.8, 2.9, 3.0, 3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4.0, 4.1, 4.2, 4.3, 4.4, 4.5},
	{  0,   0,   0,   0,   0,   0,   0,   1,   3,  14,  43,  61,  78,  92, 100, 100, 100, 100},
	{  0,   0,   0,   0,   0,   0,   0,   1,   3,  14,  43,  61,  78,  92, 100, 100, 100, 100}
};