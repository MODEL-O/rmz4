; undefined FUN_080e3fc4(void)
; entry 0x80e3fc4  size 20 bytes

080E3FC4: 00b5         push {lr}
080E3FC6: 044a         ldr r2,[0x080e3fd8]
080E3FC8: 417c         ldrb r1,[r0,#0x11]
080E3FCA: 8900         lsl r1,r1,#0x2
080E3FCC: 8918         add r1,r1,r2
080E3FCE: 0968         ldr r1,[r1,#0x0]
080E3FD0: 44f0d6ff     bl 0x08128f80
080E3FD4: 01bc         pop {r0}
080E3FD6: 0047         bx r0
