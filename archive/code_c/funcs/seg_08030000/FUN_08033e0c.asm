; undefined FUN_08033e0c(void)
; entry 0x8033e0c  size 24 bytes

08033E0C: 00b5         push {lr}
08033E0E: 054a         ldr r2,[0x08033e24]
08033E10: 054b         ldr r3,[0x08033e28]
08033E12: c118         add r1,r0,r3
08033E14: 0978         ldrb r1,[r1,#0x0]
08033E16: 8900         lsl r1,r1,#0x2
08033E18: 8918         add r1,r1,r2
08033E1A: 0968         ldr r1,[r1,#0x0]
08033E1C: f5f0b0f8     bl 0x08128f80
08033E20: 01bc         pop {r0}
08033E22: 0047         bx r0
