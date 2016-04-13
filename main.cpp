#include "core/MIDIDevice.h"

using namespace rss;

int main(void) {
   MIDIDevice mdd("/dev/midi1");

   MIDINote note;

   note.note = 60;
   note.vel = 100;
   note.len = 128;

   mdd.playNote(note);

   return 0;
}