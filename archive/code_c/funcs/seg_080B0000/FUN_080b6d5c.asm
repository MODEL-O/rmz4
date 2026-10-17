; undefined FUN_080b6d5c(void)
; entry 0x80b6d5c  size 58 bytes

080B6D5C: 00b5         push {lr}
080B6D5E: 021c         add r2,r0,#0x0
080B6D60: 906a         ldr r0,[r2,#0x28]
080B6D62: 007b         ldrb r0,[r0,#0xc]
080B6D64: 0128         cmp r0,#0x1
080B6D66: 0fd9         bls 0x080b6d88
080B6D68: 0649         ldr r1,[0x080b6d84]
080B6D6A: 507a         ldrb r0,[r2,#0x9]
080B6D6C: 8000         lsl r0,r0,#0x2
080B6D6E: 4018         add r0,r0,r1
080B6D70: 0221         mov r1,#0x2
080B6D72: d160         str r1,[r2,#0xc]
080B6D74: 0068         ldr r0,[r0,#0x0]
080B6D76: 8068         ldr r0,[r0,#0x8]
080B6D78: 5061         str r0,[r2,#0x14]
080B6D7A: 101c         add r0,r2,#0x0
080B6D7C: 00f0e0f9     bl 0x080b7140
080B6D80: 0ae0         b 0x080b6d98
080B6D88: 0448         ldr r0,[0x080b6d9c]
080B6D8A: 517b         ldrb r1,[r2,#0xd]
080B6D8C: 8900         lsl r1,r1,#0x2
080B6D8E: 0918         add r1,r1,r0
080B6D90: 0968         ldr r1,[r1,#0x0]
080B6D92: 101c         add r0,r2,#0x0
080B6D94: 72f0f4f8     bl 0x08128f80
080B6D98: 01bc         pop {r0}
080B6D9A: 0047         bx r0
