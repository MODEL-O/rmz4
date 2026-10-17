; undefined FUN_08055ef4(void)
; entry 0x8055ef4  size 20 bytes

08055EF4: 00b5         push {lr}
08055EF6: 044a         ldr r2,[0x08055f08]
08055EF8: 817b         ldrb r1,[r0,#0xe]
08055EFA: 8900         lsl r1,r1,#0x2
08055EFC: 8918         add r1,r1,r2
08055EFE: 0968         ldr r1,[r1,#0x0]
08055F00: d3f03ef8     bl 0x08128f80
08055F04: 01bc         pop {r0}
08055F06: 0047         bx r0
