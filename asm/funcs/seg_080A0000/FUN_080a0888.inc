@ FUN_080a0888  entry 0x080a0888  size 74
.thumb
.org 0xa0888
FUN_080a0888:
	push {lr}	@ 000a0888 00b5
.org 0xa088a
	adds r2, r0, #0	@ 000a088a 021c
.org 0xa088c
	ldrb r0, [r2, #16]	@ 000a088c 107c
.org 0xa088e
	ldrb r1, [r2, #15]	@ 000a088e d17b
.org 0xa0890
	cmp r1, #0	@ 000a0890 0029
.org 0xa0892
	bne.n 0xa08a0	@ 000a0892 05d1
.org 0xa0894
	cmp r0, #0	@ 000a0894 0028
.org 0xa0896
	beq.n 0xa08bc	@ 000a0896 11d0
.org 0xa0898
	movs r0, #48	@ 000a0898 3020
.org 0xa089a
	strb r0, [r2, #18]	@ 000a089a 9074
.org 0xa089c
	adds r0, r1, #1	@ 000a089c 481c
.org 0xa089e
	strb r0, [r2, #15]	@ 000a089e d073
.org 0xa08a0
	ldrb r0, [r2, #18]	@ 000a08a0 907c
.org 0xa08a2
	subs r0, #1	@ 000a08a2 0138
.org 0xa08a4
	strb r0, [r2, #18]	@ 000a08a4 9074
.org 0xa08a6
	lsls r0, r0, #24	@ 000a08a6 0006
.org 0xa08a8
	cmp r0, #0	@ 000a08a8 0028
.org 0xa08aa
	bne.n 0xa08ce	@ 000a08aa 10d1
.org 0xa08ac
	ldr r0, [pc, #36]	@ 000a08ac 0948
.org 0xa08ae
	adds r1, r0, #0	@ 000a08ae 011c
.org 0xa08b0
	adds r1, #38	@ 000a08b0 2631
.org 0xa08b2
	ldrb r0, [r1, #0]	@ 000a08b2 0878
.org 0xa08b4
	cmp r0, #0	@ 000a08b4 0028
.org 0xa08b6
	beq.n 0xa08bc	@ 000a08b6 01d0
.org 0xa08b8
	adds r0, #255	@ 000a08b8 ff30
.org 0xa08ba
	strb r0, [r1, #0]	@ 000a08ba 0870
.org 0xa08bc
	ldr r1, [pc, #24]	@ 000a08bc 0649
.org 0xa08be
	ldrb r0, [r2, #9]	@ 000a08be 507a
.org 0xa08c0
	lsls r0, r0, #2	@ 000a08c0 8000
.org 0xa08c2
	adds r0, r0, r1	@ 000a08c2 4018
.org 0xa08c4
	movs r1, #4	@ 000a08c4 0421
.org 0xa08c6
	str r1, [r2, #12]	@ 000a08c6 d160
.org 0xa08c8
	ldr r0, [r0, #0]	@ 000a08c8 0068
.org 0xa08ca
	ldr r0, [r0, #16]	@ 000a08ca 0069
.org 0xa08cc
	str r0, [r2, #20]	@ 000a08cc 5061
.org 0xa08ce
	pop {r0}	@ 000a08ce 01bc
.org 0xa08d0
	bx r0	@ 000a08d0 0047
