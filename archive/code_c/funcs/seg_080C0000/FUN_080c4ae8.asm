; undefined FUN_080c4ae8(void)
; entry 0x80c4ae8  size 20 bytes

080C4AE8: 00b5         push {lr}
080C4AEA: 044a         ldr r2,[0x080c4afc]
080C4AEC: 017c         ldrb r1,[r0,#0x10]
080C4AEE: 8900         lsl r1,r1,#0x2
080C4AF0: 8918         add r1,r1,r2
080C4AF2: 0968         ldr r1,[r1,#0x0]
080C4AF4: 64f044fa     bl 0x08128f80
080C4AF8: 01bc         pop {r0}
080C4AFA: 0047         bx r0
