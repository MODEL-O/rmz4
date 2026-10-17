@ FUN_080e0be4  entry 0x080e0be4  size 132
.thumb
.org 0xe0be4
FUN_080e0be4:
	push {r4, r5, r6, lr}	@ 000e0be4 70b5
.org 0xe0be6
	adds r4, r0, #0	@ 000e0be6 041c
.org 0xe0be8
	ldrb r0, [r4, #17]	@ 000e0be8 607c
.org 0xe0bea
	subs r0, #2	@ 000e0bea 0238
.org 0xe0bec
	lsls r0, r0, #24	@ 000e0bec 0006
.org 0xe0bee
	lsrs r5, r0, #24	@ 000e0bee 050e
.org 0xe0bf0
	ldr r1, [pc, #72]	@ 000e0bf0 1249
.org 0xe0bf2
	lsls r0, r5, #1	@ 000e0bf2 6800
.org 0xe0bf4
	adds r0, r0, r1	@ 000e0bf4 4018
.org 0xe0bf6
	ldrh r1, [r0, #0]	@ 000e0bf6 0188
.org 0xe0bf8
	adds r0, r4, #0	@ 000e0bf8 201c
.org 0xe0bfa
	bl 0x1cf00	@ 000e0bfa 3cf781f9
.org 0xe0bfe
	ldr r1, [pc, #64]	@ 000e0bfe 1049
.org 0xe0c00
	lsls r3, r5, #3	@ 000e0c00 eb00
.org 0xe0c02
	adds r0, r3, r1	@ 000e0c02 5818
.org 0xe0c04
	ldr r6, [r0, #0]	@ 000e0c04 0668
.org 0xe0c06
	lsls r0, r6, #8	@ 000e0c06 3002
.org 0xe0c08
	str r0, [r4, #92]	@ 000e0c08 e065
.org 0xe0c0a
	adds r1, #4	@ 000e0c0a 0431
.org 0xe0c0c
	adds r1, r3, r1	@ 000e0c0c 5918
.org 0xe0c0e
	ldr r0, [r1, #0]	@ 000e0c0e 0868
.org 0xe0c10
	lsls r0, r0, #8	@ 000e0c10 0002
.org 0xe0c12
	str r0, [r4, #96]	@ 000e0c12 2066
.org 0xe0c14
	ldrb r1, [r4, #10]	@ 000e0c14 a17a
.org 0xe0c16
	movs r0, #16	@ 000e0c16 1020
.org 0xe0c18
	ands r0, r1	@ 000e0c18 0840
.org 0xe0c1a
	cmp r0, #0	@ 000e0c1a 0028
.org 0xe0c1c
	beq.n 0xe0c48	@ 000e0c1c 14d0
.org 0xe0c1e
	ldr r2, [pc, #36]	@ 000e0c1e 094a
.org 0xe0c20
	adds r0, r3, r2	@ 000e0c20 9818
.org 0xe0c22
	ldr r1, [r0, #0]	@ 000e0c22 0168
.org 0xe0c24
	lsls r1, r1, #8	@ 000e0c24 0902
.org 0xe0c26
	ldr r0, [r4, #84]	@ 000e0c26 606d
.org 0xe0c28
	subs r0, r0, r1	@ 000e0c28 401a
.org 0xe0c2a
	str r0, [r4, #84]	@ 000e0c2a 6065
.org 0xe0c2c
	lsls r0, r6, #16	@ 000e0c2c 3004
.org 0xe0c2e
	negs r0, r0	@ 000e0c2e 4042
.org 0xe0c30
	cmp r0, #0	@ 000e0c30 0028
.org 0xe0c32
	bge.n 0xe0c36	@ 000e0c32 00da
.org 0xe0c34
	adds r0, #255	@ 000e0c34 ff30
.org 0xe0c36
	asrs r0, r0, #8	@ 000e0c36 0012
.org 0xe0c38
	str r0, [r4, #92]	@ 000e0c38 e065
.org 0xe0c3a
	b.n 0xe0c56	@ 000e0c3a 0ce0
.org 0xe0c3c
	.byte 0x84,0x89,0x86,0x08	@ 000e0c3c data
.org 0xe0c40
	.byte 0x6c,0x89,0x86,0x08	@ 000e0c40 data
.org 0xe0c44
	.byte 0x54,0x89,0x86,0x08	@ 000e0c44 data
.org 0xe0c48
	ldr r2, [pc, #40]	@ 000e0c48 0a4a
.org 0xe0c4a
	adds r0, r3, r2	@ 000e0c4a 9818
.org 0xe0c4c
	ldr r1, [r0, #0]	@ 000e0c4c 0168
.org 0xe0c4e
	lsls r1, r1, #8	@ 000e0c4e 0902
.org 0xe0c50
	ldr r0, [r4, #84]	@ 000e0c50 606d
.org 0xe0c52
	adds r0, r0, r1	@ 000e0c52 4018
.org 0xe0c54
	str r0, [r4, #84]	@ 000e0c54 6065
.org 0xe0c56
	lsls r0, r5, #3	@ 000e0c56 e800
.org 0xe0c58
	adds r1, r2, #4	@ 000e0c58 111d
.org 0xe0c5a
	adds r0, r0, r1	@ 000e0c5a 4018
.org 0xe0c5c
	ldr r1, [r0, #0]	@ 000e0c5c 0168
.org 0xe0c5e
	lsls r1, r1, #8	@ 000e0c5e 0902
.org 0xe0c60
	ldr r0, [r4, #88]	@ 000e0c60 a06d
.org 0xe0c62
	adds r0, r0, r1	@ 000e0c62 4018
.org 0xe0c64
	str r0, [r4, #88]	@ 000e0c64 a065
.org 0xe0c66
	adds r1, r4, #0	@ 000e0c66 211c
