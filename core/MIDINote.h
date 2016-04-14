//
// Created by jpenuchot on 13/04/16.
//

#ifndef RASPSTEPSEQUENCER_MIDINOTE_H
#define RASPSTEPSEQUENCER_MIDINOTE_H

#define NOTE_C-1	0
#define NOTE_C#-1	1
#define NOTE_D-1	2
#define NOTE_D#-1	3
#define NOTE_E-1	4
#define NOTE_F-1	5
#define NOTE_F#-1	6
#define NOTE_G-1	7
#define NOTE_G#-1	8
#define NOTE_A-1	9
#define NOTE_A#-1	10
#define NOTE_B-1	11

#define NOTE_C0		12
#define NOTE_C#0	13
#define NOTE_D0		14
#define NOTE_D#0	15
#define NOTE_E0		16
#define NOTE_F0		17
#define NOTE_F#0	18
#define NOTE_G0		19
#define NOTE_G#0	20
#define NOTE_A0		21
#define NOTE_A#0	22
#define NOTE_B0		23

#define NOTE_C1		24
#define NOTE_C#1	25
#define NOTE_D1		26
#define NOTE_D#1	27
#define NOTE_E1		28
#define NOTE_F1		29
#define NOTE_F#1	30
#define NOTE_G1		31
#define NOTE_G#1	32
#define NOTE_A1		33
#define NOTE_A#1	34
#define NOTE_B1		35

#define NOTE_C2		36
#define NOTE_C#2	37
#define NOTE_D2		38
#define NOTE_D#2	39
#define NOTE_E2		40
#define NOTE_F2		41
#define NOTE_F#2	42
#define NOTE_G2		43
#define NOTE_G#2	44
#define NOTE_A2		45
#define NOTE_A#2	46
#define NOTE_B2		47

#define NOTE_C3		48
#define NOTE_C#3	49
#define NOTE_D3		50
#define NOTE_D#3	51
#define NOTE_E3		52
#define NOTE_F3		53
#define NOTE_F#3	54
#define NOTE_G3		55
#define NOTE_G#3	56
#define NOTE_A3		57
#define NOTE_A#3	58
#define NOTE_B3		59

#define NOTE_C4		60
#define NOTE_C#4	61
#define NOTE_D4		62
#define NOTE_D#4	63
#define NOTE_E4		64
#define NOTE_F4		65
#define NOTE_F#4	66
#define NOTE_G4		67
#define NOTE_G#4	68
#define NOTE_A4		69
#define NOTE_A#4	70
#define NOTE_B4		71

#define NOTE_C5		72
#define NOTE_C#5	73
#define NOTE_D5		74
#define NOTE_D#5	75
#define NOTE_E5		76
#define NOTE_F5		77
#define NOTE_F#5	78
#define NOTE_G5		79
#define NOTE_G#5	80
#define NOTE_A5		81
#define NOTE_A#5	82
#define NOTE_B5		83

#define NOTE_C6		84
#define NOTE_C#6	85
#define NOTE_D6		86
#define NOTE_D#6	87
#define NOTE_E6		88
#define NOTE_F6		89
#define NOTE_F#6	90
#define NOTE_G6		91
#define NOTE_G#6	92
#define NOTE_A6		93
#define NOTE_A#6	94
#define NOTE_B6		95

#define NOTE_C7		96
#define NOTE_C#7	97
#define NOTE_D7		98
#define NOTE_D#7	99
#define NOTE_E7		100
#define NOTE_F7		101
#define NOTE_F#7	102
#define NOTE_G7		103
#define NOTE_G#7	104
#define NOTE_A7		105
#define NOTE_A#7	106
#define NOTE_B7		107

#define NOTE_C8		108
#define NOTE_C#8	109
#define NOTE_D8		110
#define NOTE_D#8	111
#define NOTE_E8		112
#define NOTE_F8		113
#define NOTE_F#8	114
#define NOTE_G8		115
#define NOTE_G#8	116
#define NOTE_A8		117
#define NOTE_A#8	118
#define NOTE_B8		119

#define NOTE_C9		120
#define NOTE_C#9	121
#define NOTE_D9		122
#define NOTE_D#9	123
#define NOTE_E9		124
#define NOTE_F9		125
#define NOTE_F#9	126
#define NOTE_G9		127

namespace rss {
    /**
     * Structure for a note that can be played directly by a MIDIDevice class.
     */
    struct MIDINote {
        unsigned char note, vel;
        unsigned int len;
    };
}

#endif //RASPSTEPSEQUENCER_MIDINOTE_H
