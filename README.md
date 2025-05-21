# Vehicle Indicator Control Module

## Overview
This project uses buttons and LEDs to implement a vehicle indicator system with Left, Right, and Hazard indicators.

- Left and Right indicators are controlled via push buttons.
- Hazard light activates when both buttons are pressed simultaneously for 1 second.
- LEDs toggle ON-OFF-ON every 300 ms while indicators are active.
- Button presses and LED states are logged over UART.
- PWM is used to drive LEDs.
- Scheduler runs every 100 ms to handle tasks.
- Base software drivers (UART, GPIO, PWM, Timer) are implemented in C.
- Application logic is developed in MATLAB Simulink (code integrated here).
- BLE control over mobile phones is planned for future integration.

## Hardware Setup

- Microcontroller development board (e.g., STM32, PIC, Arduino-compatible)
- Two push buttons connected to GPIO pins with internal pull-up resistors enabled
- Two LEDs connected to GPIO pins with PWM control
- UART TTL converter for serial communication logging
- Jumper wires to connect components

Buttons: Use internal pull-up resistors; one pin of button to GPIO input, other to GND.

LEDs: Connect LEDs through suitable current-limiting resistors to PWM-enabled GPIO pins.

## How to Build and Run

1. Flash base software and generated application code to the microcontroller.
2. Connect UART TTL to PC and open serial monitor at 115200 baud rate.
3. Press left or right buttons to toggle indicators.
4. Observe LED toggling and UART logs.
5. Press both buttons simultaneously for 1 sec to activate hazard light.
6. Press any button for 1 sec to deactivate hazard light.

## BLE Control (Planned)

BLE integration will allow controlling indicators from a mobile phone app over BLE protocol by sending commands to the microcontroller.

## UART Log Sample

See `uart_logs.txt` for sample log output during button presses.
