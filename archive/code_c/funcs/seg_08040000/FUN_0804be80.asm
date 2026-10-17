; undefined FUN_0804be80(void)
; entry 0x804be80  size 48 bytes

0804BE80: 021c         add r2,r0,#0x0
0804BE82: 8c30         add r0,#0x8c
0804BE84: 0021         mov r1,#0x0
0804BE86: 0160         str r1,[r0,#0x0]
0804BE88: 0430         add r0,#0x4
0804BE8A: 0160         str r1,[r0,#0x0]
0804BE8C: 0430         add r0,#0x4
0804BE8E: 0170         strb r1,[r0,#0x0]
0804BE90: 917a         ldrb r1,[r2,#0xa]
0804BE92: fb20         mov r0,#0xfb
0804BE94: 0840         and r0,r1
0804BE96: fe21         mov r1,#0xfe
0804BE98: 0840         and r0,r1
0804BE9A: 9072         strb r0,[r2,#0xa]
0804BE9C: 0449         ldr r1,[0x0804beb0]
0804BE9E: 507a         ldrb r0,[r2,#0x9]
0804BEA0: 8000         lsl r0,r0,#0x2
0804BEA2: 4018         add r0,r0,r1
0804BEA4: 0421         mov r1,#0x4
0804BEA6: d160         str r1,[r2,#0xc]
0804BEA8: 0068         ldr r0,[r0,#0x0]
0804BEAA: 0069         ldr r0,[r0,#0x10]
0804BEAC: 5061         str r0,[r2,#0x14]
0804BEAE: 7047         bx lr
