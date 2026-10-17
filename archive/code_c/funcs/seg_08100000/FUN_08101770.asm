; undefined FUN_08101770(void)
; entry 0x8101770  size 20 bytes

08101770: 00b5         push {lr}
08101772: 044a         ldr r2,[0x08101784]
08101774: 017c         ldrb r1,[r0,#0x10]
08101776: 8900         lsl r1,r1,#0x2
08101778: 8918         add r1,r1,r2
0810177A: 0968         ldr r1,[r1,#0x0]
0810177C: 27f000fc     bl 0x08128f80
08101780: 01bc         pop {r0}
08101782: 0047         bx r0
