#define MACHINE_NAME            "YFSTUDIO Zboard V4"
#define DISPLAY_CODE_FILENAME   "Custom/oled_basic.cpp"

#define STEPPERS_DISABLE_PIN    GPIO_NUM_0

#define X_STEP_PIN              GPIO_NUM_13
#define X_DIRECTION_PIN         GPIO_NUM_12
#define Y_STEP_PIN              GPIO_NUM_14
#define Y_DIRECTION_PIN         GPIO_NUM_27
#define Z_STEP_PIN              GPIO_NUM_26
#define Z_DIRECTION_PIN         GPIO_NUM_25
#define A_STEP_PIN              GPIO_NUM_33
#define A_DIRECTION_PIN         GPIO_NUM_32


#define X_LIMIT_PIN             GPIO_NUM_17
#define Y_LIMIT_PIN             GPIO_NUM_15
#define Z_LIMIT_PIN             GPIO_NUM_35
// #define A_LIMIT_PIN             GPIO_NUM_34
#define PROBE_PIN               GPIO_NUM_34 


#define N_AXIS 4

#define SPINDLE_TYPE            SpindleType::PWM
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_4   // labeled SpinPWM

// #define SPINDLE_TYPE            SpindleType::LASER
#define LASER_OUTPUT_PIN      GPIO_NUM_2   // labeled SpinPWM

#define COOLANT_FLOOD_PIN       GPIO_NUM_16  // labeled Flood

#define OLED_SDA GPIO_NUM_21
#define OLED_SCL GPIO_NUM_22

