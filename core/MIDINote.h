//
// Created by jpenuchot on 13/04/16.
//

#ifndef RASPSTEPSEQUENCER_MIDINOTE_H
#define RASPSTEPSEQUENCER_MIDINOTE_H

#define NOTE_C_1	0
#define NOTE_CS_1	1
#define NOTE_D_1	2
#define NOTE_DS_1	3
#define NOTE_E_1	4
#define NOTE_F_1	5
#define NOTE_FS_1	6
#define NOTE_G_1	7
#define NOTE_GS_1	8
#define NOTE_A_1	9
#define NOTE_AS_1	10
#define NOTE_B_1	11

#define NOTE_C0		12
#define NOTE_CS0	13
#define NOTE_D0		14
#define NOTE_DS0	15
#define NOTE_E0		16
#define NOTE_F0		17
#define NOTE_FS0	18
#define NOTE_G0		19
#define NOTE_GS0	20
#define NOTE_A0		21
#define NOTE_AS0	22
#define NOTE_B0		23

#define NOTE_C1		24
#define NOTE_CS1	25
#define NOTE_D1		26
#define NOTE_DS1	27
#define NOTE_E1		28
#define NOTE_F1		29
#define NOTE_FS1	30
#define NOTE_G1		31
#define NOTE_GS1	32
#define NOTE_A1		33
#define NOTE_AS1	34
#define NOTE_B1		35

#define NOTE_C2		36
#define NOTE_CS2	37
#define NOTE_D2		38
#define NOTE_DS2	39
#define NOTE_E2		40
#define NOTE_F2		41
#define NOTE_FS2	42
#define NOTE_G2		43
#define NOTE_GS2	44
#define NOTE_A2		45
#define NOTE_AS2	46
#define NOTE_B2		47

#define NOTE_C3		48
#define NOTE_CS3	49
#define NOTE_D3		50
#define NOTE_DS3	51
#define NOTE_E3		52
#define NOTE_F3		53
#define NOTE_FS3	54
#define NOTE_G3		55
#define NOTE_GS3	56
#define NOTE_A3		57
#define NOTE_AS3	58
#define NOTE_B3		59

#define NOTE_C4		60
#define NOTE_CS4	61
#define NOTE_D4		62
#define NOTE_DS4	63
#define NOTE_E4		64
#define NOTE_F4		65
#define NOTE_FS4	66
#define NOTE_G4		67
#define NOTE_GS4	68
#define NOTE_A4		69
#define NOTE_AS4	70
#define NOTE_B4		71

#define NOTE_C5		72
#define NOTE_CS5	73
#define NOTE_D5		74
#define NOTE_DS5	75
#define NOTE_E5		76
#define NOTE_F5		77
#define NOTE_FS5	78
#define NOTE_G5		79
#define NOTE_GS5	80
#define NOTE_A5		81
#define NOTE_AS5	82
#define NOTE_B5		83

#define NOTE_C6		84
#define NOTE_CS6	85
#define NOTE_D6		86
#define NOTE_DS6	87
#define NOTE_E6		88
#define NOTE_F6		89
#define NOTE_FS6	90
#define NOTE_G6		91
#define NOTE_GS6	92
#define NOTE_A6		93
#define NOTE_AS6	94
#define NOTE_B6		95

#define NOTE_C7		96
#define NOTE_CS7	97
#define NOTE_D7		98
#define NOTE_DS7	99
#define NOTE_E7		100
#define NOTE_F7		101
#define NOTE_FS7	102
#define NOTE_G7		103
#define NOTE_GS7	104
#define NOTE_A7		105
#define NOTE_AS7	106
#define NOTE_B7		107

#define NOTE_C8		108
#define NOTE_CS8	109
#define NOTE_D8		110
#define NOTE_DS8	111
#define NOTE_E8		112
#define NOTE_F8		113
#define NOTE_FS8	114
#define NOTE_G8		115
#define NOTE_GS8	116
#define NOTE_A8		117
#define NOTE_AS8	118
#define NOTE_B8		119

#define NOTE_C9		120
#define NOTE_CS9	121
#define NOTE_D9		122
#define NOTE_DS9	123
#define NOTE_E9		124
#define NOTE_F9		125
#define NOTE_FS9	126
#define NOTE_G9		127


namespace rss {
    /**
     * Structure for a note that can be played directly by a MIDIDevice class.
     */
    struct MIDINote {
        unsigned char note, vel;
        float len;
    };

    const char noteName[128][8] =
            {"C-1", "C#-1", "D-1", "D#-1", "E-1", "F-1", "F#-1", "G-1", "G#-1", "A-1", "A#-1", "B-1",
    "C0", "C#0", "D0", "D#0", "E0", "F0", "F#0", "G0", "G#0", "A0", "A#0", "B0",
    "C1", "C#1", "D1", "D#1", "E1", "F1", "F#1", "G1", "G#1", "A1", "A#1", "B1",
    "C2", "C#2", "D2", "D#2", "E2", "F2", "F#2", "G2", "G#2", "A2", "A#2", "B2",
    "C3", "C#3", "D3", "D#3", "E3", "F3", "F#3", "G3", "G#3", "A3", "A#3", "B3",
    "C4", "C#4", "D4", "D#4", "E4", "F4", "F#4", "G4", "G#4", "A4", "A#4", "B4",
    "C5", "C#5", "D5", "D#5", "E5", "F5", "F#5", "G5", "G#5", "A5", "A#5", "B5",
    "C6", "C#6", "D6", "D#6", "E6", "F6", "F#6", "G6", "G#6", "A6", "A#6", "B6",
    "C7", "C#7", "D7", "D#7", "E7", "F7", "F#7", "G7", "G#7", "A7", "A#7", "B7",
    "C8", "C#8", "D8", "D#8", "E8", "F8", "F#8", "G8", "G#8", "A8", "A#8", "B8",
    "C9", "C#9", "D9", "D#9", "E9", "F9", "F#9", "G9"};
}

#endif //RASPSTEPSEQUENCER_MIDINOTE_H
