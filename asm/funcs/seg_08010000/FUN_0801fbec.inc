@ FUN_0801fbec  entry 0x0801fbec  size 232
.thumb
.org 0x1fbec
FUN_0801fbec:
	push {r4, r5, r6, r7, lr}	@ 0001fbec f0b5
.org 0x1fbee
	sub sp, #16	@ 0001fbee 84b0
.org 0x1fbf0
	adds r7, r0, #0	@ 0001fbf0 071c
.org 0x1fbf2
	ldrb r0, [r7, #28]	@ 0001fbf2 387f
.org 0x1fbf4
	adds r1, r0, #0	@ 0001fbf4 011c
.org 0x1fbf6
	cmp r1, #0	@ 0001fbf6 0029
.org 0x1fbf8
	bne.n 0x1fc00	@ 0001fbf8 02d1
.org 0x1fbfa
	strh r1, [r7, #34]	@ 0001fbfa 7984
.org 0x1fbfc
	adds r0, #1	@ 0001fbfc 0130
.org 0x1fbfe
	strb r0, [r7, #28]	@ 0001fbfe 3877
.org 0x1fc00
	ldr r2, [r7, #72]	@ 0001fc00 ba6c
.org 0x1fc02
	ldr r1, [r2, #0]	@ 0001fc02 1168
.org 0x1fc04
	ldr r0, [r7, #76]	@ 0001fc04 f86c
.org 0x1fc06
	adds r5, r1, r0	@ 0001fc06 0d18
.org 0x1fc08
	ldr r1, [r2, #4]	@ 0001fc08 5168
.org 0x1fc0a
	ldr r0, [r7, #84]	@ 0001fc0a 786d
.org 0x1fc0c
	adds r6, r1, r0	@ 0001fc0c 0e18
.org 0x1fc0e
	ldr r0, [r7, #48]	@ 0001fc0e 386b
.org 0x1fc10
	str r0, [sp, #0]	@ 0001fc10 0090
.org 0x1fc12
	ldr r1, [r7, #52]	@ 0001fc12 796b
.org 0x1fc14
	str r1, [sp, #4]	@ 0001fc14 0191
.org 0x1fc16
	subs r2, r0, r5	@ 0001fc16 421b
.org 0x1fc18
	cmp r2, #0	@ 0001fc18 002a
.org 0x1fc1a
	ble.n 0x1fc20	@ 0001fc1a 01dd
.org 0x1fc1c
	subs r0, r0, r2	@ 0001fc1c 801a
.org 0x1fc1e
	str r0, [sp, #0]	@ 0001fc1e 0090
.org 0x1fc20
	cmp r2, #0	@ 0001fc20 002a
.org 0x1fc22
	bge.n 0x1fc2a	@ 0001fc22 02da
.org 0x1fc24
	ldr r0, [sp, #0]	@ 0001fc24 0098
.org 0x1fc26
	subs r0, r0, r2	@ 0001fc26 801a
.org 0x1fc28
	str r0, [sp, #0]	@ 0001fc28 0090
.org 0x1fc2a
	subs r1, r1, r6	@ 0001fc2a 891b
.org 0x1fc2c
	ldr r0, [pc, #52]	@ 0001fc2c 0d48
.org 0x1fc2e
	cmp r1, r0	@ 0001fc2e 8142
.org 0x1fc30
	ble.n 0x1fc3c	@ 0001fc30 04dd
.org 0x1fc32
	ldr r0, [sp, #4]	@ 0001fc32 0198
.org 0x1fc34
	ldr r2, [pc, #44]	@ 0001fc34 0b4a
.org 0x1fc36
	adds r0, r0, r2	@ 0001fc36 8018
.org 0x1fc38
	subs r0, r0, r1	@ 0001fc38 401a
.org 0x1fc3a
	str r0, [sp, #4]	@ 0001fc3a 0190
.org 0x1fc3c
	ldr r0, [pc, #40]	@ 0001fc3c 0a48
.org 0x1fc3e
	cmp r1, r0	@ 0001fc3e 8142
.org 0x1fc40
	bge.n 0x1fc4c	@ 0001fc40 04da
.org 0x1fc42
	ldr r0, [sp, #4]	@ 0001fc42 0198
.org 0x1fc44
	ldr r2, [pc, #32]	@ 0001fc44 084a
.org 0x1fc46
	adds r0, r0, r2	@ 0001fc46 8018
.org 0x1fc48
	subs r0, r0, r1	@ 0001fc48 401a
.org 0x1fc4a
	str r0, [sp, #4]	@ 0001fc4a 0190
.org 0x1fc4c
	add r4, sp, #8	@ 0001fc4c 02ac
.org 0x1fc4e
	mov r0, sp	@ 0001fc4e 6846
.org 0x1fc50
	adds r1, r4, #0	@ 0001fc50 211c
.org 0x1fc52
	bl 0x70c8	@ 0001fc52 e7f739fa
.org 0x1fc56
	ldrb r1, [r7, #25]	@ 0001fc56 797e
.org 0x1fc58
	movs r0, #16	@ 0001fc58 1020
.org 0x1fc5a
	ands r0, r1	@ 0001fc5a 0840
.org 0x1fc5c
	cmp r0, #0	@ 0001fc5c 0028
.org 0x1fc5e
	beq.n 0x1fc6c	@ 0001fc5e 05d0
.org 0x1fc60
	ldr r5, [sp, #0]	@ 0001fc60 009d
.org 0x1fc62
	b.n 0x1fc72	@ 0001fc62 06e0
.org 0x1fc64
	.byte 0x00,0xf0,0xff,0xff	@ 0001fc64 data
.org 0x1fc68
	.byte 0x00,0xe8,0xff,0xff	@ 0001fc68 data
.org 0x1fc6c
	ldr r1, [sp, #0]	@ 0001fc6c 0099
.org 0x1fc6e
	ldr r0, [sp, #8]	@ 0001fc6e 0298
.org 0x1fc70
	adds r5, r1, r0	@ 0001fc70 0d18
.org 0x1fc72
	ldrb r1, [r7, #25]	@ 0001fc72 797e
.org 0x1fc74
	movs r0, #32	@ 0001fc74 2020
.org 0x1fc76
	ands r0, r1	@ 0001fc76 0840
.org 0x1fc78
	adds r2, r1, #0	@ 0001fc78 0a1c
.org 0x1fc7a
	cmp r0, #0	@ 0001fc7a 0028
.org 0x1fc7c
	beq.n 0x1fc82	@ 0001fc7c 01d0
.org 0x1fc7e
	ldr r6, [sp, #4]	@ 0001fc7e 019e
.org 0x1fc80
	b.n 0x1fc88	@ 0001fc80 02e0
.org 0x1fc82
	ldr r1, [sp, #4]	@ 0001fc82 0199
.org 0x1fc84
	ldr r0, [r4, #4]	@ 0001fc84 6068
.org 0x1fc86
	adds r6, r1, r0	@ 0001fc86 0e18
.org 0x1fc88
	movs r0, #8	@ 0001fc88 0820
.org 0x1fc8a
	ands r0, r2	@ 0001fc8a 1040
.org 0x1fc8c
	cmp r0, #0	@ 0001fc8c 0028
.org 0x1fc8e
	beq.n 0x1fc96	@ 0001fc8e 02d0
.org 0x1fc90
	str r6, [r7, #52]	@ 0001fc90 7e63
.org 0x1fc92
	str r5, [r7, #48]	@ 0001fc92 3d63
.org 0x1fc94
	b.n 0x1fcd2	@ 0001fc94 1de0
.org 0x1fc96
	ldr r1, [r7, #48]	@ 0001fc96 396b
.org 0x1fc98
	movs r2, #128	@ 0001fc98 8022
.org 0x1fc9a
	lsls r2, r2, #3	@ 0001fc9a d200
.org 0x1fc9c
	adds r0, r1, r2	@ 0001fc9c 8818
.org 0x1fc9e
	cmp r0, r5	@ 0001fc9e a842
.org 0x1fca0
	blt.n 0x1fcaa	@ 0001fca0 03db
.org 0x1fca2
	ldr r2, [pc, #12]	@ 0001fca2 034a
.org 0x1fca4
	adds r0, r1, r2	@ 0001fca4 8818
.org 0x1fca6
	cmp r0, r5	@ 0001fca6 a842
.org 0x1fca8
	ble.n 0x1fcb4	@ 0001fca8 04dd
.org 0x1fcaa
	str r0, [r7, #48]	@ 0001fcaa 3863
.org 0x1fcac
	b.n 0x1fcb6	@ 0001fcac 03e0
.org 0x1fcae
	.byte 0x00	@ 0001fcae data
.org 0x1fcaf
	.byte 0x00	@ 0001fcaf data
.org 0x1fcb0
	.byte 0x00,0xfc,0xff,0xff	@ 0001fcb0 data
.org 0x1fcb4
	str r5, [r7, #48]	@ 0001fcb4 3d63
.org 0x1fcb6
	ldr r1, [r7, #52]	@ 0001fcb6 796b
.org 0x1fcb8
	subs r0, r1, r6	@ 0001fcb8 881b
.org 0x1fcba
	cmp r0, #0	@ 0001fcba 0028
.org 0x1fcbc
	blt.n 0x1fcc6	@ 0001fcbc 03db
.org 0x1fcbe
	lsls r0, r1, #3	@ 0001fcbe c800
.org 0x1fcc0
	subs r0, r0, r1	@ 0001fcc0 401a
.org 0x1fcc2
	adds r0, r0, r6	@ 0001fcc2 8019
.org 0x1fcc4
	b.n 0x1fcce	@ 0001fcc4 03e0
.org 0x1fcc6
	lsls r0, r1, #3	@ 0001fcc6 c800
.org 0x1fcc8
	subs r0, r0, r1	@ 0001fcc8 401a
.org 0x1fcca
	adds r0, r0, r6	@ 0001fcca 8019
.org 0x1fccc
	adds r0, #7	@ 0001fccc 0730
.org 0x1fcce
	asrs r0, r0, #3	@ 0001fcce c010
.org 0x1fcd0
	str r0, [r7, #52]	@ 0001fcd0 7863
.org 0x1fcd2
	ldrb r1, [r7, #25]	@ 0001fcd2 797e
