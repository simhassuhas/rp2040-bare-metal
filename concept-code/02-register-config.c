// read modify and write rigisters , here configuring the accelerometer sensitivity according to datasheet
// to configure only the required bits, we read the register, modify the bits that we want to change only
// This can be done by using bitwise operations, and then write the modified value back to the register
// OR (|) with a 1 at a position sets that bit to 1, 0s elsewhere leave other bits unchanged.
// AND (&) with a 0 at a position clears that bit to 0, 1s elsewhere leave other bits unchanged.

#define ACCEL_CONFIG_reg 0x1C
uint8_t config = read_register(ACCEL_CONFIG_reg);
config = config | 0b00010000;
config = config & 0b11110111;
write_register(ACCEL_CONFIG_reg, config);