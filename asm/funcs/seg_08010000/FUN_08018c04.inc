@ FUN_08018c04  entry 0x08018c04  size 60
.thumb
.org 0x18c04
FUN_08018c04:
	push {r4, lr}	@ 00018c04 10b5
.org 0x18c06
	adds r3, r0, #0	@ 00018c06 031c
.org 0x18c08
	ldrb r4, [r3, #14]	@ 00018c08 9c7b
.org 0x18c0a
	cmp r4, #0	@ 00018c0a 002c
.org 0x18c0c
	bne.n 0x18c3a	@ 00018c0c 15d1
.org 0x18c0e
	ldr r0, [r3, #92]	@ 00018c0e d86d
.org 0x18c10
	lsls r0, r0, #16	@ 00018c10 0004
.org 0x18c12
	lsrs r0, r0, #20	@ 00018c12 000d
.org 0x18c14
	lsls r0, r0, #1	@ 00018c14 4000
.org 0x18c16
	ldr r1, [pc, #40]	@ 00018c16 0a49
.org 0x18c18
	adds r0, r0, r1	@ 00018c18 4018
.org 0x18c1a
	ldrh r2, [r0, #0]	@ 00018c1a 0288
.org 0x18c1c
	ldr r1, [pc, #36]	@ 00018c1c 0949
.org 0x18c1e
	ands r1, r2	@ 00018c1e 1140
.org 0x18c20
	movs r2, #3	@ 00018c20 0322
.org 0x18c22
	orrs r1, r2	@ 00018c22 1143
.org 0x18c24
	strh r1, [r0, #0]	@ 00018c24 0180
.org 0x18c26
	ldr r0, [pc, #32]	@ 00018c26 0848
.org 0x18c28
	str r0, [r3, #76]	@ 00018c28 d864
.org 0x18c2a
	movs r0, #140	@ 00018c2a 8c20
.org 0x18c2c
	lsls r0, r0, #3	@ 00018c2c c000
.org 0x18c2e
	str r0, [r3, #80]	@ 00018c2e 1865
.org 0x18c30
	str r4, [r3, #68]	@ 00018c30 5c64
.org 0x18c32
	str r4, [r3, #72]	@ 00018c32 9c64
.org 0x18c34
	ldrb r0, [r3, #14]	@ 00018c34 987b
.org 0x18c36
	adds r0, #1	@ 00018c36 0130
.org 0x18c38
	strb r0, [r3, #14]	@ 00018c38 9873
.org 0x18c3a
	pop {r4}	@ 00018c3a 10bc
.org 0x18c3c
	pop {r0}	@ 00018c3c 01bc
.org 0x18c3e
	bx r0	@ 00018c3e 0047
