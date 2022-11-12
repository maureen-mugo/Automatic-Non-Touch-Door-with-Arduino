#include<LCD_I2C.h>
#include<Servo.h>
#include<Wire.h>
#include<Adafruit_MLX90614.h>
#include<PIR.h>
#include<Buzzer.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

LCD_I2C lcd(0x27);

Servo myservo1;
Servo myservo2;

#define pir 3    //pir to arduino pin 3
#define buzzer 2   //buzzer to arduino pin 2
#define servo 4     //servo to arduino pin 4

int pos1,pos2;

int val = 0;


void setup() 
{  
  Serial.begin(9600);
  Serial.println("System Starts");  
  delay(500);
  mlx.begin();  
  lcd.begin(); // If you are using more I2C devices using the Wire library use lcd.begin(false)
                 // this stop the library(LCD_I2C) from calling Wire.begin()
  lcd.backlight();
  
    
  myservo1.attach(4);
  myservo2.attach(5);
  myservo1.write(90);
  myservo2.write(90);

  pinMode(pir, INPUT);   //set pir - pin 3 as an input
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);  //set buzzer - pin 2 as an output
  

lcd.backlight();
  lcd.print("Welcome!");
 delay(2000);
 lcd.clear();
}

void loop() 
{
  val = digitalRead(pir);
  Serial.print(digitalRead(pir));
  delay(9600);
  
  

  if (val == HIGH)
  {
    Serial.print("motion detected");
    Serial.print("\n");
    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.setCursor(6,0);
    lcd.print(mlx.readObjectTempC());
    Serial.print(mlx.readObjectTempC());
    lcd.setCursor(16,2);
    delay(2000);
    lcd.clear();
    delay(500);
    

    kaiguan();
  }
  }

 

void kaiguan()
{
  int temp_obj = mlx.readObjectTempC();
  Serial.print(temp_obj);
  Serial.print("\n");

  if(temp_obj <= 35)
  {
    lcd.setCursor(0,1);
    lcd.print(temp_obj);
    lcd.setCursor(0,2);
    lcd.print("Please retest!");
    delay(2000);
    tone(buzzer, 1000);       // 1. turns on
    delay(500);             // 2. waits 500 milliseconds (0.5 sec). 
    noTone(buzzer);      // 3. turns off.
    delay(500);          // // 4. waits 500 milliseconds (0.5 sec).
    lcd.clear();
    
  }

