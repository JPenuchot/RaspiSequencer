#include "core/MIDIDevice.h"

using namespace rss;

int main(void) {
   MIDIDevice mdd("/dev/midi1");

   MIDINote note;

   note.note = NOTE_C4;
   note.vel = 100;
   note.len = 128;

   mdd.playNote(note);

   return 0;
}