#ifndef GNSS_H
#define GNSS_H

/*#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); // RX, TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
}
*/
#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); // RX, TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  if (mySerial.available()) {
    char c = mySerial.read();

    if (c == '$') {
      Serial.println(" Encontró el inicio de una trama");
      //
      String sentence = mySerial.readStringUntil('\r');
      if (sentence.startsWith("GNGGA")) {
        // 
        Serial.println("La trama es del tipo GNGGA");
        int commaIndex = 0;
        for (int i = 0; i < sentence.length(); i++) {
          if (sentence[i] == ',') {
            commaIndex++;
            if (commaIndex == 2) {
              // La latitud está en el tercer campo de la trama
              float latitude = sentence.substring(i+1, i+10).toFloat();
              Serial.print("Latitud= ");
              Serial.print(latitude, 6);
              //break;
            } else if (commaIndex == 4) {
              // La longitud está en el quinto campo de la trama
              float longitude = sentence.substring(i+1, i+11).toFloat();
              Serial.print(" Longitud= ");
              Serial.print(longitude, 6);
            } else if (commaIndex == 9) {
              // La altitud está en el décimo campo de la trama
              float altitude = sentence.substring(i+1, i+6).toFloat();
              Serial.print(" Altitud= ");
              Serial.println(altitude);
              //break;
            }
          }
        }
      }
    }
  }
}



#endif
