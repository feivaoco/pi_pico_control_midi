#include <Control_Surface.h> // Include the Control Surface library

// Instantiate a MIDI over USB interface.
USBMIDI_Interface midi;

// Instantiate a NoteButton object
NoteButton button {
  0,                       // Push button on pin 5
  {MIDI_Notes::C(4), CHANNEL_1}, // Note C4 on MIDI channel 1
};

NoteButton button2 {
  1,                       // Push button on pin 5
  {MIDI_Notes::D(4), CHANNEL_1}, // Note C4 on MIDI channel 1
};
NoteButton button3 {
  2,                       // Push button on pin 5
  {MIDI_Notes::E(4), CHANNEL_1}, // Note C4 on MIDI channel 1
};
NoteButton button4 {
  3,                       // Push button on pin 5
  {MIDI_Notes::F_(4), CHANNEL_1}, // Note C4 on MIDI channel 1
};
NoteButton button5 {
  4,                       // Push button on pin 5
  {MIDI_Notes::G(4), CHANNEL_1}, // Note C4 on MIDI channel 1
};
NoteButton button6 {
  14,                       // Push button on pin 5
  {MIDI_Notes::A(4), CHANNEL_1}, // Note C4 on MIDI channel 1
};
NoteButton button7 {
  15,                       // Push button on pin 5
  {MIDI_Notes::B(4), CHANNEL_1}, // Note C4 on MIDI channel 1
};


void setup() {
  Control_Surface.begin(); // Initialize Control Surface
}

void loop() {
  Control_Surface.loop(); // Update the Control Surface
}