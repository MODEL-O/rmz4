@ FUN_080857b0  entry 0x080857b0  size 86
.thumb
.org 0x857b0
FUN_080857b0:
	push {r4, r5, r6, lr}	@ 000857b0 70b5
.org 0x857b2
	adds r4, r0, #0	@ 000857b2 041c
.org 0x857b4
	ldr r5, [r4, #44]	@ 000857b4 e56a
.org 0x857b6
	adds r2, r5, #0	@ 000857b6 2a1c
.org 0x857b8
	adds r2, #180	@ 000857b8 b432
.org 0x857ba
	ldr r6, [pc, #76]	@ 000857ba 134e
.org 0x857bc
	ldr r0, [r6, #0]	@ 000857bc 3068
.org 0x857be
	ldr r0, [r0, #84]	@ 000857be 406d
.org 0x857c0
	ldr r1, [r5, #84]	@ 000857c0 696d
.org 0x857c2
	subs r0, r0, r1	@ 000857c2 401a
.org 0x857c4
	str r0, [r2, #0]	@ 000857c4 1060
.org 0x857c6
	ldr r0, [r4, #20]	@ 000857c6 6069
.org 0x857c8
	movs r1, #1	@ 000857c8 0121
.org 0x857ca
	ands r0, r1	@ 000857ca 0840
.org 0x857cc
	cmp r0, #0	@ 000857cc 0028
.org 0x857ce
	beq.n 0x85800	@ 000857ce 17d0
.org 0x857d0
	movs r0, #51	@ 000857d0 3320
.org 0x857d2
	bl 0x6984	@ 000857d2 81f7d7f8
.org 0x857d6
	ldr r1, [r4, #20]	@ 000857d6 6169
.org 0x857d8
	movs r0, #128	@ 000857d8 8020
.org 0x857da
	lsls r0, r0, #2	@ 000857da 8000
.org 0x857dc
	ands r0, r1	@ 000857dc 0840
.org 0x857de
	cmp r0, #0	@ 000857de 0028
.org 0x857e0
	beq.n 0x85800	@ 000857e0 0ed0
.org 0x857e2
	movs r0, #128	@ 000857e2 8020
.org 0x857e4
	lsls r0, r0, #10	@ 000857e4 8002
.org 0x857e6
	ands r1, r0	@ 000857e6 0140
.org 0x857e8
	cmp r1, #0	@ 000857e8 0029
.org 0x857ea
	beq.n 0x85800	@ 000857ea 09d0
.org 0x857ec
	ldr r0, [r6, #0]	@ 000857ec 3068
.org 0x857ee
	cmp r0, #0	@ 000857ee 0028
.org 0x857f0
	beq.n 0x85800	@ 000857f0 06d0
.org 0x857f2
	movs r1, #4	@ 000857f2 0421
.org 0x857f4
	movs r2, #0	@ 000857f4 0022
.org 0x857f6
	bl 0x3a578	@ 000857f6 b4f7bffe
.org 0x857fa
	adds r1, r5, #0	@ 000857fa 291c
.org 0x857fc
	adds r1, #195	@ 000857fc c331
.org 0x857fe
	strb r0, [r1, #0]	@ 000857fe 0870
.org 0x85800
	pop {r4, r5, r6}	@ 00085800 70bc
.org 0x85802
	pop {r0}	@ 00085802 01bc
.org 0x85804
	bx r0	@ 00085804 0047
