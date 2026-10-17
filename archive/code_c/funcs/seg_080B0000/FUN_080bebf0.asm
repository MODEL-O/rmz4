; undefined FUN_080bebf0(void)
; entry 0x80bebf0  size 20 bytes

080BEBF0: 00b5         push {lr}
080BEBF2: 044a         ldr r2,[0x080bec04]
080BEBF4: 017c         ldrb r1,[r0,#0x10]
080BEBF6: 8900         lsl r1,r1,#0x2
080BEBF8: 8918         add r1,r1,r2
080BEBFA: 0968         ldr r1,[r1,#0x0]
080BEBFC: 6af0c0f9     bl 0x08128f80
080BEC00: 01bc         pop {r0}
080BEC02: 0047         bx r0
