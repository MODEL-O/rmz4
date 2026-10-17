; undefined FUN_08056ce4(void)
; entry 0x8056ce4  size 64 bytes

08056CE4: 10b5         push {r4,lr}
08056CE6: 041c         add r4,r0,#0x0
08056CE8: e07b         ldrb r0,[r4,#0xf]
08056CEA: 0028         cmp r0,#0x0
08056CEC: 0dd1         bne 0x08056d0a
08056CEE: a17a         ldrb r1,[r4,#0xa]
08056CF0: fe20         mov r0,#0xfe
08056CF2: 0840         and r0,r1
08056CF4: a072         strb r0,[r4,#0xa]
08056CF6: 201c         add r0,r4,#0x0
08056CF8: 7430         add r0,#0x74
08056CFA: 0a49         ldr r1,[0x08056d24]
08056CFC: aef742fd     bl 0x08005784
08056D00: 3020         mov r0,#0x30
08056D02: a074         strb r0,[r4,#0x12]
08056D04: e07b         ldrb r0,[r4,#0xf]
08056D06: 0130         add r0,#0x1
08056D08: e073         strb r0,[r4,#0xf]
08056D0A: a07c         ldrb r0,[r4,#0x12]
08056D0C: 0138         sub r0,#0x1
08056D0E: a074         strb r0,[r4,#0x12]
08056D10: 0006         lsl r0,r0,#0x18
08056D12: 010e         lsr r1,r0,#0x18
08056D14: 0029         cmp r1,#0x0
08056D16: 02d1         bne 0x08056d1e
08056D18: 0620         mov r0,#0x6
08056D1A: a073         strb r0,[r4,#0xe]
08056D1C: e173         strb r1,[r4,#0xf]
08056D1E: 10bc         pop {r4}
08056D20: 01bc         pop {r0}
08056D22: 0047         bx r0
