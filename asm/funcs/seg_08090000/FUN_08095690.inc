@ FUN_08095690  entry 0x08095690  size 82
.thumb
.org 0x95690
FUN_08095690:
	push {r4, lr}	@ 00095690 10b5
.org 0x95692
	adds r4, r0, #0	@ 00095692 041c
.org 0x95694
	ldr r0, [r4, #40]	@ 00095694 a06a
.org 0x95696
	ldrb r0, [r0, #12]	@ 00095696 007b
.org 0x95698
	cmp r0, #1	@ 00095698 0128
.org 0x9569a
	bhi.n 0x956ac	@ 0009569a 07d8
.org 0x9569c
	adds r0, r4, #0	@ 0009569c 201c
.org 0x9569e
	adds r0, #140	@ 0009569e 8c30
.org 0x956a0
	ldr r0, [r0, #0]	@ 000956a0 0068
.org 0x956a2
	movs r1, #128	@ 000956a2 8021
.org 0x956a4
	lsls r1, r1, #2	@ 000956a4 8900
.org 0x956a6
	ands r0, r1	@ 000956a6 0840
.org 0x956a8
	cmp r0, #0	@ 000956a8 0028
.org 0x956aa
	beq.n 0x956cc	@ 000956aa 0fd0
.org 0x956ac
	ldr r1, [pc, #24]	@ 000956ac 0649
.org 0x956ae
	ldrb r0, [r4, #9]	@ 000956ae 607a
.org 0x956b0
	lsls r0, r0, #2	@ 000956b0 8000
.org 0x956b2
	adds r0, r0, r1	@ 000956b2 4018
.org 0x956b4
	movs r1, #2	@ 000956b4 0221
.org 0x956b6
	str r1, [r4, #12]	@ 000956b6 e160
.org 0x956b8
	ldr r0, [r0, #0]	@ 000956b8 0068
.org 0x956ba
	ldr r0, [r0, #8]	@ 000956ba 8068
.org 0x956bc
	str r0, [r4, #20]	@ 000956bc 6061
.org 0x956be
	adds r0, r4, #0	@ 000956be 201c
.org 0x956c0
	bl 0x95bf0	@ 000956c0 00f096fa
.org 0x956c4
	b.n 0x956e2	@ 000956c4 0de0
.org 0x956c6
	.byte 0x00	@ 000956c6 data
.org 0x956c7
	.byte 0x00	@ 000956c7 data
.org 0x956c8
	.byte 0x40,0xdb,0x85,0x08	@ 000956c8 data
.org 0x956cc
	ldr r0, [pc, #24]	@ 000956cc 0648
.org 0x956ce
	ldrb r1, [r4, #13]	@ 000956ce 617b
.org 0x956d0
	lsls r1, r1, #2	@ 000956d0 8900
.org 0x956d2
	adds r1, r1, r0	@ 000956d2 0918
.org 0x956d4
	ldr r1, [r1, #0]	@ 000956d4 0968
.org 0x956d6
	adds r0, r4, #0	@ 000956d6 201c
.org 0x956d8
	bl 0x128f80	@ 000956d8 93f052fc
.org 0x956dc
	adds r0, r4, #0	@ 000956dc 201c
.org 0x956de
	bl 0x95d18	@ 000956de 00f01bfb
