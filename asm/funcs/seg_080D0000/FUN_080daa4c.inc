@ FUN_080daa4c  entry 0x080daa4c  size 108
.thumb
.org 0xdaa4c
FUN_080daa4c:
	push {r4, lr}	@ 000daa4c 10b5
.org 0xdaa4e
	adds r4, r0, #0	@ 000daa4e 041c
.org 0xdaa50
	bl 0x1cff0	@ 000daa50 42f7cefa
.org 0xdaa54
	ldrb r0, [r4, #18]	@ 000daa54 a07c
.org 0xdaa56
	adds r0, #1	@ 000daa56 0130
.org 0xdaa58
	strb r0, [r4, #18]	@ 000daa58 a074
.org 0xdaa5a
	movs r1, #1	@ 000daa5a 0121
.org 0xdaa5c
	ands r0, r1	@ 000daa5c 0840
.org 0xdaa5e
	cmp r0, #0	@ 000daa5e 0028
.org 0xdaa60
	beq.n 0xdaa68	@ 000daa60 02d0
.org 0xdaa62
	ldrb r0, [r4, #10]	@ 000daa62 a07a
.org 0xdaa64
	orrs r0, r1	@ 000daa64 0843
.org 0xdaa66
	b.n 0xdaa6e	@ 000daa66 02e0
.org 0xdaa68
	ldrb r1, [r4, #10]	@ 000daa68 a17a
.org 0xdaa6a
	movs r0, #254	@ 000daa6a fe20
.org 0xdaa6c
	ands r0, r1	@ 000daa6c 0840
.org 0xdaa6e
	strb r0, [r4, #10]	@ 000daa6e a072
.org 0xdaa70
	ldr r0, [r4, #84]	@ 000daa70 606d
.org 0xdaa72
	ldr r1, [r4, #92]	@ 000daa72 e16d
.org 0xdaa74
	adds r0, r0, r1	@ 000daa74 4018
.org 0xdaa76
	str r0, [r4, #84]	@ 000daa76 6065
.org 0xdaa78
	adds r0, r4, #0	@ 000daa78 201c
.org 0xdaa7a
	adds r0, #115	@ 000daa7a 7330
.org 0xdaa7c
	ldrb r0, [r0, #0]	@ 000daa7c 0078
.org 0xdaa7e
	cmp r0, #3	@ 000daa7e 0328
.org 0xdaa80
	beq.n 0xdaa94	@ 000daa80 08d0
.org 0xdaa82
	ldr r0, [pc, #52]	@ 000daa82 0d48
.org 0xdaa84
	adds r1, r4, #0	@ 000daa84 211c
.org 0xdaa86
	adds r1, #84	@ 000daa86 5431
.org 0xdaa88
	bl 0x1fb14	@ 000daa88 45f744f8
.org 0xdaa8c
	movs r1, #192	@ 000daa8c c021
.org 0xdaa8e
	lsls r1, r1, #5	@ 000daa8e 4901
.org 0xdaa90
	cmp r0, r1	@ 000daa90 8842
.org 0xdaa92
	bls.n 0xdaab2	@ 000daa92 0ed9
.org 0xdaa94
	ldrb r1, [r4, #10]	@ 000daa94 a17a
.org 0xdaa96
	movs r0, #254	@ 000daa96 fe20
.org 0xdaa98
	ands r0, r1	@ 000daa98 0840
.org 0xdaa9a
	movs r1, #253	@ 000daa9a fd21
.org 0xdaa9c
	ands r0, r1	@ 000daa9c 0840
.org 0xdaa9e
	strb r0, [r4, #10]	@ 000daa9e a072
.org 0xdaaa0
	ldr r1, [pc, #24]	@ 000daaa0 0649
.org 0xdaaa2
	ldrb r0, [r4, #9]	@ 000daaa2 607a
.org 0xdaaa4
	lsls r0, r0, #2	@ 000daaa4 8000
.org 0xdaaa6
	adds r0, r0, r1	@ 000daaa6 4018
.org 0xdaaa8
	movs r1, #3	@ 000daaa8 0321
.org 0xdaaaa
	str r1, [r4, #12]	@ 000daaaa e160
.org 0xdaaac
	ldr r0, [r0, #0]	@ 000daaac 0068
.org 0xdaaae
	ldr r0, [r0, #12]	@ 000daaae c068
.org 0xdaab0
	str r0, [r4, #20]	@ 000daab0 6061
.org 0xdaab2
	pop {r4}	@ 000daab2 10bc
.org 0xdaab4
	pop {r0}	@ 000daab4 01bc
.org 0xdaab6
	bx r0	@ 000daab6 0047
