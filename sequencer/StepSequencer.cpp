//
// Created by jpenuchot on 13/04/16.
//

#include "StepSequencer.h"

#include <cmath>

void rss::StepSequencer::trigNote(int id) {

}

void rss::StepSequencer::playSequence() {

}

void rss::StepSequencer::loopSequence(int iNumTimes) {

}

void rss::StepSequencer::resize(int size) {
	if(size < iSeqSize){
		iSeqSize = size;
		return;
	}
	if(size > vSequence.size()){
		vSequence.resize(size);
		for(int i = iSeqSize; i < size; i++)
			vSequence[i] = {0, 0, 0};
	}
}

void rss::StepSequencer::addNote(SeqNote note) {
	iSeqSize++;

	if(vSequence.size() < iSeqSize)
		vSequence.push_back(note);
	else
		vSequence[iSeqSize - 1] = note;
}

SeqNote rss::StepSequencer::getNote(int id) {
	return vSequence[id % iSeqSize];
}

void rss::StepSequencer::setTempo(float fTempo) {
	this->fTempo = std::abs(fTempo);
	if(fTempo < 0)
		bReverse = true;
	if(fTempo == 0)
		this->fTempo = 128.;
}

float rss::StepSequencer::getTempo() {
	return bReverse ? - fTempo : fTempo;
}

void rss::StepSequencer::setNote(int id, SeqNote note) {
	vSequence[id % iSeqSize] = note;
}

void rss::StepSequencer::playNote(SeqNote note) {
	mDevice.playNote({note.note, note.vel, (float)note.len * 60f / fTempo / .256f});
}





















