; undefined FUN_080b7cac(void)
; entry 0x80b7cac  size 54 bytes

080B7CAC: 10b5         push {r4,lr}
080B7CAE: 041c         add r4,r0,#0x0
080B7CB0: b430         add r0,#0xb4
080B7CB2: 0078         ldrb r0,[r0,#0x0]
080B7CB4: 0028         cmp r0,#0x0
080B7CB6: 08d1         bne 0x080b7cca
080B7CB8: 201c         add r0,r4,#0x0
080B7CBA: 5430         add r0,#0x54
080B7CBC: a27a         ldrb r2,[r4,#0xa]
080B7CBE: 1209         lsr r2,r2,#0x4
080B7CC0: 0121         mov r1,#0x1
080B7CC2: 0a40         and r2,r1
080B7CC4: 0021         mov r1,#0x0
080B7CC6: 2ff0c1fe     bl 0x080e7a4c
080B7CCA: 0649         ldr r1,[0x080b7ce4]
080B7CCC: 607a         ldrb r0,[r4,#0x9]
080B7CCE: 8000         lsl r0,r0,#0x2
080B7CD0: 4018         add r0,r0,r1
080B7CD2: 0421         mov r1,#0x4
080B7CD4: e160         str r1,[r4,#0xc]
080B7CD6: 0068         ldr r0,[r0,#0x0]
080B7CD8: 0069         ldr r0,[r0,#0x10]
080B7CDA: 6061         str r0,[r4,#0x14]
080B7CDC: 10bc         pop {r4}
080B7CDE: 01bc         pop {r0}
080B7CE0: 0047         bx r0
