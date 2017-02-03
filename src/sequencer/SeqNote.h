//
// Created by jpenuchot on 13/04/16.
//

#ifndef RASPSTEPSEQUENCER_SEQNOTE_H
#define RASPSTEPSEQUENCER_SEQNOTE_H

namespace rss {
	struct SeqNote {
		unsigned char note, vel, len;
		bool on;
	};
};

#endif //RASPSTEPSEQUENCER_SEQNOTE_H
