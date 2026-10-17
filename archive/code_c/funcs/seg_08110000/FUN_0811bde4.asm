; undefined FUN_0811bde4(void)
; entry 0x811bde4  size 20 bytes

0811BDE4: 00b5         push {lr}
0811BDE6: 044a         ldr r2,[0x0811bdf8]
0811BDE8: 8178         ldrb r1,[r0,#0x2]
0811BDEA: 8900         lsl r1,r1,#0x2
0811BDEC: 8918         add r1,r1,r2
0811BDEE: 0968         ldr r1,[r1,#0x0]
0811BDF0: 0df0c6f8     bl 0x08128f80
0811BDF4: 01bc         pop {r0}
0811BDF6: 0047         bx r0
