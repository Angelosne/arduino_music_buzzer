//Connect buzzer + to pin 8
//and button at pin 3. It does not need pullup resistor because the pin has been assigned as INPUT_PULLUP. 
//The othen pin of the button goes to GND.
//When pressed it will start playing the song for one time
const int c4 = 262;
const int db4 = 277;
const int d4 = 294;
const int eb4 = 311;
const int e4 = 330;
const int f4 = 349;
const int gb4 = 370;
const int g4 = 392;
const int hb4 = 415;
const int h4 = 440;
const int bb4 = 466;
const int b4 = 494;
const int c5 = 523;
const int db5 = 554;
const int d5 = 587;
const int eb5 = 622;
const int e5 = 659;
const int f5 = 698;
const int gb5 = 740;
const int g5 = 784;
const int hb5 = 830;
const int h5 = 880;
const int bb5 = 932;
const int b5 = 988;
const int p = 0;

const int BPM = 100;      
const int buzzerPin = 8;
const int button = 3;

 
int counter = 0;
 
void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
 
void loop()
{
 
 if (digitalRead(button) == LOW) {
     ed(d4);
     s(d4);
     
     q(e4);
     q(d4);
     q(g4);
     
     h(gb4);
     ed(d4);
     s(d4);
     
     q(e4);
     q(d4);
     q(h4);

     h(g4);
     ed(d4);
     s(d4);

     q(d5);
     q(b4);
     q(g4);

     q(gb4);
     q(e4);
     ed(c5);
     s(c5);

     q(b4);
     q(g4);
     q(h4);
     hd(g4);
     
  
}

}


void w (int note)
{
  const int duration = 4*60000/BPM; // whole 4/4
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}
void wd (int note)
{
  const int duration = 4*60000/BPM*1.5; // whole dotted
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void h (int note)
{
  const int duration = 2*60000/BPM; //Half 2/4
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void hd (int note)
{
  const int duration = 2*60000/BPM*1.5; //Half dotted
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void q (int note)
{
  const int duration = 60000/BPM; //quarter 1/4 
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void qd (int note)
{
  const int duration = 60000/BPM*1.5; //quarter dotted
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void e (int note)
{
  const int duration = 60000/BPM/2;   //eighth 1/8
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void ed (int note)
{
  const int duration = 60000/BPM/2*1.5;   //eighth dotted
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void s (int note)
{
  const int duration = 60000/BPM/4; // sixteenth 1/16
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}

void sd (int note)
{
  const int duration = 60000/BPM/4*1.5; // sixteenth dotted
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);  
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);  
}
