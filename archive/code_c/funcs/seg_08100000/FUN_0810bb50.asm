; undefined FUN_0810bb50(void)
; entry 0x810bb50  size 72 bytes

0810BB50: 30b5         push {r4,r5,lr}
0810BB52: 041c         add r4,r0,#0x0
0810BB54: a06a         ldr r0,[r4,#0x28]
0810BB56: 1049         ldr r1,[0x0810bb98]
0810BB58: 4018         add r0,r0,r1
0810BB5A: 0068         ldr r0,[r0,#0x0]
0810BB5C: 051c         add r5,r0,#0x0
0810BB5E: f035         add r5,#0xf0
0810BB60: a07c         ldrb r0,[r4,#0x12]
0810BB62: 2a78         ldrb r2,[r5,#0x0]
0810BB64: 9042         cmp r0,r2
0810BB66: 01d0         beq 0x0810bb6c
0810BB68: 0020         mov r0,#0x0
0810BB6A: a073         strb r0,[r4,#0xe]
0810BB6C: a07b         ldrb r0,[r4,#0xe]
0810BB6E: 0028         cmp r0,#0x0
0810BB70: 0cd1         bne 0x0810bb8c
0810BB72: 2978         ldrb r1,[r5,#0x0]
0810BB74: 9322         mov r2,#0x93
0810BB76: 1202         lsl r2,r2,#0x8
0810BB78: 101c         add r0,r2,#0x0
0810BB7A: 0143         orr r1,r0
0810BB7C: 201c         add r0,r4,#0x0
0810BB7E: 11f7bff9     bl 0x0801cf00
0810BB82: 2878         ldrb r0,[r5,#0x0]
0810BB84: a074         strb r0,[r4,#0x12]
0810BB86: a07b         ldrb r0,[r4,#0xe]
0810BB88: 0130         add r0,#0x1
0810BB8A: a073         strb r0,[r4,#0xe]
0810BB8C: 201c         add r0,r4,#0x0
0810BB8E: 11f72ffa     bl 0x0801cff0
0810BB92: 30bc         pop {r4,r5}
0810BB94: 01bc         pop {r0}
0810BB96: 0047         bx r0
