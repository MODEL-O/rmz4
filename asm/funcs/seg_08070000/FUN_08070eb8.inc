@ FUN_08070eb8  entry 0x08070eb8  size 202
.thumb
.org 0x70eb8
FUN_08070eb8:
	push {r4, r5, r6, lr}	@ 00070eb8 70b5
.org 0x70eba
	adds r6, r0, #0	@ 00070eba 061c
.org 0x70ebc
	ldrb r0, [r6, #10]	@ 00070ebc b07a
.org 0x70ebe
	lsrs r4, r0, #4	@ 00070ebe 0409
.org 0x70ec0
	movs r5, #1	@ 00070ec0 0125
.org 0x70ec2
	ands r4, r5	@ 00070ec2 2c40
.org 0x70ec4
	ldrb r0, [r6, #15]	@ 00070ec4 f07b
.org 0x70ec6
	cmp r0, #0	@ 00070ec6 0028
.org 0x70ec8
	bne.n 0x70f10	@ 00070ec8 22d1
.org 0x70eca
	adds r0, r6, #0	@ 00070eca 301c
.org 0x70ecc
	movs r1, #2	@ 00070ecc 0221
.org 0x70ece
	bl 0x736c4	@ 00070ece 02f0f9fb
.org 0x70ed2
	adds r3, r4, #1	@ 00070ed2 631c
.org 0x70ed4
	movs r0, #1	@ 00070ed4 0120
.org 0x70ed6
	ands r3, r0	@ 00070ed6 0340
.org 0x70ed8
	adds r1, r3, #0	@ 00070ed8 191c
.org 0x70eda
	ands r1, r5	@ 00070eda 2940
.org 0x70edc
	adds r0, r6, #0	@ 00070edc 301c
.org 0x70ede
	adds r0, #76	@ 00070ede 4c30
.org 0x70ee0
	strb r1, [r0, #0]	@ 00070ee0 0170
.org 0x70ee2
	adds r4, r6, #0	@ 00070ee2 341c
.org 0x70ee4
	adds r4, #74	@ 00070ee4 4a34
.org 0x70ee6
	lsls r1, r1, #4	@ 00070ee6 0901
.org 0x70ee8
	ldrb r2, [r4, #0]	@ 00070ee8 2278
.org 0x70eea
	movs r0, #17	@ 00070eea 1120
.org 0x70eec
	negs r0, r0	@ 00070eec 4042
.org 0x70eee
	ands r0, r2	@ 00070eee 1040
.org 0x70ef0
	orrs r0, r1	@ 00070ef0 0843
.org 0x70ef2
	strb r0, [r4, #0]	@ 00070ef2 2070
.org 0x70ef4
	ands r3, r5	@ 00070ef4 2b40
.org 0x70ef6
	cmp r3, #0	@ 00070ef6 002b
.org 0x70ef8
	beq.n 0x70f02	@ 00070ef8 03d0
.org 0x70efa
	ldrb r0, [r6, #10]	@ 00070efa b07a
.org 0x70efc
	movs r1, #16	@ 00070efc 1021
.org 0x70efe
	orrs r0, r1	@ 00070efe 0843
.org 0x70f00
	b.n 0x70f08	@ 00070f00 02e0
.org 0x70f02
	ldrb r1, [r6, #10]	@ 00070f02 b17a
.org 0x70f04
	movs r0, #239	@ 00070f04 ef20
.org 0x70f06
	ands r0, r1	@ 00070f06 0840
.org 0x70f08
	strb r0, [r6, #10]	@ 00070f08 b072
.org 0x70f0a
	ldrb r0, [r6, #15]	@ 00070f0a f07b
.org 0x70f0c
	adds r0, #1	@ 00070f0c 0130
.org 0x70f0e
	strb r0, [r6, #15]	@ 00070f0e f073
.org 0x70f10
	adds r0, r6, #0	@ 00070f10 301c
.org 0x70f12
	bl 0x1cff0	@ 00070f12 acf76df8
.org 0x70f16
	adds r0, r6, #0	@ 00070f16 301c
.org 0x70f18
	adds r0, #116	@ 00070f18 7430
.org 0x70f1a
	ldr r4, [pc, #104]	@ 00070f1a 1a4c
.org 0x70f1c
	ldr r3, [pc, #104]	@ 00070f1c 1a4b
.org 0x70f1e
	adds r1, r6, #0	@ 00070f1e 311c
.org 0x70f20
	adds r1, #184	@ 00070f20 b831
.org 0x70f22
	ldrb r2, [r1, #0]	@ 00070f22 0a78
.org 0x70f24
	lsls r1, r2, #1	@ 00070f24 5100
.org 0x70f26
	adds r1, r1, r3	@ 00070f26 c918
.org 0x70f28
	ldrh r1, [r1, #0]	@ 00070f28 0988
.org 0x70f2a
	lsls r1, r1, #2	@ 00070f2a 8900
.org 0x70f2c
	adds r1, r1, r4	@ 00070f2c 0919
.org 0x70f2e
	adds r3, r6, #0	@ 00070f2e 331c
.org 0x70f30
	adds r3, #113	@ 00070f30 7133
.org 0x70f32
	movs r5, #0	@ 00070f32 0025
.org 0x70f34
	ldrsb r5, [r3, r5]	@ 00070f34 5d57
.org 0x70f36
	ldr r1, [r1, #0]	@ 00070f36 0968
.org 0x70f38
	lsls r3, r5, #2	@ 00070f38 ab00
.org 0x70f3a
	adds r3, r3, r1	@ 00070f3a 5b18
.org 0x70f3c
	ldr r4, [pc, #76]	@ 00070f3c 134c
.org 0x70f3e
	adds r1, r6, #0	@ 00070f3e 311c
.org 0x70f40
	adds r1, #185	@ 00070f40 b931
.org 0x70f42
	ldrb r1, [r1, #0]	@ 00070f42 0978
.org 0x70f44
	lsls r1, r1, #2	@ 00070f44 8900
.org 0x70f46
	adds r1, r1, r4	@ 00070f46 0919
.org 0x70f48
	ldr r1, [r1, #0]	@ 00070f48 0968
.org 0x70f4a
	lsls r2, r2, #2	@ 00070f4a 9200
.org 0x70f4c
	adds r2, r2, r1	@ 00070f4c 5218
.org 0x70f4e
	ldr r1, [r2, #0]	@ 00070f4e 1168
.org 0x70f50
	adds r1, r1, r5	@ 00070f50 4919
.org 0x70f52
	ldrb r1, [r1, #0]	@ 00070f52 0978
.org 0x70f54
	lsls r2, r1, #1	@ 00070f54 4a00
.org 0x70f56
	adds r2, r2, r1	@ 00070f56 5218
.org 0x70f58
	lsls r2, r2, #3	@ 00070f58 d200
.org 0x70f5a
	ldr r1, [r3, #0]	@ 00070f5a 1968
.org 0x70f5c
	adds r1, r1, r2	@ 00070f5c 8918
.org 0x70f5e
	bl 0x5784	@ 00070f5e 94f711fc
.org 0x70f62
	adds r0, r6, #0	@ 00070f62 301c
.org 0x70f64
	bl 0x73a68	@ 00070f64 02f080fd
.org 0x70f68
	adds r0, r6, #0	@ 00070f68 301c
.org 0x70f6a
	adds r0, #115	@ 00070f6a 7330
.org 0x70f6c
	ldrb r0, [r0, #0]	@ 00070f6c 0078
.org 0x70f6e
	cmp r0, #3	@ 00070f6e 0328
.org 0x70f70
	bne.n 0x70f7c	@ 00070f70 04d1
.org 0x70f72
	ldrb r0, [r6, #14]	@ 00070f72 b07b
.org 0x70f74
	adds r0, #1	@ 00070f74 0130
.org 0x70f76
	movs r1, #0	@ 00070f76 0021
.org 0x70f78
	strb r0, [r6, #14]	@ 00070f78 b073
.org 0x70f7a
	strb r1, [r6, #15]	@ 00070f7a f173
.org 0x70f7c
	pop {r4, r5, r6}	@ 00070f7c 70bc
.org 0x70f7e
	pop {r0}	@ 00070f7e 01bc
.org 0x70f80
	bx r0	@ 00070f80 0047
