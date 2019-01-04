#include "pitches.h"
const int mainThemeButton = 4;
int buzzer = 8;
int garnetLight = 12;
int amethystLight = 11;
int pearlLight = 10;
int stevenLight = 9;
int mainThemeButtonState = 0;

/**
 * @author keehcyma
 * @version Decemeber 2018
 *
 * Hello there!
 *
 * I used https://www.princetronics.com/supermariothemesong/ for my boiler plate code, pitches.h,
 * and https://www.youtube.com/watch?v=K8qwohpNHcE for transcripting the musical notes.
 *
 * I hope you enjoy!
 */
int mainThemeMelody[] = {
  //If you're evil and you're on the rise
  NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_E4, NOTE_F4, NOTE_E4,
  //You can count on the four of us taking you down
  NOTE_D4, NOTE_C4, NOTE_F3, NOTE_G3, NOTE_G3, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_AS3, NOTE_A3,
  //Cause we're good and evil never beats us
  NOTE_C4, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_CS4, NOTE_A3,
  //We'll win the fight and then go out for pizzas
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4,
  //We are the Crystal Gems
  NOTE_C4, NOTE_A3, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_CS4, NOTE_CS4,
  //We’ll always save the day!
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_D4, NOTE_D4,
  //And if you think we can’t
  NOTE_D4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_CS4,
  //We’ll always find a way!
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, 0,
  //That’s why the people of this world believe in
  NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_CS4, NOTE_A3, NOTE_CS4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_F4, 0,
  //Garnet, Amethyst, and Pearl and Steven!
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_CS4, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_G4,
  //BREAKDOWN WOOO
  NOTE_A4, NOTE_AS3, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_CS4, NOTE_F4, NOTE_C5, NOTE_G4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_C5, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_C4, NOTE_A3,
  //If you could only know, what we really are
  NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_B3, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_A4,
  //When we arrived on Earth, from out beyond your star
  NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_B3, NOTE_C4, 0, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_AS3, NOTE_A3,
  //We were amazed to find, your beauty and your worth
  NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_B3, NOTE_B3, NOTE_C4, 0, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_A4,
  //And we will protect your kind, and we will protect your Earth
  NOTE_C4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_B3, NOTE_C4, 0, NOTE_G3, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_B3, NOTE_C4, NOTE_A3,
  //And we will protect your Earth
  NOTE_A3, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_FS4,
  //And we will protect you!
  NOTE_D4, NOTE_FS4, NOTE_FS4, NOTE_D4, NOTE_FS4, NOTE_G4,

  //BREAKDOWN
  NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G5, NOTE_G4,
  NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS5, NOTE_DS5,
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4,
  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_E4, NOTE_E4,
  NOTE_E5, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D5, NOTE_D4,
  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_A5,
  NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G5, NOTE_G5, NOTE_G4, NOTE_G4,
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,
  NOTE_G3,

  //I will fight for the place where I’m free
  NOTE_D4, NOTE_B4, NOTE_D4, NOTE_D4, NOTE_B3, NOTE_FS4, NOTE_FS4, NOTE_G4, NOTE_FS4,
  //To live together and exist as me
  NOTE_B3, NOTE_E4, NOTE_D4, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_E4, NOTE_D4, NOTE_G3, 0,
  //[Pearl]
  //I will fight in the name of Rose Quartz!
  NOTE_D4, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_FS4,
  //And everything that she believed in
  NOTE_B3, NOTE_E4, NOTE_D4, NOTE_G3, NOTE_G3, NOTE_E4, NOTE_D4, NOTE_G3, NOTE_A3, 0,
  //[Amethyst]
  //I will fight for the world I was made in
  NOTE_D4, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_FS4, NOTE_FS4, NOTE_G4, NOTE_FS4, NOTE_E4,
  //The Earth is everything I’ve ever known!
  NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G3, NOTE_G3, NOTE_E4, NOTE_D4, NOTE_G3, NOTE_A3, NOTE_B3,
  //[Steven]
  //I will fight to be everything that everybody wants me to be when I’m grown
  NOTE_D4, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_B3, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G3, NOTE_G3, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_B3,
  //[All]
  //The odds are against us, it won’t be easy
  NOTE_B3, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_DS4, NOTE_DS4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_FS4,
  //But we’re not going to do it alone
  NOTE_E4, NOTE_G4, NOTE_D5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_B4,
  //We are the Crystal Gems
  NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_FS4,
  //We’ll always save the day!
  NOTE_DS4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_G4, 0,
  //And if you think we can’t
  NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_DS4, NOTE_D4,
  //We’ll always find a way!
  NOTE_B4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_G4,
  //That’s why the people of this world believe in
  NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_B3, NOTE_A3, NOTE_A3, NOTE_G3,
  //Garnet, Amethyst, and Pearl and Steven!
  NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_DS4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_G4
};

