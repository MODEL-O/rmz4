; undefined FUN_0805db34(void)
; entry 0x805db34  size 20 bytes

0805DB34: 00b5         push {lr}
0805DB36: 044a         ldr r2,[0x0805db48]
0805DB38: 817b         ldrb r1,[r0,#0xe]
0805DB3A: 8900         lsl r1,r1,#0x2
0805DB3C: 8918         add r1,r1,r2
0805DB3E: 0968         ldr r1,[r1,#0x0]
0805DB40: cbf01efa     bl 0x08128f80
0805DB44: 01bc         pop {r0}
0805DB46: 0047         bx r0
