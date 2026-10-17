; undefined FUN_0810e748(void)
; entry 0x810e748  size 20 bytes

0810E748: 00b5         push {lr}
0810E74A: 044a         ldr r2,[0x0810e75c]
0810E74C: 017b         ldrb r1,[r0,#0xc]
0810E74E: 8900         lsl r1,r1,#0x2
0810E750: 8918         add r1,r1,r2
0810E752: 0968         ldr r1,[r1,#0x0]
0810E754: 1af014fc     bl 0x08128f80
0810E758: 01bc         pop {r0}
0810E75A: 0047         bx r0
