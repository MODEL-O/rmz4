; undefined FUN_0807d674(void)
; entry 0x807d674  size 20 bytes

0807D674: 00b5         push {lr}
0807D676: 044a         ldr r2,[0x0807d688]
0807D678: 817b         ldrb r1,[r0,#0xe]
0807D67A: 8900         lsl r1,r1,#0x2
0807D67C: 8918         add r1,r1,r2
0807D67E: 0968         ldr r1,[r1,#0x0]
0807D680: abf07efc     bl 0x08128f80
0807D684: 01bc         pop {r0}
0807D686: 0047         bx r0
