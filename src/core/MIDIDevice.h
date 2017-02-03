//
// Created by jpenuchot on 13/04/16.
//

#ifndef RASPSTEPSEQUENCER_MIDIDEVICE_H
#define RASPSTEPSEQUENCER_MIDIDEVICE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#include <string>
#include <exception>
#include <fstream>
#include <iostream>

#include "MIDINote.h"

namespace rss {
    class MIDIDevice {
    private:
        std::string sDeviceName;
        std::ofstream fDevice;

    public:
        MIDIDevice(std::string);

		void playNote(MIDINote note, unsigned char ch = 0);

		~MIDIDevice();
    };
}

#endif //RASPSTEPSEQUENCER_MIDIDEVICE_H
;