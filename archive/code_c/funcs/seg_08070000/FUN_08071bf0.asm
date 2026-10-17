; undefined FUN_08071bf0(void)
; entry 0x8071bf0  size 30 bytes

08071BF0: 00b5         push {lr}
08071BF2: 817b         ldrb r1,[r0,#0xe]
08071BF4: 0131         add r1,#0x1
08071BF6: 0022         mov r2,#0x0
08071BF8: 8173         strb r1,[r0,#0xe]
08071BFA: c273         strb r2,[r0,#0xf]
08071BFC: 044a         ldr r2,[0x08071c10]
08071BFE: 417b         ldrb r1,[r0,#0xd]
08071C00: 8900         lsl r1,r1,#0x2
08071C02: 8918         add r1,r1,r2
08071C04: 0968         ldr r1,[r1,#0x0]
08071C06: b7f0bbf9     bl 0x08128f80
08071C0A: 01bc         pop {r0}
08071C0C: 0047         bx r0
