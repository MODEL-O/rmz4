; undefined FUN_0807c2a0(void)
; entry 0x807c2a0  size 20 bytes

0807C2A0: 00b5         push {lr}
0807C2A2: 044a         ldr r2,[0x0807c2b4]
0807C2A4: 817b         ldrb r1,[r0,#0xe]
0807C2A6: 8900         lsl r1,r1,#0x2
0807C2A8: 8918         add r1,r1,r2
0807C2AA: 0968         ldr r1,[r1,#0x0]
0807C2AC: acf068fe     bl 0x08128f80
0807C2B0: 01bc         pop {r0}
0807C2B2: 0047         bx r0
