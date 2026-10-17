@ FUN_08083da0  entry 0x08083da0  size 170
.thumb
.org 0x83da0
FUN_08083da0:
	push {r4, r5, r6, r7, lr}	@ 00083da0 f0b5
.org 0x83da2
	sub sp, #8	@ 00083da2 82b0
.org 0x83da4
	adds r4, r0, #0	@ 00083da4 041c
.org 0x83da6
	ldrb r1, [r4, #14]	@ 00083da6 a17b
.org 0x83da8
	cmp r1, #0	@ 00083da8 0029
.org 0x83daa
	bne.n 0x83e36	@ 00083daa 44d1
.org 0x83dac
	adds r0, #180	@ 00083dac b430
.org 0x83dae
	ldrb r5, [r0, #10]	@ 00083dae 857a
.org 0x83db0
	adds r7, r0, #0	@ 00083db0 071c
.org 0x83db2
	cmp r5, #0	@ 00083db2 002d
.org 0x83db4
	beq.n 0x83dbe	@ 00083db4 03d0
.org 0x83db6
	strb r1, [r4, #13]	@ 00083db6 6173
.org 0x83db8
	adds r6, r4, #0	@ 00083db8 261c
.org 0x83dba
	adds r6, #140	@ 00083dba 8c36
.org 0x83dbc
	b.n 0x83e16	@ 00083dbc 2be0
.org 0x83dbe
	adds r1, r4, #0	@ 00083dbe 211c
.org 0x83dc0
	adds r1, #140	@ 00083dc0 8c31
.org 0x83dc2
	ldr r2, [r1, #0]	@ 00083dc2 0a68
.org 0x83dc4
	movs r0, #128	@ 00083dc4 8020
.org 0x83dc6
	lsls r0, r0, #9	@ 00083dc6 4002
.org 0x83dc8
	ands r2, r0	@ 00083dc8 0240
.org 0x83dca
	adds r6, r1, #0	@ 00083dca 0e1c
.org 0x83dcc
	cmp r2, #0	@ 00083dcc 002a
.org 0x83dce
	beq.n 0x83e14	@ 00083dce 21d0
.org 0x83dd0
	ldr r0, [r4, #84]	@ 00083dd0 606d
.org 0x83dd2
	str r0, [sp, #0]	@ 00083dd2 0090
.org 0x83dd4
	ldr r0, [r4, #88]	@ 00083dd4 a06d
.org 0x83dd6
	ldr r1, [pc, #28]	@ 00083dd6 0749
.org 0x83dd8
	adds r0, r0, r1	@ 00083dd8 4018
.org 0x83dda
	str r0, [sp, #4]	@ 00083dda 0190
.org 0x83ddc
	movs r2, #128	@ 00083ddc 8022
.org 0x83dde
	lsls r2, r2, #2	@ 00083dde 9200
.org 0x83de0
	ldrb r3, [r7, #8]	@ 00083de0 3b7a
.org 0x83de2
	movs r0, #0	@ 00083de2 0020
.org 0x83de4
	mov r1, sp	@ 00083de4 6946
.org 0x83de6
	bl 0xd0dc4	@ 00083de6 4cf0edff
.org 0x83dea
	ldr r0, [r4, #44]	@ 00083dea e06a
.org 0x83dec
	cmp r0, #0	@ 00083dec 0028
.org 0x83dee
	beq.n 0x83df8	@ 00083dee 03d0
.org 0x83df0
	strb r5, [r4, #13]	@ 00083df0 6573
.org 0x83df2
	b.n 0x83e16	@ 00083df2 10e0
.org 0x83df4
	.byte 0x00,0xec,0xff,0xff	@ 00083df4 data
.org 0x83df8
	ldr r0, [r4, #84]	@ 00083df8 606d
.org 0x83dfa
	ldr r1, [r4, #88]	@ 00083dfa a16d
.org 0x83dfc
	movs r2, #176	@ 00083dfc b022
.org 0x83dfe
	lsls r2, r2, #4	@ 00083dfe 1201
.org 0x83e00
	adds r1, r1, r2	@ 00083e00 8918
.org 0x83e02
	bl 0x7c7c	@ 00083e02 83f73bff
.org 0x83e06
	lsls r0, r0, #16	@ 00083e06 0004
.org 0x83e08
	lsrs r0, r0, #16	@ 00083e08 000c
.org 0x83e0a
	cmp r0, #0	@ 00083e0a 0028
.org 0x83e0c
	beq.n 0x83e10	@ 00083e0c 00d0
.org 0x83e0e
	movs r0, #2	@ 00083e0e 0220
.org 0x83e10
	strb r0, [r4, #13]	@ 00083e10 6073
.org 0x83e12
	b.n 0x83e16	@ 00083e12 00e0
.org 0x83e14
	strb r2, [r4, #13]	@ 00083e14 6273
.org 0x83e16
	movs r1, #0	@ 00083e16 0021
.org 0x83e18
	str r1, [r6, #0]	@ 00083e18 3160
.org 0x83e1a
	adds r0, r4, #0	@ 00083e1a 201c
.org 0x83e1c
	adds r0, #144	@ 00083e1c 9030
.org 0x83e1e
	str r1, [r0, #0]	@ 00083e1e 0160
.org 0x83e20
	adds r0, #4	@ 00083e20 0430
.org 0x83e22
	strb r1, [r0, #0]	@ 00083e22 0170
.org 0x83e24
	ldrb r1, [r4, #10]	@ 00083e24 a17a
.org 0x83e26
	movs r0, #251	@ 00083e26 fb20
.org 0x83e28
	ands r0, r1	@ 00083e28 0840
.org 0x83e2a
	strb r0, [r4, #10]	@ 00083e2a a072
.org 0x83e2c
	movs r0, #1	@ 00083e2c 0120
.org 0x83e2e
	strb r0, [r7, #9]	@ 00083e2e 7872
.org 0x83e30
	ldrb r0, [r4, #14]	@ 00083e30 a07b
.org 0x83e32
	adds r0, #1	@ 00083e32 0130
.org 0x83e34
	strb r0, [r4, #14]	@ 00083e34 a073
.org 0x83e36
	ldr r0, [pc, #24]	@ 00083e36 0648
.org 0x83e38
	ldrb r1, [r4, #13]	@ 00083e38 617b
.org 0x83e3a
	lsls r1, r1, #2	@ 00083e3a 8900
.org 0x83e3c
	adds r1, r1, r0	@ 00083e3c 0918
.org 0x83e3e
	ldr r1, [r1, #0]	@ 00083e3e 0968
.org 0x83e40
	adds r0, r4, #0	@ 00083e40 201c
.org 0x83e42
	bl 0x128f80	@ 00083e42 a5f09df8
.org 0x83e46
	add sp, #8	@ 00083e46 02b0
.org 0x83e48
	pop {r4, r5, r6, r7}	@ 00083e48 f0bc
