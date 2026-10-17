; undefined FUN_080a9a70(void)
; entry 0x80a9a70  size 40 bytes

080A9A70: 10b5         push {r4,lr}
080A9A72: 041c         add r4,r0,#0x0
080A9A74: 606d         ldr r0,[r4,#0x54]
080A9A76: a16d         ldr r1,[r4,#0x58]
080A9A78: 5ef700f9     bl 0x08007c7c
080A9A7C: 0004         lsl r0,r0,#0x10
080A9A7E: 0028         cmp r0,#0x0
080A9A80: 01d1         bne 0x080a9a86
080A9A82: 0020         mov r0,#0x0
080A9A84: 05e0         b 0x080a9a92
080A9A86: 606d         ldr r0,[r4,#0x54]
080A9A88: a16d         ldr r1,[r4,#0x58]
080A9A8A: 5ef753fd     bl 0x08008534
080A9A8E: a065         str r0,[r4,#0x58]
080A9A90: 0120         mov r0,#0x1
080A9A92: 10bc         pop {r4}
080A9A94: 02bc         pop {r1}
080A9A96: 0847         bx r1
