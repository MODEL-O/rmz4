; undefined FUN_080327cc(void)
; entry 0x80327cc  size 20 bytes

080327CC: 00b5         push {lr}
080327CE: 044a         ldr r2,[0x080327e0]
080327D0: 817b         ldrb r1,[r0,#0xe]
080327D2: 8900         lsl r1,r1,#0x2
080327D4: 8918         add r1,r1,r2
080327D6: 0968         ldr r1,[r1,#0x0]
080327D8: f6f0d2fb     bl 0x08128f80
080327DC: 01bc         pop {r0}
080327DE: 0047         bx r0
