# RaspiSequencer
A step sequencer originally designed to run on the Raspberry Pi that can actually run on all Linux computers. The project aims to bring sequencing to the Raspberry Pi in a way that encourages hacking and exploration.

The structure enables the users to make their own way of iterating through a sequence of notes (Sequencial, random, reverse, etc.).

## Motivation
The original goal for this program is to be able to sequence a Korg MS20 Mini using a computer as cheap as a Raspberry Pi, even the Pi Zero that only costs $5.

## Overall structure

### MIDIDevice
The most important class here is **MIDIDevice**. It represents a MIDI device on which you can play notes using very simple commands with the **MIDINote** structure.

### StepSequencer
The **StepSequencer** class is a simple step sequencer designed to be as flexible as possible, hopefully enough to be used live, or *almost* live. It can iterate through the notes of a **SeqNote** vector using a **NoteIterator**.

### NoteIterator

A simple abstract class that can represent any way of iterating through a **SeqNote** pattern. The only functions it has to implement are :

- bool hasNext() : returns true when there is a note left to play
- int next() : returns the ID of the next note to play

## Installation
Runs on Linux only. I might port it on Windows but it is not planned.


Avec amour pour les Piwis qui me lisent !