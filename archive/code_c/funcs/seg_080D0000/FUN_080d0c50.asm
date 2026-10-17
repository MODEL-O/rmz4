; undefined FUN_080d0c50(void)
; entry 0x80d0c50  size 50 bytes

080D0C50: 70b5         push {r4,r5,r6,lr}
080D0C52: 061c         add r6,r0,#0x0
080D0C54: 0b48         ldr r0,[0x080d0c84]
080D0C56: 0468         ldr r4,[r0,#0x0]
080D0C58: 201c         add r0,r4,#0x0
080D0C5A: 34f733fc     bl 0x080054c4
080D0C5E: e068         ldr r0,[r4,#0xc]
080D0C60: 4068         ldr r0,[r0,#0x4]
080D0C62: e060         str r0,[r4,#0xc]
080D0C64: 211c         add r1,r4,#0x0
080D0C66: 1431         add r1,#0x14
080D0C68: 8842         cmp r0,r1
080D0C6A: 07d0         beq 0x080d0c7c
080D0C6C: 0d1c         add r5,r1,#0x0
080D0C6E: 58f091f9     bl 0x08128f94
080D0C72: e068         ldr r0,[r4,#0xc]
080D0C74: 4068         ldr r0,[r0,#0x4]
080D0C76: e060         str r0,[r4,#0xc]
080D0C78: a842         cmp r0,r5
080D0C7A: f8d1         bne 0x080d0c6e
080D0C7C: 70bc         pop {r4,r5,r6}
080D0C7E: 01bc         pop {r0}
080D0C80: 0047         bx r0
