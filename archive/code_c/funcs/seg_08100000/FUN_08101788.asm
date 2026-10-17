; undefined FUN_08101788(void)
; entry 0x8101788  size 20 bytes

08101788: 00b5         push {lr}
0810178A: 044a         ldr r2,[0x0810179c]
0810178C: 017c         ldrb r1,[r0,#0x10]
0810178E: 8900         lsl r1,r1,#0x2
08101790: 8918         add r1,r1,r2
08101792: 0968         ldr r1,[r1,#0x0]
08101794: 27f0f4fb     bl 0x08128f80
08101798: 01bc         pop {r0}
0810179A: 0047         bx r0
