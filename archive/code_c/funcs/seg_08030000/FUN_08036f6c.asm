; undefined FUN_08036f6c(void)
; entry 0x8036f6c  size 72 bytes

08036F6C: 10b5         push {r4,lr}
08036F6E: 041c         add r4,r0,#0x0
08036F70: b430         add r0,#0xb4
08036F72: 007b         ldrb r0,[r0,#0xc]
08036F74: 0028         cmp r0,#0x0
08036F76: 07d1         bne 0x08036f88
08036F78: 0248         ldr r0,[0x08036f84]
08036F7A: 2218         add r2,r4,r0
08036F7C: 1078         ldrb r0,[r2,#0x0]
08036F7E: 1021         mov r1,#0x10
08036F80: 06e0         b 0x08036f90
08036F88: 0c49         ldr r1,[0x08036fbc]
08036F8A: 6218         add r2,r4,r1
08036F8C: 1078         ldrb r0,[r2,#0x0]
08036F8E: 2021         mov r1,#0x20
08036F90: 0843         orr r0,r1
08036F92: 1070         strb r0,[r2,#0x0]
08036F94: 0a49         ldr r1,[0x08036fc0]
08036F96: 201c         add r0,r4,#0x0
08036F98: 0022         mov r2,#0x0
08036F9A: 0223         mov r3,#0x2
08036F9C: e6f714f8     bl 0x0801cfc8
08036FA0: aa21         mov r1,#0xaa
08036FA2: 4900         lsl r1,r1,#0x1
08036FA4: 6018         add r0,r4,r1
08036FA6: 0078         ldrb r0,[r0,#0x0]
08036FA8: 0128         cmp r0,#0x1
08036FAA: 03d1         bne 0x08036fb4
08036FAC: 0548         ldr r0,[0x08036fc4]
08036FAE: 2118         add r1,r4,r0
08036FB0: 0220         mov r0,#0x2
08036FB2: 0870         strb r0,[r1,#0x0]
08036FB4: 10bc         pop {r4}
08036FB6: 01bc         pop {r0}
08036FB8: 0047         bx r0
