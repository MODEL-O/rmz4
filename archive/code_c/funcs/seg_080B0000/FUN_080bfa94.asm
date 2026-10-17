; undefined FUN_080bfa94(void)
; entry 0x80bfa94  size 20 bytes

080BFA94: 00b5         push {lr}
080BFA96: 044a         ldr r2,[0x080bfaa8]
080BFA98: 017c         ldrb r1,[r0,#0x10]
080BFA9A: 8900         lsl r1,r1,#0x2
080BFA9C: 8918         add r1,r1,r2
080BFA9E: 0968         ldr r1,[r1,#0x0]
080BFAA0: 69f06efa     bl 0x08128f80
080BFAA4: 01bc         pop {r0}
080BFAA6: 0047         bx r0
