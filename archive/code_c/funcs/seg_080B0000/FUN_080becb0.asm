; undefined FUN_080becb0(void)
; entry 0x80becb0  size 36 bytes

080BECB0: 00b5         push {lr}
080BECB2: 021c         add r2,r0,#0x0
080BECB4: b430         add r0,#0xb4
080BECB6: 0168         ldr r1,[r0,#0x0]
080BECB8: 131c         add r3,r2,#0x0
080BECBA: b833         add r3,#0xb8
080BECBC: 1878         ldrb r0,[r3,#0x0]
080BECBE: 0028         cmp r0,#0x0
080BECC0: 03d0         beq 0x080becca
080BECC2: c931         add r1,#0xc9
080BECC4: 0020         mov r0,#0x0
080BECC6: 0870         strb r0,[r1,#0x0]
080BECC8: 1870         strb r0,[r3,#0x0]
080BECCA: 101c         add r0,r2,#0x0
080BECCC: fef794fb     bl 0x080bd3f8
080BECD0: 01bc         pop {r0}
080BECD2: 0047         bx r0
