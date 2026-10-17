; undefined FUN_08100158(void)
; entry 0x8100158  size 26 bytes

08100158: 00b5         push {lr}
0810015A: c26a         ldr r2,[r0,#0x2c]
0810015C: c068         ldr r0,[r0,#0xc]
0810015E: c16a         ldr r1,[r0,#0x2c]
08100160: 0820         mov r0,#0x8
08100162: 0856         ldrsb r0,[r1,r0]
08100164: 0028         cmp r0,#0x0
08100166: 02d1         bne 0x0810016e
08100168: 101c         add r0,r2,#0x0
0810016A: b430         add r0,#0xb4
0810016C: 0160         str r1,[r0,#0x0]
0810016E: 01bc         pop {r0}
08100170: 0047         bx r0
