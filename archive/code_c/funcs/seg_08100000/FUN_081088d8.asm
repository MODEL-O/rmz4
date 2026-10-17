; undefined FUN_081088d8(void)
; entry 0x81088d8  size 26 bytes

081088D8: 00b5         push {lr}
081088DA: c26a         ldr r2,[r0,#0x2c]
081088DC: c068         ldr r0,[r0,#0xc]
081088DE: c16a         ldr r1,[r0,#0x2c]
081088E0: 0820         mov r0,#0x8
081088E2: 0856         ldrsb r0,[r1,r0]
081088E4: 0028         cmp r0,#0x0
081088E6: 02d1         bne 0x081088ee
081088E8: 101c         add r0,r2,#0x0
081088EA: b830         add r0,#0xb8
081088EC: 0160         str r1,[r0,#0x0]
081088EE: 01bc         pop {r0}
081088F0: 0047         bx r0
