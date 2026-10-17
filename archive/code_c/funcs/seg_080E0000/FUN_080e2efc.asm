; undefined FUN_080e2efc(void)
; entry 0x80e2efc  size 20 bytes

080E2EFC: 00b5         push {lr}
080E2EFE: 044a         ldr r2,[0x080e2f10]
080E2F00: 017c         ldrb r1,[r0,#0x10]
080E2F02: 8900         lsl r1,r1,#0x2
080E2F04: 8918         add r1,r1,r2
080E2F06: 0968         ldr r1,[r1,#0x0]
080E2F08: 46f03af8     bl 0x08128f80
080E2F0C: 01bc         pop {r0}
080E2F0E: 0047         bx r0
