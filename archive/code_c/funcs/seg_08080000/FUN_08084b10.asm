; undefined FUN_08084b10(void)
; entry 0x8084b10  size 66 bytes

08084B10: 70b5         push {r4,r5,r6,lr}
08084B12: 041c         add r4,r0,#0x0
08084B14: 207c         ldrb r0,[r4,#0x10]
08084B16: 0128         cmp r0,#0x1
08084B18: 18d8         bhi 0x08084b4c
08084B1A: 607b         ldrb r0,[r4,#0xd]
08084B1C: 0228         cmp r0,#0x2
08084B1E: 15d1         bne 0x08084b4c
08084B20: 261c         add r6,r4,#0x0
08084B22: b436         add r6,#0xb4
08084B24: 3568         ldr r5,[r6,#0x0]
08084B26: 002d         cmp r5,#0x0
08084B28: 10d1         bne 0x08084b4c
08084B2A: 201c         add r0,r4,#0x0
08084B2C: 8c30         add r0,#0x8c
08084B2E: 0068         ldr r0,[r0,#0x0]
08084B30: 0121         mov r1,#0x1
08084B32: 0840         and r0,r1
08084B34: 0028         cmp r0,#0x0
08084B36: 09d0         beq 0x08084b4c
08084B38: 064a         ldr r2,[0x08084b54]
08084B3A: 0020         mov r0,#0x0
08084B3C: 211c         add r1,r4,#0x0
08084B3E: a6f735f9     bl 0x0802adac
08084B42: 3060         str r0,[r6,#0x0]
08084B44: 0028         cmp r0,#0x0
08084B46: 01d0         beq 0x08084b4c
08084B48: 6573         strb r5,[r4,#0xd]
08084B4A: a573         strb r5,[r4,#0xe]
08084B4C: 70bc         pop {r4,r5,r6}
08084B4E: 01bc         pop {r0}
08084B50: 0047         bx r0
