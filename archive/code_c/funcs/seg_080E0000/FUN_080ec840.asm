; undefined FUN_080ec840(void)
; entry 0x80ec840  size 70 bytes

080EC840: 10b5         push {r4,lr}
080EC842: 041c         add r4,r0,#0x0
080EC844: e07b         ldrb r0,[r4,#0xf]
080EC846: 0028         cmp r0,#0x0
080EC848: 07d1         bne 0x080ec85a
080EC84A: b821         mov r1,#0xb8
080EC84C: 8900         lsl r1,r1,#0x2
080EC84E: 0820         mov r0,#0x8
080EC850: 15f724fe     bl 0x0800249c
080EC854: e07b         ldrb r0,[r4,#0xf]
080EC856: 0130         add r0,#0x1
080EC858: e073         strb r0,[r4,#0xf]
080EC85A: 0920         mov r0,#0x9
080EC85C: 15f7bcfe     bl 0x080025d8
080EC860: 201c         add r0,r4,#0x0
080EC862: 30f7c5fb     bl 0x0801cff0
080EC866: 201c         add r0,r4,#0x0
080EC868: b430         add r0,#0xb4
080EC86A: 0078         ldrb r0,[r0,#0x0]
080EC86C: 0028         cmp r0,#0x0
080EC86E: 07d0         beq 0x080ec880
080EC870: 0820         mov r0,#0x8
080EC872: 15f7d7fe     bl 0x08002624
080EC876: 0021         mov r1,#0x0
080EC878: 0120         mov r0,#0x1
080EC87A: 6073         strb r0,[r4,#0xd]
080EC87C: a173         strb r1,[r4,#0xe]
080EC87E: e173         strb r1,[r4,#0xf]
080EC880: 10bc         pop {r4}
080EC882: 01bc         pop {r0}
080EC884: 0047         bx r0
