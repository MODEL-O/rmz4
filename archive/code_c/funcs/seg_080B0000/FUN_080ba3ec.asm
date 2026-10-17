; undefined FUN_080ba3ec(void)
; entry 0x80ba3ec  size 66 bytes

080BA3EC: 10b5         push {r4,lr}
080BA3EE: 041c         add r4,r0,#0x0
080BA3F0: e07b         ldrb r0,[r4,#0xf]
080BA3F2: 0028         cmp r0,#0x0
080BA3F4: 0bd1         bne 0x080ba40e
080BA3F6: 201c         add r0,r4,#0x0
080BA3F8: 7430         add r0,#0x74
080BA3FA: 0d49         ldr r1,[0x080ba430]
080BA3FC: 4bf7c2f9     bl 0x08005784
080BA400: 0c49         ldr r1,[0x080ba434]
080BA402: 201c         add r0,r4,#0x0
080BA404: 62f77cfd     bl 0x0801cf00
080BA408: e07b         ldrb r0,[r4,#0xf]
080BA40A: 0130         add r0,#0x1
080BA40C: e073         strb r0,[r4,#0xf]
080BA40E: 201c         add r0,r4,#0x0
080BA410: 62f7eefd     bl 0x0801cff0
080BA414: 201c         add r0,r4,#0x0
080BA416: 7330         add r0,#0x73
080BA418: 0078         ldrb r0,[r0,#0x0]
080BA41A: 0328         cmp r0,#0x3
080BA41C: 04d1         bne 0x080ba428
080BA41E: 0021         mov r1,#0x0
080BA420: 0520         mov r0,#0x5
080BA422: 6073         strb r0,[r4,#0xd]
080BA424: a173         strb r1,[r4,#0xe]
080BA426: e173         strb r1,[r4,#0xf]
080BA428: 10bc         pop {r4}
080BA42A: 01bc         pop {r0}
080BA42C: 0047         bx r0
