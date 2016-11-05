//
// Created by Jules on 14-Apr-16.
//

#ifndef RASPSTEPSEQUENCER_NOTEITERATOR_H
#define RASPSTEPSEQUENCER_NOTEITERATOR_H

#include "../sequencer/StepSequencer.h"

namespace rss{
	class NoteIterator {
	private:
		StepSequencer* sqSequencer;
	public:
		NoteIterator(StepSequencer* sqSequencer):
				sqSequencer(sqSequencer){};

		/**
		 * Returns the ID of the next
		 */
		virtual int next();
		virtual bool hasNext();
	};
}

#endif //RASPSTEPSEQUENCER_NOTEITERATOR_H
