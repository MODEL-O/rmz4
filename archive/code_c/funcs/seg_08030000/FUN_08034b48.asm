; undefined FUN_08034b48(void)
; entry 0x8034b48  size 26 bytes

08034B48: 00b5         push {lr}
08034B4A: 064a         ldr r2,[0x08034b64]
08034B4C: a223         mov r3,#0xa2
08034B4E: 5b00         lsl r3,r3,#0x1
08034B50: c118         add r1,r0,r3
08034B52: 0978         ldrb r1,[r1,#0x0]
08034B54: 8900         lsl r1,r1,#0x2
08034B56: 8918         add r1,r1,r2
08034B58: 0968         ldr r1,[r1,#0x0]
08034B5A: f4f011fa     bl 0x08128f80
08034B5E: 01bc         pop {r0}
08034B60: 0047         bx r0
