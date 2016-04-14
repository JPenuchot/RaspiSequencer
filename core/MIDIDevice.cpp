//
// Created by jpenuchot on 13/04/16.
//

#include "MIDIDevice.h"

#include <chrono>
#include <thread>
#include <cmath>

using namespace rss;

MIDIDevice::MIDIDevice(std::string sDeviceName) :
	sDeviceName(sDeviceName) {
	fDevice.open(sDeviceName);

	if(!fDevice.is_open()){
		std::cerr << "Error : Can't open file " << sDeviceName << std::endl;
		throw std::ofstream::failure("Cannot open file.");
	}
}

void MIDIDevice::playNote(MIDINote note, unsigned char ch){
	unsigned char msg_on[3] = {(unsigned char)0x90 | ch, note.note, note.vel};
	unsigned char msg_off[3] = {(unsigned char)0x80 | ch, note.note, note.vel};

	fDevice << msg_on;
	fDevice.flush();

	usleep(std::abs(note.len) * 1000.);

	fDevice << msg_off;
	fDevice.flush();
}

MIDIDevice::~MIDIDevice() {
	fDevice.close();
}