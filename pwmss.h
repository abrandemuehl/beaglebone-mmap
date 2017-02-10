#ifndef PWMSS_H
#include <stdint.h>


#define _IDVER_OFF 0x00
#define _SYSCONFIG_OFF 0x02
#define _CLKCONFIG_OFF 0x04
#define _CLKSTATUS_OFF 0x06



#define _PWMSS0_OFF 0x48300000
#define _PWMSS1_OFF 0x48302000
#define _PWMSS2_OFF 0x48304000

typedef struct tagIDVERBITS {
  volatile unsigned SCHEME : 2;
  volatile unsigned : 2;
  volatile unsigned FUNC : 12;
  volatile unsigned R_RTL : 5;
  volatile unsigned X_MAJOR : 3;
  volatile unsigned CUSTOM : 2;
  volatile unsigned Y_MINOR : 6;
} IDVERBITS;



typedef struct tagSYSCONFIGBITS {
  volatile unsigned : 26;
  volatile unsigned STANDBYMODE : 2;
  volatile unsigned IDLEMODE : 2;
  volatile unsigned FREEEMU : 1;
  volatile unsigned SOFTRESET : 1;
} SYSCONFIGBITS;


typedef struct tagCLKCONFIGBITS {
  volatile unsigned : 22;
  volatile unsigned ePWMCLKSTOP_REQ : 1;
  volatile unsigned ePWMCLK_EN : 1;
  volatile unsigned : 2;
  volatile unsigned eQEPCLKSTOP_REQ : 1;
  volatile unsigned eQEPCLK_EN : 1;
  volatile unsigned : 2;
  volatile unsigned eCAPCLKSTOP_REQ : 1;
  volatile unsigned eCAPCLK_EN : 1;
} CLKCONFIGBITS;

typedef struct tagCLKSTATUSBITS {
  volatile unsigned : 22;
  volatile unsigned ePWM_CLKSTOP_ACK : 1;
  volatile unsigned ePWM_CLK_EN_ACK : 1;
  volatile unsigned : 2;
  volatile unsigned eQEP_CLKSTOP_REQ_ACK : 1;
  volatile unsigned eQEP_CLK_EN_ACK : 1;
  volatile unsigned : 2;
  volatile unsigned eCAP_CLKSTOP_REQ_ACK : 1;
  volatile unsigned eCAP_CLK_EN_ACK : 1;
} CLKSTATUSBITS;

#endif // PWMSS_H
