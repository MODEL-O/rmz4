; undefined FUN_0806ce38(void)
; entry 0x806ce38  size 66 bytes

0806CE38: 10b5         push {r4,lr}
0806CE3A: 041c         add r4,r0,#0x0
0806CE3C: a07b         ldrb r0,[r4,#0xe]
0806CE3E: 0028         cmp r0,#0x0
0806CE40: 06d1         bne 0x0806ce50
0806CE42: 0e49         ldr r1,[0x0806ce7c]
0806CE44: 201c         add r0,r4,#0x0
0806CE46: b0f75bf8     bl 0x0801cf00
0806CE4A: a07b         ldrb r0,[r4,#0xe]
0806CE4C: 0130         add r0,#0x1
0806CE4E: a073         strb r0,[r4,#0xe]
0806CE50: 201c         add r0,r4,#0x0
0806CE52: b0f7cdf8     bl 0x0801cff0
0806CE56: a06d         ldr r0,[r4,#0x58]
0806CE58: 216e         ldr r1,[r4,#0x60]
0806CE5A: 4018         add r0,r0,r1
0806CE5C: a065         str r0,[r4,#0x58]
0806CE5E: 4031         add r1,#0x40
0806CE60: 2166         str r1,[r4,#0x60]
0806CE62: 201c         add r0,r4,#0x0
0806CE64: 7330         add r0,#0x73
0806CE66: 0078         ldrb r0,[r0,#0x0]
0806CE68: 0328         cmp r0,#0x3
0806CE6A: 03d1         bne 0x0806ce74
0806CE6C: 0021         mov r1,#0x0
0806CE6E: 2020         mov r0,#0x20
0806CE70: 6073         strb r0,[r4,#0xd]
0806CE72: a173         strb r1,[r4,#0xe]
0806CE74: 10bc         pop {r4}
0806CE76: 01bc         pop {r0}
0806CE78: 0047         bx r0
