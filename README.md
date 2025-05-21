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
