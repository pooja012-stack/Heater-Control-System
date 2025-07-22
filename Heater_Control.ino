#define TEMP_SENSOR_PIN A0
#define HEATER_PIN 8
#define LED_PIN 13

float tempC = 0;
const float TARGET_TEMP = 30.0;
const float MAX_TEMP = 35.0;

void setup() {
  Serial.begin(9600);
  pinMode(HEATER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(HEATER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  int raw_value = analogRead(TEMP_SENSOR_PIN);
tempC = map(raw_value, 0, 1023, 0, 50);  // 0–50°C range

  // Heater control logic
  if (tempC < (TARGET_TEMP - 2)) {
    digitalWrite(HEATER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
    Serial.println("State: HEATING");
  } 
  else if (tempC >= (TARGET_TEMP - 2) && tempC < (TARGET_TEMP + 2)) {
    digitalWrite(HEATER_PIN, HIGH);
    digitalWrite(LED_PIN, LOW);
    Serial.println("State: STABILIZING");
  } 
  else if (tempC >= (TARGET_TEMP + 2) && tempC < MAX_TEMP) {
    digitalWrite(HEATER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
    Serial.println("State: TARGET REACHED");
  } 
  else if (tempC >= MAX_TEMP) {
    digitalWrite(HEATER_PIN, LOW);
    digitalWrite(LED_PIN, HIGH);
    Serial.println("State: OVERHEAT");
  }

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" C");

  delay(1000);
}
