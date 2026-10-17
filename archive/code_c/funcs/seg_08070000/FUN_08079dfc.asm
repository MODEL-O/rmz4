; undefined FUN_08079dfc(void)
; entry 0x8079dfc  size 20 bytes

08079DFC: 00b5         push {lr}
08079DFE: 044a         ldr r2,[0x08079e10]
08079E00: c17b         ldrb r1,[r0,#0xf]
08079E02: 8900         lsl r1,r1,#0x2
08079E04: 8918         add r1,r1,r2
08079E06: 0968         ldr r1,[r1,#0x0]
08079E08: aff0baf8     bl 0x08128f80
08079E0C: 01bc         pop {r0}
08079E0E: 0047         bx r0
