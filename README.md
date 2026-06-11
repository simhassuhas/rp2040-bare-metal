# rp2040-bare-metal

Learning bare-metal embedded C on the Raspberry Pi Pico (RP2040, ARM Cortex-M0+).

This repo documents my progression learning embedded systems from the ground up writing firmware in C that talks directly to hardware, no Arduino framework, using the official Pico SDK with CMake and Ninja.

## Why bare-metal?

I'm targeting hardware/embedded roles, so I'm deliberately avoiding high-level
abstractions that hide what the chip is actually doing. Every project here is built
by configuring GPIO, peripherals, and registers directly through the Pico SDK.

## Projects

### 01-blink
Blinks the onboard LED. My first from scratch program which configures GPIO pin 25 as
an output and toggles it with custom timing. Taught me pin addressing, GPIO
initialization, pin direction (input vs output), and that digital pins are on/off only
(in-between levels need PWM) or a board with digital to analog pin.

### 02-hello-uart
Prints "Hello, world!" from the Pico to my laptop over USB serial. Taught me how stdio
is initialized and routed over USB, and set up the serial output which I'll rely on for
debugging sensor data later.

## Toolchain
- Raspberry Pi Pico SDK
- ARM GNU Toolchain (arm-none-eabi-gcc)
- CMake + Ninja
- VS Code with the official Raspberry Pi Pico extension

## In progress
- Reading a physical button as GPIO input (interrupts)
- Interfacing an MPU-6050 IMU over I2C
- Displaying live sensor data on a 16x2 I2C LCD