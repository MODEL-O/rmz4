; undefined FUN_0806932c(void)
; entry 0x806932c  size 20 bytes

0806932C: 00b5         push {lr}
0806932E: 044a         ldr r2,[0x08069340]
08069330: 817b         ldrb r1,[r0,#0xe]
08069332: 8900         lsl r1,r1,#0x2
08069334: 8918         add r1,r1,r2
08069336: 0968         ldr r1,[r1,#0x0]
08069338: bff022fe     bl 0x08128f80
0806933C: 01bc         pop {r0}
0806933E: 0047         bx r0
