@ FUN_080ea944  entry 0x080ea944  size 50
.thumb
.org 0xea944
FUN_080ea944:
	push {r4, lr}	@ 000ea944 10b5
.org 0xea946
	adds r4, r0, #0	@ 000ea946 041c
.org 0xea948
	ldrb r0, [r4, #9]	@ 000ea948 607a
.org 0xea94a
	cmp r0, #2	@ 000ea94a 0228
.org 0xea94c
	bne.n 0xea970	@ 000ea94c 10d1
.org 0xea94e
	adds r1, r4, #0	@ 000ea94e 211c
.org 0xea950
	adds r1, #184	@ 000ea950 b831
.org 0xea952
	ldrb r0, [r1, #0]	@ 000ea952 0878
.org 0xea954
	cmp r0, #20	@ 000ea954 1428
.org 0xea956
	beq.n 0xea970	@ 000ea956 0bd0
.org 0xea958
	movs r0, #20	@ 000ea958 1420
.org 0xea95a
	strb r0, [r1, #0]	@ 000ea95a 0870
.org 0xea95c
	lsls r0, r0, #8	@ 000ea95c 0002
.org 0xea95e
	subs r1, #72	@ 000ea95e 4839
.org 0xea960
	ldrb r1, [r1, #0]	@ 000ea960 0978
.org 0xea962
	orrs r1, r0	@ 000ea962 0143
.org 0xea964
	adds r0, r4, #0	@ 000ea964 201c
.org 0xea966
	bl 0x1cf00	@ 000ea966 32f7cbfa
.org 0xea96a
	adds r0, r4, #0	@ 000ea96a 201c
.org 0xea96c
	bl 0x1cff0	@ 000ea96c 32f740fb
.org 0xea970
	pop {r4}	@ 000ea970 10bc
.org 0xea972
	pop {r0}	@ 000ea972 01bc
.org 0xea974
	bx r0	@ 000ea974 0047
