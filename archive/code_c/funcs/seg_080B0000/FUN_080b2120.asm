; undefined FUN_080b2120(void)
; entry 0x80b2120  size 50 bytes

080B2120: 30b5         push {r4,r5,lr}
080B2122: 041c         add r4,r0,#0x0
080B2124: 251c         add r5,r4,#0x0
080B2126: c035         add r5,#0xc0
080B2128: 2868         ldr r0,[r5,#0x0]
080B212A: 79f75bf9     bl 0x0802b3e4
080B212E: 0028         cmp r0,#0x0
080B2130: 0cd0         beq 0x080b214c
080B2132: 607b         ldrb r0,[r4,#0xd]
080B2134: 0528         cmp r0,#0x5
080B2136: 07d0         beq 0x080b2148
080B2138: 201c         add r0,r4,#0x0
080B213A: 7430         add r0,#0x74
080B213C: 0549         ldr r1,[0x080b2154]
080B213E: 53f721fb     bl 0x08005784
080B2142: 0020         mov r0,#0x0
080B2144: 6073         strb r0,[r4,#0xd]
080B2146: a073         strb r0,[r4,#0xe]
080B2148: 0020         mov r0,#0x0
080B214A: 2860         str r0,[r5,#0x0]
080B214C: 30bc         pop {r4,r5}
080B214E: 01bc         pop {r0}
080B2150: 0047         bx r0
