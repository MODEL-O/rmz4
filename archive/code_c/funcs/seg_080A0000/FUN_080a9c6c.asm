; undefined FUN_080a9c6c(void)
; entry 0x80a9c6c  size 64 bytes

080A9C6C: 00b5         push {lr}
080A9C6E: 011c         add r1,r0,#0x0
080A9C70: 0b1c         add r3,r1,#0x0
080A9C72: b733         add r3,#0xb7
080A9C74: 1878         ldrb r0,[r3,#0x0]
080A9C76: 0028         cmp r0,#0x0
080A9C78: 16d0         beq 0x080a9ca8
080A9C7A: 087c         ldrb r0,[r1,#0x10]
080A9C7C: 021c         add r2,r0,#0x0
080A9C7E: 002a         cmp r2,#0x0
080A9C80: 04d1         bne 0x080a9c8c
080A9C82: 4a73         strb r2,[r1,#0xd]
080A9C84: 1a78         ldrb r2,[r3,#0x0]
080A9C86: 012a         cmp r2,#0x1
080A9C88: 00d1         bne 0x080a9c8c
080A9C8A: 4a73         strb r2,[r1,#0xd]
080A9C8C: 0006         lsl r0,r0,#0x18
080A9C8E: 020e         lsr r2,r0,#0x18
080A9C90: 012a         cmp r2,#0x1
080A9C92: 07d1         bne 0x080a9ca4
080A9C94: 0020         mov r0,#0x0
080A9C96: 4873         strb r0,[r1,#0xd]
080A9C98: 081c         add r0,r1,#0x0
080A9C9A: b730         add r0,#0xb7
080A9C9C: 0078         ldrb r0,[r0,#0x0]
080A9C9E: 0228         cmp r0,#0x2
080A9CA0: 00d1         bne 0x080a9ca4
080A9CA2: 4a73         strb r2,[r1,#0xd]
080A9CA4: 0020         mov r0,#0x0
080A9CA6: 8873         strb r0,[r1,#0xe]
080A9CA8: 01bc         pop {r0}
080A9CAA: 0047         bx r0
