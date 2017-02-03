//
// Created by jpenuchot on 13/04/16.
//

#include "StepSequencer.h"

#include <cmath>

void rss::StepSequencer::trigNote(int id) {
	//	TODO : Get timestamp

	SeqNote note = vSequence[id % iSeqSize];
	playNote(note);	//	mDevice.playNote({note.note, note.vel, (float)note.len * 60f / fTempo / .256f});

	//	TODO : Do stuff..?

	//	TODO : Wait until next note
}

void rss::StepSequencer::playSequence() {

}

void rss::StepSequencer::loopSequence(int iNumTimes) {
	while(iNumTimes == -1){
		playSequence();
	}

	for(int i = 0; i < iNumTimes; i++)
		playSequence();
}

void rss::StepSequencer::resize(unsigned int size) {
	//	We don't want to lose notes when downsizing the pattern.
	if(size > vSequence.size())
		vSequence.resize(size, {0, 0, 0, false});
	iSeqSize = size;
}

void rss::StepSequencer::addNote(SeqNote note) {
	iSeqSize++;

	if(vSequence.size() < iSeqSize)
		vSequence.push_back(note);
	else
		vSequence[iSeqSize - 1] = note;
}

rss::SeqNote rss::StepSequencer::getNote(int id) {
	return vSequence[id % iSeqSize];
}

void rss::StepSequencer::setTempo(float fTempo) {
	this->fTempo = std::abs(fTempo);
	if(fTempo < 0)
		bReverse = true;
	if(fTempo == 0)
		this->fTempo = 128.f;
}

float rss::StepSequencer::getTempo() {
	return bReverse ? - fTempo : fTempo;
}

void rss::StepSequencer::setNote(int id, SeqNote note) {
	vSequence[id % iSeqSize] = note;
}

void rss::StepSequencer::playNote(SeqNote note) {
	if(note.on)
		mDevice.playNote({note.note, note.vel, (float)note.len * 60.f / fTempo / .256f});
}
