// Combining two 8-bit bytes from the sensor into one 16-bit value.
// Sensor readings are 16-bit (high byte + low byte) but registers are only 8 bits wide
// Shift the high byte left by 8 tom make it *256. which can be then used together to make a 16 but value

uint16_t Shiftbyte(uint8_t low, uint8_t high) 
    {
    return (high << 8) | low;
    }