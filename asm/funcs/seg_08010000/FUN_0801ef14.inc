@ FUN_0801ef14  entry 0x0801ef14  size 232
.thumb
.org 0x1ef14
FUN_0801ef14:
	push {r4, r5, r6, r7, lr}	@ 0001ef14 f0b5
.org 0x1ef16
	mov r7, r9	@ 0001ef16 4f46
.org 0x1ef18
	mov r6, r8	@ 0001ef18 4646
.org 0x1ef1a
	push {r6, r7}	@ 0001ef1a c0b4
.org 0x1ef1c
	mov r8, r0	@ 0001ef1c 8046
.org 0x1ef1e
	movs r6, #0	@ 0001ef1e 0026
.org 0x1ef20
	ldr r0, [pc, #20]	@ 0001ef20 0548
.org 0x1ef22
	movs r1, #232	@ 0001ef22 e821
.org 0x1ef24
	lsls r1, r1, #1	@ 0001ef24 4900
.org 0x1ef26
	adds r0, r0, r1	@ 0001ef26 4018
.org 0x1ef28
	ldrh r0, [r0, #0]	@ 0001ef28 0088
.org 0x1ef2a
	movs r1, #127	@ 0001ef2a 7f21
.org 0x1ef2c
	ands r1, r0	@ 0001ef2c 0140
.org 0x1ef2e
	cmp r1, #7	@ 0001ef2e 0729
.org 0x1ef30
	bne.n 0x1ef3c	@ 0001ef30 04d1
.org 0x1ef32
	movs r6, #13	@ 0001ef32 0d26
.org 0x1ef34
	b.n 0x1ef5a	@ 0001ef34 11e0
.org 0x1ef36
	.byte 0x00	@ 0001ef36 data
.org 0x1ef37
	.byte 0x00	@ 0001ef37 data
.org 0x1ef38
	.byte 0xb0,0x0a,0x00,0x02	@ 0001ef38 data
.org 0x1ef3c
	cmp r1, #6	@ 0001ef3c 0629
.org 0x1ef3e
	bne.n 0x1ef44	@ 0001ef3e 01d1
.org 0x1ef40
	movs r6, #22	@ 0001ef40 1626
.org 0x1ef42
	b.n 0x1ef5a	@ 0001ef42 0ae0
.org 0x1ef44
	cmp r1, #4	@ 0001ef44 0429
.org 0x1ef46
	bne.n 0x1ef4c	@ 0001ef46 01d1
.org 0x1ef48
	movs r6, #23	@ 0001ef48 1726
.org 0x1ef4a
	b.n 0x1ef5a	@ 0001ef4a 06e0
.org 0x1ef4c
	cmp r1, #8	@ 0001ef4c 0829
.org 0x1ef4e
	bne.n 0x1ef54	@ 0001ef4e 01d1
.org 0x1ef50
	movs r6, #25	@ 0001ef50 1926
.org 0x1ef52
	b.n 0x1ef5a	@ 0001ef52 02e0
.org 0x1ef54
	cmp r1, #16	@ 0001ef54 1029
.org 0x1ef56
	bne.n 0x1ef5a	@ 0001ef56 00d1
.org 0x1ef58
	movs r6, #26	@ 0001ef58 1a26
.org 0x1ef5a
	cmp r6, #33	@ 0001ef5a 212e
.org 0x1ef5c
	bgt.n 0x1eff4	@ 0001ef5c 4adc
.org 0x1ef5e
	ldr r0, [pc, #80]	@ 0001ef5e 1448
.org 0x1ef60
	ldrh r0, [r0, #0]	@ 0001ef60 0088
.org 0x1ef62
	mov r9, r0	@ 0001ef62 8146
.org 0x1ef64
	lsls r5, r6, #3	@ 0001ef64 f500
.org 0x1ef66
	movs r0, #127	@ 0001ef66 7f20
.org 0x1ef68
	mov r2, r9	@ 0001ef68 4a46
.org 0x1ef6a
	ands r0, r2	@ 0001ef6a 1040
.org 0x1ef6c
	cmp r0, #4	@ 0001ef6c 0428
.org 0x1ef6e
	bne.n 0x1efbc	@ 0001ef6e 25d1
.org 0x1ef70
	ldr r7, [pc, #64]	@ 0001ef70 104f
.org 0x1ef72
	adds r0, r5, r7	@ 0001ef72 e819
.org 0x1ef74
	ldr r4, [r0, #0]	@ 0001ef74 0468
.org 0x1ef76
	ldr r1, [pc, #64]	@ 0001ef76 1049
.org 0x1ef78
	adds r4, r4, r1	@ 0001ef78 6418
.org 0x1ef7a
	mov r3, r8	@ 0001ef7a 4346
.org 0x1ef7c
	ldr r0, [r3, #0]	@ 0001ef7c 1868
.org 0x1ef7e
	adds r0, r0, r1	@ 0001ef7e 4018
.org 0x1ef80
	movs r1, #240	@ 0001ef80 f021
.org 0x1ef82
	lsls r1, r1, #10	@ 0001ef82 8902
.org 0x1ef84
	bl 0x129050	@ 0001ef84 0af164f8
.org 0x1ef88
	subs r4, r4, r0	@ 0001ef88 241a
.org 0x1ef8a
	movs r0, #128	@ 0001ef8a 8020
.org 0x1ef8c
	lsls r0, r0, #6	@ 0001ef8c 8001
.org 0x1ef8e
	adds r4, r4, r0	@ 0001ef8e 2418
.org 0x1ef90
	movs r2, #128	@ 0001ef90 8022
.org 0x1ef92
	lsls r2, r2, #7	@ 0001ef92 d201
.org 0x1ef94
	cmp r4, r2	@ 0001ef94 9442
.org 0x1ef96
	bhi.n 0x1efec	@ 0001ef96 29d8
.org 0x1ef98
	adds r0, r7, #4	@ 0001ef98 381d
.org 0x1ef9a
	adds r0, r5, r0	@ 0001ef9a 2818
.org 0x1ef9c
	ldr r0, [r0, #0]	@ 0001ef9c 0068
.org 0x1ef9e
	mov r3, r8	@ 0001ef9e 4346
.org 0x1efa0
	ldr r1, [r3, #4]	@ 0001efa0 5968
.org 0x1efa2
	subs r0, r0, r1	@ 0001efa2 401a
.org 0x1efa4
	movs r1, #128	@ 0001efa4 8021
.org 0x1efa6
	lsls r1, r1, #6	@ 0001efa6 8901
.org 0x1efa8
	adds r0, r0, r1	@ 0001efa8 4018
.org 0x1efaa
	cmp r0, r2	@ 0001efaa 9042
.org 0x1efac
	bls.n 0x1eff4	@ 0001efac 22d9
.org 0x1efae
	b.n 0x1efec	@ 0001efae 1de0
.org 0x1efb0
	.byte 0x80,0x0c,0x00,0x02	@ 0001efb0 data
.org 0x1efb4
	.byte 0xc4,0x28,0x84,0x08	@ 0001efb4 data
.org 0x1efb8
	.byte 0x00,0x10,0xff,0xff	@ 0001efb8 data
.org 0x1efbc
	ldr r2, [pc, #64]	@ 0001efbc 104a
.org 0x1efbe
	adds r0, r5, r2	@ 0001efbe a818
.org 0x1efc0
	ldr r1, [r0, #0]	@ 0001efc0 0168
.org 0x1efc2
	mov r3, r8	@ 0001efc2 4346
.org 0x1efc4
	ldr r0, [r3, #0]	@ 0001efc4 1868
.org 0x1efc6
	subs r1, r1, r0	@ 0001efc6 091a
.org 0x1efc8
	movs r0, #128	@ 0001efc8 8020
.org 0x1efca
	lsls r0, r0, #6	@ 0001efca 8001
.org 0x1efcc
	adds r1, r1, r0	@ 0001efcc 0918
.org 0x1efce
	movs r3, #128	@ 0001efce 8023
.org 0x1efd0
	lsls r3, r3, #7	@ 0001efd0 db01
.org 0x1efd2
	cmp r1, r3	@ 0001efd2 9942
.org 0x1efd4
	bhi.n 0x1efec	@ 0001efd4 0ad8
.org 0x1efd6
	adds r0, r2, #4	@ 0001efd6 101d
.org 0x1efd8
	adds r0, r5, r0	@ 0001efd8 2818
.org 0x1efda
	ldr r0, [r0, #0]	@ 0001efda 0068
.org 0x1efdc
	mov r2, r8	@ 0001efdc 4246
.org 0x1efde
	ldr r1, [r2, #4]	@ 0001efde 5168
.org 0x1efe0
	subs r0, r0, r1	@ 0001efe0 401a
.org 0x1efe2
	movs r1, #128	@ 0001efe2 8021
.org 0x1efe4
	lsls r1, r1, #6	@ 0001efe4 8901
.org 0x1efe6
	adds r0, r0, r1	@ 0001efe6 4018
.org 0x1efe8
	cmp r0, r3	@ 0001efe8 9842
.org 0x1efea
	bls.n 0x1eff4	@ 0001efea 03d9
.org 0x1efec
	adds r5, #8	@ 0001efec 0835
.org 0x1efee
	adds r6, #1	@ 0001efee 0136
.org 0x1eff0
	cmp r6, #33	@ 0001eff0 212e
.org 0x1eff2
	ble.n 0x1ef66	@ 0001eff2 b8dd
.org 0x1eff4
	cmp r6, #34	@ 0001eff4 222e
.org 0x1eff6
	beq.n 0x1f008	@ 0001eff6 07d0
.org 0x1eff8
	lsls r0, r6, #3	@ 0001eff8 f000
.org 0x1effa
	ldr r1, [pc, #8]	@ 0001effa 0249
