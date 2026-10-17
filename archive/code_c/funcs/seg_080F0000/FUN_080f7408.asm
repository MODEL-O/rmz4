; undefined FUN_080f7408(void)
; entry 0x80f7408  size 20 bytes

080F7408: 00b5         push {lr}
080F740A: 044a         ldr r2,[0x080f741c]
080F740C: 017c         ldrb r1,[r0,#0x10]
080F740E: 8900         lsl r1,r1,#0x2
080F7410: 8918         add r1,r1,r2
080F7412: 0968         ldr r1,[r1,#0x0]
080F7414: 31f0b4fd     bl 0x08128f80
080F7418: 01bc         pop {r0}
080F741A: 0047         bx r0
