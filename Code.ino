#include <Arduino.h>
#include <ArduinoNeuralNetwork.h>

const int irSensorPin1 = 2;
const int irSensorPin2 = 3;
const int irSensorPin3 = 4;
const int irSensorPin4 = 5;

const int merahLED1 = 6;
const int merahLED2 = 7;
const int merahLED3 = 8;
const int merahLED4 = 9;

const int hijauLED1 = 10;
const int hijauLED2 = 11;
const int hijauLED3 = 12;
const int hijauLED4 = 13;

int sensorState1 = LOW;
int sensorState2 = LOW;
int sensorState3 = LOW;
int sensorState4 = LOW;

NeuralNetwork ann;

void setup() {
  pinMode(irSensorPin1, INPUT);
  pinMode(irSensorPin2, INPUT);
  pinMode(irSensorPin3, INPUT);
  pinMode(irSensorPin4, INPUT);

  pinMode(merahLED1, OUTPUT);
  pinMode(merahLED2, OUTPUT);
  pinMode(merahLED3, OUTPUT);
  pinMode(merahLED4, OUTPUT);

  pinMode(hijauLED1, OUTPUT);
  pinMode(hijauLED2, OUTPUT);
  pinMode(hijauLED3, OUTPUT);
  pinMode(hijauLED4, OUTPUT);

  ann.init();
  ann.addLayer(4);
  ann.addLayer(8);
  ann.addLayer(4);
  ann.setLearningRate(0.1);
  ann.setActivationFunction(Sigmoid);
}

void loop() {
  sensorState1 = digitalRead(irSensorPin1);
  sensorState2 = digitalRead(irSensorPin2);
  sensorState3 = digitalRead(irSensorPin3);
  sensorState4 = digitalRead(irSensorPin4);

  float inputs[] = {sensorState1, sensorState2, sensorState3, sensorState4};
  ann.setInputs(inputs);
  ann.feedForward();
  float* outputs = ann.getOutputs();

  digitalWrite(merahLED1, outputs[0] > 0.5 ? HIGH : LOW);
  digitalWrite(hijauLED1, outputs[0] <= 0.5 ? HIGH : LOW);

  digitalWrite(merahLED2, outputs[1] > 0.5 ? HIGH : LOW);
  digitalWrite(hijauLED2, outputs[1] <= 0.5 ? HIGH : LOW);

  digitalWrite(merahLED3, outputs[2] > 0.5 ? HIGH : LOW);
  digitalWrite(hijauLED3, outputs[2] <= 0.5 ? HIGH : LOW);

  digitalWrite(merahLED4, outputs[3] > 0.5 ? HIGH : LOW);
  digitalWrite(hijauLED4, outputs[3] <= 0.5 ? HIGH : LOW);
}
