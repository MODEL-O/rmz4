; undefined FUN_080308f4(void)
; entry 0x80308f4  size 20 bytes

080308F4: 00b5         push {lr}
080308F6: 044a         ldr r2,[0x08030908]
080308F8: c17b         ldrb r1,[r0,#0xf]
080308FA: 8900         lsl r1,r1,#0x2
080308FC: 8918         add r1,r1,r2
080308FE: 0968         ldr r1,[r1,#0x0]
08030900: f8f03efb     bl 0x08128f80
08030904: 01bc         pop {r0}
08030906: 0047         bx r0
