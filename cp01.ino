#include "pitches.h"
	const byte Buzzer= 4;
	

	

	

	int melody[] = {
	  NOTE_, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_,
	  NOTE_, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_C4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_,
	  
	  NOTE_, NOTE_G3, NOTE_A3, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_,
	  NOTE_, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_,
	  
	  NOTE_, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_,
	  NOTE_, NOTE_G3, NOTE_A3, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_,
	  
	  NOTE_, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_D4,
	  NOTE_C4, NOTE_A3, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_,
	  //
	  NOTE_, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_A3, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_,
	  NOTE_, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G3, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_D4, NOTE_C4, NOTE_,
	  
	  NOTE_, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_,
	  NOTE_, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_,
	  
	  NOTE_, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_A3, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_,
	  NOTE_, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G3, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_D4, NOTE_C4, NOTE_,
	  
	  NOTE_, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4,
	  NOTE_G3, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_,
	};
	

	int noteDurations[] = {
	  16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 16, 16, 8, 8,
	  16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 16, 16, 8, 8,
	  
	  16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 16, 16, 16, 16, 8,
	  16, 16, 16, 16, 16, 16, 16, 16, 8, 16, 16, 16, 8, 8,
	  
	  16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 16, 16, 8, 8,
	  16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 16, 16, 8, 8,
	  
	  16, 16, 16, 16, 16, 16, 16, 16, 8,
	  16, 16, 16, 16, 16, 16, 8, 16, 4, 8,
	  //
	  16, 16, 16, 16, 16, 16, 8, 16, 16, 16, 16, 4, 8,
	  16, 16, 16, 16, 16, 16, 8, 16, 16, 16, 16, 4, 8,
	  
	  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 4, 8,
	  16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 16, 16, 8, 8,
	  
	  16, 16, 16, 16, 16, 16, 8, 16, 16, 16, 16, 4, 8,
	  16, 16, 16, 16, 16, 16, 8, 16, 16, 16, 16, 4, 8,
	  
	  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 4, 
	  16, 8, 16, 16, 16, 4, 8, 
	};
	

	void play(int *melody, int *noteDurations, int num){
	  for(int note = 0; note < num; note++){
	    int noteDuration = 3000 / noteDurations[note];
	    tone(Buzzer, melody[note], noteDuration);
	

	    delay(noteDuration * 1.30);
	  }
	}
	void setup(){
	}
	

	void loop(){
	  play(melody, noteDurations, sizeof(melody) / sizeof(int));
	  
	  delay(2000);
	}

