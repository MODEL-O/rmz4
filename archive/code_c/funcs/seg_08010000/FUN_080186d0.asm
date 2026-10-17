; undefined FUN_080186d0(void)
; entry 0x80186d0  size 36 bytes

080186D0: 00b5         push {lr}
080186D2: 011c         add r1,r0,#0x0
080186D4: 8b7b         ldrb r3,[r1,#0xe]
080186D6: 1a1c         add r2,r3,#0x0
080186D8: 002a         cmp r2,#0x0
080186DA: 09d1         bne 0x080186f0
080186DC: f020         mov r0,#0xf0
080186DE: 4000         lsl r0,r0,#0x1
080186E0: c864         str r0,[r1,#0x4c]
080186E2: e020         mov r0,#0xe0
080186E4: 0865         str r0,[r1,#0x50]
080186E6: 4a64         str r2,[r1,#0x44]
080186E8: 4020         mov r0,#0x40
080186EA: 8864         str r0,[r1,#0x48]
080186EC: 581c         add r0,r3,#0x1
080186EE: 8873         strb r0,[r1,#0xe]
080186F0: 01bc         pop {r0}
080186F2: 0047         bx r0
