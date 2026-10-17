; undefined FUN_080e0c78(void)
; entry 0x80e0c78  size 68 bytes

080E0C78: 10b5         push {r4,lr}
080E0C7A: 041c         add r4,r0,#0x0
080E0C7C: a07b         ldrb r0,[r4,#0xe]
080E0C7E: 0128         cmp r0,#0x1
080E0C80: 05d1         bne 0x080e0c8e
080E0C82: 201c         add r0,r4,#0x0
080E0C84: fff7aeff     bl 0x080e0be4
080E0C88: a07b         ldrb r0,[r4,#0xe]
080E0C8A: 0130         add r0,#0x1
080E0C8C: a073         strb r0,[r4,#0xe]
080E0C8E: 201c         add r0,r4,#0x0
080E0C90: 00f014f8     bl 0x080e0cbc
080E0C94: 221c         add r2,r4,#0x0
080E0C96: 7432         add r2,#0x74
080E0C98: 1078         ldrb r0,[r2,#0x0]
080E0C9A: 0028         cmp r0,#0x0
080E0C9C: 05d0         beq 0x080e0caa
080E0C9E: 0020         mov r0,#0x0
080E0CA0: 1070         strb r0,[r2,#0x0]
080E0CA2: a17a         ldrb r1,[r4,#0xa]
080E0CA4: fe20         mov r0,#0xfe
080E0CA6: 0840         and r0,r1
080E0CA8: 04e0         b 0x080e0cb4
080E0CAA: 0120         mov r0,#0x1
080E0CAC: 0121         mov r1,#0x1
080E0CAE: 1170         strb r1,[r2,#0x0]
080E0CB0: a17a         ldrb r1,[r4,#0xa]
080E0CB2: 0843         orr r0,r1
080E0CB4: a072         strb r0,[r4,#0xa]
080E0CB6: 10bc         pop {r4}
080E0CB8: 01bc         pop {r0}
080E0CBA: 0047         bx r0
