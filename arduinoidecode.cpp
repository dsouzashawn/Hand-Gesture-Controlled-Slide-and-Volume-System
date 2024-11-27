int trigPin1 = 8;  // Trigger for Left Sensor
int echoPin1 = 9;  // Echo for Left Sensor
int trigPin2 = 6;  // Trigger for Right Sensor
int echoPin2 = 7;  // Echo for Right Sensor
long duration1, cm1, duration2, cm2;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
}

     void loop() {
  // Measure distance from the left sensor
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  cm1 = (duration1 / 2) / 29.1;

  // Measure distance from the right sensor
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  cm2 = (duration2 / 2) / 29.1;

  // Gesture for slide change to the left and decrease volume (if hand is close to left sensor)
  if (cm1 < 10 && cm2 > 20) {  // Hand very close to left sensor
    Serial.println("LEFT");
    delay(2000);  // Prevent continuous triggering
  }
  
  // Gesture for slide change to the right and increase volume (if hand is close to right sensor)
  else if (cm2 < 10 && cm1 > 20) {  // Hand very close to right sensor
    Serial.println("RIGHT");
    delay(2000);  // Prevent continuous triggering
  }}

