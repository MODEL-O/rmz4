; undefined FUN_08119de8(void)
; entry 0x8119de8  size 44 bytes

08119DE8: 00b5         push {lr}
08119DEA: 0a49         ldr r1,[0x08119e14]
08119DEC: 0022         mov r2,#0x0
08119DEE: 0a80         strh r2,[r1,#0x0]
08119DF0: 094b         ldr r3,[0x08119e18]
08119DF2: 1a80         strh r2,[r3,#0x0]
08119DF4: ff21         mov r1,#0xff
08119DF6: 9973         strb r1,[r3,#0xe]
08119DF8: dd21         mov r1,#0xdd
08119DFA: 0901         lsl r1,r1,#0x4
08119DFC: 4018         add r0,r0,r1
08119DFE: 0121         mov r1,#0x1
08119E00: 4170         strb r1,[r0,#0x1]
08119E02: 0078         ldrb r0,[r0,#0x0]
08119E04: 1430         add r0,#0x14
08119E06: e8f60dfc     bl 0x08002624
08119E0A: 4320         mov r0,#0x43
08119E0C: e8f60afc     bl 0x08002624
08119E10: 01bc         pop {r0}
08119E12: 0047         bx r0
