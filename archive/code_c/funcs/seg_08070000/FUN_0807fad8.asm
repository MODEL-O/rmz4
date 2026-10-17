; undefined FUN_0807fad8(void)
; entry 0x807fad8  size 54 bytes

0807FAD8: f0b5         push {r4,r5,r6,r7,lr}
0807FADA: 061c         add r6,r0,#0x0
0807FADC: 0c48         ldr r0,[0x0807fb10]
0807FADE: 0468         ldr r4,[r0,#0x0]
0807FAE0: e768         ldr r7,[r4,#0xc]
0807FAE2: 201c         add r0,r4,#0x0
0807FAE4: 85f7eefc     bl 0x080054c4
0807FAE8: e068         ldr r0,[r4,#0xc]
0807FAEA: 4068         ldr r0,[r0,#0x4]
0807FAEC: e060         str r0,[r4,#0xc]
0807FAEE: 211c         add r1,r4,#0x0
0807FAF0: 1431         add r1,#0x14
0807FAF2: 8842         cmp r0,r1
0807FAF4: 07d0         beq 0x0807fb06
0807FAF6: 0d1c         add r5,r1,#0x0
0807FAF8: a9f04cfa     bl 0x08128f94
0807FAFC: e068         ldr r0,[r4,#0xc]
0807FAFE: 4068         ldr r0,[r0,#0x4]
0807FB00: e060         str r0,[r4,#0xc]
0807FB02: a842         cmp r0,r5
0807FB04: f8d1         bne 0x0807faf8
0807FB06: e760         str r7,[r4,#0xc]
0807FB08: f0bc         pop {r4,r5,r6,r7}
0807FB0A: 01bc         pop {r0}
0807FB0C: 0047         bx r0
