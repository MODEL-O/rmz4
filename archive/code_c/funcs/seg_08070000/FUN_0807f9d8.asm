; undefined FUN_0807f9d8(void)
; entry 0x807f9d8  size 22 bytes

0807F9D8: 00b5         push {lr}
0807F9DA: 0906         lsl r1,r1,#0x18
0807F9DC: 090e         lsr r1,r1,#0x18
0807F9DE: 0448         ldr r0,[0x0807f9f0]
0807F9E0: 0068         ldr r0,[r0,#0x0]
0807F9E2: 9df7f5f8     bl 0x0801cbd0
0807F9E6: 0004         lsl r0,r0,#0x10
0807F9E8: 000c         lsr r0,r0,#0x10
0807F9EA: 02bc         pop {r1}
0807F9EC: 0847         bx r1
