; undefined FUN_080c4a60(void)
; entry 0x80c4a60  size 20 bytes

080C4A60: 00b5         push {lr}
080C4A62: 044a         ldr r2,[0x080c4a74]
080C4A64: 417b         ldrb r1,[r0,#0xd]
080C4A66: 8900         lsl r1,r1,#0x2
080C4A68: 8918         add r1,r1,r2
080C4A6A: 0968         ldr r1,[r1,#0x0]
080C4A6C: 64f088fa     bl 0x08128f80
080C4A70: 01bc         pop {r0}
080C4A72: 0047         bx r0
