@ FUN_08070e20  entry 0x08070e20  size 138
.thumb
.org 0x70e20
FUN_08070e20:
	push {r4, r5, r6, lr}	@ 00070e20 70b5
.org 0x70e22
	adds r6, r0, #0	@ 00070e22 061c
.org 0x70e24
	ldrb r0, [r6, #15]	@ 00070e24 f07b
.org 0x70e26
	cmp r0, #0	@ 00070e26 0028
.org 0x70e28
	bne.n 0x70e38	@ 00070e28 06d1
.org 0x70e2a
	adds r0, r6, #0	@ 00070e2a 301c
.org 0x70e2c
	movs r1, #1	@ 00070e2c 0121
.org 0x70e2e
	bl 0x736c4	@ 00070e2e 02f049fc
.org 0x70e32
	ldrb r0, [r6, #15]	@ 00070e32 f07b
.org 0x70e34
	adds r0, #1	@ 00070e34 0130
.org 0x70e36
	strb r0, [r6, #15]	@ 00070e36 f073
.org 0x70e38
	adds r0, r6, #0	@ 00070e38 301c
.org 0x70e3a
	bl 0x1cff0	@ 00070e3a acf7d9f8
.org 0x70e3e
	adds r0, r6, #0	@ 00070e3e 301c
.org 0x70e40
	adds r0, #116	@ 00070e40 7430
.org 0x70e42
	ldr r4, [pc, #104]	@ 00070e42 1a4c
.org 0x70e44
	ldr r3, [pc, #104]	@ 00070e44 1a4b
.org 0x70e46
	adds r1, r6, #0	@ 00070e46 311c
.org 0x70e48
	adds r1, #184	@ 00070e48 b831
.org 0x70e4a
	ldrb r2, [r1, #0]	@ 00070e4a 0a78
.org 0x70e4c
	lsls r1, r2, #1	@ 00070e4c 5100
.org 0x70e4e
	adds r1, r1, r3	@ 00070e4e c918
.org 0x70e50
	ldrh r1, [r1, #0]	@ 00070e50 0988
.org 0x70e52
	lsls r1, r1, #2	@ 00070e52 8900
.org 0x70e54
	adds r1, r1, r4	@ 00070e54 0919
.org 0x70e56
	adds r3, r6, #0	@ 00070e56 331c
.org 0x70e58
	adds r3, #113	@ 00070e58 7133
.org 0x70e5a
	movs r5, #0	@ 00070e5a 0025
.org 0x70e5c
	ldrsb r5, [r3, r5]	@ 00070e5c 5d57
.org 0x70e5e
	ldr r1, [r1, #0]	@ 00070e5e 0968
.org 0x70e60
	lsls r3, r5, #2	@ 00070e60 ab00
.org 0x70e62
	adds r3, r3, r1	@ 00070e62 5b18
.org 0x70e64
	ldr r4, [pc, #76]	@ 00070e64 134c
.org 0x70e66
	adds r1, r6, #0	@ 00070e66 311c
.org 0x70e68
	adds r1, #185	@ 00070e68 b931
.org 0x70e6a
	ldrb r1, [r1, #0]	@ 00070e6a 0978
.org 0x70e6c
	lsls r1, r1, #2	@ 00070e6c 8900
.org 0x70e6e
	adds r1, r1, r4	@ 00070e6e 0919
.org 0x70e70
	ldr r1, [r1, #0]	@ 00070e70 0968
.org 0x70e72
	lsls r2, r2, #2	@ 00070e72 9200
.org 0x70e74
	adds r2, r2, r1	@ 00070e74 5218
.org 0x70e76
	ldr r1, [r2, #0]	@ 00070e76 1168
.org 0x70e78
	adds r1, r1, r5	@ 00070e78 4919
.org 0x70e7a
	ldrb r1, [r1, #0]	@ 00070e7a 0978
.org 0x70e7c
	lsls r2, r1, #1	@ 00070e7c 4a00
.org 0x70e7e
	adds r2, r2, r1	@ 00070e7e 5218
.org 0x70e80
	lsls r2, r2, #3	@ 00070e80 d200
.org 0x70e82
	ldr r1, [r3, #0]	@ 00070e82 1968
.org 0x70e84
	adds r1, r1, r2	@ 00070e84 8918
.org 0x70e86
	bl 0x5784	@ 00070e86 94f77dfc
.org 0x70e8a
	adds r0, r6, #0	@ 00070e8a 301c
.org 0x70e8c
	bl 0x73a68	@ 00070e8c 02f0ecfd
.org 0x70e90
	adds r0, r6, #0	@ 00070e90 301c
.org 0x70e92
	adds r0, #115	@ 00070e92 7330
.org 0x70e94
	ldrb r0, [r0, #0]	@ 00070e94 0078
.org 0x70e96
	cmp r0, #3	@ 00070e96 0328
.org 0x70e98
	bne.n 0x70ea4	@ 00070e98 04d1
.org 0x70e9a
	ldrb r0, [r6, #14]	@ 00070e9a b07b
.org 0x70e9c
	adds r0, #1	@ 00070e9c 0130
.org 0x70e9e
	movs r1, #0	@ 00070e9e 0021
.org 0x70ea0
	strb r0, [r6, #14]	@ 00070ea0 b073
.org 0x70ea2
	strb r1, [r6, #15]	@ 00070ea2 f173
.org 0x70ea4
	pop {r4, r5, r6}	@ 00070ea4 70bc
.org 0x70ea6
	pop {r0}	@ 00070ea6 01bc
.org 0x70ea8
	bx r0	@ 00070ea8 0047
