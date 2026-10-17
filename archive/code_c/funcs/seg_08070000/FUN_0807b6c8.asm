; undefined FUN_0807b6c8(void)
; entry 0x807b6c8  size 20 bytes

0807B6C8: 00b5         push {lr}
0807B6CA: 044a         ldr r2,[0x0807b6dc]
0807B6CC: 817b         ldrb r1,[r0,#0xe]
0807B6CE: 8900         lsl r1,r1,#0x2
0807B6D0: 8918         add r1,r1,r2
0807B6D2: 0968         ldr r1,[r1,#0x0]
0807B6D4: adf054fc     bl 0x08128f80
0807B6D8: 01bc         pop {r0}
0807B6DA: 0047         bx r0
