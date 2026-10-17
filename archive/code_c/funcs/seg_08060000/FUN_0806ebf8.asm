; undefined FUN_0806ebf8(void)
; entry 0x806ebf8  size 74 bytes

0806EBF8: 10b5         push {r4,lr}
0806EBFA: 041c         add r4,r0,#0x0
0806EBFC: e07b         ldrb r0,[r4,#0xf]
0806EBFE: 0028         cmp r0,#0x0
0806EC00: 0ed1         bne 0x0806ec20
0806EC02: 201c         add r0,r4,#0x0
0806EC04: 7430         add r0,#0x74
0806EC06: 0f49         ldr r1,[0x0806ec44]
0806EC08: 96f7bcfd     bl 0x08005784
0806EC0C: ad21         mov r1,#0xad
0806EC0E: 0902         lsl r1,r1,#0x8
0806EC10: 201c         add r0,r4,#0x0
0806EC12: aef775f9     bl 0x0801cf00
0806EC16: 0820         mov r0,#0x8
0806EC18: a074         strb r0,[r4,#0x12]
0806EC1A: e07b         ldrb r0,[r4,#0xf]
0806EC1C: 0130         add r0,#0x1
0806EC1E: e073         strb r0,[r4,#0xf]
0806EC20: 201c         add r0,r4,#0x0
0806EC22: aef7e5f9     bl 0x0801cff0
0806EC26: a07c         ldrb r0,[r4,#0x12]
0806EC28: 0138         sub r0,#0x1
0806EC2A: a074         strb r0,[r4,#0x12]
0806EC2C: 0006         lsl r0,r0,#0x18
0806EC2E: 010e         lsr r1,r0,#0x18
0806EC30: 0029         cmp r1,#0x0
0806EC32: 03d1         bne 0x0806ec3c
0806EC34: 0820         mov r0,#0x8
0806EC36: 6073         strb r0,[r4,#0xd]
0806EC38: a173         strb r1,[r4,#0xe]
0806EC3A: e173         strb r1,[r4,#0xf]
0806EC3C: 10bc         pop {r4}
0806EC3E: 01bc         pop {r0}
0806EC40: 0047         bx r0
