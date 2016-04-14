//
// Created by jpenuchot on 13/04/16.
//

#ifndef RASPSTEPSEQUENCER_STEPSEQUENCER_H
#define RASPSTEPSEQUENCER_STEPSEQUENCER_H

#include "../core/MIDIDevice.h"
#include "SeqNote.h"

#include <vector>

namespace rss {
	class StepSequencer {
	private:
		MIDIDevice mDevice;
		float fTempo = 128.;
		bool bReverse = false;
		std::vector<SeqNote> vSequence;
		unsigned int iSeqSize = 64;

	public:
		void setTempo(float fTempo);
		float getTempo();
		/**
		 * Triggers the id-modulus-n-th note in the sequence (Giving an id above the number of notes won't crash it).
		 */
		void trigNote(int id);
		/**
		 * Plays the internal sequence once.
		 */
		void playSequence();
		/**
		 * Plays the internal sequence until played n times, or infinitely if iNumTimes is set to -1 (Default).
		 */
		void loopSequence(int iNumTimes = -1);
		/**
		 * Resizes the sequence without erasing the note buffer, or safely increases its size.
		 */
		void resize(int size);
		/**
		 * Adds a note at the end of the sequence.
		 */
		void addNote(SeqNote note);
		/**
		 * Sets the id-mod-n-th note.
		 */
		void setNote(int id, SeqNote note);
		/**
		 * Returns the id-mod-n-th note.
		 */
		SeqNote getNote(int id);
		/**
		 * Plays a SeqNote
		 */
		void playNote(SeqNote note);d
	};
}

#endif //RASPSTEPSEQUENCER_STEPSEQUENCER_H
