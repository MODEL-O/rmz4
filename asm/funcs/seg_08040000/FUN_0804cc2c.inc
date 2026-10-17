@ FUN_0804cc2c  entry 0x0804cc2c  size 106
.thumb
.org 0x4cc2c
FUN_0804cc2c:
	push {r4, r5, r6, lr}	@ 0004cc2c 70b5
.org 0x4cc2e
	adds r4, r0, #0	@ 0004cc2e 041c
.org 0x4cc30
	ldr r6, [r4, #40]	@ 0004cc30 a66a
.org 0x4cc32
	movs r5, #0	@ 0004cc32 0025
.org 0x4cc34
	ldr r0, [r4, #84]	@ 0004cc34 606d
.org 0x4cc36
	ldr r1, [r4, #88]	@ 0004cc36 a16d
.org 0x4cc38
	bl 0x7c7c	@ 0004cc38 bbf720f8
.org 0x4cc3c
	lsls r0, r0, #16	@ 0004cc3c 0004
.org 0x4cc3e
	lsrs r1, r0, #16	@ 0004cc3e 010c
.org 0x4cc40
	movs r0, #128	@ 0004cc40 8020
.org 0x4cc42
	lsls r0, r0, #8	@ 0004cc42 0002
.org 0x4cc44
	ands r0, r1	@ 0004cc44 0840
.org 0x4cc46
	cmp r0, #0	@ 0004cc46 0028
.org 0x4cc48
	beq.n 0x4cc4c	@ 0004cc48 00d0
.org 0x4cc4a
	movs r1, #0	@ 0004cc4a 0021
.org 0x4cc4c
	movs r2, #15	@ 0004cc4c 0f22
.org 0x4cc4e
	adds r0, r1, #0	@ 0004cc4e 081c
.org 0x4cc50
	ands r0, r2	@ 0004cc50 1040
.org 0x4cc52
	cmp r0, #15	@ 0004cc52 0f28
.org 0x4cc54
	bne.n 0x4cc58	@ 0004cc54 00d1
.org 0x4cc56
	movs r1, #0	@ 0004cc56 0021
.org 0x4cc58
	ands r1, r2	@ 0004cc58 1140
.org 0x4cc5a
	cmp r1, #0	@ 0004cc5a 0029
.org 0x4cc5c
	beq.n 0x4cc62	@ 0004cc5c 01d0
.org 0x4cc5e
	str r5, [r4, #92]	@ 0004cc5e e565
.org 0x4cc60
	movs r5, #1	@ 0004cc60 0125
.org 0x4cc62
	adds r0, r6, #0	@ 0004cc62 301c
.org 0x4cc64
	adds r0, #140	@ 0004cc64 8c30
.org 0x4cc66
	ldr r0, [r0, #0]	@ 0004cc66 0068
.org 0x4cc68
	movs r1, #8	@ 0004cc68 0821
.org 0x4cc6a
	ands r0, r1	@ 0004cc6a 0840
.org 0x4cc6c
	cmp r0, #0	@ 0004cc6c 0028
.org 0x4cc6e
	beq.n 0x4cc72	@ 0004cc6e 00d0
.org 0x4cc70
	movs r5, #1	@ 0004cc70 0125
.org 0x4cc72
	ldr r0, [pc, #36]	@ 0004cc72 0948
.org 0x4cc74
	adds r1, r4, #0	@ 0004cc74 211c
.org 0x4cc76
	adds r1, #84	@ 0004cc76 5431
.org 0x4cc78
	bl 0x1fb14	@ 0004cc78 d2f74cff
.org 0x4cc7c
	movs r1, #160	@ 0004cc7c a021
.org 0x4cc7e
	lsls r1, r1, #7	@ 0004cc7e c901
.org 0x4cc80
	cmp r0, r1	@ 0004cc80 8842
.org 0x4cc82
	bls.n 0x4cc86	@ 0004cc82 00d9
.org 0x4cc84
	movs r5, #2	@ 0004cc84 0225
.org 0x4cc86
	ldrb r0, [r4, #19]	@ 0004cc86 e07c
.org 0x4cc88
	cmp r0, #0	@ 0004cc88 0028
.org 0x4cc8a
	beq.n 0x4cc8e	@ 0004cc8a 00d0
.org 0x4cc8c
	movs r5, #0	@ 0004cc8c 0025
.org 0x4cc8e
	adds r0, r5, #0	@ 0004cc8e 281c
.org 0x4cc90
	pop {r4, r5, r6}	@ 0004cc90 70bc
.org 0x4cc92
	pop {r1}	@ 0004cc92 02bc
.org 0x4cc94
	bx r1	@ 0004cc94 0847
