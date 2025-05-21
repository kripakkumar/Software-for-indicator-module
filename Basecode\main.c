#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

// Pin definitions (adjust as per your board)
#define LEFT_BUTTON_PIN   12
#define RIGHT_BUTTON_PIN  13
#define LEFT_LED_PIN      14
#define RIGHT_LED_PIN     15

// Function prototypes
void UART_Init(void);
void GPIO_Init(void);
void PWM_Init(void);
void Timer_Init(void);
void Scheduler_Init(void);
void Scheduler_Run(void);
void UART_SendString(const char *str);

bool Button_ReadLeft(void);
bool Button_ReadRight(void);
void LED_SetLeft(bool on);
void LED_SetRight(bool on);
void LED_PWM_SetLeft(uint8_t dutyCycle);
void LED_PWM_SetRight(uint8_t dutyCycle);

// Global variables for button states and timers
volatile bool leftPressed = false;
volatile bool rightPressed = false;

int main(void) {
    UART_Init();
    GPIO_Init();
    PWM_Init();
    Timer_Init();
    Scheduler_Init();

    while(1) {
        Scheduler_Run();
    }

    return 0;
}

// Stub implementations - replace with MCU-specific driver code

void UART_Init(void) {
    // Initialize UART peripheral at 115200 baud
    // Stub: printf redirected to UART
    printf("UART Initialized\n");
}

void GPIO_Init(void) {
    // Configure buttons as inputs with pull-up
    // Configure LEDs as outputs
    printf("GPIO Initialized\n");
}

void PWM_Init(void) {
    // Configure PWM channels for LED pins
    printf("PWM Initialized\n");
}

void Timer_Init(void) {
    // Configure hardware timer for 100ms ticks
    printf("Timer Initialized\n");
}

void Scheduler_Init(void) {
    // Initialize scheduler resources
    printf("Scheduler Initialized\n");
}

void Scheduler_Run(void) {
    // Called repeatedly in main loop; call scheduled tasks every 100ms
    static uint32_t lastTick = 0;
    uint32_t currentTick = 0; // Read hardware timer or millis()

    if (currentTick - lastTick >= 100) {
        lastTick = currentTick;

        // Read button inputs
        leftPressed = Button_ReadLeft();
        rightPressed = Button_ReadRight();

        // Update LEDs based on application logic
        // (to be called from application code)
    }
}

bool Button_ReadLeft(void) {
    // Return true if pressed (active LOW)
    return false; // stub
}

bool Button_ReadRight(void) {
    return false; // stub
}

void LED_SetLeft(bool on) {
    // Digital write or PWM 100% duty
}

void LED_SetRight(bool on) {
}

void LED_PWM_SetLeft(uint8_t dutyCycle) {
    // PWM duty cycle 0-100%
}

void LED_PWM_SetRight(uint8_t dutyCycle) {
}

void UART_SendString(const char *str) {
    // Send string over UART
}
