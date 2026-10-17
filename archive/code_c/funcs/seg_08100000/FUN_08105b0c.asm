; undefined FUN_08105b0c(void)
; entry 0x8105b0c  size 58 bytes

08105B0C: 10b5         push {r4,lr}
08105B0E: 041c         add r4,r0,#0x0
08105B10: a17a         ldrb r1,[r4,#0xa]
08105B12: 0120         mov r0,#0x1
08105B14: 0843         orr r0,r1
08105B16: 0221         mov r1,#0x2
08105B18: 0843         orr r0,r1
08105B1A: a072         strb r0,[r4,#0xa]
08105B1C: 201c         add r0,r4,#0x0
08105B1E: 17f7bdf8     bl 0x0801cc9c
08105B22: 201c         add r0,r4,#0x0
08105B24: 17f7e2f9     bl 0x0801ceec
08105B28: 0749         ldr r1,[0x08105b48]
08105B2A: 607a         ldrb r0,[r4,#0x9]
08105B2C: 8000         lsl r0,r0,#0x2
08105B2E: 4018         add r0,r0,r1
08105B30: 0121         mov r1,#0x1
08105B32: e160         str r1,[r4,#0xc]
08105B34: 0068         ldr r0,[r0,#0x0]
08105B36: 4068         ldr r0,[r0,#0x4]
08105B38: 6061         str r0,[r4,#0x14]
08105B3A: 201c         add r0,r4,#0x0
08105B3C: fff73cfe     bl 0x081057b8
08105B40: 10bc         pop {r4}
08105B42: 01bc         pop {r0}
08105B44: 0047         bx r0
