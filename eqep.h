#ifndef EQEP_H
#include <stdint.h>


#define _EQEP0_OFF 0x48300180
#define _EQEP1_OFF 0x48302180
#define _EQEP2_OFF 0x48304180

#define _QPOSCNT_OFF 0x00
#define _QPOSINIT_OFF  0x04
#define _QPOSMAX_OFF 0x08
#define _QPOSCMP_OFF 0x0C
#define _QPOSILAT_OFF 0x10
#define _QPOSSLAT_OFF 0x14
#define _QPOSLAT_OFF 0x18
#define _QUTMR_OFF 0x1C
#define _QUPRD_OFF 0x20
#define _QWDTMR_OFF 0x24
#define _QWDPRD_OFF 0x26
#define _QDECCTL_OFF 0x28
#define _QEPCTL_OFF 0x2A
#define _QCAPCTL_OFF 0x2C
#define _QPOSCTL_OFF 0x2E
#define _QEINT_OFF 0x30
#define _QFLG_OFF 0x32
#define _QCLR_OFF 0x34
#define _QFRC_OFF 0x36
#define _QEPSTS_OFF 0x38
#define _QCTMR_OFF 0x3A
#define _QCPRD_OFF 0x3C
#define _QCTMRLAT_OFF 0x3E
#define _QCPRDLAT_OFF 0x40
#define _REVID_OFF 0x5C

typedef struct tagQPOSCNTBITS {
  volatile unsigned QPOSCNT : 32;
} QPOSCNTBITS;
typedef uint32_t QPOSCNT;

typedef struct tagQPOSINITBITS {
  volatile unsigned QPOSINIT : 32;
} QPOSINITBITS;
typedef uint32_t QPOSINIT;

typedef struct tagQPOSMAXBITS {
  volatile unsigned QPOSMAX : 32;
} QPOSMAXBITS;
typedef uint32_t QPOSMAX;

typedef struct tagQPOSCMPBITS {
  volatile unsigned QPOSCMP : 32;
} QPOSCMPBITS;
typedef uint32_t QPOSCMP;

typedef struct tagQPOSILATBITS {
  volatile unsigned QPOSILAT : 32;
} QPOSILATBITS;
typedef uint32_t QPOSILAT;

typedef struct tagQPOSSLATBITS {
  volatile unsigned QPOSSLAT : 32;
} QPOSSLATBITS;
typedef uint32_t QPOSSLAT;

typedef struct tagQPOSLATBITS {
  volatile unsigned QPOSLAT : 32;
} QPOSLATBITS;
typedef uint32_t QPOSLAT;

typedef struct tagQUTMRBITS {
  volatile unsigned QUTMR : 32;
} QUTMRBITS;
typedef uint32_t QUTMR;

typedef struct tagQUPRDBITS {
  volatile unsigned QUPRD : 32;
} QUPRDBITS;
typedef uint32_t QUPRD;

typedef struct tagQWDTMRBITS {
  volatile unsigned QWDTMR : 32;
} QWDTMRBITS;
typedef uint32_t QWDTMR;

typedef struct tagQWDPRDBITS {
  volatile unsigned QWDPRD : 32;
} QWDPRDBITS;
typedef uint32_t QWDPRD;

typedef struct tagQDECCTLBITS {
  volatile unsigned QSRC : 2;
  volatile unsigned SOEN : 1;
  volatile unsigned SPSEL : 1;
  volatile unsigned XCR : 1;
  volatile unsigned SWAP : 1;
  volatile unsigned IGATE : 1;
  volatile unsigned QAP : 1;
  volatile unsigned QBP : 1;
  volatile unsigned QIP : 1;
  volatile unsigned QSP : 1;
  volatile unsigned : 5;
} QDECCTLBITS;
typedef uint16_t QDECCTL;

typedef struct tagQEPCTLBITS {
  volatile unsigned FREE_SOFT : 2;
  volatile unsigned PCRM : 2;
  volatile unsigned SEI : 2;
  volatile unsigned IEI : 2;
  volatile unsigned SWI : 1;
  volatile unsigned SEL : 1;
  volatile unsigned IEL : 2;
  volatile unsigned PHEN : 1;
  volatile unsigned QCLM : 1;
  volatile unsigned UTE : 1;
  volatile unsigned WDE : 1;
} QEPCTLBITS;
typedef uint16_t QEPCTL;

