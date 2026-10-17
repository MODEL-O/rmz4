; undefined FUN_08037ce4(void)
; entry 0x8037ce4  size 72 bytes

08037CE4: 10b5         push {r4,lr}
08037CE6: 041c         add r4,r0,#0x0
08037CE8: b430         add r0,#0xb4
08037CEA: 007b         ldrb r0,[r0,#0xc]
08037CEC: 0028         cmp r0,#0x0
08037CEE: 07d1         bne 0x08037d00
08037CF0: 0248         ldr r0,[0x08037cfc]
08037CF2: 2218         add r2,r4,r0
08037CF4: 1078         ldrb r0,[r2,#0x0]
08037CF6: 1021         mov r1,#0x10
08037CF8: 06e0         b 0x08037d08
08037D00: 0c49         ldr r1,[0x08037d34]
08037D02: 6218         add r2,r4,r1
08037D04: 1078         ldrb r0,[r2,#0x0]
08037D06: 2021         mov r1,#0x20
08037D08: 0843         orr r0,r1
08037D0A: 1070         strb r0,[r2,#0x0]
08037D0C: 0a49         ldr r1,[0x08037d38]
08037D0E: 201c         add r0,r4,#0x0
08037D10: 0022         mov r2,#0x0
08037D12: 0223         mov r3,#0x2
08037D14: e5f758f9     bl 0x0801cfc8
08037D18: aa21         mov r1,#0xaa
08037D1A: 4900         lsl r1,r1,#0x1
08037D1C: 6018         add r0,r4,r1
08037D1E: 0078         ldrb r0,[r0,#0x0]
08037D20: 0128         cmp r0,#0x1
08037D22: 03d1         bne 0x08037d2c
08037D24: 0548         ldr r0,[0x08037d3c]
08037D26: 2118         add r1,r4,r0
08037D28: 0220         mov r0,#0x2
08037D2A: 0870         strb r0,[r1,#0x0]
08037D2C: 10bc         pop {r4}
08037D2E: 01bc         pop {r0}
08037D30: 0047         bx r0
