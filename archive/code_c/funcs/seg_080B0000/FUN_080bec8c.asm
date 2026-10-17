; undefined FUN_080bec8c(void)
; entry 0x80bec8c  size 20 bytes

080BEC8C: 00b5         push {lr}
080BEC8E: 044a         ldr r2,[0x080beca0]
080BEC90: 017c         ldrb r1,[r0,#0x10]
080BEC92: 8900         lsl r1,r1,#0x2
080BEC94: 8918         add r1,r1,r2
080BEC96: 0968         ldr r1,[r1,#0x0]
080BEC98: 6af072f9     bl 0x08128f80
080BEC9C: 01bc         pop {r0}
080BEC9E: 0047         bx r0
