//  COMPLETE THE CODE!!!!


// Define Notes Frequencies
#define KEY_C 262  // 261.6256 Hz
#define KEY_D 294  // 293.6648 Hz
#define KEY_E 330  // 329.6276 Hz
#define KEY_F 350  // 349.2282 Hz

// Pushbuttons pins
int INPUT_BUTTON_C_PIN = ####;    // TODO
int INPUT_BUTTON_D_PIN = ####;    // TODO
// int INPUT_BUTTON_E_PIN = ####;    // TODO
// int INPUT_BUTTON_F_PIN = ####;    // TODO

// Speaker pin
int OUTPUT_PIEZO_PIN = ####;    // TODO

// LEDs pins
int LED_1 = ####;    // TODO
int LED_2 = ####;    // TODO
// int LED_3 = ####;    // TODO
// int LED_4 = ####;    // TODO

const boolean _buttonsAreActiveLow = true; 

void setup() {
  pinMode(INPUT_BUTTON_C_PIN, INPUT_PULLUP);
  pinMode(INPUT_BUTTON_D_PIN, INPUT_PULLUP);
  pinMode(INPUT_BUTTON_E_PIN, INPUT_PULLUP);
  pinMode(INPUT_BUTTON_F_PIN, INPUT_PULLUP);
  pinMode(OUTPUT_PIEZO_PIN, OUTPUT);
}

void loop() {

  // tone() generates a square wave of the specified frequency (and 50% duty cycle) on a pin. 
  if(isButtonPressed(INPUT_BUTTON_C_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_C);
    
    digitalWrite(####, ####);    // TODO
  
  }else if(isButtonPressed(INPUT_BUTTON_D_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_D);
    
    digitalWrite(####, ####);    // TODO
  
  }else if(isButtonPressed(INPUT_BUTTON_E_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_E);
    
    digitalWrite(####, ####);    // TODO
  
  }else if(isButtonPressed(INPUT_BUTTON_F_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_F);
    
    digitalWrite(####, ####);    // TODO
  
  }else{
    noTone(OUTPUT_PIEZO_PIN);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    // digitalWrite(LED_3, LOW);
    // digitalWrite(LED_4, LOW);
  }
}


boolean isButtonPressed(int btnPin){
  int btnVal = digitalRead(btnPin);
  if(_buttonsAreActiveLow && btnVal == LOW){
    // button is hooked up with pull-up resistor
    // and is in a pressed state
    return true;
  }else if(!_buttonsAreActiveLow && btnVal == HIGH){
    // button is hooked up with a pull-down resistor
    // and is in a pressed state
    return true;
  }

  // button is not pressed
  return false;
}
