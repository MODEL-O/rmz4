@ FUN_08087f44  entry 0x08087f44  size 174
.thumb
.org 0x87f44
FUN_08087f44:
	push {r4, r5, r6, r7, lr}	@ 00087f44 f0b5
.org 0x87f46
	sub sp, #16	@ 00087f46 84b0
.org 0x87f48
	adds r6, r0, #0	@ 00087f48 061c
.org 0x87f4a
	ldrb r7, [r6, #15]	@ 00087f4a f77b
.org 0x87f4c
	cmp r7, #0	@ 00087f4c 002f
.org 0x87f4e
	bne.n 0x87f7e	@ 00087f4e 16d1
.org 0x87f50
	ldrb r4, [r6, #10]	@ 00087f50 b47a
.org 0x87f52
	lsrs r4, r4, #4	@ 00087f52 2409
.org 0x87f54
	movs r5, #1	@ 00087f54 0125
.org 0x87f56
	ands r4, r5	@ 00087f56 2c40
.org 0x87f58
	adds r0, #116	@ 00087f58 7430
.org 0x87f5a
	ldr r1, [pc, #68]	@ 00087f5a 1149
.org 0x87f5c
	bl 0x5784	@ 00087f5c 7df712fc
.org 0x87f60
	ldr r1, [pc, #64]	@ 00087f60 1049
.org 0x87f62
	adds r0, r6, #0	@ 00087f62 301c
.org 0x87f64
	bl 0x1cf00	@ 00087f64 94f7ccff
.org 0x87f68
	lsls r4, r4, #1	@ 00087f68 6400
.org 0x87f6a
	subs r4, r5, r4	@ 00087f6a 2c1b
.org 0x87f6c
	lsls r4, r4, #6	@ 00087f6c a401
.org 0x87f6e
	str r4, [r6, #92]	@ 00087f6e f465
.org 0x87f70
	str r7, [r6, #96]	@ 00087f70 3766
.org 0x87f72
	movs r0, #32	@ 00087f72 2020
.org 0x87f74
	strb r0, [r6, #18]	@ 00087f74 b074
.org 0x87f76
	strb r5, [r6, #19]	@ 00087f76 f574
.org 0x87f78
	ldrb r0, [r6, #15]	@ 00087f78 f07b
.org 0x87f7a
	adds r0, #1	@ 00087f7a 0130
.org 0x87f7c
	strb r0, [r6, #15]	@ 00087f7c f073
.org 0x87f7e
	adds r0, r6, #0	@ 00087f7e 301c
.org 0x87f80
	bl 0x1cff0	@ 00087f80 95f736f8
.org 0x87f84
	ldrb r1, [r6, #18]	@ 00087f84 b17c
.org 0x87f86
	movs r0, #7	@ 00087f86 0720
.org 0x87f88
	ands r0, r1	@ 00087f88 0840
.org 0x87f8a
	cmp r0, #0	@ 00087f8a 0028
.org 0x87f8c
	bne.n 0x87fc8	@ 00087f8c 1cd1
.org 0x87f8e
	ldr r2, [r6, #84]	@ 00087f8e 726d
.org 0x87f90
	ldrb r1, [r6, #10]	@ 00087f90 b17a
.org 0x87f92
	movs r0, #16	@ 00087f92 1020
.org 0x87f94
	ands r0, r1	@ 00087f94 0840
.org 0x87f96
	cmp r0, #0	@ 00087f96 0028
.org 0x87f98
	beq.n 0x87fa8	@ 00087f98 06d0
.org 0x87f9a
	movs r1, #128	@ 00087f9a 8021
.org 0x87f9c
	lsls r1, r1, #3	@ 00087f9c c900
.org 0x87f9e
	b.n 0x87faa	@ 00087f9e 04e0
.org 0x87fa0
	.byte 0x34,0xf0,0x85,0x08	@ 00087fa0 data
.org 0x87fa4
	.byte 0x0d,0x1d,0x00,0x00	@ 00087fa4 data
.org 0x87fa8
	ldr r1, [pc, #80]	@ 00087fa8 1449
.org 0x87faa
	adds r0, r2, r1	@ 00087faa 5018
.org 0x87fac
	str r0, [sp, #0]	@ 00087fac 0090
.org 0x87fae
	ldr r0, [r6, #88]	@ 00087fae b06d
.org 0x87fb0
	str r0, [sp, #4]	@ 00087fb0 0190
.org 0x87fb2
	movs r0, #128	@ 00087fb2 8020
.org 0x87fb4
	lsls r0, r0, #2	@ 00087fb4 8000
.org 0x87fb6
	str r0, [sp, #8]	@ 00087fb6 0290
.org 0x87fb8
	add r1, sp, #8	@ 00087fb8 02a9
.org 0x87fba
	movs r0, #0	@ 00087fba 0020
.org 0x87fbc
	str r0, [r1, #4]	@ 00087fbc 4860
.org 0x87fbe
	mov r0, sp	@ 00087fbe 6846
.org 0x87fc0
	movs r2, #1	@ 00087fc0 0122
.org 0x87fc2
	movs r3, #2	@ 00087fc2 0223
.org 0x87fc4
	bl 0x88ff0	@ 00087fc4 01f014f8
.org 0x87fc8
	ldrb r0, [r6, #19]	@ 00087fc8 f07c
.org 0x87fca
	cmp r0, #0	@ 00087fca 0028
.org 0x87fcc
	beq.n 0x87fdc	@ 00087fcc 06d0
.org 0x87fce
	adds r0, r6, #0	@ 00087fce 301c
.org 0x87fd0
	bl 0x88c90	@ 00087fd0 00f05efe
.org 0x87fd4
	cmp r0, #0	@ 00087fd4 0028
.org 0x87fd6
	beq.n 0x87fdc	@ 00087fd6 01d0
.org 0x87fd8
	movs r0, #0	@ 00087fd8 0020
.org 0x87fda
	strb r0, [r6, #19]	@ 00087fda f074
.org 0x87fdc
	ldrb r0, [r6, #18]	@ 00087fdc b07c
.org 0x87fde
	subs r0, #1	@ 00087fde 0138
.org 0x87fe0
	strb r0, [r6, #18]	@ 00087fe0 b074
.org 0x87fe2
	lsls r0, r0, #24	@ 00087fe2 0006
.org 0x87fe4
	lsrs r1, r0, #24	@ 00087fe4 010e
.org 0x87fe6
	cmp r1, #0	@ 00087fe6 0029
.org 0x87fe8
	bne.n 0x87ff2	@ 00087fe8 03d1
.org 0x87fea
	movs r0, #9	@ 00087fea 0920
.org 0x87fec
	strb r0, [r6, #13]	@ 00087fec 7073
.org 0x87fee
	strb r1, [r6, #14]	@ 00087fee b173
.org 0x87ff0
	strb r1, [r6, #15]	@ 00087ff0 f173
