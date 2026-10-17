; undefined FUN_08110310(void)
; entry 0x8110310  size 20 bytes

08110310: 00b5         push {lr}
08110312: 044a         ldr r2,[0x08110324]
08110314: 4179         ldrb r1,[r0,#0x5]
08110316: 8900         lsl r1,r1,#0x2
08110318: 8918         add r1,r1,r2
0811031A: 0968         ldr r1,[r1,#0x0]
0811031C: 18f030fe     bl 0x08128f80
08110320: 01bc         pop {r0}
08110322: 0047         bx r0
