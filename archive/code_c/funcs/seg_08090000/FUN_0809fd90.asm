; undefined FUN_0809fd90(void)
; entry 0x809fd90  size 20 bytes

0809FD90: 00b5         push {lr}
0809FD92: 044a         ldr r2,[0x0809fda4]
0809FD94: 017c         ldrb r1,[r0,#0x10]
0809FD96: 8900         lsl r1,r1,#0x2
0809FD98: 8918         add r1,r1,r2
0809FD9A: 0968         ldr r1,[r1,#0x0]
0809FD9C: 89f0f0f8     bl 0x08128f80
0809FDA0: 01bc         pop {r0}
0809FDA2: 0047         bx r0
