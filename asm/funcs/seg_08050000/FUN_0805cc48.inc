@ FUN_0805cc48  entry 0x0805cc48  size 268
.thumb
.org 0x5cc48
FUN_0805cc48:
	push {r4, r5, r6, r7, lr}	@ 0005cc48 f0b5
.org 0x5cc4a
	mov r7, r8	@ 0005cc4a 4746
.org 0x5cc4c
	push {r7}	@ 0005cc4c 80b4
.org 0x5cc4e
	sub sp, #8	@ 0005cc4e 82b0
.org 0x5cc50
	adds r5, r0, #0	@ 0005cc50 051c
.org 0x5cc52
	ldr r1, [pc, #232]	@ 0005cc52 3a49
.org 0x5cc54
	mov r0, sp	@ 0005cc54 6846
.org 0x5cc56
	movs r2, #6	@ 0005cc56 0622
.org 0x5cc58
	bl 0x129258	@ 0005cc58 ccf0fefa
.org 0x5cc5c
	ldrb r2, [r5, #16]	@ 0005cc5c 2a7c
.org 0x5cc5e
	adds r0, r5, #0	@ 0005cc5e 281c
.org 0x5cc60
	adds r0, #187	@ 0005cc60 bb30
.org 0x5cc62
	ldrb r0, [r0, #0]	@ 0005cc62 0078
.org 0x5cc64
	mov r8, r0	@ 0005cc64 8046
.org 0x5cc66
	adds r0, r5, #0	@ 0005cc66 281c
.org 0x5cc68
	adds r0, #188	@ 0005cc68 bc30
.org 0x5cc6a
	ldrb r7, [r0, #0]	@ 0005cc6a 0778
.org 0x5cc6c
	ldrb r0, [r5, #15]	@ 0005cc6c e87b
.org 0x5cc6e
	adds r1, r0, #0	@ 0005cc6e 011c
.org 0x5cc70
	cmp r1, #0	@ 0005cc70 0029
.org 0x5cc72
	bne.n 0x5cc7a	@ 0005cc72 02d1
.org 0x5cc74
	strb r1, [r5, #18]	@ 0005cc74 a974
.org 0x5cc76
	adds r0, #1	@ 0005cc76 0130
.org 0x5cc78
	strb r0, [r5, #15]	@ 0005cc78 e873
.org 0x5cc7a
	ldrb r0, [r5, #18]	@ 0005cc7a a87c
.org 0x5cc7c
	cmp r0, #0	@ 0005cc7c 0028
.org 0x5cc7e
	bne.n 0x5ccae	@ 0005cc7e 16d1
.org 0x5cc80
	adds r6, r5, #0	@ 0005cc80 2e1c
.org 0x5cc82
	adds r6, #204	@ 0005cc82 cc36
.org 0x5cc84
	ldr r0, [r6, #0]	@ 0005cc84 3068
.org 0x5cc86
	ldrb r4, [r0, #13]	@ 0005cc86 447b
.org 0x5cc88
	cmp r4, #1	@ 0005cc88 012c
.org 0x5cc8a
	bne.n 0x5ccae	@ 0005cc8a 10d1
.org 0x5cc8c
	adds r0, #180	@ 0005cc8c b430
.org 0x5cc8e
	ldrb r0, [r0, #0]	@ 0005cc8e 0078
.org 0x5cc90
	cmp r0, #0	@ 0005cc90 0028
.org 0x5cc92
	bne.n 0x5ccae	@ 0005cc92 0cd1
.org 0x5cc94
	lsls r0, r2, #1	@ 0005cc94 5000
.org 0x5cc96
	add r0, sp	@ 0005cc96 6844
.org 0x5cc98
	ldrb r1, [r0, #0]	@ 0005cc98 0178
.org 0x5cc9a
	adds r0, r5, #0	@ 0005cc9a 281c
.org 0x5cc9c
	bl 0x5ee6c	@ 0005cc9c 02f0e6f8
.org 0x5cca0
	ldr r0, [r6, #0]	@ 0005cca0 3068
.org 0x5cca2
	adds r0, #180	@ 0005cca2 b430
.org 0x5cca4
	strb r4, [r0, #0]	@ 0005cca4 0470
.org 0x5cca6
	ldr r0, [r6, #0]	@ 0005cca6 3068
.org 0x5cca8
	adds r0, #181	@ 0005cca8 b530
.org 0x5ccaa
	strb r4, [r0, #0]	@ 0005ccaa 0470
.org 0x5ccac
	strb r4, [r5, #18]	@ 0005ccac ac74
.org 0x5ccae
	adds r0, r5, #0	@ 0005ccae 281c
.org 0x5ccb0
	bl 0x1cff0	@ 0005ccb0 c0f79ef9
.org 0x5ccb4
	adds r0, r5, #0	@ 0005ccb4 281c
.org 0x5ccb6
	adds r0, #116	@ 0005ccb6 7430
.org 0x5ccb8
	ldr r4, [pc, #132]	@ 0005ccb8 214c
.org 0x5ccba
	ldr r3, [pc, #136]	@ 0005ccba 224b
.org 0x5ccbc
	adds r1, r5, #0	@ 0005ccbc 291c
.org 0x5ccbe
	adds r1, #184	@ 0005ccbe b831
.org 0x5ccc0
	ldrb r2, [r1, #0]	@ 0005ccc0 0a78
.org 0x5ccc2
	lsls r1, r2, #1	@ 0005ccc2 5100
.org 0x5ccc4
	adds r1, r1, r3	@ 0005ccc4 c918
.org 0x5ccc6
	ldrh r1, [r1, #0]	@ 0005ccc6 0988
.org 0x5ccc8
	lsls r1, r1, #2	@ 0005ccc8 8900
.org 0x5ccca
	adds r1, r1, r4	@ 0005ccca 0919
.org 0x5cccc
	adds r3, r5, #0	@ 0005cccc 2b1c
.org 0x5ccce
	adds r3, #113	@ 0005ccce 7133
.org 0x5ccd0
	movs r4, #0	@ 0005ccd0 0024
.org 0x5ccd2
	ldrsb r4, [r3, r4]	@ 0005ccd2 1c57
.org 0x5ccd4
	ldr r1, [r1, #0]	@ 0005ccd4 0968
.org 0x5ccd6
	lsls r3, r4, #2	@ 0005ccd6 a300
.org 0x5ccd8
	adds r3, r3, r1	@ 0005ccd8 5b18
.org 0x5ccda
	ldr r1, [pc, #108]	@ 0005ccda 1b49
.org 0x5ccdc
	lsls r2, r2, #2	@ 0005ccdc 9200
.org 0x5ccde
	adds r2, r2, r1	@ 0005ccde 5218
.org 0x5cce0
	ldr r1, [r2, #0]	@ 0005cce0 1168
.org 0x5cce2
	adds r1, r1, r4	@ 0005cce2 0919
.org 0x5cce4
	ldrb r1, [r1, #0]	@ 0005cce4 0978
.org 0x5cce6
	lsls r2, r1, #1	@ 0005cce6 4a00
.org 0x5cce8
	adds r2, r2, r1	@ 0005cce8 5218
.org 0x5ccea
	lsls r2, r2, #3	@ 0005ccea d200
.org 0x5ccec
	ldr r1, [r3, #0]	@ 0005ccec 1968
.org 0x5ccee
	adds r1, r1, r2	@ 0005ccee 8918
.org 0x5ccf0
	bl 0x5784	@ 0005ccf0 a8f748fd
.org 0x5ccf4
	ldrb r0, [r5, #18]	@ 0005ccf4 a87c
.org 0x5ccf6
	cmp r0, #0	@ 0005ccf6 0028
.org 0x5ccf8
	beq.n 0x5cd5c	@ 0005ccf8 30d0
.org 0x5ccfa
	adds r0, r5, #0	@ 0005ccfa 281c
.org 0x5ccfc
	adds r0, #204	@ 0005ccfc cc30
.org 0x5ccfe
	ldr r1, [r0, #0]	@ 0005ccfe 0168
.org 0x5cd00
	adds r2, r0, #0	@ 0005cd00 021c
.org 0x5cd02
	cmp r1, #0	@ 0005cd02 0029
.org 0x5cd04
	beq.n 0x5cd10	@ 0005cd04 04d0
.org 0x5cd06
	ldrb r0, [r1, #12]	@ 0005cd06 087b
.org 0x5cd08
	cmp r0, #1	@ 0005cd08 0128
.org 0x5cd0a
	bls.n 0x5cd10	@ 0005cd0a 01d9
.org 0x5cd0c
	movs r0, #0	@ 0005cd0c 0020
.org 0x5cd0e
	str r0, [r2, #0]	@ 0005cd0e 1060
.org 0x5cd10
	adds r0, r5, #0	@ 0005cd10 281c
.org 0x5cd12
	adds r0, #115	@ 0005cd12 7330
.org 0x5cd14
	ldrb r3, [r0, #0]	@ 0005cd14 0378
.org 0x5cd16
	cmp r3, #3	@ 0005cd16 032b
.org 0x5cd18
	bne.n 0x5cd5c	@ 0005cd18 20d1
.org 0x5cd1a
	ldr r2, [r2, #0]	@ 0005cd1a 1268
.org 0x5cd1c
	cmp r2, #0	@ 0005cd1c 002a
.org 0x5cd1e
	bne.n 0x5cd5c	@ 0005cd1e 1dd1
.org 0x5cd20
	adds r0, r7, #1	@ 0005cd20 781c
.org 0x5cd22
	lsls r0, r0, #24	@ 0005cd22 0006
.org 0x5cd24
	lsrs r7, r0, #24	@ 0005cd24 070e
.org 0x5cd26
	ldr r1, [pc, #36]	@ 0005cd26 0949
.org 0x5cd28
	mov r4, r8	@ 0005cd28 4446
.org 0x5cd2a
	lsls r0, r4, #2	@ 0005cd2a a000
.org 0x5cd2c
	adds r0, r0, r1	@ 0005cd2c 4018
.org 0x5cd2e
	ldr r0, [r0, #0]	@ 0005cd2e 0068
.org 0x5cd30
	adds r0, r0, r7	@ 0005cd30 c019
.org 0x5cd32
	ldrb r0, [r0, #0]	@ 0005cd32 0078
.org 0x5cd34
	cmp r0, #255	@ 0005cd34 ff28
.org 0x5cd36
	bne.n 0x5cd50	@ 0005cd36 0bd1
.org 0x5cd38
	strb r3, [r5, #14]	@ 0005cd38 ab73
.org 0x5cd3a
	b.n 0x5cd5a	@ 0005cd3a 0ee0
.org 0x5cd3c
	.byte 0x38,0x97,0x12,0x08	@ 0005cd3c data
.org 0x5cd40
	.byte 0xa8,0xa7,0x85,0x08	@ 0005cd40 data
.org 0x5cd44
	.byte 0x10,0xa9,0x85,0x08	@ 0005cd44 data
.org 0x5cd48
	.byte 0x44,0xa8,0x85,0x08	@ 0005cd48 data
.org 0x5cd4c
	.byte 0x94,0xa9,0x85,0x08	@ 0005cd4c data
.org 0x5cd50
	adds r0, r5, #0	@ 0005cd50 281c
.org 0x5cd52
	adds r0, #188	@ 0005cd52 bc30
