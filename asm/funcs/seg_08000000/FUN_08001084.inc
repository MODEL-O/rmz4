@ FUN_08001084  entry 0x08001084  size 124
.thumb
.org 0x1084
FUN_08001084:
	push {r4, r5, lr}	@ 00001084 30b5
.org 0x1086
	sub sp, #4	@ 00001086 81b0
.org 0x1088
	mov r1, sp	@ 00001088 6946
.org 0x108a
	ldr r0, [pc, #116]	@ 0000108a 1d48
.org 0x108c
	ldrh r0, [r0, #0]	@ 0000108c 0088
.org 0x108e
	strh r0, [r1, #0]	@ 0000108e 0880
.org 0x1090
	mov r0, sp	@ 00001090 6846
.org 0x1092
	ldrh r0, [r0, #0]	@ 00001092 0088
.org 0x1094
	cmp r0, #159	@ 00001094 9f28
.org 0x1096
	bls.n 0x10a0	@ 00001096 03d9
.org 0x1098
	mov r0, sp	@ 00001098 6846
.org 0x109a
	ldrh r0, [r0, #0]	@ 0000109a 0088
.org 0x109c
	cmp r0, #227	@ 0000109c e328
.org 0x109e
	bne.n 0x10f8	@ 0000109e 2bd1
.org 0x10a0
	ldr r4, [pc, #96]	@ 000010a0 184c
.org 0x10a2
	ldr r2, [r4, #12]	@ 000010a2 e268
.org 0x10a4
	ldr r3, [r4, #4]	@ 000010a4 6368
.org 0x10a6
	ldrh r1, [r4, #32]	@ 000010a6 218c
.org 0x10a8
	cmp r1, #0	@ 000010a8 0029
.org 0x10aa
	beq.n 0x10ca	@ 000010aa 0ed0
.org 0x10ac
	ldrh r0, [r2, #0]	@ 000010ac 1088
.org 0x10ae
	strh r0, [r3, #0]	@ 000010ae 1880
.org 0x10b0
	movs r5, #30	@ 000010b0 1e25
.org 0x10b2
	ldrsh r0, [r4, r5]	@ 000010b2 605f
.org 0x10b4
	lsls r0, r0, #1	@ 000010b4 4000
.org 0x10b6
	adds r3, r3, r0	@ 000010b6 1b18
.org 0x10b8
	movs r5, #28	@ 000010b8 1c25
.org 0x10ba
	ldrsh r0, [r4, r5]	@ 000010ba 605f
.org 0x10bc
	lsls r0, r0, #1	@ 000010bc 4000
.org 0x10be
	adds r2, r2, r0	@ 000010be 1218
.org 0x10c0
	subs r0, r1, #1	@ 000010c0 481e
.org 0x10c2
	lsls r0, r0, #16	@ 000010c2 0004
.org 0x10c4
	lsrs r1, r0, #16	@ 000010c4 010c
.org 0x10c6
	cmp r1, #0	@ 000010c6 0029
.org 0x10c8
	bne.n 0x10ac	@ 000010c8 f0d1
.org 0x10ca
	str r2, [r4, #12]	@ 000010ca e260
.org 0x10cc
	adds r4, #36	@ 000010cc 2434
.org 0x10ce
	ldr r2, [r4, #12]	@ 000010ce e268
.org 0x10d0
	ldr r3, [r4, #4]	@ 000010d0 6368
.org 0x10d2
	ldrh r1, [r4, #32]	@ 000010d2 218c
.org 0x10d4
	cmp r1, #0	@ 000010d4 0029
.org 0x10d6
	beq.n 0x10f6	@ 000010d6 0ed0
.org 0x10d8
	ldrh r0, [r2, #0]	@ 000010d8 1088
.org 0x10da
	strh r0, [r3, #0]	@ 000010da 1880
.org 0x10dc
	movs r5, #30	@ 000010dc 1e25
.org 0x10de
	ldrsh r0, [r4, r5]	@ 000010de 605f
.org 0x10e0
	lsls r0, r0, #1	@ 000010e0 4000
.org 0x10e2
	adds r3, r3, r0	@ 000010e2 1b18
.org 0x10e4
	movs r5, #28	@ 000010e4 1c25
.org 0x10e6
	ldrsh r0, [r4, r5]	@ 000010e6 605f
.org 0x10e8
	lsls r0, r0, #1	@ 000010e8 4000
.org 0x10ea
	adds r2, r2, r0	@ 000010ea 1218
.org 0x10ec
	subs r0, r1, #1	@ 000010ec 481e
.org 0x10ee
	lsls r0, r0, #16	@ 000010ee 0004
.org 0x10f0
	lsrs r1, r0, #16	@ 000010f0 010c
.org 0x10f2
	cmp r1, #0	@ 000010f2 0029
.org 0x10f4
	bne.n 0x10d8	@ 000010f4 f0d1
.org 0x10f6
	str r2, [r4, #12]	@ 000010f6 e260
.org 0x10f8
	add sp, #4	@ 000010f8 01b0
.org 0x10fa
	pop {r4, r5}	@ 000010fa 30bc
.org 0x10fc
	pop {r0}	@ 000010fc 01bc
.org 0x10fe
	bx r0	@ 000010fe 0047