int mainThemeNoteDurations[] = {
  //If you're evil and you're on the rise
  4, 16, 16, 16, 16, 16, 16, 8, 16, 4,
  //You can count on the four of us taking you down
  16, 8, 8, 8, 16, 16, 16, 8, 16, 16, 16, 4,
  //Cause we're good and evil never beats us
  16, 16, 16, 16, 16, 16, 8, 16, 8, 8, 16,
  //We'll win the fight and then go out for pizzas
  8, 16, 8, 16, 16, 16, 8, 16, 8, 4,
  //We are the Crystal Gems
  4, 4, 8, 16, 8, 8, 4, 4, 16,
  //We'll always save the day
  8, 8, 8, 16, 4, 4, 16,
  //And if you think we can't
  8, 16, 8, 8, 4, 8, 8,
  //We'll always find a way
  8, 8, 8, 16, 3, 64,
  //That’s why the people of this world believe in
  8, 8, 16, 8, 5, 4, 4, 8, 8, 8, 16, 8, 3, 64,
  //Garnet, Amethyst, and Pearl and Steven!
  8, 16, 8, 8, 8, 3, 8, 16, 8, 4,
  //BREAKDOWN WOOO
  2, 4, 4, 2, 8, 8, 8, 8, 2, 4, 4, 8, 8, 8, 8, 6, 8, 16, 16, 16, 4,
  //If you could only know, what we really are
  8, 8, 16, 4, 4, 2, 8, 8, 8, 8, 16, 4,
  //When we arrived on Earth, from out beyond your star
  8, 8, 16, 4, 4, 2, 16, 16, 8, 16, 8, 8, 4,
  //We were amazed to find, your beauty and your worth
  8, 8, 16, 4, 8, 16, 2, 16, 16, 16, 8, 8, 8, 16, 4,
  //And we will protect your kind, and we will protect your Earth
  16, 8, 8, 16, 4, 4, 2, 16, 16, 8, 8, 16, 6, 16, 2,
  //And we will protect your Earth
  16, 8, 16, 16, 8, 16, 2,
  //And we will protect you!
  16, 16, 16, 16, 8, 8,

  //BREAKDOWN
  8, 8, 8, 16, 8, 8, 16, 8, 8,
  8, 8, 8, 16, 8, 8, 16, 8, 8,
  8, 8, 8, 16, 8, 8, 16, 8, 8,
  8, 8, 8, 16,
  8, 8, 16, 16, 32, 32,
  16, 16,
  8, 8, 8, 16, 8, 8, 16, 8, 8,
  8, 8, 8, 16, 8, 8, 16, 8, 8,
  8, 8, 6, 8, 8, 16, 8, 8,
  8, 8, 6, 8, 8, 16, 3,
  16,

  //I will fight for the place where I’m free
  16, 16, 8, 16, 16, 8, 8, 16, 4,
  //To live together and exist as me
  16, 8, 16, 8, 16, 16, 16, 8, 8, 4, 8,
  //[Pearl]
  //I will fight in the name of Rose Quartz!
  16, 16, 16, 16, 16, 8, 16, 8, 4,
  //And everything that she believed in
  16, 16, 8, 8, 8, 8, 8, 8, 4, 8,
  //[Amethyst]
  //I will fight for the world I was made in
  16, 16, 8, 16, 16, 16, 16, 16, 8, 8,
  //The Earth is everything I’ve ever known!
  16, 16, 8, 8, 8, 8, 4, 16, 8, 4,
  //[Steven]
  //I will fight to be everything that everybody wants me to be when I’m grown
  16, 16, 8, 16, 16, 16, 16, 16, 4, 16, 16, 8, 8, 8, 8, 8, 16, 16, 16, 8, 8,
  //[All]
  //The odds are against us, it won’t be easy
  16, 16, 16, 16, 8, 8, 16, 8, 8, 16, 8,
  //But we’re not going to do it alone
  8, 8, 8, 8, 16, 16, 16, 16, 2,
  //We are the Crystal Gems
  8, 8, 16, 8, 6, 2,
  //We’ll always save the day!
  8, 8, 8, 8, 16, 2, 16,
  //And if you think we can’t
  16, 16, 8, 8, 8, 4, 4,
  //We’ll always find a way!
  8, 8, 8, 16, 2,
  //That’s why the people of this world believe in
  //8, 6, 16, 16, 6, 4, 4, 2, 8, 16, 8, 2,
  //8, 8, 16, 8, 5, 4, 4, 8, 8, 8, 16, 8, 3, 64,
  8, 8, 16, 8, 5, 4, 4, 3, 16, 8, 2,
  //Garnet, Amethyst, and Pearl and Steven!
  8, 8, 8, 16, 4, 4, 4, 8, 16, 2
};

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(mainThemeButton, INPUT);
}

void loop(){
  mainThemeButtonState = digitalRead(mainThemeButton);
  if (mainThemeButtonState == HIGH) {
    digitalWrite(garnetLight, HIGH);
    digitalWrite(amethystLight, HIGH);
    digitalWrite(pearlLight, HIGH);
    digitalWrite(stevenLight, HIGH);
    for (int thisNote = 0; thisNote < sizeof(mainThemeMelody)/sizeof(mainThemeMelody[0]); thisNote++) {
      int noteDuration = 2000 / mainThemeNoteDurations[thisNote];
      tone(buzzer, mainThemeMelody[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.25;
      delay(pauseBetweenNotes);
    }
    noTone(8);
    digitalWrite(garnetLight, LOW);
    digitalWrite(amethystLight, LOW);
    digitalWrite(pearlLight, LOW);
    digitalWrite(stevenLight, LOW);
  }
  mainThemeButtonState = LOW;
}
