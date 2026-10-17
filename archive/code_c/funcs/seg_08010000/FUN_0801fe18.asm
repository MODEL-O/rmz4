; undefined FUN_0801fe18(void)
; entry 0x801fe18  size 36 bytes

0801FE18: 00b5         push {lr}
0801FE1A: 084a         ldr r2,[0x0801fe3c]
0801FE1C: 0021         mov r1,#0x0
0801FE1E: 1160         str r1,[r2,#0x0]
0801FE20: cf23         mov r3,#0xcf
0801FE22: 5b00         lsl r3,r3,#0x1
0801FE24: d018         add r0,r2,r3
0801FE26: 0180         strh r1,[r0,#0x0]
0801FE28: 0233         add r3,#0x2
0801FE2A: d018         add r0,r2,r3
0801FE2C: 0160         str r1,[r0,#0x0]
0801FE2E: 0633         add r3,#0x6
0801FE30: d018         add r0,r2,r3
0801FE32: 0180         strh r1,[r0,#0x0]
0801FE34: 00f004f8     bl 0x0801fe40
0801FE38: 01bc         pop {r0}
0801FE3A: 0047         bx r0
