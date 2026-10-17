; undefined FUN_08032278(void)
; entry 0x8032278  size 20 bytes

08032278: 00b5         push {lr}
0803227A: 044a         ldr r2,[0x0803228c]
0803227C: 817b         ldrb r1,[r0,#0xe]
0803227E: 8900         lsl r1,r1,#0x2
08032280: 8918         add r1,r1,r2
08032282: 0968         ldr r1,[r1,#0x0]
08032284: f6f07cfe     bl 0x08128f80
08032288: 01bc         pop {r0}
0803228A: 0047         bx r0
