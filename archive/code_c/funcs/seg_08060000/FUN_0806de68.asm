; undefined FUN_0806de68(void)
; entry 0x806de68  size 54 bytes

0806DE68: 10b5         push {r4,lr}
0806DE6A: 041c         add r4,r0,#0x0
0806DE6C: e07b         ldrb r0,[r4,#0xf]
0806DE6E: 0028         cmp r0,#0x0
0806DE70: 0cd1         bne 0x0806de8c
0806DE72: 201c         add r0,r4,#0x0
0806DE74: 7430         add r0,#0x74
0806DE76: 0a49         ldr r1,[0x0806dea0]
0806DE78: 97f784fc     bl 0x08005784
0806DE7C: ad21         mov r1,#0xad
0806DE7E: 0902         lsl r1,r1,#0x8
0806DE80: 201c         add r0,r4,#0x0
0806DE82: aff73df8     bl 0x0801cf00
0806DE86: e07b         ldrb r0,[r4,#0xf]
0806DE88: 0130         add r0,#0x1
0806DE8A: e073         strb r0,[r4,#0xf]
0806DE8C: 201c         add r0,r4,#0x0
0806DE8E: aff7aff8     bl 0x0801cff0
0806DE92: 201c         add r0,r4,#0x0
0806DE94: 01f046f9     bl 0x0806f124
0806DE98: 10bc         pop {r4}
0806DE9A: 01bc         pop {r0}
0806DE9C: 0047         bx r0
