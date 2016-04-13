//
// Created by jpenuchot on 13/04/16.
//

#ifndef RASPSTEPSEQUENCER_MIDINOTE_H
#define RASPSTEPSEQUENCER_MIDINOTE_H

namespace rss {
    struct MIDINote {
        unsigned char note, vel;
        unsigned int len;
    };
}

#endif //RASPSTEPSEQUENCER_MIDINOTE_H
