; undefined FUN_08059f50(void)
; entry 0x8059f50  size 20 bytes

08059F50: 00b5         push {lr}
08059F52: 044a         ldr r2,[0x08059f64]
08059F54: 817b         ldrb r1,[r0,#0xe]
08059F56: 8900         lsl r1,r1,#0x2
08059F58: 8918         add r1,r1,r2
08059F5A: 0968         ldr r1,[r1,#0x0]
08059F5C: cff010f8     bl 0x08128f80
08059F60: 01bc         pop {r0}
08059F62: 0047         bx r0
