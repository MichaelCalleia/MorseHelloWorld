/*

Hello World!
in Morse Code
using Piezo Buzzer + LED

v. 2.0.3

Lily + Michael Calleia, May 29, 2017

CC-BY-SA 3.0

*/


// Declare variables
int unit = 250; // sets the length of a dot in milliseconds
int freq = 100; // sets the frequency of the buzzer (Uno, Mega, Leonardo and other AVR boards 31–65535, Zero 41—275000)
int buzzer = 13; // pin that the buzzer (and optional LED) will be on


// The setup, which runs only once
void setup() {
  pinMode(buzzer, OUTPUT);
}


// The loop, which will run until power is removed or reset is press
void loop() {

  // HELLO
  H();
    lspace();
  E();
   lspace();
  L();
    lspace();
  L();
   lspace();
  O();
    wspace();

  // WORLD!
  W();
   lspace();
  O();
    lspace();
  R();
    lspace();
  L();
   lspace();
  D();
   lspace();
  exclamation();
   wspace();
   wspace();
}


// Functions for Morse Code building blocks: dot, dash and spaces between them

  // dot — 1 unit long
  void dot() {
    tone(buzzer, freq);
    delay(unit);
    noTone(buzzer);
  }

  // dash — 3 units long
  void dash() {
    tone(buzzer, freq);
    delay(unit*3);
    noTone(buzzer);
 }

  // dot space — the space between dots and dasshes — 1 unit long
  void dspace() {
    delay(unit);
  }

  // letter space — the space between letters — 3 units long
  void lspace() {
    delay(unit*3);
  }

  // word space — the space between words — 7 units long
  void wspace() {
    delay(unit*7);
  }


// Functions for letters (just the ones we need for  H E L L O   W O R L D)

  void D() {
      dash();
      dspace();
      dot();
      dspace();
      dot();
    }

  void E() {
      dot();
    }

  void H() {
      dot();
      dspace();
      dot();
      dspace();
      dot();
      dspace();
      dot();
    }

  void L() {
      dot();
      dspace();
      dash();
      dspace();
      dot();
      dspace();
      dot();
    }

  void O() {
      dash();
      dspace();
      dash();
      dspace();
      dash();
    }

  void R() {
      dot();
      dspace();
      dash();
      dspace();
      dot();
    }

  void W() {
      dot();
      dspace();
      dash();
      dspace();
      dash();
    }

    void exclamation()
    {
      dash();
      dspace();
      dot();
      dspace();
      dash();
      dspace();
      dot();
      dspace();
      dash();
      dspace();
      dash();
  }
