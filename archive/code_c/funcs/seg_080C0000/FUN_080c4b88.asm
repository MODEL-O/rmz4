; undefined FUN_080c4b88(void)
; entry 0x80c4b88  size 20 bytes

080C4B88: 00b5         push {lr}
080C4B8A: 044a         ldr r2,[0x080c4b9c]
080C4B8C: 017c         ldrb r1,[r0,#0x10]
080C4B8E: 8900         lsl r1,r1,#0x2
080C4B90: 8918         add r1,r1,r2
080C4B92: 0968         ldr r1,[r1,#0x0]
080C4B94: 64f0f4f9     bl 0x08128f80
080C4B98: 01bc         pop {r0}
080C4B9A: 0047         bx r0
