#ifndef EPWM_H
#include <stdint.h>


#define _EPWM0_OFF 0x48300200
#define _EPWM1_OFF 0x48302200
#define _EPWM2_OFF 0x48304200


#define _TBCTL_OFF 0x00
#define _TBSTS_OFF 0x02
#define _TBPHSHR_OFF 0x04
#define _TBPHS_OFF 0x06
#define _TBCNT_OFF 0x08
#define _TBPRD_OFF 0x0A
#define _CMPCTL_OFF 0x0E
#define _CMPAHR_OFF 0x10
#define _CMPA_OFF 0x12
#define _CMPB_OFF 0x14
#define _AQCTLA_OFF 0x16
#define _AQCTLB_OFF 0x18
#define _AQSFRC_OFF 0x1A
#define _AQCSFRC_OFF 0x1C
#define _DBCTL_OFF 0x1E
#define _DBRED_OFF 0x20
#define _DBFED_OFF 0x22
#define _TZSEL_OFF 0x24
#define _TZCTL_OFF 0x28
#define _TZEINT_OFF 0x2A
#define _TZFLG_OFF 0x2C
#define _TZCLR_OFF 0x2E
#define _TZFRC_OFF 0x30
#define _ETSEL_OFF 0x32
#define _ETPS_OFF 0x34
#define _ETFLG_OFF 0x36
#define _ETCLR_OFF 0x38
#define _ETFRC_OFF 0x3A
#define _PCCTL_OFF 0x3C
#define _HRCNFG_OFF 0xC0



typedef struct tagTBCTLBITS {
  volatile unsigned FREE_SOFT : 2;
  volatile unsigned PHSDIR : 1;
  volatile unsigned CLKDIV : 3;
  volatile unsigned HSPCLKDIV : 3;
  volatile unsigned SWFSYNC : 1;
  volatile unsigned SYNCOSEL : 2;
  volatile unsigned PRDLD : 1;
  volatile unsigned PHSEN : 1;
  volatile unsigned CTRMODE : 2;
} TBCTLBITS;

typedef struct tagTBSTSBITS {
  volatile unsigned : 13;
  volatile unsigned CTRMAX : 1;
  volatile unsigned SYNCI : 1;
  volatile unsigned CTRDIR : 1;
} TBSTSBITS;

typedef struct tagTBPHSHRBITS {
  volatile unsigned TBPHSH : 8;
  volatile unsigned : 1;
} TBPHSHRBITS;

typedef struct tagTBPHSBITS {
  volatile unsigned TBPHS : 16;
} TBPHSBITS;

typedef struct tagTBCNTBITS {
  volatile unsigned TBCNT : 16;
} TBCNTBITS;

typedef struct tagTBPRDBITS {
  volatile unsigned TBPRD : 16;
} TBPRDBITS;

typedef struct tagCMPCTLBITS {
  volatile unsigned : 6;
  volatile unsigned SHDWBFULL : 1;
  volatile unsigned SHDWAFULL : 1;
  volatile unsigned : 1;
  volatile unsigned SHDWBMODE : 1;
  volatile unsigned : 1;
  volatile unsigned SHDWAMODE : 1;
  volatile unsigned LOADBMODE : 2;
  volatile unsigned LOADAMODE : 2;
} CMPCTLBITS;

typedef struct tagCMPAHRBITS {
  volatile unsigned CMPAHR : 8;
  volatile unsigned : 8;
} CMPAHRBITS;

typedef struct tagCMPABITS {
  volatile unsigned CMPA : 16;
} CMPABITS;

typedef struct tagCMPBBITS {
  volatile unsigned CMPB : 16;
} CMPBBITS;

typedef struct tagAQCTLABITS {
  volatile unsigned : 4;
  volatile unsigned CBD : 2;
  volatile unsigned CBU : 2;
  volatile unsigned CAD : 2;
  volatile unsigned CAU : 2;
  volatile unsigned PRD : 2;
  volatile unsigned ZRO : 2;
} AQCTLABITS;

typedef struct tagAQCTLBBITS {
  volatile unsigned : 4;
  volatile unsigned CBD : 2;
  volatile unsigned CBU : 2;
  volatile unsigned CAD : 2;
  volatile unsigned CAU : 2;
  volatile unsigned PRD : 2;
  volatile unsigned ZRO : 2;
} AQCTLBBITS;

typedef struct tagAQSFRCBITS {
  volatile unsigned : 8;
  volatile unsigned RLDCSF : 2;
  volatile unsigned OTSFB : 1;
  volatile unsigned ACTSFB : 2;
  volatile unsigned OTSFA : 1;
  volatile unsigned ACTSFA : 2;
} AQSFRCBITS;

typedef struct tagAQCSFRCBITS {
  volatile unsigned : 12;
  volatile unsigned CSFB : 2;
  volatile unsigned CSFA : 2;
} AQCSFRCBITS;

typedef struct tagDBCTLBITS {
  volatile unsigned : 10;
  volatile unsigned IN_MODE : 2;
  volatile unsigned POL_SEL : 2;
  volatile unsigned OUT_MODE : 2;
} DBCTLBITS;

typedef struct tagDBREDBITS {
  volatile unsigned : 6;
  volatile unsigned DEL : 10;
} DBREDBITS;

typedef struct tagDBFEDBITS {
  volatile unsigned : 6;
  volatile unsigned DEL : 10;
} DBFEDBITS;

