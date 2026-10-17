; undefined FUN_080b0200(void)
; entry 0x80b0200  size 38 bytes

080B0200: 10b5         push {r4,lr}
080B0202: 041c         add r4,r0,#0x0
080B0204: a06a         ldr r0,[r4,#0x28]
080B0206: 7bf7edf8     bl 0x0802b3e4
080B020A: 0028         cmp r0,#0x0
080B020C: 08d0         beq 0x080b0220
080B020E: 201c         add r0,r4,#0x0
080B0210: 7430         add r0,#0x74
080B0212: 0549         ldr r1,[0x080b0228]
080B0214: 55f7b6fa     bl 0x08005784
080B0218: 0020         mov r0,#0x0
080B021A: a062         str r0,[r4,#0x28]
080B021C: 6073         strb r0,[r4,#0xd]
080B021E: a073         strb r0,[r4,#0xe]
080B0220: 10bc         pop {r4}
080B0222: 01bc         pop {r0}
080B0224: 0047         bx r0
