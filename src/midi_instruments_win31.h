/**
 * This file contains MIDI instrument defenitions for use with the OPL2 Audio Board library. These were converted from
 * the Windows 3.1 MIDI driver for Sound Blaster 16. This file contains the melodic instrments only.
 *
 * Instrument definition is based on Adlib instrument bank format.
 *  0 - Rhythm mode drum channel
 *		Drum channels are predefined by the YM3812 and cannot be redefined. Regular instruments have their channel set
 *		to 0x00 and can be assigned to any channel by the setInstrument function. Rhythm mode instruments can only be
 *		used when rhythm mode is active (see OPL2.setPercussion).
 *
 *  1 - Channel c, operator 1, register 0x20
 *		Tremolo(1) | Vibrato(1) | Sustain(1) | KSR(1) | Frequency multiplier (4)
 *
 *  2 - Channel c, operator 1, register 0x40
 *		Key scale level(2) | Output level(6)
 *
 *  3 - Channel c, operator 1, register 0x60
 *		Attack(4) | Decay(4)
 *
 *  4 - Channel c, operator 1, register 0x80
 *		Sustain(4) | Release(4)
 *
 *  5 - Channel c, register 0xC0
 *		Undefined(4) | Modulation feedback factor(3) | Synth type(1)
 *
 *  6 - Channel c, operator 1, register 0xE0
 *		Undefined(5) | Waveform(3)
 *
 *  7 - Channel c, operator 2, register 0x20 
 *  8 - Channel c, operator 2, register 0x40
 *  9 - Channel c, operator 2, register 0x60
 * 10 - Channel c, operator 2, register 0x80
 * 11 - Channel c, operator 2, register 0xE0
 */

