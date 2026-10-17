; undefined FUN_0807b8f4(void)
; entry 0x807b8f4  size 20 bytes

0807B8F4: 00b5         push {lr}
0807B8F6: 044a         ldr r2,[0x0807b908]
0807B8F8: 817b         ldrb r1,[r0,#0xe]
0807B8FA: 8900         lsl r1,r1,#0x2
0807B8FC: 8918         add r1,r1,r2
0807B8FE: 0968         ldr r1,[r1,#0x0]
0807B900: adf03efb     bl 0x08128f80
0807B904: 01bc         pop {r0}
0807B906: 0047         bx r0
