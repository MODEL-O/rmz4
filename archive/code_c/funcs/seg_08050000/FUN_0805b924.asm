; undefined FUN_0805b924(void)
; entry 0x805b924  size 20 bytes

0805B924: 00b5         push {lr}
0805B926: 044a         ldr r2,[0x0805b938]
0805B928: 417b         ldrb r1,[r0,#0xd]
0805B92A: 8900         lsl r1,r1,#0x2
0805B92C: 8918         add r1,r1,r2
0805B92E: 0968         ldr r1,[r1,#0x0]
0805B930: cdf026fb     bl 0x08128f80
0805B934: 01bc         pop {r0}
0805B936: 0047         bx r0
