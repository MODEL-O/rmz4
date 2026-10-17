; undefined FUN_080c3a60(void)
; entry 0x80c3a60  size 20 bytes

080C3A60: 00b5         push {lr}
080C3A62: 044a         ldr r2,[0x080c3a74]
080C3A64: 017c         ldrb r1,[r0,#0x10]
080C3A66: 8900         lsl r1,r1,#0x2
080C3A68: 8918         add r1,r1,r2
080C3A6A: 0968         ldr r1,[r1,#0x0]
080C3A6C: 65f088fa     bl 0x08128f80
080C3A70: 01bc         pop {r0}
080C3A72: 0047         bx r0
