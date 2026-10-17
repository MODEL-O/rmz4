; undefined FUN_081129d4(void)
; entry 0x81129d4  size 54 bytes

081129D4: 4908         lsr r1,r1,#0x1
081129D6: f0b4         push {r4,r5,r6,r7}
081129D8: 7f27         mov r7,#0x7f
081129DA: 0468         ldr r4,[r0,#0x0]
081129DC: a50a         lsr r5,r4,#0xa
081129DE: 1540         and r5,r2
081129E0: 6609         lsr r6,r4,#0x5
081129E2: 1640         and r6,r2
081129E4: 1440         and r4,r2
081129E6: 6419         add r4,r4,r5
081129E8: a419         add r4,r4,r6
081129EA: 251c         add r5,r4,#0x0
081129EC: 3d40         and r5,r7
081129EE: 6d00         lsl r5,r5,#0x1
081129F0: 5d5b         ldrh r5,[r3,r5]
081129F2: 240c         lsr r4,r4,#0x10
081129F4: 3c40         and r4,r7
081129F6: 6400         lsl r4,r4,#0x1
081129F8: 1c5b         ldrh r4,[r3,r4]
081129FA: 2404         lsl r4,r4,#0x10
081129FC: 2c43         orr r4,r5
081129FE: 0460         str r4,[r0,#0x0]
08112A00: 0430         add r0,#0x4
08112A02: 0139         sub r1,#0x1
08112A04: e9d1         bne 0x081129da
08112A06: f0bc         pop {r4,r5,r6,r7}
08112A08: 7047         bx lr
