; undefined FUN_080ec63c(void)
; entry 0x80ec63c  size 70 bytes

080EC63C: 10b5         push {r4,lr}
080EC63E: 041c         add r4,r0,#0x0
080EC640: e07b         ldrb r0,[r4,#0xf]
080EC642: 0028         cmp r0,#0x0
080EC644: 07d1         bne 0x080ec656
080EC646: b021         mov r1,#0xb0
080EC648: 8900         lsl r1,r1,#0x2
080EC64A: 0520         mov r0,#0x5
080EC64C: 15f726ff     bl 0x0800249c
080EC650: e07b         ldrb r0,[r4,#0xf]
080EC652: 0130         add r0,#0x1
080EC654: e073         strb r0,[r4,#0xf]
080EC656: 0620         mov r0,#0x6
080EC658: 15f7beff     bl 0x080025d8
080EC65C: 201c         add r0,r4,#0x0
080EC65E: 30f7c7fc     bl 0x0801cff0
080EC662: 201c         add r0,r4,#0x0
080EC664: b430         add r0,#0xb4
080EC666: 0078         ldrb r0,[r0,#0x0]
080EC668: 0028         cmp r0,#0x0
080EC66A: 07d0         beq 0x080ec67c
080EC66C: 0520         mov r0,#0x5
080EC66E: 15f7d9ff     bl 0x08002624
080EC672: 0021         mov r1,#0x0
080EC674: 0120         mov r0,#0x1
080EC676: 6073         strb r0,[r4,#0xd]
080EC678: a173         strb r1,[r4,#0xe]
080EC67A: e173         strb r1,[r4,#0xf]
080EC67C: 10bc         pop {r4}
080EC67E: 01bc         pop {r0}
080EC680: 0047         bx r0
