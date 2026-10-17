; undefined FUN_0805ce1c(void)
; entry 0x805ce1c  size 20 bytes

0805CE1C: 00b5         push {lr}
0805CE1E: 044a         ldr r2,[0x0805ce30]
0805CE20: 817b         ldrb r1,[r0,#0xe]
0805CE22: 8900         lsl r1,r1,#0x2
0805CE24: 8918         add r1,r1,r2
0805CE26: 0968         ldr r1,[r1,#0x0]
0805CE28: ccf0aaf8     bl 0x08128f80
0805CE2C: 01bc         pop {r0}
0805CE2E: 0047         bx r0
