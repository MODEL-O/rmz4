; undefined FUN_080fe040(void)
; entry 0x80fe040  size 20 bytes

080FE040: 00b5         push {lr}
080FE042: 044a         ldr r2,[0x080fe054]
080FE044: 017c         ldrb r1,[r0,#0x10]
080FE046: 8900         lsl r1,r1,#0x2
080FE048: 8918         add r1,r1,r2
080FE04A: 0968         ldr r1,[r1,#0x0]
080FE04C: 2af098ff     bl 0x08128f80
080FE050: 01bc         pop {r0}
080FE052: 0047         bx r0
