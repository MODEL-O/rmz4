@ FUN_080c9f84  entry 0x080c9f84  size 158
.thumb
.org 0xc9f84
FUN_080c9f84:
	push {r4, lr}	@ 000c9f84 10b5
.org 0xc9f86
	adds r4, r0, #0	@ 000c9f86 041c
.org 0xc9f88
	ldrb r1, [r4, #14]	@ 000c9f88 a17b
.org 0xc9f8a
	cmp r1, #0	@ 000c9f8a 0029
.org 0xc9f8c
	bne.n 0xc9fb4	@ 000c9f8c 12d1
.org 0xc9f8e
	movs r0, #4	@ 000c9f8e 0420
.org 0xc9f90
	strb r0, [r4, #19]	@ 000c9f90 e074
.org 0xc9f92
	adds r0, r4, #0	@ 000c9f92 201c
.org 0xc9f94
	adds r0, #180	@ 000c9f94 b430
.org 0xc9f96
	ldrb r0, [r0, #0]	@ 000c9f96 0078
.org 0xc9f98
	cmp r0, #1	@ 000c9f98 0128
.org 0xc9f9a
	bne.n 0xc9fae	@ 000c9f9a 08d1
.org 0xc9f9c
	ldrb r0, [r4, #17]	@ 000c9f9c 607c
.org 0xc9f9e
	cmp r0, #3	@ 000c9f9e 0328
.org 0xc9fa0
	beq.n 0xc9fae	@ 000c9fa0 05d0
.org 0xc9fa2
	ldr r0, [r4, #44]	@ 000c9fa2 e06a
.org 0xc9fa4
	cmp r0, #0	@ 000c9fa4 0028
.org 0xc9fa6
	beq.n 0xc9fae	@ 000c9fa6 02d0
.org 0xc9fa8
	strb r1, [r0, #13]	@ 000c9fa8 4173
.org 0xc9faa
	ldr r0, [r4, #44]	@ 000c9faa e06a
.org 0xc9fac
	strb r1, [r0, #14]	@ 000c9fac 8173
.org 0xc9fae
	ldrb r0, [r4, #14]	@ 000c9fae a07b
.org 0xc9fb0
	adds r0, #1	@ 000c9fb0 0130
.org 0xc9fb2
	strb r0, [r4, #14]	@ 000c9fb2 a073
.org 0xc9fb4
	ldrb r1, [r4, #19]	@ 000c9fb4 e17c
.org 0xc9fb6
	adds r3, r1, #0	@ 000c9fb6 0b1c
.org 0xc9fb8
	cmp r3, #0	@ 000c9fb8 002b
.org 0xc9fba
	bne.n 0xca008	@ 000c9fba 25d1
.org 0xc9fbc
	ldrb r1, [r4, #17]	@ 000c9fbc 617c
.org 0xc9fbe
	cmp r1, #3	@ 000c9fbe 0329
.org 0xc9fc0
	beq.n 0xc9ff2	@ 000c9fc0 17d0
.org 0xc9fc2
	ldr r0, [r4, #44]	@ 000c9fc2 e06a
.org 0xc9fc4
	adds r2, r0, #0	@ 000c9fc4 021c
.org 0xc9fc6
	cmp r2, #0	@ 000c9fc6 002a
.org 0xc9fc8
	beq.n 0xc9ff2	@ 000c9fc8 13d0
.org 0xc9fca
	cmp r1, #0	@ 000c9fca 0029
.org 0xc9fcc
	bne.n 0xc9fd4	@ 000c9fcc 02d1
.org 0xc9fce
	ldrb r0, [r4, #18]	@ 000c9fce a07c
.org 0xc9fd0
	adds r0, #12	@ 000c9fd0 0c30
.org 0xc9fd2
	strb r0, [r4, #18]	@ 000c9fd2 a074
.org 0xc9fd4
	ldrb r1, [r2, #10]	@ 000c9fd4 917a
.org 0xc9fd6
	movs r0, #1	@ 000c9fd6 0120
.org 0xc9fd8
	orrs r0, r1	@ 000c9fd8 0843
.org 0xc9fda
	strb r0, [r2, #10]	@ 000c9fda 9072
.org 0xc9fdc
	ldr r0, [r4, #44]	@ 000c9fdc e06a
.org 0xc9fde
	adds r0, #181	@ 000c9fde b530
.org 0xc9fe0
	movs r1, #1	@ 000c9fe0 0121
.org 0xc9fe2
	strb r1, [r0, #0]	@ 000c9fe2 0170
.org 0xc9fe4
	ldr r1, [r4, #40]	@ 000c9fe4 a16a
.org 0xc9fe6
	cmp r1, #0	@ 000c9fe6 0029
.org 0xc9fe8
	beq.n 0xc9ffe	@ 000c9fe8 09d0
.org 0xc9fea
	ldr r0, [r4, #44]	@ 000c9fea e06a
.org 0xc9fec
	str r1, [r0, #40]	@ 000c9fec 8162
.org 0xc9fee
	str r3, [r4, #40]	@ 000c9fee a362
.org 0xc9ff0
	b.n 0xc9ffe	@ 000c9ff0 05e0
.org 0xc9ff2
	ldr r0, [r4, #40]	@ 000c9ff2 a06a
.org 0xc9ff4
	cmp r0, #0	@ 000c9ff4 0028
.org 0xc9ff6
	beq.n 0xc9ffe	@ 000c9ff6 02d0
.org 0xc9ff8
	adds r0, r4, #0	@ 000c9ff8 201c
.org 0xc9ffa
	bl 0xca468	@ 000c9ffa 00f035fa
.org 0xc9ffe
	movs r1, #0	@ 000c9ffe 0021
.org 0xca000
	movs r0, #1	@ 000ca000 0120
.org 0xca002
	strb r0, [r4, #13]	@ 000ca002 6073
.org 0xca004
	strb r1, [r4, #14]	@ 000ca004 a173
.org 0xca006
	b.n 0xca01c	@ 000ca006 09e0
.org 0xca008
	adds r0, r4, #0	@ 000ca008 201c
.org 0xca00a
	adds r0, #181	@ 000ca00a b530
.org 0xca00c
	ldrb r0, [r0, #0]	@ 000ca00c 0078
.org 0xca00e
	cmp r0, #1	@ 000ca00e 0128
.org 0xca010
	bne.n 0xca01c	@ 000ca010 04d1
.org 0xca012
	subs r0, r1, #1	@ 000ca012 481e
.org 0xca014
	strb r0, [r4, #19]	@ 000ca014 e074
.org 0xca016
	adds r0, r4, #0	@ 000ca016 201c
.org 0xca018
	bl 0xca024	@ 000ca018 00f004f8
.org 0xca01c
	pop {r4}	@ 000ca01c 10bc
.org 0xca01e
	pop {r0}	@ 000ca01e 01bc
.org 0xca020
	bx r0	@ 000ca020 0047
