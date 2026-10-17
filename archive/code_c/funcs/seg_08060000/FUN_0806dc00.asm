; undefined FUN_0806dc00(void)
; entry 0x806dc00  size 20 bytes

0806DC00: 00b5         push {lr}
0806DC02: 044a         ldr r2,[0x0806dc14]
0806DC04: 817b         ldrb r1,[r0,#0xe]
0806DC06: 8900         lsl r1,r1,#0x2
0806DC08: 8918         add r1,r1,r2
0806DC0A: 0968         ldr r1,[r1,#0x0]
0806DC0C: bbf0b8f9     bl 0x08128f80
0806DC10: 01bc         pop {r0}
0806DC12: 0047         bx r0
