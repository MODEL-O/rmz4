; undefined FUN_080f6f94(void)
; entry 0x80f6f94  size 62 bytes

080F6F94: 00b5         push {lr}
080F6F96: 021c         add r2,r0,#0x0
080F6F98: 916a         ldr r1,[r2,#0x28]
080F6F9A: 0029         cmp r1,#0x0
080F6F9C: 04d0         beq 0x080f6fa8
080F6F9E: 087b         ldrb r0,[r1,#0xc]
080F6FA0: 0128         cmp r0,#0x1
080F6FA2: 01d9         bls 0x080f6fa8
080F6FA4: 0021         mov r1,#0x0
080F6FA6: 9162         str r1,[r2,#0x28]
080F6FA8: 101c         add r0,r2,#0x0
080F6FAA: b530         add r0,#0xb5
080F6FAC: 0078         ldrb r0,[r0,#0x0]
080F6FAE: 0028         cmp r0,#0x0
080F6FB0: 05d1         bne 0x080f6fbe
080F6FB2: 0029         cmp r1,#0x0
080F6FB4: 03d1         bne 0x080f6fbe
080F6FB6: 0220         mov r0,#0x2
080F6FB8: 5073         strb r0,[r2,#0xd]
080F6FBA: 9173         strb r1,[r2,#0xe]
080F6FBC: d173         strb r1,[r2,#0xf]
080F6FBE: 0548         ldr r0,[0x080f6fd4]
080F6FC0: 517b         ldrb r1,[r2,#0xd]
080F6FC2: 8900         lsl r1,r1,#0x2
080F6FC4: 0918         add r1,r1,r0
080F6FC6: 0968         ldr r1,[r1,#0x0]
080F6FC8: 101c         add r0,r2,#0x0
080F6FCA: 31f0d9ff     bl 0x08128f80
080F6FCE: 01bc         pop {r0}
080F6FD0: 0047         bx r0
