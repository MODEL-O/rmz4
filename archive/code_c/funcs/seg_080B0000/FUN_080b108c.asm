; undefined FUN_080b108c(void)
; entry 0x80b108c  size 28 bytes

080B108C: 00b5         push {lr}
080B108E: 011c         add r1,r0,#0x0
080B1090: 487c         ldrb r0,[r1,#0x11]
080B1092: 0028         cmp r0,#0x0
080B1094: 03d1         bne 0x080b109e
080B1096: 081c         add r0,r1,#0x0
080B1098: 00f06af9     bl 0x080b1370
080B109C: 02e0         b 0x080b10a4
080B109E: 081c         add r0,r1,#0x0
080B10A0: 00f0a0f9     bl 0x080b13e4
080B10A4: 01bc         pop {r0}
080B10A6: 0047         bx r0
