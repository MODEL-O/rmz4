; undefined FUN_080b590c(void)
; entry 0x80b590c  size 60 bytes

080B590C: 10b5         push {r4,lr}
080B590E: 041c         add r4,r0,#0x0
080B5910: 607c         ldrb r0,[r4,#0x11]
080B5912: e27b         ldrb r2,[r4,#0xf]
080B5914: 002a         cmp r2,#0x0
080B5916: 06d1         bne 0x080b5926
080B5918: 0130         add r0,#0x1
080B591A: 4100         lsl r1,r0,#0x1
080B591C: 0918         add r1,r1,r0
080B591E: 8900         lsl r1,r1,#0x2
080B5920: a174         strb r1,[r4,#0x12]
080B5922: 501c         add r0,r2,#0x1
080B5924: e073         strb r0,[r4,#0xf]
080B5926: 201c         add r0,r4,#0x0
080B5928: 67f762fb     bl 0x0801cff0
080B592C: a07c         ldrb r0,[r4,#0x12]
080B592E: 0138         sub r0,#0x1
080B5930: a074         strb r0,[r4,#0x12]
080B5932: 0006         lsl r0,r0,#0x18
080B5934: 010e         lsr r1,r0,#0x18
080B5936: 0029         cmp r1,#0x0
080B5938: 03d1         bne 0x080b5942
080B593A: 0220         mov r0,#0x2
080B593C: 6073         strb r0,[r4,#0xd]
080B593E: a173         strb r1,[r4,#0xe]
080B5940: e173         strb r1,[r4,#0xf]
080B5942: 10bc         pop {r4}
080B5944: 01bc         pop {r0}
080B5946: 0047         bx r0
