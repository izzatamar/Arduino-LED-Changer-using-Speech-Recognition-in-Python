int red = 9;
int yellow = 12;
int red2 = 11;
int yellow3 = 10;
int green= 8;


// Using http://slides.justen.eng.br/python-e-arduino as refference

void setup() {
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(yellow3, OUTPUT);
    pinMode(green, OUTPUT);
    Serial.begin(9600);
}

void loop() {

  
    if (Serial.available()) {
        char serialListener = Serial.read();
        Serial.println(serialListener);
        if (serialListener == 'R') {

            digitalWrite(yellow, LOW);
            digitalWrite(yellow3, LOW);
            digitalWrite(green,LOW);
            digitalWrite(red, HIGH);
            digitalWrite(red2, HIGH);

            
        }
        else if (serialListener == 'Y') {
            digitalWrite(green,LOW);
            digitalWrite(red, LOW);
            digitalWrite(red2, LOW);
            digitalWrite(yellow, HIGH);
            digitalWrite(yellow3, HIGH);
        }
        
        else if (serialListener =='G'){
            digitalWrite(red, LOW);
            digitalWrite(red2, LOW);
            digitalWrite(yellow, LOW);
            digitalWrite(yellow3, LOW);
            digitalWrite(green,HIGH);
            
        }
        
    }
    
}
