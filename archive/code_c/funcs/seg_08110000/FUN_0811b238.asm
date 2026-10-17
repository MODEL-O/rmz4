; undefined FUN_0811b238(void)
; entry 0x811b238  size 20 bytes

0811B238: 00b5         push {lr}
0811B23A: 044a         ldr r2,[0x0811b24c]
0811B23C: 8178         ldrb r1,[r0,#0x2]
0811B23E: 8900         lsl r1,r1,#0x2
0811B240: 8918         add r1,r1,r2
0811B242: 0968         ldr r1,[r1,#0x0]
0811B244: 0df09cfe     bl 0x08128f80
0811B248: 01bc         pop {r0}
0811B24A: 0047         bx r0
