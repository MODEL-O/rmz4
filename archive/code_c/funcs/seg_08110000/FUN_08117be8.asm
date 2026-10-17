; undefined FUN_08117be8(void)
; entry 0x8117be8  size 32 bytes

08117BE8: 10b5         push {r4,lr}
08117BEA: 041c         add r4,r0,#0x0
08117BEC: 0649         ldr r1,[0x08117c08]
08117BEE: 6078         ldrb r0,[r4,#0x1]
08117BF0: 8000         lsl r0,r0,#0x2
08117BF2: 4018         add r0,r0,r1
08117BF4: 0168         ldr r1,[r0,#0x0]
08117BF6: 201c         add r0,r4,#0x0
08117BF8: 11f0c2f9     bl 0x08128f80
08117BFC: 201c         add r0,r4,#0x0
08117BFE: 00f0f9f9     bl 0x08117ff4
08117C02: 10bc         pop {r4}
08117C04: 01bc         pop {r0}
08117C06: 0047         bx r0
