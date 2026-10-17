; undefined FUN_0804b104(void)
; entry 0x804b104  size 48 bytes

0804B104: 021c         add r2,r0,#0x0
0804B106: 8c30         add r0,#0x8c
0804B108: 0021         mov r1,#0x0
0804B10A: 0160         str r1,[r0,#0x0]
0804B10C: 0430         add r0,#0x4
0804B10E: 0160         str r1,[r0,#0x0]
0804B110: 0430         add r0,#0x4
0804B112: 0170         strb r1,[r0,#0x0]
0804B114: 917a         ldrb r1,[r2,#0xa]
0804B116: fb20         mov r0,#0xfb
0804B118: 0840         and r0,r1
0804B11A: fe21         mov r1,#0xfe
0804B11C: 0840         and r0,r1
0804B11E: 9072         strb r0,[r2,#0xa]
0804B120: 0449         ldr r1,[0x0804b134]
0804B122: 507a         ldrb r0,[r2,#0x9]
0804B124: 8000         lsl r0,r0,#0x2
0804B126: 4018         add r0,r0,r1
0804B128: 0421         mov r1,#0x4
0804B12A: d160         str r1,[r2,#0xc]
0804B12C: 0068         ldr r0,[r0,#0x0]
0804B12E: 0069         ldr r0,[r0,#0x10]
0804B130: 5061         str r0,[r2,#0x14]
0804B132: 7047         bx lr
