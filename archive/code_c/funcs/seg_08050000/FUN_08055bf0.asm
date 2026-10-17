; undefined FUN_08055bf0(void)
; entry 0x8055bf0  size 20 bytes

08055BF0: 00b5         push {lr}
08055BF2: 044a         ldr r2,[0x08055c04]
08055BF4: 817b         ldrb r1,[r0,#0xe]
08055BF6: 8900         lsl r1,r1,#0x2
08055BF8: 8918         add r1,r1,r2
08055BFA: 0968         ldr r1,[r1,#0x0]
08055BFC: d3f0c0f9     bl 0x08128f80
08055C00: 01bc         pop {r0}
08055C02: 0047         bx r0
