; undefined FUN_080bae54(void)
; entry 0x80bae54  size 72 bytes

080BAE54: 10b5         push {r4,lr}
080BAE56: 041c         add r4,r0,#0x0
080BAE58: e07b         ldrb r0,[r4,#0xf]
080BAE5A: 0028         cmp r0,#0x0
080BAE5C: 0dd1         bne 0x080bae7a
080BAE5E: 201c         add r0,r4,#0x0
080BAE60: 7430         add r0,#0x74
080BAE62: 0e49         ldr r1,[0x080bae9c]
080BAE64: 4af78efc     bl 0x08005784
080BAE68: 0d49         ldr r1,[0x080baea0]
080BAE6A: 201c         add r0,r4,#0x0
080BAE6C: 62f748f8     bl 0x0801cf00
080BAE70: 0820         mov r0,#0x8
080BAE72: a074         strb r0,[r4,#0x12]
080BAE74: e07b         ldrb r0,[r4,#0xf]
080BAE76: 0130         add r0,#0x1
080BAE78: e073         strb r0,[r4,#0xf]
080BAE7A: 201c         add r0,r4,#0x0
080BAE7C: 62f75af9     bl 0x0801d134
080BAE80: a07c         ldrb r0,[r4,#0x12]
080BAE82: 0138         sub r0,#0x1
080BAE84: a074         strb r0,[r4,#0x12]
080BAE86: 0006         lsl r0,r0,#0x18
080BAE88: 010e         lsr r1,r0,#0x18
080BAE8A: 0029         cmp r1,#0x0
080BAE8C: 03d1         bne 0x080bae96
080BAE8E: 0220         mov r0,#0x2
080BAE90: 6073         strb r0,[r4,#0xd]
080BAE92: a173         strb r1,[r4,#0xe]
080BAE94: e173         strb r1,[r4,#0xf]
080BAE96: 10bc         pop {r4}
080BAE98: 01bc         pop {r0}
080BAE9A: 0047         bx r0
