; undefined FUN_080c88ec(void)
; entry 0x80c88ec  size 20 bytes

080C88EC: 00b5         push {lr}
080C88EE: 044a         ldr r2,[0x080c8900]
080C88F0: 017c         ldrb r1,[r0,#0x10]
080C88F2: 8900         lsl r1,r1,#0x2
080C88F4: 8918         add r1,r1,r2
080C88F6: 0968         ldr r1,[r1,#0x0]
080C88F8: 60f042fb     bl 0x08128f80
080C88FC: 01bc         pop {r0}
080C88FE: 0047         bx r0
