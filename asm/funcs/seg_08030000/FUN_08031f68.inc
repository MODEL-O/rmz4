@ FUN_08031f68  entry 0x08031f68  size 114
.thumb
.org 0x31f68
FUN_08031f68:
	push {r4, lr}	@ 00031f68 10b5
.org 0x31f6a
	adds r4, r0, #0	@ 00031f6a 041c
.org 0x31f6c
	movs r1, #171	@ 00031f6c ab21
.org 0x31f6e
	lsls r1, r1, #1	@ 00031f6e 4900
.org 0x31f70
	adds r0, r4, r1	@ 00031f70 6018
.org 0x31f72
	ldrb r0, [r0, #0]	@ 00031f72 0078
.org 0x31f74
	cmp r0, #1	@ 00031f74 0128
.org 0x31f76
	beq.n 0x31f94	@ 00031f76 0dd0
.org 0x31f78
	cmp r0, #1	@ 00031f78 0128
.org 0x31f7a
	bgt.n 0x31f82	@ 00031f7a 02dc
.org 0x31f7c
	cmp r0, #0	@ 00031f7c 0028
.org 0x31f7e
	beq.n 0x31f8c	@ 00031f7e 05d0
.org 0x31f80
	b.n 0x31fb4	@ 00031f80 18e0
.org 0x31f82
	cmp r0, #2	@ 00031f82 0228
.org 0x31f84
	beq.n 0x31f9c	@ 00031f84 0ad0
.org 0x31f86
	cmp r0, #3	@ 00031f86 0328
.org 0x31f88
	beq.n 0x31fac	@ 00031f88 10d0
.org 0x31f8a
	b.n 0x31fb4	@ 00031f8a 13e0
.org 0x31f8c
	ldr r1, [pc, #0]	@ 00031f8c 0049
.org 0x31f8e
	b.n 0x31f9e	@ 00031f8e 06e0
.org 0x31f90
	.byte 0x0d,0x28,0x00,0x00	@ 00031f90 data
.org 0x31f94
	ldr r1, [pc, #0]	@ 00031f94 0049
.org 0x31f96
	b.n 0x31f9e	@ 00031f96 02e0
.org 0x31f98
	.byte 0x0c,0x28,0x00,0x00	@ 00031f98 data
.org 0x31f9c
	ldr r1, [pc, #8]	@ 00031f9c 0249
.org 0x31f9e
	adds r0, r4, #0	@ 00031f9e 201c
.org 0x31fa0
	bl 0x1cf00	@ 00031fa0 eaf7aeff
.org 0x31fa4
	b.n 0x31fb4	@ 00031fa4 06e0
.org 0x31fa6
	.byte 0x00	@ 00031fa6 data
.org 0x31fa7
	.byte 0x00	@ 00031fa7 data
.org 0x31fa8
	.byte 0x0e,0x28,0x00,0x00	@ 00031fa8 data
.org 0x31fac
	ldr r1, [pc, #56]	@ 00031fac 0e49
.org 0x31fae
	adds r0, r4, #0	@ 00031fae 201c
.org 0x31fb0
	bl 0x1cf00	@ 00031fb0 eaf7a6ff
.org 0x31fb4
	adds r3, r4, #0	@ 00031fb4 231c
.org 0x31fb6
	adds r3, #180	@ 00031fb6 b433
.org 0x31fb8
	ldr r2, [r3, #84]	@ 00031fb8 5a6d
.org 0x31fba
	cmp r2, #0	@ 00031fba 002a
.org 0x31fbc
	beq.n 0x31fc6	@ 00031fbc 03d0
.org 0x31fbe
	movs r1, #0	@ 00031fbe 0021
.org 0x31fc0
	movs r0, #1	@ 00031fc0 0120
.org 0x31fc2
	strb r0, [r2, #17]	@ 00031fc2 5074
.org 0x31fc4
	str r1, [r3, #84]	@ 00031fc4 5965
.org 0x31fc6
	adds r0, r4, #0	@ 00031fc6 201c
.org 0x31fc8
	bl 0x386d4	@ 00031fc8 06f084fb
.org 0x31fcc
	lsls r0, r0, #16	@ 00031fcc 0004
.org 0x31fce
	asrs r0, r0, #16	@ 00031fce 0014
.org 0x31fd0
	str r0, [r4, #92]	@ 00031fd0 e065
.org 0x31fd2
	movs r0, #13	@ 00031fd2 0d20
.org 0x31fd4
	bl 0x2b10	@ 00031fd4 d0f79cfd
.org 0x31fd8
	movs r0, #1	@ 00031fd8 0120
