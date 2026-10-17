; undefined FUN_080c1074(void)
; entry 0x80c1074  size 66 bytes

080C1074: 10b5         push {r4,lr}
080C1076: 041c         add r4,r0,#0x0
080C1078: e07b         ldrb r0,[r4,#0xf]
080C107A: 0028         cmp r0,#0x0
080C107C: 0bd1         bne 0x080c1096
080C107E: 201c         add r0,r4,#0x0
080C1080: 7430         add r0,#0x74
080C1082: 0d49         ldr r1,[0x080c10b8]
080C1084: 44f77efb     bl 0x08005784
080C1088: 0c49         ldr r1,[0x080c10bc]
080C108A: 201c         add r0,r4,#0x0
080C108C: 5bf738ff     bl 0x0801cf00
080C1090: e07b         ldrb r0,[r4,#0xf]
080C1092: 0130         add r0,#0x1
080C1094: e073         strb r0,[r4,#0xf]
080C1096: 201c         add r0,r4,#0x0
080C1098: 5bf7aaff     bl 0x0801cff0
080C109C: 201c         add r0,r4,#0x0
080C109E: 7330         add r0,#0x73
080C10A0: 0078         ldrb r0,[r0,#0x0]
080C10A2: 0328         cmp r0,#0x3
080C10A4: 04d1         bne 0x080c10b0
080C10A6: 0021         mov r1,#0x0
080C10A8: 0220         mov r0,#0x2
080C10AA: 6073         strb r0,[r4,#0xd]
080C10AC: a173         strb r1,[r4,#0xe]
080C10AE: e173         strb r1,[r4,#0xf]
080C10B0: 10bc         pop {r4}
080C10B2: 01bc         pop {r0}
080C10B4: 0047         bx r0
