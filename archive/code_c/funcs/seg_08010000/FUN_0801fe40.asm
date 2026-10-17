; undefined FUN_0801fe40(void)
; entry 0x801fe40  size 30 bytes

0801FE40: 074a         ldr r2,[0x0801fe60]
0801FE42: ce21         mov r1,#0xce
0801FE44: 4900         lsl r1,r1,#0x1
0801FE46: 5018         add r0,r2,r1
0801FE48: 0021         mov r1,#0x0
0801FE4A: 0180         strh r1,[r0,#0x0]
0801FE4C: 5160         str r1,[r2,#0x4]
0801FE4E: d223         mov r3,#0xd2
0801FE50: 5b00         lsl r3,r3,#0x1
0801FE52: d018         add r0,r2,r3
0801FE54: 0180         strh r1,[r0,#0x0]
0801FE56: 101c         add r0,r2,#0x0
0801FE58: d030         add r0,#0xd0
0801FE5A: 0160         str r1,[r0,#0x0]
0801FE5C: 7047         bx lr
