@ FUN_080c5960  entry 0x080c5960  size 154
.thumb
.org 0xc5960
FUN_080c5960:
	push {r4, lr}	@ 000c5960 10b5
.org 0xc5962
	adds r3, r0, #0	@ 000c5962 031c
.org 0xc5964
	ldr r4, [r3, #40]	@ 000c5964 9c6a
.org 0xc5966
	ldrb r0, [r4, #10]	@ 000c5966 a07a
.org 0xc5968
	lsrs r1, r0, #4	@ 000c5968 0109
.org 0xc596a
	movs r0, #1	@ 000c596a 0120
.org 0xc596c
	ands r1, r0	@ 000c596c 0140
.org 0xc596e
	ldrb r2, [r3, #15]	@ 000c596e da7b
.org 0xc5970
	cmp r2, #0	@ 000c5970 002a
.org 0xc5972
	bne.n 0xc597c	@ 000c5972 03d1
.org 0xc5974
	movs r0, #80	@ 000c5974 5020
.org 0xc5976
	strb r0, [r3, #18]	@ 000c5976 9874
.org 0xc5978
	adds r0, r2, #1	@ 000c5978 501c
.org 0xc597a
	strb r0, [r3, #15]	@ 000c597a d873
.org 0xc597c
	adds r2, r1, #0	@ 000c597c 0a1c
.org 0xc597e
	cmp r2, #0	@ 000c597e 002a
.org 0xc5980
	beq.n 0xc598a	@ 000c5980 03d0
.org 0xc5982
	ldrb r1, [r3, #10]	@ 000c5982 997a
.org 0xc5984
	movs r0, #16	@ 000c5984 1020
.org 0xc5986
	orrs r0, r1	@ 000c5986 0843
.org 0xc5988
	b.n 0xc5990	@ 000c5988 02e0
.org 0xc598a
	ldrb r1, [r3, #10]	@ 000c598a 997a
.org 0xc598c
	movs r0, #239	@ 000c598c ef20
.org 0xc598e
	ands r0, r1	@ 000c598e 0840
.org 0xc5990
	strb r0, [r3, #10]	@ 000c5990 9872
.org 0xc5992
	adds r1, r2, #0	@ 000c5992 111c
.org 0xc5994
	adds r0, r3, #0	@ 000c5994 181c
.org 0xc5996
	adds r0, #76	@ 000c5996 4c30
.org 0xc5998
	strb r1, [r0, #0]	@ 000c5998 0170
.org 0xc599a
	movs r0, #74	@ 000c599a 4a20
.org 0xc599c
	adds r0, r0, r3	@ 000c599c c018
.org 0xc599e
	mov ip, r0	@ 000c599e 8446
.org 0xc59a0
	lsls r1, r1, #4	@ 000c59a0 0901
.org 0xc59a2
	ldrb r2, [r0, #0]	@ 000c59a2 0278
.org 0xc59a4
	movs r0, #17	@ 000c59a4 1120
.org 0xc59a6
	negs r0, r0	@ 000c59a6 4042
.org 0xc59a8
	ands r0, r2	@ 000c59a8 1040
.org 0xc59aa
	orrs r0, r1	@ 000c59aa 0843
.org 0xc59ac
	mov r1, ip	@ 000c59ac 6146
.org 0xc59ae
	strb r0, [r1, #0]	@ 000c59ae 0870
.org 0xc59b0
	ldr r2, [r4, #84]	@ 000c59b0 626d
.org 0xc59b2
	ldrb r1, [r4, #10]	@ 000c59b2 a17a
.org 0xc59b4
	movs r0, #16	@ 000c59b4 1020
.org 0xc59b6
	ands r0, r1	@ 000c59b6 0840
.org 0xc59b8
	cmp r0, #0	@ 000c59b8 0028
.org 0xc59ba
	beq.n 0xc59c2	@ 000c59ba 02d0
.org 0xc59bc
	movs r1, #216	@ 000c59bc d821
.org 0xc59be
	lsls r1, r1, #6	@ 000c59be 8901
.org 0xc59c0
	b.n 0xc59c4	@ 000c59c0 00e0
.org 0xc59c2
	ldr r1, [pc, #56]	@ 000c59c2 0e49
.org 0xc59c4
	adds r0, r2, r1	@ 000c59c4 5018
.org 0xc59c6
	str r0, [r3, #84]	@ 000c59c6 5865
.org 0xc59c8
	ldr r0, [r4, #88]	@ 000c59c8 a06d
.org 0xc59ca
	ldr r1, [pc, #52]	@ 000c59ca 0d49
.org 0xc59cc
	adds r0, r0, r1	@ 000c59cc 4018
.org 0xc59ce
	str r0, [r3, #88]	@ 000c59ce 9865
.org 0xc59d0
	ldrb r0, [r3, #18]	@ 000c59d0 987c
.org 0xc59d2
	subs r0, #1	@ 000c59d2 0138
.org 0xc59d4
	strb r0, [r3, #18]	@ 000c59d4 9874
.org 0xc59d6
	lsls r0, r0, #24	@ 000c59d6 0006
.org 0xc59d8
	cmp r0, #0	@ 000c59d8 0028
.org 0xc59da
	bne.n 0xc59f4	@ 000c59da 0bd1
.org 0xc59dc
	ldr r1, [pc, #36]	@ 000c59dc 0949
.org 0xc59de
	ldrb r0, [r3, #9]	@ 000c59de 587a
.org 0xc59e0
	lsls r0, r0, #2	@ 000c59e0 8000
.org 0xc59e2
	adds r0, r0, r1	@ 000c59e2 4018
.org 0xc59e4
	movs r1, #2	@ 000c59e4 0221
.org 0xc59e6
	str r1, [r3, #12]	@ 000c59e6 d960
.org 0xc59e8
	ldr r0, [r0, #0]	@ 000c59e8 0068
.org 0xc59ea
	ldr r0, [r0, #8]	@ 000c59ea 8068
.org 0xc59ec
	str r0, [r3, #20]	@ 000c59ec 5861
.org 0xc59ee
	adds r0, r3, #0	@ 000c59ee 181c
.org 0xc59f0
	bl 0xc5e50	@ 000c59f0 00f02efa
.org 0xc59f4
	pop {r4}	@ 000c59f4 10bc
.org 0xc59f6
	pop {r0}	@ 000c59f6 01bc
.org 0xc59f8
	bx r0	@ 000c59f8 0047
