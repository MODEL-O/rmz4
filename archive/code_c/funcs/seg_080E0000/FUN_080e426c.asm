; undefined FUN_080e426c(void)
; entry 0x80e426c  size 20 bytes

080E426C: 00b5         push {lr}
080E426E: 044a         ldr r2,[0x080e4280]
080E4270: 017c         ldrb r1,[r0,#0x10]
080E4272: 8900         lsl r1,r1,#0x2
080E4274: 8918         add r1,r1,r2
080E4276: 0968         ldr r1,[r1,#0x0]
080E4278: 44f082fe     bl 0x08128f80
080E427C: 01bc         pop {r0}
080E427E: 0047         bx r0
