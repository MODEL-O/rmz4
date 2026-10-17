; undefined FUN_080942d4(void)
; entry 0x80942d4  size 20 bytes

080942D4: 00b5         push {lr}
080942D6: 044a         ldr r2,[0x080942e8]
080942D8: 817b         ldrb r1,[r0,#0xe]
080942DA: 8900         lsl r1,r1,#0x2
080942DC: 8918         add r1,r1,r2
080942DE: 0968         ldr r1,[r1,#0x0]
080942E0: 94f04efe     bl 0x08128f80
080942E4: 01bc         pop {r0}
080942E6: 0047         bx r0
