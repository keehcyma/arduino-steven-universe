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
short mainThemeMelody[] = {
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

short mainThemeActorNoteCounts[] = {
  //Steven
  96,
  //None
  96+21,
  //Pearl
  96+21+68,
  //None
  96+21+68+73,
  //Garnet
  96+21+68+73+20,
  //Pearl
  96+21+68+73+20+19,
  //Amethyst
  96+21+68+73+20+19+20,
  //Steven
  96+21+68+73+20+19+20+21,
  //All
  96+21+68+73+20+19+20+21+20,
  // "We" 36
  96+21+68+73+20+19+20+21+20+1,
  // "Are the Crystal"
  96+21+68+73+20+19+20+21+20+1+4,
  // "Gems"
  96+21+68+73+20+19+20+21+20+1+4+1,
  // "We'll always save the day"
  96+21+68+73+20+19+20+21+20+1+4+1+7,
  // "And if you think we can't"
  96+21+68+73+20+19+20+21+20+1+4+1+7+7,
  // "We'll always find a way"
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5,
  // "That's why the people"
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5+5,
  // "of this world"
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5+5+3,
  // "believe in"
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5+5+3+3,
  // Garnet
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5+5+3+3+2,
  //Amethyst
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5+5+3+3+2+3,
  //Pearl
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5+5+3+3+2+3+2,
  //Steven
  96+21+68+73+20+19+20+21+20+1+4+1+7+7+5+5+3+3+2+3+2+3
};

#define STEVEN_BIT   1<<0
#define PEARL_BIT    1<<1
#define AMETHYST_BIT 1<<2
#define GARNET_BIT   1<<3

byte mainThemeActorLEDEnables[] = {
  // format xxxx - {garnet} {amethyst} {pearl} {steven}
  // examples:
  // 0b00000001 Steven Only
  // 0b00001100 Garnet and Amethyst Only
  // 0b00001111 Everybody
  STEVEN_BIT,
  0, // short interlude
  PEARL_BIT,
  0, //long bridge, could be fun to light up colors based on gems present in the full video /shrug
  GARNET_BIT,
  PEARL_BIT,
  AMETHYST_BIT,
  STEVEN_BIT,
  STEVEN_BIT | PEARL_BIT | AMETHYST_BIT | GARNET_BIT,
  GARNET_BIT,
  PEARL_BIT | AMETHYST_BIT | GARNET_BIT,
  STEVEN_BIT,
  STEVEN_BIT | PEARL_BIT | AMETHYST_BIT | GARNET_BIT,
  STEVEN_BIT,
  STEVEN_BIT | PEARL_BIT | AMETHYST_BIT | GARNET_BIT,
  GARNET_BIT,
  STEVEN_BIT | PEARL_BIT | AMETHYST_BIT | GARNET_BIT,
  GARNET_BIT,
  GARNET_BIT,
  AMETHYST_BIT,
  PEARL_BIT,
  STEVEN_BIT
};


byte mainThemeNoteDurations[] = {
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

byte actorIndex = 0;
inline void writeActorLEDs(int noteIndex, int noteFrequency)
{
  //made actorIndex static since it should always only increment as we work through the song
  while (noteIndex >= mainThemeActorNoteCounts[actorIndex]) {
    actorIndex = actorIndex + 1;
  }
  // Now we know who is supposed to be singing
  byte singers = mainThemeActorLEDEnables[actorIndex] & (noteFrequency?0xFF:0); //if no one is singing, we'll turn off the LEDs
  if (singers & GARNET_BIT)   digitalWrite(garnetLight, HIGH);
  else                        digitalWrite(garnetLight, LOW);
  if (singers & AMETHYST_BIT) digitalWrite(amethystLight, HIGH);
  else                        digitalWrite(amethystLight, LOW);
  if (singers & PEARL_BIT)    digitalWrite(pearlLight, HIGH);
  else                        digitalWrite(pearlLight, LOW);
  if (singers & STEVEN_BIT)   digitalWrite(stevenLight, HIGH);
  else                        digitalWrite(stevenLight, LOW);
}

void loop(){
  short startingNote = 0;
  mainThemeButtonState = digitalRead(mainThemeButton);
  if (mainThemeButtonState == HIGH) {
    delay(500); //see if the button is still held half a second later. If so, play the shorter intro.
    mainThemeButtonState = digitalRead(mainThemeButton);
    if (mainThemeButtonState == HIGH) startingNote = 96+21+68+73+20+19+20+21+20; //skip to the regular intro
        digitalWrite(garnetLight, HIGH);
    digitalWrite(amethystLight, HIGH);
    digitalWrite(pearlLight, HIGH);
    digitalWrite(stevenLight, HIGH);
    for (int thisNote = startingNote; thisNote < sizeof(mainThemeMelody)/sizeof(mainThemeMelody[0]); thisNote++) {
      int noteDuration = 2000 / mainThemeNoteDurations[thisNote];
      tone(buzzer, mainThemeMelody[thisNote], noteDuration);
      writeActorLEDs(thisNote, mainThemeMelody[thisNote]);
      int pauseBetweenNotes = noteDuration * 1.25;
      delay(pauseBetweenNotes);
    }
    noTone(8);
    digitalWrite(garnetLight, LOW);
    digitalWrite(amethystLight, LOW);
    digitalWrite(pearlLight, LOW);
    digitalWrite(stevenLight, LOW);
  }
  //reset our globals
  mainThemeButtonState = LOW;
  actorIndex = 0;
}
