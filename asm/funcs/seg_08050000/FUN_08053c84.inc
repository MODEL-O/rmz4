@ FUN_08053c84  entry 0x08053c84  size 170
.thumb
.org 0x53c84
FUN_08053c84:
	push {r4, r5, lr}	@ 00053c84 30b5
.org 0x53c86
	adds r4, r0, #0	@ 00053c86 041c
.org 0x53c88
	adds r5, r4, #0	@ 00053c88 251c
.org 0x53c8a
	adds r5, #140	@ 00053c8a 8c35
.org 0x53c8c
	ldr r0, [r5, #0]	@ 00053c8c 2868
.org 0x53c8e
	movs r1, #1	@ 00053c8e 0121
.org 0x53c90
	ands r0, r1	@ 00053c90 0840
.org 0x53c92
	cmp r0, #0	@ 00053c92 0028
.org 0x53c94
	beq.n 0x53c9c	@ 00053c94 02d0
.org 0x53c96
	movs r0, #60	@ 00053c96 3c20
.org 0x53c98
	bl 0x6984	@ 00053c98 b2f774fe
.org 0x53c9c
	ldr r0, [r5, #0]	@ 00053c9c 2868
.org 0x53c9e
	movs r1, #128	@ 00053c9e 8021
.org 0x53ca0
	lsls r1, r1, #2	@ 00053ca0 8900
.org 0x53ca2
	ands r0, r1	@ 00053ca2 0840
.org 0x53ca4
	cmp r0, #0	@ 00053ca4 0028
.org 0x53ca6
	bne.n 0x53cb4	@ 00053ca6 05d1
.org 0x53ca8
	adds r0, r4, #0	@ 00053ca8 201c
.org 0x53caa
	adds r0, #164	@ 00053caa a430
.org 0x53cac
	movs r1, #0	@ 00053cac 0021
.org 0x53cae
	ldrsh r0, [r0, r1]	@ 00053cae 405e
.org 0x53cb0
	cmp r0, #0	@ 00053cb0 0028
.org 0x53cb2
	bne.n 0x53ce4	@ 00053cb2 17d1
.org 0x53cb4
	ldr r0, [pc, #36]	@ 00053cb4 0948
.org 0x53cb6
	ldrh r1, [r0, #8]	@ 00053cb6 0189
.org 0x53cb8
	movs r0, #8	@ 00053cb8 0820
.org 0x53cba
	ands r0, r1	@ 00053cba 0840
.org 0x53cbc
	cmp r0, #0	@ 00053cbc 0028
.org 0x53cbe
	bne.n 0x53ce4	@ 00053cbe 11d1
.org 0x53cc0
	ldr r1, [pc, #28]	@ 00053cc0 0749
.org 0x53cc2
	ldrb r0, [r4, #9]	@ 00053cc2 607a
.org 0x53cc4
	lsls r0, r0, #2	@ 00053cc4 8000
.org 0x53cc6
	adds r0, r0, r1	@ 00053cc6 4018
.org 0x53cc8
	movs r1, #2	@ 00053cc8 0221
.org 0x53cca
	str r1, [r4, #12]	@ 00053cca e160
.org 0x53ccc
	ldr r0, [r0, #0]	@ 00053ccc 0068
.org 0x53cce
	ldr r0, [r0, #8]	@ 00053cce 8068
.org 0x53cd0
	str r0, [r4, #20]	@ 00053cd0 6061
.org 0x53cd2
	adds r0, r4, #0	@ 00053cd2 201c
.org 0x53cd4
	bl 0x54cb8	@ 00053cd4 00f0f0ff
.org 0x53cd8
	b.n 0x53d32	@ 00053cd8 2be0
.org 0x53cda
	.byte 0x00	@ 00053cda data
.org 0x53cdb
	.byte 0x00	@ 00053cdb data
.org 0x53cdc
	.byte 0x10,0xe9,0x02,0x02	@ 00053cdc data
.org 0x53ce0
	.byte 0x70,0x7d,0x85,0x08	@ 00053ce0 data
.org 0x53ce4
	adds r0, r4, #0	@ 00053ce4 201c
.org 0x53ce6
	adds r0, #140	@ 00053ce6 8c30
.org 0x53ce8
	ldr r0, [r0, #0]	@ 00053ce8 0068
.org 0x53cea
	movs r1, #1	@ 00053cea 0121
.org 0x53cec
	ands r0, r1	@ 00053cec 0840
.org 0x53cee
	cmp r0, #0	@ 00053cee 0028
.org 0x53cf0
	beq.n 0x53d04	@ 00053cf0 08d0
.org 0x53cf2
	ldr r0, [r4, #44]	@ 00053cf2 e06a
.org 0x53cf4
	cmp r0, #0	@ 00053cf4 0028
.org 0x53cf6
	bne.n 0x53d0a	@ 00053cf6 08d1
.org 0x53cf8
	ldr r2, [pc, #60]	@ 00053cf8 0f4a
.org 0x53cfa
	movs r0, #9	@ 00053cfa 0920
.org 0x53cfc
	adds r1, r4, #0	@ 00053cfc 211c
.org 0x53cfe
	bl 0x2adac	@ 00053cfe d7f755f8
.org 0x53d02
	str r0, [r4, #44]	@ 00053d02 e062
.org 0x53d04
	ldr r0, [r4, #44]	@ 00053d04 e06a
.org 0x53d06
	cmp r0, #0	@ 00053d06 0028
.org 0x53d08
	beq.n 0x53d16	@ 00053d08 05d0
.org 0x53d0a
	bl 0x2b3e4	@ 00053d0a d7f76bfb
.org 0x53d0e
	cmp r0, #0	@ 00053d0e 0028
.org 0x53d10
	beq.n 0x53d16	@ 00053d10 01d0
.org 0x53d12
	movs r0, #0	@ 00053d12 0020
.org 0x53d14
	str r0, [r4, #44]	@ 00053d14 e062
.org 0x53d16
	ldr r0, [pc, #36]	@ 00053d16 0948
.org 0x53d18
	ldrb r1, [r4, #13]	@ 00053d18 617b
.org 0x53d1a
	lsls r1, r1, #2	@ 00053d1a 8900
.org 0x53d1c
	adds r1, r1, r0	@ 00053d1c 0918
.org 0x53d1e
	ldr r1, [r1, #0]	@ 00053d1e 0968
.org 0x53d20
	adds r0, r4, #0	@ 00053d20 201c
.org 0x53d22
	bl 0x128f80	@ 00053d22 d5f02df9
.org 0x53d26
	adds r0, r4, #0	@ 00053d26 201c
.org 0x53d28
	bl 0x5524c	@ 00053d28 01f090fa
.org 0x53d2c
	adds r0, r4, #0	@ 00053d2c 201c
