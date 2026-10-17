; undefined FUN_0809dd58(void)
; entry 0x809dd58  size 48 bytes

0809DD58: 10b5         push {r4,lr}
0809DD5A: 041c         add r4,r0,#0x0
0809DD5C: a07b         ldrb r0,[r4,#0xe]
0809DD5E: 0028         cmp r0,#0x0
0809DD60: 06d1         bne 0x0809dd70
0809DD62: 0949         ldr r1,[0x0809dd88]
0809DD64: 201c         add r0,r4,#0x0
0809DD66: 7ff7cbf8     bl 0x0801cf00
0809DD6A: a07b         ldrb r0,[r4,#0xe]
0809DD6C: 0130         add r0,#0x1
0809DD6E: a073         strb r0,[r4,#0xe]
0809DD70: 201c         add r0,r4,#0x0
0809DD72: 7330         add r0,#0x73
0809DD74: 0078         ldrb r0,[r0,#0x0]
0809DD76: 0328         cmp r0,#0x3
0809DD78: 03d1         bne 0x0809dd82
0809DD7A: 0021         mov r1,#0x0
0809DD7C: 0220         mov r0,#0x2
0809DD7E: 6073         strb r0,[r4,#0xd]
0809DD80: a173         strb r1,[r4,#0xe]
0809DD82: 10bc         pop {r4}
0809DD84: 01bc         pop {r0}
0809DD86: 0047         bx r0
