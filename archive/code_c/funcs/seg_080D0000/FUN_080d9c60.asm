; undefined FUN_080d9c60(void)
; entry 0x80d9c60  size 66 bytes

080D9C60: 10b5         push {r4,lr}
080D9C62: 041c         add r4,r0,#0x0
080D9C64: 7330         add r0,#0x73
080D9C66: 0078         ldrb r0,[r0,#0x0]
080D9C68: 0328         cmp r0,#0x3
080D9C6A: 0fd1         bne 0x080d9c8c
080D9C6C: 0649         ldr r1,[0x080d9c88]
080D9C6E: 607a         ldrb r0,[r4,#0x9]
080D9C70: 8000         lsl r0,r0,#0x2
080D9C72: 4018         add r0,r0,r1
080D9C74: 0221         mov r1,#0x2
080D9C76: e160         str r1,[r4,#0xc]
080D9C78: 0068         ldr r0,[r0,#0x0]
080D9C7A: 8068         ldr r0,[r0,#0x8]
080D9C7C: 6061         str r0,[r4,#0x14]
080D9C7E: 201c         add r0,r4,#0x0
080D9C80: 00f012f8     bl 0x080d9ca8
080D9C84: 0de0         b 0x080d9ca2
080D9C8C: 201c         add r0,r4,#0x0
080D9C8E: 43f7aff9     bl 0x0801cff0
080D9C92: 606d         ldr r0,[r4,#0x54]
080D9C94: e16d         ldr r1,[r4,#0x5c]
080D9C96: 4018         add r0,r0,r1
080D9C98: 6065         str r0,[r4,#0x54]
080D9C9A: a06d         ldr r0,[r4,#0x58]
080D9C9C: 216e         ldr r1,[r4,#0x60]
080D9C9E: 4018         add r0,r0,r1
080D9CA0: a065         str r0,[r4,#0x58]
080D9CA2: 10bc         pop {r4}
080D9CA4: 01bc         pop {r0}
080D9CA6: 0047         bx r0
