void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);//begine serial communication at9600 baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
float voltage=analogRead(A0);it is useed to read the base adc value
float temp=voltage * 0.48828125;//convert the voltage in to the temperature in celsius
Serial.print("temp  :");
Serial.print(temp);//print the temperature in celsius
Serial.println("*C ");
delay(2000);//wait a second between reading
}
