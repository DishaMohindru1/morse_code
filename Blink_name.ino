

// the setup function runs once when you press reset or power the board
void setup() 
{
  // initialize digital pin 12 as an output.
  pinMode(12, OUTPUT);
}
void dot()           //when the dot function is called then there is delay of only one second in both glowing and fading 
{
  digitalWrite(12, HIGH);     //led glows
  delay(1000);
  digitalWrite(12, LOW);      //led fades
  delay(1000);
}

void dash()             //when the dash function is called then the led glows for 3 seconds and fades out for one second.
{
  digitalWrite(12, HIGH);        //led glows 
  delay(3000);
  digitalWrite(12, LOW);            //led fades
  delay(1000);
}

void char_a()
{
   dot();
   dash();
}

void char_b()
{
  char_d();
  dot();
}
void char_c()
{
  dash();
  char_a();
  dot();
}

void char_d()
{
  dash();
  dot();
  dot();
}
void char_e()
{
  dot();
}
void char_f()
{
  dot();
  dot();
  dash();
  dot();
}
void char_g()
{
  dash();
  dash();
  dot();
}

void char_h()
{
  dot();
  dot();
  dot();
  dot();
}
void char_i()
{
  dot();
  dot();
}

void char_j()
{
  dot();
  char_o();
}
void char_k()
{
  dash();
  dot();
  dash();
}

void char_l()
{
  dot();
  dash();
  dot();
  dot();
}

void char_m()
{
  dash();
  dash();
}

void char_n()
{
  dash();
  dot();
}
void char_o()
{
  dash();
  dash();
  dash();
}
void char_p()
{
  dot();
  dash();
  dash();
  dot();
}
void char_q()
{
  dash();
  dash();
  dot();
  dash();
}

void char_r()
{
  dot();
  dash();
  dot();
}

void char_s()
{
  dot();
  dot();
  dot();
}

void char_t()
{
  dash();
}
void char_u()
{
  dot();
  dot();
  dash();
}
void char_v()
{
  dot();
  dot();
  dot();
  dash();
}

void char_w()
{
  dot();
  dash();
  dash();
}

void char_x()
{ 
  dash();
  dot();
  dot();
  dash();
}

void char_y()
{ 
  dash();
  dot();
  dash();
  dash();
}

void char_z()
{ 
  dash();
  dash();
  dot();
  dot();
}


// the loop function runs over and over again forever
void loop() {
  //user input
  char first_name = (char)Serial.read();
  String name;
  name = name + first_name;

  char alphabet;

  for(int i = 0; i<name.length(); i++)
  {
    alphabet = name [i];
  }
  switch (alphabet)
  {
    case 'a':
    char_a();
    break; 

    case 'b':
    char_b();
    break;

    case 'c':
    char_c();
    break;

    case 'd':
    char_d();
    break;

    case 'e':
    char_e();
    break;

    case 'f':
    char_f();
    break; 

    case 'g':
    char_g();
    break;

    case 'h':
    char_h();
    break; 

    case 'i':
    char_i();
    break; 

    case 'j':
    char_j();
    break; 

    case 'k':
    char_k();
    break; 

    case 'l':
    char_l();
    break;

     case 'm':
    char_m();
    break;

    case 'n':
    char_n();
    break;
    
    case 'o':
    char_o();
    break;

    case 'p':
    char_p();
    break;

    case 'q':
    char_q();
    break;

    case 'r':
    char_r();
    break;

    case 's':
    char_s();
    break;

    case 't':
    char_t();
    break;

    case 'u':
    char_u();
    break;

    case 'v':
    char_v();
    break;

    case 'w':
    char_w();
    break;

    case 'x':
    char_x();
    break;

    case 'y':
    char_y();
    break;

    case 'z':
    char_z();
    break;
  }
  
}
