#ifndef ECAP_H
#include <stdint.h>


#define _ECAP0_OFF 0x48300100
#define _ECAP1_OFF 0x48302100
#define _ECAP2_OFF 0x48304100


#define _TSCTR_OFF 0x00
#define _CTRPHS_OFF 0x04
#define _CAP1_OFF 0x08
#define _CAP2_OFF 0x0C
#define _CAP3_OFF 0x10
#define _CAP4_OFF 0x14
#define _ECCTL1_OFF 0x28
#define _ECCTL2_OFF 0x2A
#define _ECEINT_OFF 0x2C
#define _ECFLG_OFF 0x2E
#define _ECCLR_OFF 0x30
#define _ECFRC_OFF 0x32
#define _REVID_OFF 0x5C

typedef struct tagTSCTRBITS {
  volatile unsigned TSCTR : 32;
} TSCTRBITS;
typedef uint32_t TSCTR;

typedef struct tagCTRPHSBITS {
  volatile unsigned CTRPHS : 32;
} CTRPHSBITS;
typedef uint32_t CTRPHS;

typedef struct tagCAP1BITS {
  volatile unsigned CAP1 : 32;
} CAP1BITS;
typedef uint32_t CAP1;

typedef struct tagCAP2BITS {
  volatile unsigned CAP2 : 32;
} CAP2BITS;
typedef uint32_t CAP2;

typedef struct tagCAP3BITS {
  volatile unsigned CAP3 : 32;
} CAP3BITS;
typedef uint32_t CAP3;

typedef struct tagCAP4BITS {
  volatile unsigned CAP4 : 32;
} CAP4BITS;
typedef uint32_t CAP4;

typedef struct tagECCTL1BITS {
  volatile unsigned FREE_SOFT : 2;
  volatile unsigned PRESCALE : 5;
  volatile unsigned CAPLDEN : 1;
  volatile unsigned CTRRST4 : 1;
  volatile unsigned CAP4POL : 1;
  volatile unsigned CTRRST3 : 1;
  volatile unsigned CAP3POL : 1;
  volatile unsigned CTRRST2 : 1;
  volatile unsigned CAP2POL : 1;
  volatile unsigned CTRRST1 : 1;
  volatile unsigned CAP1POL : 1;
} ECCTL1BITS;
typedef uint16_t ECCTL1;

typedef struct tagECCTL2BITS {
  volatile unsigned : 5;
  volatile unsigned APWMPOL : 1;
  volatile unsigned CAP_APWM : 1;
  volatile unsigned SWSYNC : 1;
  volatile unsigned SYNCO_SEL : 2;
  volatile unsigned SYNCI_EN : 1;
  volatile unsigned TSCTRSTOP : 1;
  volatile unsigned RE_ARM : 1;
  volatile unsigned STOP_WRAP : 2;
  volatile unsigned CONT_ONESHOT : 1;
} ECCTL2BITS;
typedef uint16_t ECCTL2;

typedef struct tagECEINTBITS {
  volatile unsigned : 8;
  volatile unsigned CMPEQ : 1;
  volatile unsigned PRDEQ : 1;
  volatile unsigned CNTOVF : 1;
  volatile unsigned CEVT4 : 1;
  volatile unsigned CEVT3 : 1;
  volatile unsigned CEVT2 : 1;
  volatile unsigned CEVT1 : 1;
  volatile unsigned : 1;
} ECEINTBITS;
typedef uint16_t ECEINT;

typedef struct tagECFLGBITS {
  volatile unsigned : 8;
  volatile unsigned CMPEQ : 1;
  volatile unsigned PRDEQ : 1;
  volatile unsigned CNTOVF : 1;
  volatile unsigned CEVT4 : 1;
  volatile unsigned CEVT3 : 1;
  volatile unsigned CEVT2 : 1;
  volatile unsigned CEVT1 : 1;
  volatile unsigned INT : 1;
} ECFLGBITS;
typedef uint16_t ECFLG;

typedef struct tagECCLRBITS {
  volatile unsigned : 8;
  volatile unsigned CMPEQ : 1;
  volatile unsigned PRDEQ : 1;
  volatile unsigned CNTOVF : 1;
  volatile unsigned CEVT4 : 1;
  volatile unsigned CEVT3 : 1;
  volatile unsigned CEVT2 : 1;
  volatile unsigned CEVT1 : 1;
  volatile unsigned INT : 1;
} ECCLRBITS;
typedef uint16_t ECCLR;

typedef struct tagECFRCBITS {
  volatile unsigned : 8;
  volatile unsigned CMPEQ : 1;
  volatile unsigned PRDEQ : 1;
  volatile unsigned CNTOVF : 1;
  volatile unsigned CEVT4 : 1;
  volatile unsigned CEVT3 : 1;
  volatile unsigned CEVT2 : 1;
  volatile unsigned CEVT1 : 1;
  volatile unsigned : 1;
} ECFRCBITS;
typedef uint16_t ECFRC;

typedef struct tagREVIDBITS {
  volatile unsigned REVID : 32;
} REVIDBITS;
typedef uint32_t REVID;


#endif // ECAP_H
