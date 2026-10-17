; undefined FUN_0810affc(void)
; entry 0x810affc  size 70 bytes

0810AFFC: 30b5         push {r4,r5,lr}
0810AFFE: 041c         add r4,r0,#0x0
0810B000: a56a         ldr r5,[r4,#0x28]
0810B002: a07a         ldrb r0,[r4,#0xa]
0810B004: 0121         mov r1,#0x1
0810B006: 0143         orr r1,r0
0810B008: a172         strb r1,[r4,#0xa]
0810B00A: 201c         add r0,r4,#0x0
0810B00C: 11f7f0ff     bl 0x0801cff0
0810B010: 6878         ldrb r0,[r5,#0x1]
0810B012: 0128         cmp r0,#0x1
0810B014: 11d9         bls 0x0810b03a
0810B016: e878         ldrb r0,[r5,#0x3]
0810B018: 0128         cmp r0,#0x1
0810B01A: 0ed9         bls 0x0810b03a
0810B01C: 607c         ldrb r0,[r4,#0x11]
0810B01E: 0028         cmp r0,#0x0
0810B020: 06d1         bne 0x0810b030
0810B022: 0249         ldr r1,[0x0810b02c]
0810B024: 6818         add r0,r5,r1
0810B026: c07d         ldrb r0,[r0,#0x17]
0810B028: 05e0         b 0x0810b036
0810B030: 0549         ldr r1,[0x0810b048]
0810B032: 6818         add r0,r5,r1
0810B034: 007e         ldrb r0,[r0,#0x18]
0810B036: 0028         cmp r0,#0x0
0810B038: 03d1         bne 0x0810b042
0810B03A: a17a         ldrb r1,[r4,#0xa]
0810B03C: fe20         mov r0,#0xfe
0810B03E: 0840         and r0,r1
0810B040: a072         strb r0,[r4,#0xa]
0810B042: 30bc         pop {r4,r5}
0810B044: 01bc         pop {r0}
0810B046: 0047         bx r0
