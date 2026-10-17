; undefined FUN_0806d904(void)
; entry 0x806d904  size 70 bytes

0806D904: 10b5         push {r4,lr}
0806D906: 041c         add r4,r0,#0x0
0806D908: a27b         ldrb r2,[r4,#0xe]
0806D90A: 002a         cmp r2,#0x0
0806D90C: 0ad1         bne 0x0806d924
0806D90E: 211c         add r1,r4,#0x0
0806D910: d831         add r1,#0xd8
0806D912: d430         add r0,#0xd4
0806D914: 0978         ldrb r1,[r1,#0x0]
0806D916: 4018         add r0,r0,r1
0806D918: 0270         strb r2,[r0,#0x0]
0806D91A: 4020         mov r0,#0x40
0806D91C: a074         strb r0,[r4,#0x12]
0806D91E: a07b         ldrb r0,[r4,#0xe]
0806D920: 0130         add r0,#0x1
0806D922: a073         strb r0,[r4,#0xe]
0806D924: 201c         add r0,r4,#0x0
0806D926: aff763fb     bl 0x0801cff0
0806D92A: a07c         ldrb r0,[r4,#0x12]
0806D92C: 0138         sub r0,#0x1
0806D92E: a074         strb r0,[r4,#0x12]
0806D930: 0006         lsl r0,r0,#0x18
0806D932: 000e         lsr r0,r0,#0x18
0806D934: ff28         cmp r0,#0xff
0806D936: 05d1         bne 0x0806d944
0806D938: 0220         mov r0,#0x2
0806D93A: 6073         strb r0,[r4,#0xd]
0806D93C: 0020         mov r0,#0x0
0806D93E: a073         strb r0,[r4,#0xe]
0806D940: 1020         mov r0,#0x10
0806D942: a074         strb r0,[r4,#0x12]
0806D944: 10bc         pop {r4}
0806D946: 01bc         pop {r0}
0806D948: 0047         bx r0
