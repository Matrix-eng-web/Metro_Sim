#define BTPIN_W 2
#define BTPIN_S 3

void setup() 
{
  pinMode(BTPIN_W, INPUT_PULLUP);
  pinMode(BTPIN_S, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() 
{
  int btstateW = digitalRead(BTPIN_W);
  int btstateS = digitalRead(BTPIN_S);

  if (btstateW == 0) 
  {
    Serial.println("W_P");
  } 
  else 
  {
    Serial.println("W_R");
  }

  if (btstateS == 0) 
  {
    Serial.println("S_P");
  } 
  else 
  {
    Serial.println("S_R");
  }

  delay(1000);
}
