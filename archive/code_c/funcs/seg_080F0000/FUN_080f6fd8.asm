; undefined FUN_080f6fd8(void)
; entry 0x80f6fd8  size 66 bytes

080F6FD8: 30b5         push {r4,r5,lr}
080F6FDA: 041c         add r4,r0,#0x0
080F6FDC: a56a         ldr r5,[r4,#0x28]
080F6FDE: e07b         ldrb r0,[r4,#0xf]
080F6FE0: 0028         cmp r0,#0x0
080F6FE2: 07d1         bne 0x080f6ff4
080F6FE4: c821         mov r1,#0xc8
080F6FE6: c901         lsl r1,r1,#0x7
080F6FE8: 201c         add r0,r4,#0x0
080F6FEA: 25f789ff     bl 0x0801cf00
080F6FEE: e07b         ldrb r0,[r4,#0xf]
080F6FF0: 0130         add r0,#0x1
080F6FF2: e073         strb r0,[r4,#0xf]
080F6FF4: 201c         add r0,r4,#0x0
080F6FF6: 25f7fbff     bl 0x0801cff0
080F6FFA: 201c         add r0,r4,#0x0
080F6FFC: 00f062fa     bl 0x080f74c4
080F7000: 281c         add r0,r5,#0x0
080F7002: b430         add r0,#0xb4
080F7004: 0078         ldrb r0,[r0,#0x0]
080F7006: 0028         cmp r0,#0x0
080F7008: 04d0         beq 0x080f7014
080F700A: 0021         mov r1,#0x0
080F700C: 0120         mov r0,#0x1
080F700E: 6073         strb r0,[r4,#0xd]
080F7010: a173         strb r1,[r4,#0xe]
080F7012: e173         strb r1,[r4,#0xf]
080F7014: 30bc         pop {r4,r5}
080F7016: 01bc         pop {r0}
080F7018: 0047         bx r0
