; undefined FUN_080aaafc(void)
; entry 0x80aaafc  size 48 bytes

080AAAFC: 30b5         push {r4,r5,lr}
080AAAFE: 041c         add r4,r0,#0x0
080AAB00: 251c         add r5,r4,#0x0
080AAB02: c035         add r5,#0xc0
080AAB04: 2868         ldr r0,[r5,#0x0]
080AAB06: 80f76dfc     bl 0x0802b3e4
080AAB0A: 0028         cmp r0,#0x0
080AAB0C: 0bd0         beq 0x080aab26
080AAB0E: 201c         add r0,r4,#0x0
080AAB10: 7430         add r0,#0x74
080AAB12: 0649         ldr r1,[0x080aab2c]
080AAB14: 5af736fe     bl 0x08005784
080AAB18: 0021         mov r1,#0x0
080AAB1A: 2960         str r1,[r5,#0x0]
080AAB1C: 0220         mov r0,#0x2
080AAB1E: 6073         strb r0,[r4,#0xd]
080AAB20: a173         strb r1,[r4,#0xe]
080AAB22: 2020         mov r0,#0x20
080AAB24: e074         strb r0,[r4,#0x13]
080AAB26: 30bc         pop {r4,r5}
080AAB28: 01bc         pop {r0}
080AAB2A: 0047         bx r0
