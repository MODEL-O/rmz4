@ FUN_08109fd0  entry 0x08109fd0  size 78
.thumb
.org 0x109fd0
FUN_08109fd0:
	push {r4, lr}	@ 00109fd0 10b5
.org 0x109fd2
	adds r4, r0, #0	@ 00109fd2 041c
.org 0x109fd4
	ldr r0, [r4, #84]	@ 00109fd4 606d
.org 0x109fd6
	ldr r1, [r4, #92]	@ 00109fd6 e16d
.org 0x109fd8
	adds r0, r0, r1	@ 00109fd8 4018
.org 0x109fda
	str r0, [r4, #84]	@ 00109fda 6065
.org 0x109fdc
	adds r0, r4, #0	@ 00109fdc 201c
.org 0x109fde
	bl 0x10a168	@ 00109fde 00f0c3f8
.org 0x109fe2
	lsls r0, r0, #24	@ 00109fe2 0006
.org 0x109fe4
	cmp r0, #0	@ 00109fe4 0028
.org 0x109fe6
	bne.n 0x10a006	@ 00109fe6 0ed1
.org 0x109fe8
	adds r0, r4, #0	@ 00109fe8 201c
.org 0x109fea
	adds r0, #140	@ 00109fea 8c30
.org 0x109fec
	ldr r1, [r0, #0]	@ 00109fec 0168
.org 0x109fee
	movs r0, #4	@ 00109fee 0420
.org 0x109ff0
	ands r0, r1	@ 00109ff0 0840
.org 0x109ff2
	cmp r0, #0	@ 00109ff2 0028
.org 0x109ff4
	bne.n 0x10a006	@ 00109ff4 07d1
.org 0x109ff6
	movs r0, #128	@ 00109ff6 8020
.org 0x109ff8
	lsls r0, r0, #5	@ 00109ff8 4001
.org 0x109ffa
	ands r1, r0	@ 00109ffa 0140
.org 0x109ffc
	cmp r1, #0	@ 00109ffc 0029
.org 0x109ffe
	beq.n 0x10a018	@ 00109ffe 0bd0
.org 0x10a000
	movs r0, #43	@ 0010a000 2b20
.org 0x10a002
	bl 0x2b10	@ 0010a002 f8f685fd
.org 0x10a006
	ldr r1, [pc, #24]	@ 0010a006 0649
.org 0x10a008
	ldrb r0, [r4, #9]	@ 0010a008 607a
.org 0x10a00a
	lsls r0, r0, #2	@ 0010a00a 8000
.org 0x10a00c
	adds r0, r0, r1	@ 0010a00c 4018
.org 0x10a00e
	movs r1, #2	@ 0010a00e 0221
.org 0x10a010
	str r1, [r4, #12]	@ 0010a010 e160
.org 0x10a012
	ldr r0, [r0, #0]	@ 0010a012 0068
.org 0x10a014
	ldr r0, [r0, #8]	@ 0010a014 8068
.org 0x10a016
	str r0, [r4, #20]	@ 0010a016 6061
.org 0x10a018
	pop {r4}	@ 0010a018 10bc
.org 0x10a01a
	pop {r0}	@ 0010a01a 01bc
.org 0x10a01c
	bx r0	@ 0010a01c 0047
