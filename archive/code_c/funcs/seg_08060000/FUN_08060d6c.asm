; undefined FUN_08060d6c(void)
; entry 0x8060d6c  size 68 bytes

08060D6C: 30b5         push {r4,r5,lr}
08060D6E: 041c         add r4,r0,#0x0
08060D70: a57b         ldrb r5,[r4,#0xe]
08060D72: 002d         cmp r5,#0x0
08060D74: 06d1         bne 0x08060d84
08060D76: 0e49         ldr r1,[0x08060db0]
08060D78: bcf7c2f8     bl 0x0801cf00
08060D7C: e573         strb r5,[r4,#0xf]
08060D7E: a07b         ldrb r0,[r4,#0xe]
08060D80: 0130         add r0,#0x1
08060D82: a073         strb r0,[r4,#0xe]
08060D84: 201c         add r0,r4,#0x0
08060D86: bcf733f9     bl 0x0801cff0
08060D8A: a06d         ldr r0,[r4,#0x58]
08060D8C: 216e         ldr r1,[r4,#0x60]
08060D8E: 4018         add r0,r0,r1
08060D90: a065         str r0,[r4,#0x58]
08060D92: 4031         add r1,#0x40
08060D94: 2166         str r1,[r4,#0x60]
08060D96: 211c         add r1,r4,#0x0
08060D98: b431         add r1,#0xb4
08060D9A: 4968         ldr r1,[r1,#0x4]
08060D9C: 8842         cmp r0,r1
08060D9E: 04dd         ble 0x08060daa
08060DA0: a165         str r1,[r4,#0x58]
08060DA2: 0021         mov r1,#0x0
08060DA4: 1720         mov r0,#0x17
08060DA6: 6073         strb r0,[r4,#0xd]
08060DA8: a173         strb r1,[r4,#0xe]
08060DAA: 30bc         pop {r4,r5}
08060DAC: 01bc         pop {r0}
08060DAE: 0047         bx r0
