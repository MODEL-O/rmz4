; undefined FUN_080c2f2c(void)
; entry 0x80c2f2c  size 20 bytes

080C2F2C: 00b5         push {lr}
080C2F2E: 044a         ldr r2,[0x080c2f40]
080C2F30: 017c         ldrb r1,[r0,#0x10]
080C2F32: 8900         lsl r1,r1,#0x2
080C2F34: 8918         add r1,r1,r2
080C2F36: 0968         ldr r1,[r1,#0x0]
080C2F38: 66f022f8     bl 0x08128f80
080C2F3C: 01bc         pop {r0}
080C2F3E: 0047         bx r0