typedef struct tagQCAPCTLBITS {
  volatile unsigned CEN : 1;
  volatile unsigned : 8;
  volatile unsigned CCPS : 3;
  volatile unsigned UPPS : 4;
} QCAPCTLBITS;
typedef uint16_t QCAPCTL;

typedef struct tagQPOSCTLBITS {
  volatile unsigned PCSHDW : 1;
  volatile unsigned PCLOAD : 1;
  volatile unsigned PCPOL : 1;
  volatile unsigned PCE : 1;
  volatile unsigned PCSPW : 12;
} QPOSCTLBITS;
typedef uint16_t QPOSCTL;

typedef struct tagQEINTBITS {
  volatile unsigned : 4;
  volatile unsigned UTO : 1;
  volatile unsigned IEL : 1;
  volatile unsigned SEL : 1;
  volatile unsigned PCM : 1;
  volatile unsigned PCR : 1;
  volatile unsigned PCO : 1;
  volatile unsigned PCU : 1;
  volatile unsigned WTO : 1;
  volatile unsigned QDC : 1;
  volatile unsigned PHE : 1;
  volatile unsigned PCE : 1;
  volatile unsigned : 1;
} QEINTBITS;
typedef uint16_t QEINT;

typedef struct tagQFLGBITS {
  volatile unsigned : 4;
  volatile unsigned UTO : 1;
  volatile unsigned IEL : 1;
  volatile unsigned SEL : 1;
  volatile unsigned PCM : 1;
  volatile unsigned PCR : 1;
  volatile unsigned PCO : 1;
  volatile unsigned PCU : 1;
  volatile unsigned WTO : 1;
  volatile unsigned QDC : 1;
  volatile unsigned PHE : 1;
  volatile unsigned PCE : 1;
  volatile unsigned INT : 1;
} QFLGBITS;
typedef uint16_t QFLG;

typedef struct tagQCLRBITS {
  volatile unsigned : 4;
  volatile unsigned UTO : 1;
  volatile unsigned IEL : 1;
  volatile unsigned SEL : 1;
  volatile unsigned PCM : 1;
  volatile unsigned PCR : 1;
  volatile unsigned PCO : 1;
  volatile unsigned PCU : 1;
  volatile unsigned WTO : 1;
  volatile unsigned QDC : 1;
  volatile unsigned PHE : 1;
  volatile unsigned PCE : 1;
  volatile unsigned INT : 1;
} QCLRBITS;
typedef uint16_t QCLR;

typedef struct tagQFRCBITS {
  volatile unsigned : 4;
  volatile unsigned UTO : 1;
  volatile unsigned IEL : 1;
  volatile unsigned SEL : 1;
  volatile unsigned PCM : 1;
  volatile unsigned PCR : 1;
  volatile unsigned PCO : 1;
  volatile unsigned PCU : 1;
  volatile unsigned WTO : 1;
  volatile unsigned QDC : 1;
  volatile unsigned PHE : 1;
  volatile unsigned PCE : 1;
  volatile unsigned : 1;
} QFRCBITS;
typedef uint16_t QFRC;

typedef struct tagQEPSTSBITS {
  volatile unsigned : 8;
  volatile unsigned UPEVNT : 1;
  volatile unsigned FDF : 1;
  volatile unsigned QDF : 1;
  volatile unsigned QDLF : 1;
  volatile unsigned COEF : 1;
  volatile unsigned CDEF : 1;
  volatile unsigned FIMF : 1;
  volatile unsigned PCEF : 1;
} QEPSTSBITS;
typedef uint16_t QEPSTS;

typedef struct tagQCTMRBITS {
  volatile unsigned QCTMR : 16;
} QCTMRBITS;
typedef uint16_t QCTMR;

typedef struct tagQCPRDBITS {
  volatile unsigned QCPRD : 16;
} QCPRDBITS;
typedef uint16_t QCPRD;

typedef struct tagQCTMRLATBITS {
  volatile unsigned QCTMRLAT : 16;
} QCTMRLATBITS;
typedef uint16_t QCTMRLAT;

typedef struct tagQCPRDLATBITS {
  volatile unsigned QCPRDLAT : 16;
} QCPRDLATBITS;
typedef uint16_t QCPRDLAT;


#endif // EQEP_H
