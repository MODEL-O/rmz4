; undefined FUN_08090d54(void)
; entry 0x8090d54  size 20 bytes

08090D54: 00b5         push {lr}
08090D56: 044a         ldr r2,[0x08090d68]
08090D58: 017c         ldrb r1,[r0,#0x10]
08090D5A: 8900         lsl r1,r1,#0x2
08090D5C: 8918         add r1,r1,r2
08090D5E: 0968         ldr r1,[r1,#0x0]
08090D60: 98f00ef9     bl 0x08128f80
08090D64: 01bc         pop {r0}
08090D66: 0047         bx r0
