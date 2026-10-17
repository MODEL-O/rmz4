; undefined FUN_080e9590(void)
; entry 0x80e9590  size 54 bytes

080E9590: f0b5         push {r4,r5,r6,r7,lr}
080E9592: 061c         add r6,r0,#0x0
080E9594: 0c48         ldr r0,[0x080e95c8]
080E9596: 0468         ldr r4,[r0,#0x0]
080E9598: e768         ldr r7,[r4,#0xc]
080E959A: 201c         add r0,r4,#0x0
080E959C: 1bf792ff     bl 0x080054c4
080E95A0: e068         ldr r0,[r4,#0xc]
080E95A2: 4068         ldr r0,[r0,#0x4]
080E95A4: e060         str r0,[r4,#0xc]
080E95A6: 211c         add r1,r4,#0x0
080E95A8: 1431         add r1,#0x14
080E95AA: 8842         cmp r0,r1
080E95AC: 07d0         beq 0x080e95be
080E95AE: 0d1c         add r5,r1,#0x0
080E95B0: 3ff0f0fc     bl 0x08128f94
080E95B4: e068         ldr r0,[r4,#0xc]
080E95B6: 4068         ldr r0,[r0,#0x4]
080E95B8: e060         str r0,[r4,#0xc]
080E95BA: a842         cmp r0,r5
080E95BC: f8d1         bne 0x080e95b0
080E95BE: e760         str r7,[r4,#0xc]
080E95C0: f0bc         pop {r4,r5,r6,r7}
080E95C2: 01bc         pop {r0}
080E95C4: 0047         bx r0