const unsigned char INSTRUMENT_PIANO1[12]   PROGMEM = { 0x00, 0x01, 0x8F, 0xF2, 0xF4, 0x38, 0x00, 0x01, 0x0D, 0xF2, 0xF7, 0x00 };
const unsigned char INSTRUMENT_PIANO2[12]   PROGMEM = { 0x00, 0x01, 0x4B, 0xF2, 0xF4, 0x38, 0x00, 0x01, 0x07, 0xF2, 0xF7, 0x00 };
const unsigned char INSTRUMENT_PIANO3[12]   PROGMEM = { 0x00, 0x01, 0x49, 0xF2, 0xF4, 0x38, 0x00, 0x01, 0x07, 0xF2, 0xF6, 0x00 };
const unsigned char INSTRUMENT_HONKTONK[12] PROGMEM = { 0x00, 0x81, 0x12, 0xF2, 0xF7, 0x00, 0x00, 0x41, 0x07, 0xF2, 0xF7, 0x00 };
const unsigned char INSTRUMENT_EP1[12]      PROGMEM = { 0x00, 0x01, 0x57, 0xF1, 0xF7, 0x00, 0x00, 0x01, 0x07, 0xF2, 0xF7, 0x00 };
const unsigned char INSTRUMENT_EP2[12]      PROGMEM = { 0x00, 0x01, 0x93, 0xF1, 0xF7, 0x00, 0x00, 0x01, 0x07, 0xF2, 0xF7, 0x00 };
const unsigned char INSTRUMENT_HARPSIC[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_CLAVIC[12]   PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_CELESTA[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_GLOCK[12]    PROGMEM = { 0x00, 0x07, 0x97, 0xF3, 0xF2, 0x32, 0x00, 0x11, 0x87, 0xF2, 0xF1, 0x00 };
const unsigned char INSTRUMENT_MUSICBOX[12] PROGMEM = { 0x00, 0x17, 0x21, 0x54, 0xF4, 0x32, 0x00, 0x01, 0x07, 0xF4, 0xF4, 0x00 };
const unsigned char INSTRUMENT_VIBES[12]    PROGMEM = { 0x00, 0x98, 0x62, 0xF3, 0xF6, 0x30, 0x00, 0x81, 0x07, 0xF2, 0xF6, 0x00 };
const unsigned char INSTRUMENT_MARIMBA[12]  PROGMEM = { 0x00, 0x18, 0x23, 0xF6, 0xF6, 0x00, 0x00, 0x01, 0x07, 0xE7, 0xF7, 0x00 };
const unsigned char INSTRUMENT_XYLO[12]     PROGMEM = { 0x00, 0x15, 0x91, 0xF6, 0xF6, 0x00, 0x00, 0x01, 0x07, 0xF6, 0xF6, 0x00 };
const unsigned char INSTRUMENT_TUBEBELL[12] PROGMEM = { 0x00, 0x45, 0x59, 0xD3, 0xF3, 0x00, 0x00, 0x81, 0x87, 0xA3, 0xF3, 0x00 };
const unsigned char INSTRUMENT_SANTUR[12]   PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_ORGAN1[12]   PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_ORGAN2[12]   PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_ORGAN3[12]   PROGMEM = { 0x00, 0x70, 0x44, 0xAA, 0x18, 0x34, 0x00, 0xB1, 0x07, 0x8A, 0x08, 0x00 };
const unsigned char INSTRUMENT_PIPEORG[12]  PROGMEM = { 0x00, 0x23, 0x93, 0x97, 0x23, 0x34, 0x01, 0xB1, 0x07, 0x55, 0x14, 0x00 };
const unsigned char INSTRUMENT_REEDORG[12]  PROGMEM = { 0x00, 0x61, 0x13, 0x97, 0x04, 0x30, 0x01, 0xB1, 0x87, 0x55, 0x04, 0x00 };
const unsigned char INSTRUMENT_ACORDIAN[12] PROGMEM = { 0x00, 0x24, 0x48, 0x98, 0x2A, 0x30, 0x01, 0xB1, 0x07, 0x46, 0x1A, 0x00 };
const unsigned char INSTRUMENT_HARMONIC[12] PROGMEM = { 0x00, 0x61, 0x13, 0x91, 0x06, 0x00, 0x01, 0x21, 0x07, 0x61, 0x07, 0x00 };
const unsigned char INSTRUMENT_BANDNEON[12] PROGMEM = { 0x00, 0x21, 0x13, 0x71, 0x06, 0x00, 0x00, 0xA1, 0x90, 0x61, 0x07, 0x00 };
const unsigned char INSTRUMENT_NYLONGT[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_STEELGT[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_JAZZGT[12]   PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_CLEANGT[12]  PROGMEM = { 0x00, 0x03, 0x87, 0xF6, 0x22, 0x36, 0x01, 0x21, 0x87, 0xF3, 0xF8, 0x00 };
const unsigned char INSTRUMENT_MUTEGT[12]   PROGMEM = { 0x00, 0x03, 0x47, 0xF9, 0x54, 0x30, 0x00, 0x21, 0x07, 0xF6, 0x3A, 0x00 };
const unsigned char INSTRUMENT_OVERDGT[12]  PROGMEM = { 0x00, 0x23, 0x4A, 0x91, 0x41, 0x38, 0x01, 0x21, 0x0C, 0x84, 0x19, 0x00 };
const unsigned char INSTRUMENT_DISTGT[12]   PROGMEM = { 0x00, 0x23, 0x4A, 0x95, 0x19, 0x32, 0x01, 0x21, 0x07, 0x94, 0x19, 0x00 };
const unsigned char INSTRUMENT_GTHARMS[12]  PROGMEM = { 0x00, 0x09, 0xA1, 0x20, 0x4F, 0x00, 0x00, 0x84, 0x87, 0xD1, 0xF8, 0x00 };
const unsigned char INSTRUMENT_ACOUBASS[12] PROGMEM = { 0x00, 0x21, 0x1E, 0x94, 0x06, 0x00, 0x00, 0xA2, 0x07, 0xC3, 0xA6, 0x00 };
const unsigned char INSTRUMENT_FINGBASS[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_PICKBASS[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_FRETLESS[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SLAPBAS1[12] PROGMEM = { 0x00, 0x01, 0x8B, 0xA1, 0x9A, 0x38, 0x00, 0x21, 0x47, 0xF2, 0xDF, 0x00 };
const unsigned char INSTRUMENT_SLAPBAS2[12] PROGMEM = { 0x00, 0x21, 0x8B, 0xA2, 0x16, 0x38, 0x00, 0x21, 0x0F, 0xA1, 0xDF, 0x00 };
const unsigned char INSTRUMENT_SYNBASS1[12] PROGMEM = { 0x00, 0x31, 0x8B, 0xF4, 0xE8, 0x3A, 0x00, 0x31, 0x07, 0xF1, 0x78, 0x00 };
const unsigned char INSTRUMENT_SYNBASS2[12] PROGMEM = { 0x00, 0x31, 0x12, 0xF1, 0x28, 0x30, 0x00, 0x31, 0x07, 0xF1, 0x18, 0x00 };
const unsigned char INSTRUMENT_VIOLIN[12]   PROGMEM = { 0x00, 0x31, 0x15, 0xDD, 0x13, 0x00, 0x01, 0x21, 0x07, 0x56, 0x26, 0x00 };
const unsigned char INSTRUMENT_VIOLA[12]    PROGMEM = { 0x00, 0x31, 0x16, 0xDD, 0x13, 0x00, 0x01, 0x21, 0x07, 0x66, 0x06, 0x00 };
const unsigned char INSTRUMENT_CELLO[12]    PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_CONTRAB[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_TREMSTR[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_PIZZ[12]     PROGMEM = { 0x00, 0x02, 0x1A, 0xF5, 0x75, 0x30, 0x01, 0x01, 0x87, 0x85, 0x35, 0x00 };
const unsigned char INSTRUMENT_HARP[12]     PROGMEM = { 0x00, 0x02, 0x1D, 0xF5, 0x75, 0x30, 0x01, 0x01, 0x87, 0xF3, 0xF4, 0x00 };
const unsigned char INSTRUMENT_TIMPANI[12]  PROGMEM = { 0x00, 0x10, 0x41, 0xF5, 0x05, 0x32, 0x01, 0x11, 0x07, 0xF2, 0xC3, 0x00 };
const unsigned char INSTRUMENT_STRINGS[12]  PROGMEM = { 0x00, 0x21, 0x9B, 0xB1, 0x25, 0x3C, 0x01, 0xA2, 0x08, 0x72, 0x08, 0x00 };
const unsigned char INSTRUMENT_SLOWSTR[12]  PROGMEM = { 0x00, 0xA1, 0x98, 0x7F, 0x03, 0x00, 0x01, 0x21, 0x07, 0x3F, 0x07, 0x01 };
const unsigned char INSTRUMENT_SYNSTR1[12]  PROGMEM = { 0x00, 0xA1, 0x93, 0xC1, 0x12, 0x00, 0x00, 0x61, 0x07, 0x4F, 0x05, 0x00 };
const unsigned char INSTRUMENT_SYNSTR2[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_CHOIR[12]    PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_OOHS[12]     PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SYNVOX[12]   PROGMEM = { 0x00, 0x71, 0x57, 0x54, 0x05, 0x3C, 0x00, 0x72, 0x07, 0x7A, 0x05, 0x00 };
const unsigned char INSTRUMENT_ORCHIT[12]   PROGMEM = { 0x00, 0x90, 0x00, 0x54, 0x63, 0x38, 0x00, 0x41, 0x07, 0xA5, 0x45, 0x00 };
const unsigned char INSTRUMENT_TRUMPET[12]  PROGMEM = { 0x00, 0x21, 0x92, 0x85, 0x17, 0x3C, 0x00, 0x21, 0x08, 0x8F, 0x09, 0x00 };
const unsigned char INSTRUMENT_TROMBONE[12] PROGMEM = { 0x00, 0x21, 0x94, 0x75, 0x17, 0x32, 0x00, 0x21, 0x0C, 0x8F, 0x09, 0x00 };
const unsigned char INSTRUMENT_TUBA[12]     PROGMEM = { 0x00, 0x21, 0x94, 0x76, 0x15, 0x00, 0x00, 0x61, 0x07, 0x82, 0x37, 0x00 };
const unsigned char INSTRUMENT_MUTETRP[12]  PROGMEM = { 0x00, 0x31, 0x43, 0x9E, 0x17, 0x00, 0x01, 0x21, 0x07, 0x62, 0x2C, 0x01 };
const unsigned char INSTRUMENT_FRHORN[12]   PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_BRASS1[12]   PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SYNBRAS1[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SYNBRAS2[12] PROGMEM = { 0x00, 0x21, 0x4D, 0x54, 0x3C, 0x38, 0x00, 0x21, 0x07, 0xA6, 0x1C, 0x00 };
const unsigned char INSTRUMENT_SOPSAX[12]   PROGMEM = { 0x00, 0x31, 0x8F, 0x93, 0x02, 0x38, 0x01, 0x61, 0x07, 0x72, 0x0B, 0x00 };
const unsigned char INSTRUMENT_ALTOSAX[12]  PROGMEM = { 0x00, 0x31, 0x8E, 0x93, 0x03, 0x38, 0x01, 0x61, 0x07, 0x72, 0x09, 0x00 };
const unsigned char INSTRUMENT_TENSAX[12]   PROGMEM = { 0x00, 0x31, 0x91, 0x93, 0x03, 0x30, 0x01, 0x61, 0x07, 0x82, 0x09, 0x00 };
const unsigned char INSTRUMENT_BARISAX[12]  PROGMEM = { 0x00, 0x31, 0x8E, 0x93, 0x0F, 0x00, 0x01, 0x61, 0x07, 0x72, 0x0F, 0x00 };
const unsigned char INSTRUMENT_OBOE[12]     PROGMEM = { 0x00, 0x21, 0x4B, 0xAA, 0x16, 0x00, 0x01, 0x21, 0x07, 0x8F, 0x0A, 0x00 };
const unsigned char INSTRUMENT_ENGLHORN[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_BASSOON[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_CLARINET[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_PICCOLO[12]  PROGMEM = { 0x00, 0xE1, 0x1F, 0x85, 0x5F, 0x30, 0x00, 0xE1, 0x07, 0x65, 0x1A, 0x00 };
const unsigned char INSTRUMENT_FLUTE1[12]   PROGMEM = { 0x00, 0xE1, 0x46, 0x88, 0x5F, 0x30, 0x00, 0xE1, 0x07, 0x65, 0x1A, 0x00 };
const unsigned char INSTRUMENT_RECORDER[12] PROGMEM = { 0x00, 0xA1, 0x9C, 0x75, 0x1F, 0x32, 0x00, 0x21, 0x07, 0x75, 0x0A, 0x00 };
const unsigned char INSTRUMENT_PANFLUTE[12] PROGMEM = { 0x00, 0x31, 0x8B, 0x84, 0x58, 0x30, 0x00, 0x21, 0x07, 0x65, 0x1A, 0x00 };
const unsigned char INSTRUMENT_BOTTLEB[12]  PROGMEM = { 0x00, 0xE1, 0x4C, 0x66, 0x56, 0x00, 0x00, 0xA1, 0x07, 0x65, 0x26, 0x00 };
const unsigned char INSTRUMENT_SHAKU[12]    PROGMEM = { 0x00, 0x62, 0xCB, 0x76, 0x46, 0x00, 0x00, 0xA1, 0x07, 0x55, 0x36, 0x00 };
const unsigned char INSTRUMENT_WHISTLE[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_OCARINA[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SQUARWAV[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SAWWAV[12]   PROGMEM = { 0x00, 0x21, 0x0E, 0xFF, 0x0F, 0x30, 0x01, 0x21, 0x07, 0xFF, 0x0F, 0x01 };
const unsigned char INSTRUMENT_SYNCALLI[12] PROGMEM = { 0x00, 0x22, 0x46, 0x86, 0x55, 0x30, 0x00, 0x21, 0x87, 0x64, 0x18, 0x00 };
const unsigned char INSTRUMENT_CHIFLEAD[12] PROGMEM = { 0x00, 0x21, 0x45, 0x66, 0x12, 0x30, 0x00, 0xA1, 0x07, 0x96, 0x0A, 0x00 };
const unsigned char INSTRUMENT_CHARANG[12]  PROGMEM = { 0x00, 0x21, 0x8B, 0x92, 0x2A, 0x34, 0x01, 0x22, 0x07, 0x91, 0x2A, 0x00 };
const unsigned char INSTRUMENT_SOLOVOX[12]  PROGMEM = { 0x00, 0xA2, 0x9E, 0xDF, 0x05, 0x00, 0x00, 0x61, 0x47, 0x6F, 0x07, 0x00 };
const unsigned char INSTRUMENT_FIFTHSAW[12] PROGMEM = { 0x00, 0x20, 0x1A, 0xEF, 0x01, 0x00, 0x00, 0x60, 0x07, 0x8F, 0x06, 0x02 };
const unsigned char INSTRUMENT_BASSLEAD[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_FANTASIA[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_WARMPAD[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_POLYSYN[12]  PROGMEM = { 0x00, 0x61, 0x17, 0x91, 0x34, 0x3C, 0x00, 0x61, 0x07, 0x55, 0x16, 0x00 };
const unsigned char INSTRUMENT_SPACEVOX[12] PROGMEM = { 0x00, 0x71, 0x5D, 0x54, 0x01, 0x30, 0x00, 0x72, 0x07, 0x6A, 0x03, 0x00 };
const unsigned char INSTRUMENT_BOWEDGLS[12] PROGMEM = { 0x00, 0x21, 0x97, 0x21, 0x43, 0x38, 0x00, 0xA2, 0x07, 0x42, 0x35, 0x00 };
const unsigned char INSTRUMENT_METALPAD[12] PROGMEM = { 0x00, 0xA1, 0x1C, 0xA1, 0x77, 0x30, 0x01, 0x21, 0x07, 0x31, 0x47, 0x01 };
const unsigned char INSTRUMENT_HALOPAD[12]  PROGMEM = { 0x00, 0x21, 0x89, 0x11, 0x33, 0x00, 0x00, 0x61, 0x0A, 0x42, 0x25, 0x00 };
const unsigned char INSTRUMENT_SWEEPPAD[12] PROGMEM = { 0x00, 0xA1, 0x15, 0x11, 0x47, 0x00, 0x01, 0x21, 0x07, 0xCF, 0x07, 0x00 };
const unsigned char INSTRUMENT_ICERAIN[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SOUNDTRK[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_CRYSTAL[12]  PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_ATMOSPH[12]  PROGMEM = { 0x00, 0x22, 0x92, 0xB1, 0x81, 0x3C, 0x00, 0x61, 0x8A, 0xF2, 0x26, 0x00 };
const unsigned char INSTRUMENT_BRIGHT[12]   PROGMEM = { 0x00, 0x41, 0x4D, 0xF1, 0x51, 0x30, 0x01, 0x42, 0x07, 0xF2, 0xF5, 0x00 };
const unsigned char INSTRUMENT_GOBLIN[12]   PROGMEM = { 0x00, 0x61, 0x94, 0x11, 0x51, 0x36, 0x01, 0xA3, 0x87, 0x11, 0x13, 0x00 };
const unsigned char INSTRUMENT_ECHODROP[12] PROGMEM = { 0x00, 0x61, 0x8C, 0x11, 0x31, 0x3A, 0x00, 0xA1, 0x87, 0x1D, 0x03, 0x00 };
const unsigned char INSTRUMENT_STARTHEM[12] PROGMEM = { 0x00, 0xA4, 0x4C, 0xF3, 0x73, 0x00, 0x01, 0x61, 0x07, 0x81, 0x23, 0x00 };
const unsigned char INSTRUMENT_SITAR[12]    PROGMEM = { 0x00, 0x02, 0x85, 0xD2, 0x53, 0x00, 0x00, 0x07, 0x0A, 0xF2, 0xF6, 0x01 };
const unsigned char INSTRUMENT_BANJO[12]    PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_SHAMISEN[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_KOTO[12]     PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_KALIMBA[12]  PROGMEM = { 0x00, 0x04, 0x4F, 0xFA, 0x56, 0x3C, 0x00, 0x01, 0x07, 0xC2, 0x05, 0x00 };
const unsigned char INSTRUMENT_BAGPIPE[12]  PROGMEM = { 0x00, 0x21, 0x49, 0x7C, 0x20, 0x36, 0x00, 0x22, 0x07, 0x6F, 0x0C, 0x01 };
const unsigned char INSTRUMENT_FIDDLE[12]   PROGMEM = { 0x00, 0x31, 0x85, 0xDD, 0x33, 0x3A, 0x01, 0x21, 0x07, 0x56, 0x16, 0x00 };
const unsigned char INSTRUMENT_SHANNAI[12]  PROGMEM = { 0x00, 0x20, 0x04, 0xDA, 0x05, 0x30, 0x02, 0x21, 0x88, 0x8F, 0x0B, 0x00 };
const unsigned char INSTRUMENT_TINKLBEL[12] PROGMEM = { 0x00, 0x05, 0x6A, 0xF1, 0xE5, 0x00, 0x00, 0x03, 0x87, 0xC3, 0xE5, 0x00 };
const unsigned char INSTRUMENT_AGOGO[12]    PROGMEM = { 0x00, 0x07, 0x15, 0xEC, 0x26, 0x00, 0x00, 0x02, 0x07, 0xF8, 0x16, 0x00 };
const unsigned char INSTRUMENT_STEELDRM[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_WOODBLOK[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_TAIKO[12]    PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_MELOTOM[12]  PROGMEM = { 0x00, 0x11, 0x41, 0xF8, 0x47, 0x34, 0x02, 0x10, 0x0A, 0xF3, 0x03, 0x00 };
const unsigned char INSTRUMENT_SYNDRUM[12]  PROGMEM = { 0x00, 0x01, 0x8E, 0xF1, 0x06, 0x3E, 0x02, 0x10, 0x07, 0xF3, 0x02, 0x00 };
const unsigned char INSTRUMENT_REVRSCYM[12] PROGMEM = { 0x00, 0x0E, 0x00, 0x1F, 0x00, 0x3E, 0x00, 0xC0, 0x07, 0x1F, 0xFF, 0x03 };
const unsigned char INSTRUMENT_FRETNOIS[12] PROGMEM = { 0x00, 0x06, 0x80, 0xF8, 0x24, 0x38, 0x00, 0x03, 0x8F, 0x56, 0x84, 0x02 };
const unsigned char INSTRUMENT_BRTHNOIS[12] PROGMEM = { 0x00, 0x0E, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xD0, 0x0C, 0x34, 0x04, 0x03 };
const unsigned char INSTRUMENT_SEASHORE[12] PROGMEM = { 0x00, 0x0E, 0x00, 0xF6, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x1F, 0x02, 0x03 };
const unsigned char INSTRUMENT_BIRDS[12]    PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_TELEPHON[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_HELICOPT[12] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char INSTRUMENT_APPLAUSE[12] PROGMEM = { 0x00, 0x26, 0x00, 0xFF, 0x01, 0x3E, 0x00, 0xE4, 0x07, 0x12, 0x16, 0x01 };
const unsigned char INSTRUMENT_GUNSHOT[12]  PROGMEM = { 0x00, 0x00, 0x00, 0xF3, 0xF0, 0x3E, 0x00, 0x00, 0x07, 0xF6, 0xC9, 0x02 };


// Instrument pointer array to access instruments by MIDI program.
const unsigned char *midiInstruments[] = {
	INSTRUMENT_PIANO1,   INSTRUMENT_PIANO2,   INSTRUMENT_PIANO3,   INSTRUMENT_HONKTONK, INSTRUMENT_EP1,      INSTRUMENT_EP2,
	INSTRUMENT_HARPSIC,  INSTRUMENT_CLAVIC,   INSTRUMENT_CELESTA,  INSTRUMENT_GLOCK,    INSTRUMENT_MUSICBOX, INSTRUMENT_VIBES,
	INSTRUMENT_MARIMBA,  INSTRUMENT_XYLO,     INSTRUMENT_TUBEBELL, INSTRUMENT_SANTUR,   INSTRUMENT_ORGAN1,   INSTRUMENT_ORGAN2,
	INSTRUMENT_ORGAN3,   INSTRUMENT_PIPEORG,  INSTRUMENT_REEDORG,  INSTRUMENT_ACORDIAN, INSTRUMENT_HARMONIC, INSTRUMENT_BANDNEON,
	INSTRUMENT_NYLONGT,  INSTRUMENT_STEELGT,  INSTRUMENT_JAZZGT,   INSTRUMENT_CLEANGT,  INSTRUMENT_MUTEGT,   INSTRUMENT_OVERDGT,
	INSTRUMENT_DISTGT,   INSTRUMENT_GTHARMS,  INSTRUMENT_ACOUBASS, INSTRUMENT_FINGBASS, INSTRUMENT_PICKBASS, INSTRUMENT_FRETLESS,
	INSTRUMENT_SLAPBAS1, INSTRUMENT_SLAPBAS2, INSTRUMENT_SYNBASS1, INSTRUMENT_SYNBASS2, INSTRUMENT_VIOLIN,   INSTRUMENT_VIOLA,
	INSTRUMENT_CELLO,    INSTRUMENT_CONTRAB,  INSTRUMENT_TREMSTR,  INSTRUMENT_PIZZ,     INSTRUMENT_HARP,     INSTRUMENT_TIMPANI,
	INSTRUMENT_STRINGS,  INSTRUMENT_SLOWSTR,  INSTRUMENT_SYNSTR1,  INSTRUMENT_SYNSTR2,  INSTRUMENT_CHOIR,    INSTRUMENT_OOHS,
	INSTRUMENT_SYNVOX,   INSTRUMENT_ORCHIT,   INSTRUMENT_TRUMPET,  INSTRUMENT_TROMBONE, INSTRUMENT_TUBA,     INSTRUMENT_MUTETRP,
	INSTRUMENT_FRHORN,   INSTRUMENT_BRASS1,   INSTRUMENT_SYNBRAS1, INSTRUMENT_SYNBRAS2, INSTRUMENT_SOPSAX,   INSTRUMENT_ALTOSAX,
	INSTRUMENT_TENSAX,   INSTRUMENT_BARISAX,  INSTRUMENT_OBOE,     INSTRUMENT_ENGLHORN, INSTRUMENT_BASSOON,  INSTRUMENT_CLARINET,
	INSTRUMENT_PICCOLO,  INSTRUMENT_FLUTE1,   INSTRUMENT_RECORDER, INSTRUMENT_PANFLUTE, INSTRUMENT_BOTTLEB,  INSTRUMENT_SHAKU,
	INSTRUMENT_WHISTLE,  INSTRUMENT_OCARINA,  INSTRUMENT_SQUARWAV, INSTRUMENT_SAWWAV,   INSTRUMENT_SYNCALLI, INSTRUMENT_CHIFLEAD,
	INSTRUMENT_CHARANG,  INSTRUMENT_SOLOVOX,  INSTRUMENT_FIFTHSAW, INSTRUMENT_BASSLEAD, INSTRUMENT_FANTASIA, INSTRUMENT_WARMPAD,
	INSTRUMENT_POLYSYN,  INSTRUMENT_SPACEVOX, INSTRUMENT_BOWEDGLS, INSTRUMENT_METALPAD, INSTRUMENT_HALOPAD,  INSTRUMENT_SWEEPPAD,
	INSTRUMENT_ICERAIN,  INSTRUMENT_SOUNDTRK, INSTRUMENT_CRYSTAL,  INSTRUMENT_ATMOSPH,  INSTRUMENT_BRIGHT,   INSTRUMENT_GOBLIN,
	INSTRUMENT_ECHODROP, INSTRUMENT_STARTHEM, INSTRUMENT_SITAR,    INSTRUMENT_BANJO,    INSTRUMENT_SHAMISEN, INSTRUMENT_KOTO,
	INSTRUMENT_KALIMBA,  INSTRUMENT_BAGPIPE,  INSTRUMENT_FIDDLE,   INSTRUMENT_SHANNAI,  INSTRUMENT_TINKLBEL, INSTRUMENT_AGOGO,
	INSTRUMENT_STEELDRM, INSTRUMENT_WOODBLOK, INSTRUMENT_TAIKO,    INSTRUMENT_MELOTOM,  INSTRUMENT_SYNDRUM,  INSTRUMENT_REVRSCYM,
	INSTRUMENT_FRETNOIS, INSTRUMENT_BRTHNOIS, INSTRUMENT_SEASHORE, INSTRUMENT_BIRDS,    INSTRUMENT_TELEPHON, INSTRUMENT_HELICOPT,
	INSTRUMENT_APPLAUSE, INSTRUMENT_GUNSHOT
};
