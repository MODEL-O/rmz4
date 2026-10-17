; undefined FUN_080ca268(void)
; entry 0x80ca268  size 46 bytes

080CA268: 00b5         push {lr}
080CA26A: 021c         add r2,r0,#0x0
080CA26C: 937b         ldrb r3,[r2,#0xe]
080CA26E: 002b         cmp r3,#0x0
080CA270: 06d1         bne 0x080ca280
080CA272: 507c         ldrb r0,[r2,#0x11]
080CA274: 0321         mov r1,#0x3
080CA276: 8143         bic r1,r0
080CA278: 8900         lsl r1,r1,#0x2
080CA27A: d174         strb r1,[r2,#0x13]
080CA27C: 581c         add r0,r3,#0x1
080CA27E: 9073         strb r0,[r2,#0xe]
080CA280: d07c         ldrb r0,[r2,#0x13]
080CA282: 011c         add r1,r0,#0x0
080CA284: 0029         cmp r1,#0x0
080CA286: 02d1         bne 0x080ca28e
080CA288: 5173         strb r1,[r2,#0xd]
080CA28A: 9173         strb r1,[r2,#0xe]
080CA28C: 01e0         b 0x080ca292
080CA28E: 0138         sub r0,#0x1
080CA290: d074         strb r0,[r2,#0x13]
080CA292: 01bc         pop {r0}
080CA294: 0047         bx r0
