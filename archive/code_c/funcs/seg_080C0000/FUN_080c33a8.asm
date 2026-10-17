; undefined FUN_080c33a8(void)
; entry 0x80c33a8  size 20 bytes

080C33A8: 00b5         push {lr}
080C33AA: 044a         ldr r2,[0x080c33bc]
080C33AC: 017c         ldrb r1,[r0,#0x10]
080C33AE: 8900         lsl r1,r1,#0x2
080C33B0: 8918         add r1,r1,r2
080C33B2: 0968         ldr r1,[r1,#0x0]
080C33B4: 65f0e4fd     bl 0x08128f80
080C33B8: 01bc         pop {r0}
080C33BA: 0047         bx r0
