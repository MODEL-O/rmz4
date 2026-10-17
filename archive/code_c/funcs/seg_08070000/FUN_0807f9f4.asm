; undefined FUN_0807f9f4(void)
; entry 0x807f9f4  size 30 bytes

0807F9F4: 00b5         push {lr}
0807F9F6: 0906         lsl r1,r1,#0x18
0807F9F8: 090e         lsr r1,r1,#0x18
0807F9FA: 1206         lsl r2,r2,#0x18
0807F9FC: 120e         lsr r2,r2,#0x18
0807F9FE: 1b06         lsl r3,r3,#0x18
0807FA00: 1b0e         lsr r3,r3,#0x18
0807FA02: 0448         ldr r0,[0x0807fa14]
0807FA04: 0068         ldr r0,[r0,#0x0]
0807FA06: 9df70bf9     bl 0x0801cc20
0807FA0A: 0004         lsl r0,r0,#0x10
0807FA0C: 000c         lsr r0,r0,#0x10
0807FA0E: 02bc         pop {r1}
0807FA10: 0847         bx r1