typedef struct tagTZSELBITS {
  volatile unsigned OSHTn : 8;
  volatile unsigned CBCn : 8;
} TZSELBITS;

typedef struct tagTZCTLBITS {
  volatile unsigned : 12;
  volatile unsigned TZB : 2;
  volatile unsigned TZA : 2;
} TZCTLBITS;

typedef struct tagTZEINTBITS {
  volatile unsigned : 13;
  volatile unsigned OST : 1;
  volatile unsigned CBC : 1;
  volatile unsigned : 1;
} TZEINTBITS;

typedef struct tagTZFLGBITS {
  volatile unsigned : 13;
  volatile unsigned OST : 1;
  volatile unsigned CBC : 1;
  volatile unsigned INT : 1;
} TZFLGBITS;

typedef struct tagTZCLRBITS {
  volatile unsigned : 13;
  volatile unsigned OST : 1;
  volatile unsigned CBC : 1;
  volatile unsigned INT : 1;
} TZCLRBITS;

typedef struct tagTZFRCBITS {
  volatile unsigned : 13;
  volatile unsigned OST : 1;
  volatile unsigned CBC : 1;
  volatile unsigned : 1;
} TZFRCBITS;

typedef struct tagETSELBITS {
  volatile unsigned : 12;
  volatile unsigned INTENT : 1;
  volatile unsigned INTSEL : 3;
} ETSELBITS;

typedef struct tagETPSBITS {
  volatile unsigned : 12;
  volatile unsigned INTCNT : 1;
  volatile unsigned INTPRD : 3;
} ETPSBITS;

typedef struct tagETFLGBITS {
  volatile unsigned : 15;
  volatile unsigned INT : 1;
} ETFLGBITS;

typedef struct tagETCLRBITS {
  volatile unsigned : 15;
  volatile unsigned INT : 1;
} ETCLRBITS;

typedef struct tagETFRCBITS {
  volatile unsigned : 15;
  volatile unsigned INT : 1;
} ETFRCBITS;

typedef struct tagPCCTLBITS {
  volatile unsigned : 5;
  volatile unsigned CHPDUTY : 3;
  volatile unsigned CHPFREQ : 3;
  volatile unsigned OSHTWTH : 4;
  volatile unsigned CHPEN : 1;
} PCCTLBITS;

typedef struct tagHRCNFGBITS {
  volatile unsigned : 12;
  volatile unsigned HRLOAD : 1;
  volatile unsigned CTLMODE : 1;
  volatile unsigned EDGMODE : 2;
} HRCNFGBITS;

typedef struct tagEPWM {
  union {
    uint16_t TBCTL;
    TBCTLBITS TBCTLbits;
  };
  union {
    uint16_t TBSTS;
    TBSTSBITS TBSTSbits;
  };
  union {
    uint16_t TBPHSHR;
    TBPHSHRBITS TBPHSHRbits;
  };
  union {
    uint16_t TBPHS;
    TBPHSBITS TBPHSbits;
  };
  union {
    uint16_t TBCNT;
    TBCNTBITS TBCNTbits;
  };
  union {
    uint16_t TBPRD;
    TBPRDBITS TBPRDbits;
  };
  union {
    uint16_t CMPCTL;
    CMPCTLBITS CMPCTLbits;
  };
  union {
    uint16_t CMPAHR;
    CMPAHRBITS CMPAHRbits;
  };
  union {
    uint16_t CMPA;
    CMPABITS CMPAbits;
  };
  union {
    uint16_t CMPB;
    CMPBBITS CMPBbits;
  };
  union {
    uint16_t AQCTLA;
    AQCTLABITS AQCTLAbits;
  };
  union {
    uint16_t AQCTLB;
    AQCTLBBITS AQCTLBbits;
  };
  union {
    uint16_t AQSFRC;
    AQSFRCBITS AQSFRCbits;
  };
  union {
    uint16_t AQCSFRC;
    AQCSFRCBITS AQCSFRCbits;
  };
  union {
    uint16_t DBCTL;
    DBCTLBITS DBCTLbits;
  };
  union {
    uint16_t DBRED;
    DBREDBITS DBREDbits;
  };
  union {
    uint16_t DBFED;
    DBFEDBITS DBFEDbits;
  };
  union {
    uint16_t TZSEL;
    TZSELBITS TZSELbits;
  };
  union {
    uint16_t TZCTL;
    TZCTLBITS TZCTLbits;
  };
  union {
    uint16_t TZEINT;
    TZEINTBITS TZEINTbits;
  };
  union {
    uint16_t TZFLG;
    TZFLGBITS TZFLGbits;
  };
  union {
    uint16_t TZCLR;
    TZCLRBITS TZCLRbits;
  };
  union {
    uint16_t TZFRC;
    TZFRCBITS TZFRCbits;
  };
  union {
    uint16_t ETSEL;
    ETSELBITS ETSELbits;
  };
  union {
    uint16_t ETPS;
    ETPSBITS ETPSbits;
  };
  union {
    uint16_t ETFLG;
    ETFLGBITS ETFLGbits;
  };
  union {
    uint16_t ETCLR;
    ETCLRBITS ETCLRbits;
  };
  union {
    uint16_t ETFRC;
    ETFRCBITS ETFRCbits;
  };
  union {
    uint16_t PCCTL;
    PCCTLBITS PCCTLbits;
  };
  union {
    uint16_t HRCNFG;
    HRCNFGBITS HRCNFGbits;
  };
} ePWM;


#endif // EPWM_H
