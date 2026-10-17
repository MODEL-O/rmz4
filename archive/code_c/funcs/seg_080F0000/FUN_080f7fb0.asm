; undefined FUN_080f7fb0(void)
; entry 0x80f7fb0  size 20 bytes

080F7FB0: 00b5         push {lr}
080F7FB2: 044a         ldr r2,[0x080f7fc4]
080F7FB4: 017c         ldrb r1,[r0,#0x10]
080F7FB6: 8900         lsl r1,r1,#0x2
080F7FB8: 8918         add r1,r1,r2
080F7FBA: 0968         ldr r1,[r1,#0x0]
080F7FBC: 30f0e0ff     bl 0x08128f80
080F7FC0: 01bc         pop {r0}
080F7FC2: 0047         bx r0
