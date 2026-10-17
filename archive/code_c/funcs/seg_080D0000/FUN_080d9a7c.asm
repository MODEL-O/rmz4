; undefined FUN_080d9a7c(void)
; entry 0x80d9a7c  size 68 bytes

080D9A7C: 10b5         push {r4,lr}
080D9A7E: 041c         add r4,r0,#0x0
080D9A80: a07c         ldrb r0,[r4,#0x12]
080D9A82: 0138         sub r0,#0x1
080D9A84: a074         strb r0,[r4,#0x12]
080D9A86: 0006         lsl r0,r0,#0x18
080D9A88: 0028         cmp r0,#0x0
080D9A8A: 0fd1         bne 0x080d9aac
080D9A8C: 0649         ldr r1,[0x080d9aa8]
080D9A8E: 607a         ldrb r0,[r4,#0x9]
080D9A90: 8000         lsl r0,r0,#0x2
080D9A92: 4018         add r0,r0,r1
080D9A94: 0221         mov r1,#0x2
080D9A96: e160         str r1,[r4,#0xc]
080D9A98: 0068         ldr r0,[r0,#0x0]
080D9A9A: 8068         ldr r0,[r0,#0x8]
080D9A9C: 6061         str r0,[r4,#0x14]
080D9A9E: 201c         add r0,r4,#0x0
080D9AA0: 00f012f8     bl 0x080d9ac8
080D9AA4: 0ce0         b 0x080d9ac0
080D9AAC: 201c         add r0,r4,#0x0
080D9AAE: 43f79ffa     bl 0x0801cff0
080D9AB2: 606d         ldr r0,[r4,#0x54]
080D9AB4: e16d         ldr r1,[r4,#0x5c]
080D9AB6: 4018         add r0,r0,r1
080D9AB8: 6065         str r0,[r4,#0x54]
080D9ABA: 606e         ldr r0,[r4,#0x64]
080D9ABC: 0918         add r1,r1,r0
080D9ABE: e165         str r1,[r4,#0x5c]
080D9AC0: 10bc         pop {r4}
080D9AC2: 01bc         pop {r0}
080D9AC4: 0047         bx r0
