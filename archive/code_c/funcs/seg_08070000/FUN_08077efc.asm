; undefined FUN_08077efc(void)
; entry 0x8077efc  size 20 bytes

08077EFC: 00b5         push {lr}
08077EFE: 044a         ldr r2,[0x08077f10]
08077F00: 817b         ldrb r1,[r0,#0xe]
08077F02: 8900         lsl r1,r1,#0x2
08077F04: 8918         add r1,r1,r2
08077F06: 0968         ldr r1,[r1,#0x0]
08077F08: b1f03af8     bl 0x08128f80
08077F0C: 01bc         pop {r0}
08077F0E: 0047         bx r0
