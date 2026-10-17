; undefined FUN_08002b10(void)
; entry 0x8002b10  size 66 bytes

08002B10: 10b5         push {r4,lr}
08002B12: 0004         lsl r0,r0,#0x10
08002B14: 040c         lsr r4,r0,#0x10
08002B16: 0949         ldr r1,[0x08002b3c]
08002B18: e000         lsl r0,r4,#0x3
08002B1A: 4018         add r0,r0,r1
08002B1C: a622         mov r2,#0xa6
08002B1E: 5200         lsl r2,r2,#0x1
08002B20: 8918         add r1,r1,r2
08002B22: 8088         ldrh r0,[r0,#0x4]
08002B24: 0988         ldrh r1,[r1,#0x0]
08002B26: 8842         cmp r0,r1
08002B28: 0cd1         bne 0x08002b44
08002B2A: 0549         ldr r1,[0x08002b40]
08002B2C: 0888         ldrh r0,[r1,#0x0]
08002B2E: 0028         cmp r0,#0x0
08002B30: 01d0         beq 0x08002b36
08002B32: 2928         cmp r0,#0x29
08002B34: 0bd1         bne 0x08002b4e
08002B36: 0c80         strh r4,[r1,#0x0]
08002B38: 09e0         b 0x08002b4e
08002B44: 002c         cmp r4,#0x0
08002B46: 05d0         beq 0x08002b54
08002B48: 201c         add r0,r4,#0x0
08002B4A: 24f133fe     bl 0x081277b4
08002B4E: 2004         lsl r0,r4,#0x10
08002B50: 0014         asr r0,r0,#0x10
08002B52: 00e0         b 0x08002b56
08002B54: 0020         mov r0,#0x0
08002B56: 10bc         pop {r4}
08002B58: 02bc         pop {r1}
08002B5A: 0847         bx r1
