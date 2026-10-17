; undefined FUN_0810c7c8(void)
; entry 0x810c7c8  size 20 bytes

0810C7C8: 00b5         push {lr}
0810C7CA: 044a         ldr r2,[0x0810c7dc]
0810C7CC: 017c         ldrb r1,[r0,#0x10]
0810C7CE: 8900         lsl r1,r1,#0x2
0810C7D0: 8918         add r1,r1,r2
0810C7D2: 0968         ldr r1,[r1,#0x0]
0810C7D4: 1cf0d4fb     bl 0x08128f80
0810C7D8: 01bc         pop {r0}
0810C7DA: 0047         bx r0
