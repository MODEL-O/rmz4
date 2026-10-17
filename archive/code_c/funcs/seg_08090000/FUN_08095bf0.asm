; undefined FUN_08095bf0(void)
; entry 0x8095bf0  size 20 bytes

08095BF0: 00b5         push {lr}
08095BF2: 044a         ldr r2,[0x08095c04]
08095BF4: 017c         ldrb r1,[r0,#0x10]
08095BF6: 8900         lsl r1,r1,#0x2
08095BF8: 8918         add r1,r1,r2
08095BFA: 0968         ldr r1,[r1,#0x0]
08095BFC: 93f0c0f9     bl 0x08128f80
08095C00: 01bc         pop {r0}
08095C02: 0047         bx r0
