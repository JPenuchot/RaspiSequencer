//
// Created by jpenuchot on 13/04/16.
//

#include <chrono>
#include <thread>

#include "MIDIDevice.h"

using namespace rss;

MIDIDevice::MIDIDevice(std::string sDeviceName) :
	sDeviceName(sDeviceName) {
	fDevice.open(sDeviceName);

	if(!fDevice.is_open())
		std::cerr << "Error : Can't open file " << sDeviceName << std::endl;
}

void MIDIDevice::playNote(MIDINote note, unsigned char ch){
	unsigned char msg_on[3] = {0x90 | ch, note.note, note.vel};
	unsigned char msg_off[3] = {0x80 | ch, note.note, note.vel};

	fDevice << msg_on;
	fDevice.flush();
	std::cout << "MSG ON" << std::endl;
	usleep(note.len * 1000.);
	std::cout << "MSG OFF" << std::endl;
	fDevice << msg_off;
	fDevice.flush();
}

MIDIDevice::~MIDIDevice() {
	fDevice.close();
}