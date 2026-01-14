/************************************************************
 * ESP8266 + BLYNK + 2x L298N
 * Gearbox + Motor Tali (Speed FIXED)
 ************************************************************/

#define BLYNK_TEMPLATE_ID "TMPL6jEfZg0uK"
#define BLYNK_TEMPLATE_NAME "Robot Pembersih Kaca"
#define BLYNK_AUTH_TOKEN "ZuTM-1_Wsztqf_DBQmwStzx1qOBrOsWK"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "MOTHER QEA";
char pass[] = "L3vy4th4n1012";

// ===== GEARBOX =====
#define G1A D1
#define G1B D2
#define G2A D5
#define G2B D6
#define ENA D0
#define ENB D4

// ===== MOTOR TALI =====
#define TA D7
#define TB D8
#define ENA_TALI D3

#define SPEED_GEAR 90
#define SPEED_TALI 150

// ===== STOP =====
void stopGearbox() {
  digitalWrite(G1A, LOW);
  digitalWrite(G1B, LOW);
  digitalWrite(G2A, LOW);
  digitalWrite(G2B, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

void stopTali() {
  digitalWrite(TA, LOW);
  digitalWrite(TB, LOW);
  analogWrite(ENA_TALI, 0);
}

// ===== JOYSTICK MAJU / MUNDUR =====
BLYNK_WRITE(V1) {
  int y = param.asInt();

  if (y > 0) {                 // MAJU
    digitalWrite(G1A, HIGH);
    digitalWrite(G1B, LOW);
    digitalWrite(G2A, HIGH);
    digitalWrite(G2B, LOW);
    analogWrite(ENA, SPEED_GEAR);
    analogWrite(ENB, SPEED_GEAR);
  }
  else if (y < 0) {            // MUNDUR
    digitalWrite(G1A, LOW);
    digitalWrite(G1B, HIGH);
    digitalWrite(G2A, LOW);
    digitalWrite(G2B, HIGH);
    analogWrite(ENA, SPEED_GEAR);
    analogWrite(ENB, SPEED_GEAR);
  }
  else {
    stopGearbox();
  }
}

// ===== NAIK =====
BLYNK_WRITE(V2) {
  if (param.asInt()) {
    digitalWrite(TA, HIGH);
    digitalWrite(TB, LOW);
    analogWrite(ENA_TALI, SPEED_TALI);
  } else {
    stopTali();
  }
}

// ===== TURUN =====
BLYNK_WRITE(V3) {
  if (param.asInt()) {
    digitalWrite(TA, LOW);
    digitalWrite(TB, HIGH);
    analogWrite(ENA_TALI, SPEED_TALI);
  } else {
    stopTali();
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(G1A, OUTPUT);
  pinMode(G1B, OUTPUT);
  pinMode(G2A, OUTPUT);
  pinMode(G2B, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(TA, OUTPUT);
  pinMode(TB, OUTPUT);
  pinMode(ENA_TALI, OUTPUT);

  stopGearbox();
  stopTali();

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}