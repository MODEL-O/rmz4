; undefined FUN_0806d624(void)
; entry 0x806d624  size 62 bytes

0806D624: 10b5         push {r4,lr}
0806D626: 041c         add r4,r0,#0x0
0806D628: a07b         ldrb r0,[r4,#0xe]
0806D62A: 0028         cmp r0,#0x0
0806D62C: 01d1         bne 0x0806d632
0806D62E: 0130         add r0,#0x1
0806D630: a073         strb r0,[r4,#0xe]
0806D632: 201c         add r0,r4,#0x0
0806D634: aff7dcfc     bl 0x0801cff0
0806D638: 0a48         ldr r0,[0x0806d664]
0806D63A: 0189         ldrh r1,[r0,#0x8]
0806D63C: 0820         mov r0,#0x8
0806D63E: 0840         and r0,r1
0806D640: 0004         lsl r0,r0,#0x10
0806D642: 010c         lsr r1,r0,#0x10
0806D644: 0029         cmp r1,#0x0
0806D646: 09d1         bne 0x0806d65c
0806D648: a07c         ldrb r0,[r4,#0x12]
0806D64A: 0138         sub r0,#0x1
0806D64C: a074         strb r0,[r4,#0x12]
0806D64E: 0006         lsl r0,r0,#0x18
0806D650: 000e         lsr r0,r0,#0x18
0806D652: ff28         cmp r0,#0xff
0806D654: 02d1         bne 0x0806d65c
0806D656: 0320         mov r0,#0x3
0806D658: 6073         strb r0,[r4,#0xd]
0806D65A: a173         strb r1,[r4,#0xe]
0806D65C: 10bc         pop {r4}
0806D65E: 01bc         pop {r0}
0806D660: 0047         bx r0
