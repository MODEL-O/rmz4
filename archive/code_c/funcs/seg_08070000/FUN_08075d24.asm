; undefined FUN_08075d24(void)
; entry 0x8075d24  size 52 bytes

08075D24: 30b5         push {r4,r5,lr}
08075D26: 041c         add r4,r0,#0x0
08075D28: a57b         ldrb r5,[r4,#0xe]
08075D2A: 002d         cmp r5,#0x0
08075D2C: 06d1         bne 0x08075d3c
08075D2E: 0a49         ldr r1,[0x08075d58]
08075D30: a7f7e6f8     bl 0x0801cf00
08075D34: e573         strb r5,[r4,#0xf]
08075D36: a07b         ldrb r0,[r4,#0xe]
08075D38: 0130         add r0,#0x1
08075D3A: a073         strb r0,[r4,#0xe]
08075D3C: 201c         add r0,r4,#0x0
08075D3E: a7f757f9     bl 0x0801cff0
08075D42: 201c         add r0,r4,#0x0
08075D44: 7330         add r0,#0x73
08075D46: 0178         ldrb r1,[r0,#0x0]
08075D48: 0329         cmp r1,#0x3
08075D4A: 02d1         bne 0x08075d52
08075D4C: 0020         mov r0,#0x0
08075D4E: 6173         strb r1,[r4,#0xd]
08075D50: a073         strb r0,[r4,#0xe]
08075D52: 30bc         pop {r4,r5}
08075D54: 01bc         pop {r0}
08075D56: 0047         bx r0
