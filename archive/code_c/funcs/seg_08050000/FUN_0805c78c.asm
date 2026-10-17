; undefined FUN_0805c78c(void)
; entry 0x805c78c  size 20 bytes

0805C78C: 00b5         push {lr}
0805C78E: 044a         ldr r2,[0x0805c7a0]
0805C790: 817b         ldrb r1,[r0,#0xe]
0805C792: 8900         lsl r1,r1,#0x2
0805C794: 8918         add r1,r1,r2
0805C796: 0968         ldr r1,[r1,#0x0]
0805C798: ccf0f2fb     bl 0x08128f80
0805C79C: 01bc         pop {r0}
0805C79E: 0047         bx r0
