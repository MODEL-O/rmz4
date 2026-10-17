; undefined FUN_08036efc(void)
; entry 0x8036efc  size 26 bytes

08036EFC: 00b5         push {lr}
08036EFE: 064a         ldr r2,[0x08036f18]
08036F00: a223         mov r3,#0xa2
08036F02: 5b00         lsl r3,r3,#0x1
08036F04: c118         add r1,r0,r3
08036F06: 0978         ldrb r1,[r1,#0x0]
08036F08: 8900         lsl r1,r1,#0x2
08036F0A: 8918         add r1,r1,r2
08036F0C: 0968         ldr r1,[r1,#0x0]
08036F0E: f2f037f8     bl 0x08128f80
08036F12: 01bc         pop {r0}
08036F14: 0047         bx r0
