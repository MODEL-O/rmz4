; undefined FUN_08079a50(void)
; entry 0x8079a50  size 76 bytes

08079A50: 10b5         push {r4,lr}
08079A52: 041c         add r4,r0,#0x0
08079A54: a07b         ldrb r0,[r4,#0xe]
08079A56: 0028         cmp r0,#0x0
08079A58: 0fd1         bne 0x08079a7a
08079A5A: 0120         mov r0,#0x1
08079A5C: a2f780fd     bl 0x0801c560
08079A60: b721         mov r1,#0xb7
08079A62: 0902         lsl r1,r1,#0x8
08079A64: 201c         add r0,r4,#0x0
08079A66: a3f74bfa     bl 0x0801cf00
08079A6A: a06d         ldr r0,[r4,#0x58]
08079A6C: 8c21         mov r1,#0x8c
08079A6E: 0902         lsl r1,r1,#0x8
08079A70: 4018         add r0,r0,r1
08079A72: a065         str r0,[r4,#0x58]
08079A74: a07b         ldrb r0,[r4,#0xe]
08079A76: 0130         add r0,#0x1
08079A78: a073         strb r0,[r4,#0xe]
08079A7A: 201c         add r0,r4,#0x0
08079A7C: a3f7b8fa     bl 0x0801cff0
08079A80: 0648         ldr r0,[0x08079a9c]
08079A82: 0749         ldr r1,[0x08079aa0]
08079A84: 4018         add r0,r0,r1
08079A86: 0078         ldrb r0,[r0,#0x0]
08079A88: 0128         cmp r0,#0x1
08079A8A: 04d1         bne 0x08079a96
08079A8C: e07b         ldrb r0,[r4,#0xf]
08079A8E: 0130         add r0,#0x1
08079A90: 0021         mov r1,#0x0
08079A92: e073         strb r0,[r4,#0xf]
08079A94: a173         strb r1,[r4,#0xe]
08079A96: 10bc         pop {r4}
08079A98: 01bc         pop {r0}
08079A9A: 0047         bx r0
