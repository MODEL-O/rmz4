; undefined FUN_080534c0(void)
; entry 0x80534c0  size 54 bytes

080534C0: 10b5         push {r4,lr}
080534C2: 041c         add r4,r0,#0x0
080534C4: e07b         ldrb r0,[r4,#0xf]
080534C6: 0028         cmp r0,#0x0
080534C8: 06d1         bne 0x080534d8
080534CA: 0b49         ldr r1,[0x080534f8]
080534CC: 201c         add r0,r4,#0x0
080534CE: c9f717fd     bl 0x0801cf00
080534D2: e07b         ldrb r0,[r4,#0xf]
080534D4: 0130         add r0,#0x1
080534D6: e073         strb r0,[r4,#0xf]
080534D8: 201c         add r0,r4,#0x0
080534DA: c9f789fd     bl 0x0801cff0
080534DE: 201c         add r0,r4,#0x0
080534E0: 7330         add r0,#0x73
080534E2: 0078         ldrb r0,[r0,#0x0]
080534E4: 0328         cmp r0,#0x3
080534E6: 03d1         bne 0x080534f0
080534E8: 0020         mov r0,#0x0
080534EA: 6073         strb r0,[r4,#0xd]
080534EC: a073         strb r0,[r4,#0xe]
080534EE: e073         strb r0,[r4,#0xf]
080534F0: 10bc         pop {r4}
080534F2: 01bc         pop {r0}
080534F4: 0047         bx r0
