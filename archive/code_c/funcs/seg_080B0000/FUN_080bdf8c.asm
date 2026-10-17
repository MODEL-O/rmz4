; undefined FUN_080bdf8c(void)
; entry 0x80bdf8c  size 20 bytes

080BDF8C: 00b5         push {lr}
080BDF8E: 044a         ldr r2,[0x080bdfa0]
080BDF90: 017c         ldrb r1,[r0,#0x10]
080BDF92: 8900         lsl r1,r1,#0x2
080BDF94: 8918         add r1,r1,r2
080BDF96: 0968         ldr r1,[r1,#0x0]
080BDF98: 6af0f2ff     bl 0x08128f80
080BDF9C: 01bc         pop {r0}
080BDF9E: 0047         bx r0
