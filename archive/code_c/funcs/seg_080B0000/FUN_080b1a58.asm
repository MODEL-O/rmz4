; undefined FUN_080b1a58(void)
; entry 0x80b1a58  size 48 bytes

080B1A58: 30b5         push {r4,r5,lr}
080B1A5A: 041c         add r4,r0,#0x0
080B1A5C: 251c         add r5,r4,#0x0
080B1A5E: c035         add r5,#0xc0
080B1A60: 2868         ldr r0,[r5,#0x0]
080B1A62: 79f7bffc     bl 0x0802b3e4
080B1A66: 0028         cmp r0,#0x0
080B1A68: 0bd0         beq 0x080b1a82
080B1A6A: 201c         add r0,r4,#0x0
080B1A6C: 7430         add r0,#0x74
080B1A6E: 0649         ldr r1,[0x080b1a88]
080B1A70: 53f788fe     bl 0x08005784
080B1A74: 0021         mov r1,#0x0
080B1A76: 2960         str r1,[r5,#0x0]
080B1A78: 0120         mov r0,#0x1
080B1A7A: 6073         strb r0,[r4,#0xd]
080B1A7C: 0320         mov r0,#0x3
080B1A7E: a073         strb r0,[r4,#0xe]
080B1A80: a174         strb r1,[r4,#0x12]
080B1A82: 30bc         pop {r4,r5}
080B1A84: 01bc         pop {r0}
080B1A86: 0047         bx r0
