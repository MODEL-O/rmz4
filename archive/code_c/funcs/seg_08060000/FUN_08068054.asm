; undefined FUN_08068054(void)
; entry 0x8068054  size 62 bytes

08068054: 10b5         push {r4,lr}
08068056: 041c         add r4,r0,#0x0
08068058: a07b         ldrb r0,[r4,#0xe]
0806805A: 0028         cmp r0,#0x0
0806805C: 0bd1         bne 0x08068076
0806805E: 0d49         ldr r1,[0x08068094]
08068060: 201c         add r0,r4,#0x0
08068062: b4f74dff     bl 0x0801cf00
08068066: 201c         add r0,r4,#0x0
08068068: 7430         add r0,#0x74
0806806A: 0b49         ldr r1,[0x08068098]
0806806C: 9df78afb     bl 0x08005784
08068070: a07b         ldrb r0,[r4,#0xe]
08068072: 0130         add r0,#0x1
08068074: a073         strb r0,[r4,#0xe]
08068076: 201c         add r0,r4,#0x0
08068078: b4f7baff     bl 0x0801cff0
0806807C: 201c         add r0,r4,#0x0
0806807E: 7330         add r0,#0x73
08068080: 0178         ldrb r1,[r0,#0x0]
08068082: 0329         cmp r1,#0x3
08068084: 02d1         bne 0x0806808c
08068086: 0020         mov r0,#0x0
08068088: 6173         strb r1,[r4,#0xd]
0806808A: a073         strb r0,[r4,#0xe]
0806808C: 10bc         pop {r4}
0806808E: 01bc         pop {r0}
08068090: 0047         bx r0
