; undefined FUN_0806d5f8(void)
; entry 0x806d5f8  size 40 bytes

0806D5F8: 00b5         push {lr}
0806D5FA: 021c         add r2,r0,#0x0
0806D5FC: 907b         ldrb r0,[r2,#0xe]
0806D5FE: 0028         cmp r0,#0x0
0806D600: 01d1         bne 0x0806d606
0806D602: 0130         add r0,#0x1
0806D604: 9073         strb r0,[r2,#0xe]
0806D606: 0648         ldr r0,[0x0806d620]
0806D608: 807c         ldrb r0,[r0,#0x12]
0806D60A: 0121         mov r1,#0x1
0806D60C: 0140         and r1,r0
0806D60E: 0029         cmp r1,#0x0
0806D610: 04d1         bne 0x0806d61c
0806D612: 0220         mov r0,#0x2
0806D614: 5073         strb r0,[r2,#0xd]
0806D616: 9173         strb r1,[r2,#0xe]
0806D618: 1020         mov r0,#0x10
0806D61A: 9074         strb r0,[r2,#0x12]
0806D61C: 01bc         pop {r0}
0806D61E: 0047         bx r0
