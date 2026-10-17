; undefined FUN_080fb5f4(void)
; entry 0x80fb5f4  size 54 bytes

080FB5F4: 10b5         push {r4,lr}
080FB5F6: 041c         add r4,r0,#0x0
080FB5F8: a07b         ldrb r0,[r4,#0xe]
080FB5FA: 0028         cmp r0,#0x0
080FB5FC: 08d1         bne 0x080fb610
080FB5FE: 0849         ldr r1,[0x080fb620]
080FB600: 201c         add r0,r4,#0x0
080FB602: 21f77dfc     bl 0x0801cf00
080FB606: 1e20         mov r0,#0x1e
080FB608: a074         strb r0,[r4,#0x12]
080FB60A: a07b         ldrb r0,[r4,#0xe]
080FB60C: 0130         add r0,#0x1
080FB60E: a073         strb r0,[r4,#0xe]
080FB610: a07c         ldrb r0,[r4,#0x12]
080FB612: 011c         add r1,r0,#0x0
080FB614: 0029         cmp r1,#0x0
080FB616: 05d1         bne 0x080fb624
080FB618: e07b         ldrb r0,[r4,#0xf]
080FB61A: 6073         strb r0,[r4,#0xd]
080FB61C: a173         strb r1,[r4,#0xe]
080FB61E: 03e0         b 0x080fb628
080FB624: 0138         sub r0,#0x1
080FB626: a074         strb r0,[r4,#0x12]
080FB628: 10bc         pop {r4}
080FB62A: 01bc         pop {r0}
080FB62C: 0047         bx r0
