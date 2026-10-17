; undefined FUN_080c7e88(void)
; entry 0x80c7e88  size 20 bytes

080C7E88: 00b5         push {lr}
080C7E8A: 044a         ldr r2,[0x080c7e9c]
080C7E8C: 017c         ldrb r1,[r0,#0x10]
080C7E8E: 8900         lsl r1,r1,#0x2
080C7E90: 8918         add r1,r1,r2
080C7E92: 0968         ldr r1,[r1,#0x0]
080C7E94: 61f074f8     bl 0x08128f80
080C7E98: 01bc         pop {r0}
080C7E9A: 0047         bx r0
