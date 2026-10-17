; undefined FUN_08053634(void)
; entry 0x8053634  size 60 bytes

08053634: 10b5         push {r4,lr}
08053636: 041c         add r4,r0,#0x0
08053638: e17b         ldrb r1,[r4,#0xf]
0805363A: 0029         cmp r1,#0x0
0805363C: 08d1         bne 0x08053650
0805363E: c830         add r0,#0xc8
08053640: 0068         ldr r0,[r0,#0x0]
08053642: b430         add r0,#0xb4
08053644: 0170         strb r1,[r0,#0x0]
08053646: 3020         mov r0,#0x30
08053648: a074         strb r0,[r4,#0x12]
0805364A: e07b         ldrb r0,[r4,#0xf]
0805364C: 0130         add r0,#0x1
0805364E: e073         strb r0,[r4,#0xf]
08053650: 201c         add r0,r4,#0x0
08053652: c9f7cdfc     bl 0x0801cff0
08053656: a07c         ldrb r0,[r4,#0x12]
08053658: 0138         sub r0,#0x1
0805365A: a074         strb r0,[r4,#0x12]
0805365C: 0006         lsl r0,r0,#0x18
0805365E: 010e         lsr r1,r0,#0x18
08053660: 0029         cmp r1,#0x0
08053662: 02d1         bne 0x0805366a
08053664: 0420         mov r0,#0x4
08053666: a073         strb r0,[r4,#0xe]
08053668: e173         strb r1,[r4,#0xf]
0805366A: 10bc         pop {r4}
0805366C: 01bc         pop {r0}
0805366E: 0047         bx r0
