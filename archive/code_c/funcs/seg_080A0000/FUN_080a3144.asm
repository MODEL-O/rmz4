; undefined FUN_080a3144(void)
; entry 0x80a3144  size 20 bytes

080A3144: 00b5         push {lr}
080A3146: 044a         ldr r2,[0x080a3158]
080A3148: 017c         ldrb r1,[r0,#0x10]
080A314A: 8900         lsl r1,r1,#0x2
080A314C: 8918         add r1,r1,r2
080A314E: 0968         ldr r1,[r1,#0x0]
080A3150: 85f016ff     bl 0x08128f80
080A3154: 01bc         pop {r0}
080A3156: 0047         bx r0
