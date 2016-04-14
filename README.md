# RaspiSequencer
A step sequencer originally designed to run on the Raspberry Pi that can actually run on all Linux computers.

## Motivation
The original goal for this program is to be able to sequence a Korg-MS20 Mini using a computer as cheap as a Raspberry Pi, even the Pi Zero that only costs $5.

## Overall structure

### MIDIDevice
The most important class here is **MIDIDevice**. It represents a MIDI device on which you can play notes using very simple commands with the **MIDINote** structure.

### StepSequencer
The **StepSequencer** class is a simple step sequencer designed to be as flexible as possible, hopefully enough to be used live, or *almost* live. It can play a vector of *SeqNote*.

## Installation
Runs on Linux only. I might port it on Windows but it is not planned.
