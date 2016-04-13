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
		float fTempo;
		std::vector<SeqNote> vSequence;

	public:
		void trigNote(unsigned int id);

	};
}

#endif //RASPSTEPSEQUENCER_STEPSEQUENCER_H
