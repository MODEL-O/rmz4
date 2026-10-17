; undefined FUN_080533c8(void)
; entry 0x80533c8  size 60 bytes

080533C8: 10b5         push {r4,lr}
080533CA: 041c         add r4,r0,#0x0
080533CC: e07b         ldrb r0,[r4,#0xf]
080533CE: 0028         cmp r0,#0x0
080533D0: 08d1         bne 0x080533e4
080533D2: 0c49         ldr r1,[0x08053404]
080533D4: 201c         add r0,r4,#0x0
080533D6: c9f793fd     bl 0x0801cf00
080533DA: 3020         mov r0,#0x30
080533DC: a074         strb r0,[r4,#0x12]
080533DE: e07b         ldrb r0,[r4,#0xf]
080533E0: 0130         add r0,#0x1
080533E2: e073         strb r0,[r4,#0xf]
080533E4: 201c         add r0,r4,#0x0
080533E6: c9f703fe     bl 0x0801cff0
080533EA: a07c         ldrb r0,[r4,#0x12]
080533EC: 0138         sub r0,#0x1
080533EE: a074         strb r0,[r4,#0x12]
080533F0: 0006         lsl r0,r0,#0x18
080533F2: 010e         lsr r1,r0,#0x18
080533F4: 0029         cmp r1,#0x0
080533F6: 02d1         bne 0x080533fe
080533F8: 0220         mov r0,#0x2
080533FA: a073         strb r0,[r4,#0xe]
080533FC: e173         strb r1,[r4,#0xf]
080533FE: 10bc         pop {r4}
08053400: 01bc         pop {r0}
08053402: 0047         bx r0
