; undefined FUN_0803ae90(void)
; entry 0x803ae90  size 28 bytes

0803AE90: 00b5         push {lr}
0803AE92: 021c         add r2,r0,#0x0
0803AE94: 507c         ldrb r0,[r2,#0x11]
0803AE96: 0028         cmp r0,#0x0
0803AE98: 01d0         beq 0x0803ae9e
0803AE9A: 0020         mov r0,#0x0
0803AE9C: 04e0         b 0x0803aea8
0803AE9E: 506d         ldr r0,[r2,#0x54]
0803AEA0: 0860         str r0,[r1,#0x0]
0803AEA2: 906d         ldr r0,[r2,#0x58]
0803AEA4: 4860         str r0,[r1,#0x4]
0803AEA6: 0120         mov r0,#0x1
0803AEA8: 02bc         pop {r1}
0803AEAA: 0847         bx r1
