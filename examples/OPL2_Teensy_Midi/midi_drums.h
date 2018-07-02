/**
 * This file contains instrument defenitions from the Adlib standard instrument library for use with the OPL2 Audio
 * Board library.
 *
 * Instrument definition is based on Adlib instrument bank format.
 *  0 - Drum note
 *		MIDI note corresponding to the drum sound if not zero. Otherwise melodic instrument.
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
const unsigned char INSTRUMENT_CLAP2[12]     PROGMEM = { 0x00, 0x3E, 0x00, 0x9F, 0x0F, 0x0F, 0x00, 0x30, 0x00, 0x87, 0xFA, 0x00 };
const unsigned char INSTRUMENT_SCRATCH1[12]  PROGMEM = { 0x00, 0x01, 0x00, 0x78, 0x97, 0x09, 0x00, 0x02, 0x00, 0x88, 0x98, 0x03 };
const unsigned char INSTRUMENT_SCRATCH2[12]  PROGMEM = { 0x00, 0x01, 0x00, 0x78, 0x97, 0x09, 0x00, 0x02, 0x00, 0x88, 0x98, 0x03 };
const unsigned char INSTRUMENT_RIMSHOT2[12]  PROGMEM = { 0x00, 0x16, 0x08, 0xF1, 0xFB, 0x01, 0x00, 0x11, 0x00, 0xF9, 0x69, 0x00 };
const unsigned char INSTRUMENT_HIQ[12]       PROGMEM = { 0x00, 0x00, 0x00, 0xF8, 0x6C, 0x01, 0x00, 0x0E, 0x80, 0xE8, 0x4A, 0x00 };
const unsigned char INSTRUMENT_WOODBLOK[12]  PROGMEM = { 0x00, 0x25, 0x1B, 0xFA, 0xF2, 0x01, 0x00, 0x12, 0x00, 0xF6, 0x9A, 0x00 };
const unsigned char INSTRUMENT_GLOCK[12]     PROGMEM = { 0x00, 0x06, 0x03, 0xF4, 0x44, 0x00, 0x01, 0x01, 0x1B, 0xF2, 0x34, 0x00 };
const unsigned char INSTRUMENT_BASS_DR2[12]  PROGMEM = { 0x00, 0x00, 0x00, 0xF9, 0xF3, 0x05, 0x00, 0x01, 0x00, 0xF7, 0x8A, 0x00 };
const unsigned char INSTRUMENT_BASS_DR1[12]  PROGMEM = { 0x00, 0x01, 0x07, 0xFA, 0xFD, 0x05, 0x00, 0x01, 0x00, 0xF6, 0x47, 0x00 };
const unsigned char INSTRUMENT_RIMSHOT[12]   PROGMEM = { 0x00, 0x16, 0x08, 0xF1, 0xFB, 0x01, 0x00, 0x11, 0x00, 0xF9, 0x69, 0x00 };
const unsigned char INSTRUMENT_SNARE_AC[12]  PROGMEM = { 0x00, 0x24, 0x00, 0xFF, 0x00, 0x0F, 0x00, 0x02, 0x00, 0xF7, 0xA9, 0x00 };
const unsigned char INSTRUMENT_CLAP[12]      PROGMEM = { 0x00, 0x3E, 0x00, 0x9F, 0x0F, 0x0F, 0x00, 0x30, 0x00, 0x87, 0xFA, 0x00 };
const unsigned char INSTRUMENT_SNARE_EL[12]  PROGMEM = { 0x00, 0x24, 0x00, 0xFF, 0x00, 0x0F, 0x00, 0x02, 0x00, 0xF7, 0xA9, 0x00 };
const unsigned char INSTRUMENT_LO_TOMS[12]   PROGMEM = { 0x00, 0x06, 0x0A, 0xFA, 0x1F, 0x0C, 0x00, 0x11, 0x00, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_HIHAT_CL[12]  PROGMEM = { 0x00, 0x2C, 0x00, 0xF2, 0xFE, 0x07, 0x00, 0x02, 0x06, 0xB8, 0xD8, 0x03 };
const unsigned char INSTRUMENT_HI_TOMS[12]   PROGMEM = { 0x00, 0x06, 0x0A, 0xFA, 0x1F, 0x0C, 0x00, 0x11, 0x00, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_HIHAT_PL[12]  PROGMEM = { 0x00, 0x2C, 0x00, 0xF2, 0xFE, 0x07, 0x00, 0x02, 0x06, 0xB8, 0xD8, 0x03 };
const unsigned char INSTRUMENT_LOW_TOM[12]   PROGMEM = { 0x00, 0x06, 0x0A, 0xFA, 0x1F, 0x0C, 0x00, 0x11, 0x00, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_HIHAT_OP[12]  PROGMEM = { 0x00, 0x2E, 0x00, 0x82, 0xF6, 0x05, 0x00, 0x04, 0x10, 0x74, 0xF8, 0x03 };
const unsigned char INSTRUMENT_LTOM_MID[12]  PROGMEM = { 0x00, 0x06, 0x0A, 0xFA, 0x1F, 0x0C, 0x00, 0x11, 0x00, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_HTOM_MID[12]  PROGMEM = { 0x00, 0x06, 0x0A, 0xFA, 0x1F, 0x0C, 0x00, 0x11, 0x00, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_CRASH[12]     PROGMEM = { 0x00, 0x2C, 0x00, 0x9F, 0x00, 0x0F, 0x02, 0x0E, 0x05, 0xC5, 0xD4, 0x03 };
const unsigned char INSTRUMENT_TOM_HIGH[12]  PROGMEM = { 0x00, 0x06, 0x0A, 0xFA, 0x1F, 0x0C, 0x00, 0x11, 0x00, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_RIDE_CY[12]   PROGMEM = { 0x00, 0x29, 0x10, 0x94, 0x00, 0x0F, 0x00, 0x04, 0x04, 0xF9, 0x44, 0x03 };
const unsigned char INSTRUMENT_TAMBOUR[12]   PROGMEM = { 0x00, 0x2C, 0x00, 0x9F, 0x00, 0x0F, 0x02, 0x0E, 0x05, 0xC5, 0xD4, 0x03 };
const unsigned char INSTRUMENT_CYMBAL[12]    PROGMEM = { 0x00, 0x29, 0x10, 0x94, 0x00, 0x0F, 0x00, 0x04, 0x04, 0xF9, 0x44, 0x03 };
const unsigned char INSTRUMENT_TAMBOU2[12]   PROGMEM = { 0x00, 0x2E, 0x09, 0xF5, 0xF1, 0x01, 0x00, 0x06, 0x03, 0x87, 0xF7, 0x03 };
const unsigned char INSTRUMENT_SPLASH[12]    PROGMEM = { 0x00, 0x2C, 0x00, 0x9F, 0x00, 0x0F, 0x02, 0x0E, 0x05, 0xC5, 0xD4, 0x03 };
const unsigned char INSTRUMENT_COWBELL[12]   PROGMEM = { 0x00, 0x37, 0x14, 0xF7, 0xA1, 0x09, 0x01, 0x03, 0x00, 0xF6, 0x28, 0x00 };
const unsigned char INSTRUMENT_CRASH2[12]    PROGMEM = { 0x00, 0x2C, 0x00, 0x9F, 0x00, 0x0F, 0x02, 0x0E, 0x05, 0xC5, 0xD4, 0x03 };
const unsigned char INSTRUMENT_VIBRASLA[12]  PROGMEM = { 0x00, 0x80, 0x00, 0xFF, 0x00, 0x0D, 0x01, 0x00, 0x00, 0xF5, 0xF7, 0x01 };
const unsigned char INSTRUMENT_RIDE2[12]     PROGMEM = { 0x00, 0x29, 0x10, 0x94, 0x00, 0x0F, 0x00, 0x04, 0x04, 0xF9, 0x44, 0x03 };
const unsigned char INSTRUMENT_HI_BONGO[12]  PROGMEM = { 0x00, 0x25, 0xC4, 0xFA, 0xFA, 0x01, 0x00, 0x03, 0x00, 0x99, 0xF9, 0x00 };
const unsigned char INSTRUMENT_LO_BONGO[12]  PROGMEM = { 0x00, 0x21, 0x03, 0xFB, 0xFA, 0x01, 0x01, 0x02, 0x00, 0xA8, 0xF7, 0x00 };
const unsigned char INSTRUMENT_MUTECONG[12]  PROGMEM = { 0x00, 0x25, 0xC4, 0xFA, 0xFA, 0x01, 0x00, 0x03, 0x00, 0x99, 0xF9, 0x00 };
const unsigned char INSTRUMENT_OPENCONG[12]  PROGMEM = { 0x00, 0x24, 0x18, 0xF9, 0xFA, 0x0F, 0x02, 0x03, 0x00, 0xA6, 0xF6, 0x00 };
const unsigned char INSTRUMENT_LOWCONGA[12]  PROGMEM = { 0x00, 0x24, 0x18, 0xF9, 0xFA, 0x0F, 0x02, 0x03, 0x00, 0xA6, 0xF6, 0x00 };
const unsigned char INSTRUMENT_HI_TIMBA[12]  PROGMEM = { 0x00, 0x05, 0x14, 0xF5, 0xF5, 0x07, 0x02, 0x03, 0x00, 0xF6, 0x36, 0x02 };
const unsigned char INSTRUMENT_LO_TIMBA[12]  PROGMEM = { 0x00, 0x05, 0x14, 0xF5, 0xF5, 0x07, 0x02, 0x03, 0x00, 0xF6, 0x36, 0x02 };
const unsigned char INSTRUMENT_HI_AGOGO[12]  PROGMEM = { 0x00, 0x1C, 0x0C, 0xF9, 0x31, 0x0F, 0x01, 0x15, 0x00, 0x96, 0xE8, 0x01 };
const unsigned char INSTRUMENT_LO_AGOGO[12]  PROGMEM = { 0x00, 0x1C, 0x0C, 0xF9, 0x31, 0x0F, 0x01, 0x15, 0x00, 0x96, 0xE8, 0x01 };
const unsigned char INSTRUMENT_CABASA[12]    PROGMEM = { 0x00, 0x0E, 0x00, 0xFF, 0x01, 0x0F, 0x00, 0x0E, 0x02, 0x79, 0x77, 0x03 };
const unsigned char INSTRUMENT_MARACAS[12]   PROGMEM = { 0x00, 0x0E, 0x00, 0xFF, 0x01, 0x0F, 0x00, 0x0E, 0x02, 0x79, 0x77, 0x03 };
const unsigned char INSTRUMENT_S_WHISTL[12]  PROGMEM = { 0x00, 0x20, 0x15, 0xAF, 0x07, 0x05, 0x01, 0x0E, 0x00, 0xA5, 0x2B, 0x02 };
const unsigned char INSTRUMENT_L_WHISTL[12]  PROGMEM = { 0x00, 0x20, 0x18, 0xBF, 0x07, 0x01, 0x01, 0x0E, 0x00, 0x93, 0x3B, 0x02 };
const unsigned char INSTRUMENT_S_GUIRO[12]   PROGMEM = { 0x00, 0x20, 0x00, 0xF0, 0xF7, 0x0B, 0x00, 0x08, 0x01, 0x89, 0x3B, 0x03 };
const unsigned char INSTRUMENT_L_GUIRO[12]   PROGMEM = { 0x00, 0x20, 0x00, 0xF3, 0xFA, 0x09, 0x00, 0x08, 0x0A, 0x53, 0x2B, 0x02 };
const unsigned char INSTRUMENT_CLAVES[12]    PROGMEM = { 0x00, 0x15, 0x21, 0xF8, 0x9A, 0x09, 0x01, 0x13, 0x00, 0xF6, 0x89, 0x00 };
const unsigned char INSTRUMENT_HI_WDBLK[12]  PROGMEM = { 0x00, 0x25, 0x1B, 0xFA, 0xF2, 0x01, 0x00, 0x12, 0x00, 0xF6, 0x9A, 0x00 };
const unsigned char INSTRUMENT_LO_WDBLK[12]  PROGMEM = { 0x00, 0x25, 0x1B, 0xFA, 0xF2, 0x01, 0x00, 0x12, 0x00, 0xF6, 0x9A, 0x00 };
const unsigned char INSTRUMENT_MU_CUICA[12]  PROGMEM = { 0x00, 0x20, 0x01, 0x5F, 0x07, 0x01, 0x00, 0x08, 0x00, 0x87, 0x4B, 0x01 };
const unsigned char INSTRUMENT_OP_CUICA[12]  PROGMEM = { 0x00, 0x25, 0x12, 0x57, 0xF7, 0x01, 0x01, 0x03, 0x00, 0x78, 0x67, 0x01 };
const unsigned char INSTRUMENT_MU_TRNGL[12]  PROGMEM = { 0x00, 0x22, 0x2F, 0xF1, 0xF0, 0x07, 0x00, 0x27, 0x02, 0xF8, 0xFC, 0x00 };
const unsigned char INSTRUMENT_OP_TRNGL[12]  PROGMEM = { 0x00, 0x26, 0x44, 0xF1, 0xF0, 0x07, 0x00, 0x27, 0x40, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_SHAKER[12]    PROGMEM = { 0x00, 0x0E, 0x00, 0xFF, 0x01, 0x0F, 0x00, 0x0E, 0x02, 0x79, 0x77, 0x03 };
const unsigned char INSTRUMENT_TRIANGL1[12]  PROGMEM = { 0x00, 0x26, 0x44, 0xF1, 0xF0, 0x07, 0x00, 0x27, 0x40, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_TRIANGL2[12]  PROGMEM = { 0x00, 0x26, 0x44, 0xF1, 0xF0, 0x07, 0x00, 0x27, 0x40, 0xF5, 0xF5, 0x00 };
const unsigned char INSTRUMENT_RIMSHOT3[12]  PROGMEM = { 0x00, 0x16, 0x08, 0xF1, 0xFB, 0x01, 0x00, 0x11, 0x00, 0xF9, 0x69, 0x00 };
const unsigned char INSTRUMENT_RIMSHOT4[12]  PROGMEM = { 0x00, 0x16, 0x08, 0xF1, 0xFB, 0x01, 0x00, 0x11, 0x00, 0xF9, 0x69, 0x00 };
const unsigned char INSTRUMENT_TAIKO[12]     PROGMEM = { 0x00, 0x02, 0x1D, 0xF5, 0x93, 0x01, 0x00, 0x00, 0x00, 0xC6, 0x45, 0x00 };