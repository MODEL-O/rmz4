; undefined FUN_080ecd84(void)
; entry 0x80ecd84  size 66 bytes

080ECD84: 70b5         push {r4,r5,r6,lr}
080ECD86: 041c         add r4,r0,#0x0
080ECD88: a17a         ldrb r1,[r4,#0xa]
080ECD8A: 0420         mov r0,#0x4
080ECD8C: 0026         mov r6,#0x0
080ECD8E: 0843         orr r0,r1
080ECD90: a072         strb r0,[r4,#0xa]
080ECD92: 251c         add r5,r4,#0x0
080ECD94: 7435         add r5,#0x74
080ECD96: 0c49         ldr r1,[0x080ecdc8]
080ECD98: 221c         add r2,r4,#0x0
080ECD9A: 5432         add r2,#0x54
080ECD9C: 281c         add r0,r5,#0x0
080ECD9E: 0123         mov r3,#0x1
080ECDA0: 18f7defc     bl 0x08005760
080ECDA4: ec62         str r4,[r5,#0x2c]
080ECDA6: 6e62         str r6,[r5,#0x24]
080ECDA8: 0849         ldr r1,[0x080ecdcc]
080ECDAA: 607a         ldrb r0,[r4,#0x9]
080ECDAC: 8000         lsl r0,r0,#0x2
080ECDAE: 4018         add r0,r0,r1
080ECDB0: 0121         mov r1,#0x1
080ECDB2: e160         str r1,[r4,#0xc]
080ECDB4: 0068         ldr r0,[r0,#0x0]
080ECDB6: 4068         ldr r0,[r0,#0x4]
080ECDB8: 6061         str r0,[r4,#0x14]
080ECDBA: 201c         add r0,r4,#0x0
080ECDBC: 00f09ef8     bl 0x080ecefc
080ECDC0: 70bc         pop {r4,r5,r6}
080ECDC2: 01bc         pop {r0}
080ECDC4: 0047         bx r0
