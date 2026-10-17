; undefined FUN_08030e50(void)
; entry 0x8030e50  size 20 bytes

08030E50: 00b5         push {lr}
08030E52: 044a         ldr r2,[0x08030e64]
08030E54: 817b         ldrb r1,[r0,#0xe]
08030E56: 8900         lsl r1,r1,#0x2
08030E58: 8918         add r1,r1,r2
08030E5A: 0968         ldr r1,[r1,#0x0]
08030E5C: f8f090f8     bl 0x08128f80
08030E60: 01bc         pop {r0}
08030E62: 0047         bx r0
