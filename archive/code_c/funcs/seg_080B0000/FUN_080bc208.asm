; undefined FUN_080bc208(void)
; entry 0x80bc208  size 72 bytes

080BC208: 10b5         push {r4,lr}
080BC20A: 041c         add r4,r0,#0x0
080BC20C: e07b         ldrb r0,[r4,#0xf]
080BC20E: 0028         cmp r0,#0x0
080BC210: 0dd1         bne 0x080bc22e
080BC212: 201c         add r0,r4,#0x0
080BC214: 7430         add r0,#0x74
080BC216: 0e49         ldr r1,[0x080bc250]
080BC218: 49f7b4fa     bl 0x08005784
080BC21C: 0d49         ldr r1,[0x080bc254]
080BC21E: 201c         add r0,r4,#0x0
080BC220: 60f76efe     bl 0x0801cf00
080BC224: 2020         mov r0,#0x20
080BC226: a074         strb r0,[r4,#0x12]
080BC228: e07b         ldrb r0,[r4,#0xf]
080BC22A: 0130         add r0,#0x1
080BC22C: e073         strb r0,[r4,#0xf]
080BC22E: 201c         add r0,r4,#0x0
080BC230: 60f7defe     bl 0x0801cff0
080BC234: a07c         ldrb r0,[r4,#0x12]
080BC236: 0138         sub r0,#0x1
080BC238: a074         strb r0,[r4,#0x12]
080BC23A: 0006         lsl r0,r0,#0x18
080BC23C: 010e         lsr r1,r0,#0x18
080BC23E: 0029         cmp r1,#0x0
080BC240: 03d1         bne 0x080bc24a
080BC242: 0520         mov r0,#0x5
080BC244: 6073         strb r0,[r4,#0xd]
080BC246: a173         strb r1,[r4,#0xe]
080BC248: e173         strb r1,[r4,#0xf]
080BC24A: 10bc         pop {r4}
080BC24C: 01bc         pop {r0}
080BC24E: 0047         bx r0
