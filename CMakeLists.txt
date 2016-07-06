cmake_minimum_required(VERSION 3.4)
project(RaspStepSequencer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp core/MIDINote.h core/MIDIDevice.cpp core/MIDIDevice.h sequencer/StepSequencer.cpp sequencer/StepSequencer.h sequencer/SeqNote.h iterators/NoteIterator.cpp iterators/NoteIterator.h iterators/OneShot.cpp iterators/OneShot.h iterators/Reverse.cpp iterators/Reverse.h iterators/Loop.cpp iterators/Loop.h)
add_executable(RaspStepSequencer ${SOURCE_FILES})