; undefined FUN_080cc08c(void)
; entry 0x80cc08c  size 20 bytes

080CC08C: 00b5         push {lr}
080CC08E: 044a         ldr r2,[0x080cc0a0]
080CC090: 017c         ldrb r1,[r0,#0x10]
080CC092: 8900         lsl r1,r1,#0x2
080CC094: 8918         add r1,r1,r2
080CC096: 0968         ldr r1,[r1,#0x0]
080CC098: 5cf072ff     bl 0x08128f80
080CC09C: 01bc         pop {r0}
080CC09E: 0047         bx r0
