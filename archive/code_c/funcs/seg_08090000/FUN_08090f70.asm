; undefined FUN_08090f70(void)
; entry 0x8090f70  size 20 bytes

08090F70: 00b5         push {lr}
08090F72: 044a         ldr r2,[0x08090f84]
08090F74: 017c         ldrb r1,[r0,#0x10]
08090F76: 8900         lsl r1,r1,#0x2
08090F78: 8918         add r1,r1,r2
08090F7A: 0968         ldr r1,[r1,#0x0]
08090F7C: 98f000f8     bl 0x08128f80
08090F80: 01bc         pop {r0}
08090F82: 0047         bx r0
