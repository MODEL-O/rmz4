; undefined FUN_08091cb8(void)
; entry 0x8091cb8  size 82 bytes

08091CB8: 10b5         push {r4,lr}
08091CBA: 041c         add r4,r0,#0x0
08091CBC: a07b         ldrb r0,[r4,#0xe]
08091CBE: 0028         cmp r0,#0x0
08091CC0: 21d1         bne 0x08091d06
08091CC2: 201c         add r0,r4,#0x0
08091CC4: be30         add r0,#0xbe
08091CC6: 0078         ldrb r0,[r0,#0x0]
08091CC8: 0128         cmp r0,#0x1
08091CCA: 0dd1         bne 0x08091ce8
08091CCC: 0449         ldr r1,[0x08091ce0]
08091CCE: 201c         add r0,r4,#0x0
08091CD0: 8bf716f9     bl 0x0801cf00
08091CD4: 201c         add r0,r4,#0x0
08091CD6: 7430         add r0,#0x74
08091CD8: 0249         ldr r1,[0x08091ce4]
08091CDA: 73f753fd     bl 0x08005784
08091CDE: 0ce0         b 0x08091cfa
08091CE8: 0a49         ldr r1,[0x08091d14]
08091CEA: 201c         add r0,r4,#0x0
08091CEC: 8bf708f9     bl 0x0801cf00
08091CF0: 201c         add r0,r4,#0x0
08091CF2: 7430         add r0,#0x74
08091CF4: 0849         ldr r1,[0x08091d18]
08091CF6: 73f745fd     bl 0x08005784
08091CFA: 201c         add r0,r4,#0x0
08091CFC: fff7b2f8     bl 0x08090e64
08091D00: a07b         ldrb r0,[r4,#0xe]
08091D02: 0130         add r0,#0x1
08091D04: a073         strb r0,[r4,#0xe]
08091D06: 201c         add r0,r4,#0x0
08091D08: 8bf772f9     bl 0x0801cff0
08091D0C: 10bc         pop {r4}
08091D0E: 01bc         pop {r0}
08091D10: 0047         bx r0
