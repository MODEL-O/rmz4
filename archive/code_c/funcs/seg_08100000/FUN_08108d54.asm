; undefined FUN_08108d54(void)
; entry 0x8108d54  size 44 bytes

08108D54: 70b5         push {r4,r5,r6,lr}
08108D56: 041c         add r4,r0,#0x0
08108D58: 0d1c         add r5,r1,#0x0
08108D5A: 0949         ldr r1,[0x08108d80]
08108D5C: 6018         add r0,r4,r1
08108D5E: 291c         add r1,r5,#0x0
08108D60: fff6e8fb     bl 0x08008534
08108D64: 061c         add r6,r0,#0x0
08108D66: e020         mov r0,#0xe0
08108D68: c000         lsl r0,r0,#0x3
08108D6A: 2418         add r4,r4,r0
08108D6C: 201c         add r0,r4,#0x0
08108D6E: 291c         add r1,r5,#0x0
08108D70: fff6e0fb     bl 0x08008534
08108D74: b042         cmp r0,r6
08108D76: 00dd         ble 0x08108d7a
08108D78: 301c         add r0,r6,#0x0
08108D7A: 70bc         pop {r4,r5,r6}
08108D7C: 02bc         pop {r1}
08108D7E: 0847         bx r1
