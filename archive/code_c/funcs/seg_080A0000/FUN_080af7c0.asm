; undefined FUN_080af7c0(void)
; entry 0x80af7c0  size 74 bytes

080AF7C0: 30b5         push {r4,r5,lr}
080AF7C2: 041c         add r4,r0,#0x0
080AF7C4: 607c         ldrb r0,[r4,#0x11]
080AF7C6: 0028         cmp r0,#0x0
080AF7C8: 1cd1         bne 0x080af804
080AF7CA: 251c         add r5,r4,#0x0
080AF7CC: c035         add r5,#0xc0
080AF7CE: 2868         ldr r0,[r5,#0x0]
080AF7D0: 0028         cmp r0,#0x0
080AF7D2: 17d1         bne 0x080af804
080AF7D4: 201c         add r0,r4,#0x0
080AF7D6: 8c30         add r0,#0x8c
080AF7D8: 0068         ldr r0,[r0,#0x0]
080AF7DA: 0121         mov r1,#0x1
080AF7DC: 0840         and r0,r1
080AF7DE: 0028         cmp r0,#0x0
080AF7E0: 10d0         beq 0x080af804
080AF7E2: 0a4a         ldr r2,[0x080af80c]
080AF7E4: 0020         mov r0,#0x0
080AF7E6: 211c         add r1,r4,#0x0
080AF7E8: 7bf7e0fa     bl 0x0802adac
080AF7EC: 2860         str r0,[r5,#0x0]
080AF7EE: 0028         cmp r0,#0x0
080AF7F0: 08d0         beq 0x080af804
080AF7F2: 201c         add r0,r4,#0x0
080AF7F4: 7430         add r0,#0x74
080AF7F6: 0649         ldr r1,[0x080af810]
080AF7F8: 55f7c4ff     bl 0x08005784
080AF7FC: e06a         ldr r0,[r4,#0x2c]
080AF7FE: c030         add r0,#0xc0
080AF800: 2968         ldr r1,[r5,#0x0]
080AF802: 0160         str r1,[r0,#0x0]
080AF804: 30bc         pop {r4,r5}
080AF806: 01bc         pop {r0}
080AF808: 0047         bx r0
