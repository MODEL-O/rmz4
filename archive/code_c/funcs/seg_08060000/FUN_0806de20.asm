; undefined FUN_0806de20(void)
; entry 0x806de20  size 64 bytes

0806DE20: 10b5         push {r4,lr}
0806DE22: 041c         add r4,r0,#0x0
0806DE24: e07b         ldrb r0,[r4,#0xf]
0806DE26: 0028         cmp r0,#0x0
0806DE28: 0bd1         bne 0x0806de42
0806DE2A: 201c         add r0,r4,#0x0
0806DE2C: 7430         add r0,#0x74
0806DE2E: 0c49         ldr r1,[0x0806de60]
0806DE30: 97f7a8fc     bl 0x08005784
0806DE34: 0b49         ldr r1,[0x0806de64]
0806DE36: 201c         add r0,r4,#0x0
0806DE38: aff762f8     bl 0x0801cf00
0806DE3C: e07b         ldrb r0,[r4,#0xf]
0806DE3E: 0130         add r0,#0x1
0806DE40: e073         strb r0,[r4,#0xf]
0806DE42: 201c         add r0,r4,#0x0
0806DE44: aff7d4f8     bl 0x0801cff0
0806DE48: 201c         add r0,r4,#0x0
0806DE4A: 7330         add r0,#0x73
0806DE4C: 0078         ldrb r0,[r0,#0x0]
0806DE4E: 0328         cmp r0,#0x3
0806DE50: 03d1         bne 0x0806de5a
0806DE52: 0021         mov r1,#0x0
0806DE54: 0420         mov r0,#0x4
0806DE56: a073         strb r0,[r4,#0xe]
0806DE58: e173         strb r1,[r4,#0xf]
0806DE5A: 10bc         pop {r4}
0806DE5C: 01bc         pop {r0}
0806DE5E: 0047         bx r0
