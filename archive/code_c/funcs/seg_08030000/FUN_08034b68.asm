; undefined FUN_08034b68(void)
; entry 0x8034b68  size 24 bytes

08034B68: 00b5         push {lr}
08034B6A: 054a         ldr r2,[0x08034b80]
08034B6C: 054b         ldr r3,[0x08034b84]
08034B6E: c118         add r1,r0,r3
08034B70: 0978         ldrb r1,[r1,#0x0]
08034B72: 8900         lsl r1,r1,#0x2
08034B74: 8918         add r1,r1,r2
08034B76: 0968         ldr r1,[r1,#0x0]
08034B78: f4f002fa     bl 0x08128f80
08034B7C: 01bc         pop {r0}
08034B7E: 0047         bx r0
