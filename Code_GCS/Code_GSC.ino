
#include <Servo.h> // libreria para Servos
Servo servo_Az, servo_El;  // Creamos un objeto de clase "Servo" llamado "myservo" para controlar nuestro servomotor
int servoPin_Az =  ; // variable que almacena el numero del pin PWM del arduino donde esta conectado el servo_Az
int servoPin_El =  ; // variable que almacena el numero del pin PWM del arduino donde esta conectado el servo_El
float servoPos_Az ; // variable que almacena el valor del angulo de azimuth
float servoPos_El ; // variable que almacena el valor del angulo de elevation

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo_Az.attach(servoPin_Az);  // Adjuntamos el objeto que creamos al pin -- 
  servo_El.attach(servoPin_El);  // Adjuntamos el objeto que creamos al pin --
}

void loop() {
  // put your main code here, to run repeatedly:
  // ----- formulas para calcular el angulo de azimuth y elevation
  servo_Az.write(servoPos_Az);
  servo_El.write(servoPos_El);

  print( "Obtención de Datos ...");

  //Sección Rx_Data from Cansat

  data_Cansat=Serial.read();

  //Sección GPS_CanSat  y obtención de Datos: Longitud, Latitud
  #include <SoftwareSerial.h>

SoftwareSerial gps(0, 1); // RX, TX

void setup() {
  Serial.begin(9600);
  gps.begin(9600);
  // Configuración del receptor GNSS para solo recibir la constelación Galileo
  //gps.println("$PUBX,40,GLL,0,0,0,0,0,0*5C");
  gps.println("$PUBX,40,GGA,0,1,0,0,0,0*5A");
}

void loop() {

  //Serial.print("Conectando\n");
  if (gps.available() > 0){
      Serial.print("Si hay conexion\n");
  }
  /*while (gps.available() > 0) {
    Serial.print("Si hay conexion\n");
    char c = gps.read();
    Serial.print(c);

  }*/

}



  
  //Sección GPS_GCS y obtención de Datos: Longitud, Latitud
  
  
  

  //---------------------------Calculo de Azimuth y Elevación-------------------------------------



  //---------------------------------------------------------------------------------------------

  //Sección Motores
  servo_Az.write(azimut);
  servo_El.write(elevacion);
  
  //Sección Data_Rx to PC

  Serial.println(data_Cansat);

}

// primer ejercicio 
// imprimir la suma de un numero consigo mismo, el logaritmo en base 10
// open File .py

import math // libreria

a = 5 // no hay necesidad de declarar las variables, por ejemplo tipo int
print(a) 
print(a+a)
print(math.sqrt(a))
print(math.log(a)) // logaritmo en base e
print(math.log(a,10)) // para cambiar la base se especifica dentro del parentesis
print(math.log(a,5))
print(pow(a,2)) // potencia 

// segundo ejercicio 
// conversion de grados a radianes 

b = 57.4
print(math.radians(b)) // degrees to radians 
print(math.degrees(1))  // radians to degrees


//Determinar el valor del angulo a partir del valor del seno coseno y de la tangente 

c = math.pi/6
print(math.sin(c)) // python maneja los angulos siempre en radianes
print(math.cos(c))
print(math.tan(c))

d = math.sin(c)

print(math.asin(d))
e=math.asin(d)
print(math.degrees(e))

print("Este es un programa que determina si el valor de entrada es")

n = int(input()) //valor de entrada

if n % 2 == 0:
      print("el numero es par \n")
else ;
print("el numero es impar")

// suma hasta n 

n = int(input()) 

for: i=1 i












