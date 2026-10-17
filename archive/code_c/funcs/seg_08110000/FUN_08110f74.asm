; undefined FUN_08110f74(void)
; entry 0x8110f74  size 20 bytes

08110F74: 00b5         push {lr}
08110F76: 044a         ldr r2,[0x08110f88]
08110F78: 8179         ldrb r1,[r0,#0x6]
08110F7A: 8900         lsl r1,r1,#0x2
08110F7C: 8918         add r1,r1,r2
08110F7E: 0968         ldr r1,[r1,#0x0]
08110F80: 17f0feff     bl 0x08128f80
08110F84: 01bc         pop {r0}
08110F86: 0047         bx r0
