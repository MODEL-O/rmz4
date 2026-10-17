; undefined FUN_080b0c7c(void)
; entry 0x80b0c7c  size 68 bytes

080B0C7C: 10b5         push {r4,lr}
080B0C7E: 041c         add r4,r0,#0x0
080B0C80: c030         add r0,#0xc0
080B0C82: 0068         ldr r0,[r0,#0x0]
080B0C84: 7af7aefb     bl 0x0802b3e4
080B0C88: 0028         cmp r0,#0x0
080B0C8A: 19d0         beq 0x080b0cc0
080B0C8C: a07c         ldrb r0,[r4,#0x12]
080B0C8E: ff28         cmp r0,#0xff
080B0C90: 08d0         beq 0x080b0ca4
080B0C92: 201c         add r0,r4,#0x0
080B0C94: 7430         add r0,#0x74
080B0C96: 0249         ldr r1,[0x080b0ca0]
080B0C98: 54f774fd     bl 0x08005784
080B0C9C: 0ce0         b 0x080b0cb8
080B0CA4: 201c         add r0,r4,#0x0
080B0CA6: 7430         add r0,#0x74
080B0CA8: 627c         ldrb r2,[r4,#0x11]
080B0CAA: 5100         lsl r1,r2,#0x1
080B0CAC: 8918         add r1,r1,r2
080B0CAE: 0901         lsl r1,r1,#0x4
080B0CB0: 054a         ldr r2,[0x080b0cc8]
080B0CB2: 8918         add r1,r1,r2
080B0CB4: 54f766fd     bl 0x08005784
080B0CB8: 211c         add r1,r4,#0x0
080B0CBA: c031         add r1,#0xc0
080B0CBC: 0020         mov r0,#0x0
080B0CBE: 0860         str r0,[r1,#0x0]
080B0CC0: 10bc         pop {r4}
080B0CC2: 01bc         pop {r0}
080B0CC4: 0047         bx r0
