; undefined FUN_08108cf8(void)
; entry 0x8108cf8  size 26 bytes

08108CF8: 00b5         push {lr}
08108CFA: c26a         ldr r2,[r0,#0x2c]
08108CFC: c068         ldr r0,[r0,#0xc]
08108CFE: c16a         ldr r1,[r0,#0x2c]
08108D00: 0820         mov r0,#0x8
08108D02: 0856         ldrsb r0,[r1,r0]
08108D04: 0028         cmp r0,#0x0
08108D06: 02d1         bne 0x08108d0e
08108D08: 101c         add r0,r2,#0x0
08108D0A: b830         add r0,#0xb8
08108D0C: 0160         str r1,[r0,#0x0]
08108D0E: 01bc         pop {r0}
08108D10: 0047         bx r0
