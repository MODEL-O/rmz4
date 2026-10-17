@ FUN_080a9fc8  entry 0x080a9fc8  size 106
.thumb
.org 0xa9fc8
FUN_080a9fc8:
	push {r4, r5, lr}	@ 000a9fc8 30b5
.org 0xa9fca
	adds r5, r0, #0	@ 000a9fca 051c
.org 0xa9fcc
	ldrb r0, [r5, #14]	@ 000a9fcc a87b
.org 0xa9fce
	cmp r0, #0	@ 000a9fce 0028
.org 0xa9fd0
	bne.n 0xaa014	@ 000a9fd0 20d1
.org 0xa9fd2
	adds r0, r5, #0	@ 000a9fd2 281c
.org 0xa9fd4
	bl 0xa9c10	@ 000a9fd4 fff71cfe
.org 0xa9fd8
	lsls r0, r0, #24	@ 000a9fd8 0006
.org 0xa9fda
	lsrs r0, r0, #24	@ 000a9fda 000e
.org 0xa9fdc
	cmp r0, #0	@ 000a9fdc 0028
.org 0xa9fde
	bne.n 0xa9fe6	@ 000a9fde 02d1
.org 0xa9fe0
	adds r1, r5, #0	@ 000a9fe0 291c
.org 0xa9fe2
	adds r1, #182	@ 000a9fe2 b631
.org 0xa9fe4
	strb r0, [r1, #0]	@ 000a9fe4 0870
.org 0xa9fe6
	adds r0, r5, #0	@ 000a9fe6 281c
.org 0xa9fe8
	adds r0, #188	@ 000a9fe8 bc30
.org 0xa9fea
	ldrb r1, [r0, #0]	@ 000a9fea 0178
.org 0xa9fec
	movs r2, #154	@ 000a9fec 9a22
.org 0xa9fee
	lsls r2, r2, #8	@ 000a9fee 1202
.org 0xa9ff0
	adds r0, r2, #0	@ 000a9ff0 101c
.org 0xa9ff2
	orrs r1, r0	@ 000a9ff2 0143
.org 0xa9ff4
	adds r0, r5, #0	@ 000a9ff4 281c
.org 0xa9ff6
	bl 0x1cf00	@ 000a9ff6 72f783ff
.org 0xa9ffa
	movs r0, #45	@ 000a9ffa 2d20
.org 0xa9ffc
	strb r0, [r5, #18]	@ 000a9ffc a874
.org 0xa9ffe
	adds r4, r5, #0	@ 000a9ffe 2c1c
.org 0xaa000
	adds r4, #116	@ 000aa000 7434
.org 0xaa002
	ldr r1, [pc, #48]	@ 000aa002 0c49
.org 0xaa004
	adds r0, r4, #0	@ 000aa004 201c
.org 0xaa006
	bl 0x5784	@ 000aa006 5bf7bdfb
.org 0xaa00a
	ldr r0, [pc, #44]	@ 000aa00a 0b48
.org 0xaa00c
	str r0, [r4, #36]	@ 000aa00c 6062
.org 0xaa00e
	ldrb r0, [r5, #14]	@ 000aa00e a87b
.org 0xaa010
	adds r0, #1	@ 000aa010 0130
.org 0xaa012
	strb r0, [r5, #14]	@ 000aa012 a873
.org 0xaa014
	adds r0, r5, #0	@ 000aa014 281c
.org 0xaa016
	bl 0xa9cac	@ 000aa016 fff749fe
.org 0xaa01a
	lsls r0, r0, #24	@ 000aa01a 0006
.org 0xaa01c
	cmp r0, #0	@ 000aa01c 0028
.org 0xaa01e
	beq.n 0xaa02c	@ 000aa01e 05d0
.org 0xaa020
	adds r0, r5, #0	@ 000aa020 281c
.org 0xaa022
	bl 0xa9ba4	@ 000aa022 fff7bffd
.org 0xaa026
	movs r0, #0	@ 000aa026 0020
.org 0xaa028
	strb r0, [r5, #13]	@ 000aa028 6873
.org 0xaa02a
	strb r0, [r5, #14]	@ 000aa02a a873
.org 0xaa02c
	pop {r4, r5}	@ 000aa02c 30bc
.org 0xaa02e
	pop {r0}	@ 000aa02e 01bc
.org 0xaa030
	bx r0	@ 000aa030 0047
