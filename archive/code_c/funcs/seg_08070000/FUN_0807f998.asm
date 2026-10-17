; undefined FUN_0807f998(void)
; entry 0x807f998  size 24 bytes

0807F998: 00b5         push {lr}
0807F99A: 011c         add r1,r0,#0x0
0807F99C: 0448         ldr r0,[0x0807f9b0]
0807F99E: 0068         ldr r0,[r0,#0x0]
0807F9A0: 5431         add r1,#0x54
0807F9A2: 9df7c5f8     bl 0x0801cb30
0807F9A6: 0028         cmp r0,#0x0
0807F9A8: 00d1         bne 0x0807f9ac
0807F9AA: 0020         mov r0,#0x0
0807F9AC: 02bc         pop {r1}
0807F9AE: 0847         bx r1
