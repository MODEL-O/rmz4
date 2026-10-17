; undefined FUN_08095cd8(void)
; entry 0x8095cd8  size 62 bytes

08095CD8: 10b5         push {r4,lr}
08095CDA: 031c         add r3,r0,#0x0
08095CDC: 1a1c         add r2,r3,#0x0
08095CDE: b432         add r2,#0xb4
08095CE0: 1c1c         add r4,r3,#0x0
08095CE2: b834         add r4,#0xb8
08095CE4: 2088         ldrh r0,[r4,#0x0]
08095CE6: 0004         lsl r0,r0,#0x10
08095CE8: 0016         asr r0,r0,#0x18
08095CEA: 1178         ldrb r1,[r2,#0x0]
08095CEC: 091a         sub r1,r1,r0
08095CEE: 1170         strb r1,[r2,#0x0]
08095CF0: 181c         add r0,r3,#0x0
08095CF2: 2430         add r0,#0x24
08095CF4: 0170         strb r1,[r0,#0x0]
08095CF6: 8021         mov r1,#0x80
08095CF8: 8900         lsl r1,r1,#0x2
08095CFA: 081c         add r0,r1,#0x0
08095CFC: 2188         ldrh r1,[r4,#0x0]
08095CFE: 4018         add r0,r0,r1
08095D00: 2080         strh r0,[r4,#0x0]
08095D02: 0004         lsl r0,r0,#0x10
08095D04: 0014         asr r0,r0,#0x10
08095D06: 8021         mov r1,#0x80
08095D08: c901         lsl r1,r1,#0x7
08095D0A: 8842         cmp r0,r1
08095D0C: 00dd         ble 0x08095d10
08095D0E: 2180         strh r1,[r4,#0x0]
08095D10: 10bc         pop {r4}
08095D12: 01bc         pop {r0}
08095D14: 0047         bx r0
