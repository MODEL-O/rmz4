@ FUN_080e497c  entry 0x080e497c  size 92
.thumb
.org 0xe497c
FUN_080e497c:
	push {r4, lr}	@ 000e497c 10b5
.org 0xe497e
	adds r4, r0, #0	@ 000e497e 041c
.org 0xe4980
	bl 0x1cff0	@ 000e4980 38f736fb
.org 0xe4984
	ldr r0, [r4, #84]	@ 000e4984 606d
.org 0xe4986
	ldr r1, [r4, #92]	@ 000e4986 e16d
.org 0xe4988
	adds r0, r0, r1	@ 000e4988 4018
.org 0xe498a
	str r0, [r4, #84]	@ 000e498a 6065
.org 0xe498c
	ldr r0, [r4, #88]	@ 000e498c a06d
.org 0xe498e
	ldr r1, [r4, #96]	@ 000e498e 216e
.org 0xe4990
	adds r0, r0, r1	@ 000e4990 4018
.org 0xe4992
	str r0, [r4, #88]	@ 000e4992 a065
.org 0xe4994
	ldrb r1, [r4, #18]	@ 000e4994 a17c
.org 0xe4996
	movs r0, #1	@ 000e4996 0120
.org 0xe4998
	ands r0, r1	@ 000e4998 0840
.org 0xe499a
	cmp r0, #0	@ 000e499a 0028
.org 0xe499c
	beq.n 0xe49a6	@ 000e499c 03d0
.org 0xe499e
	ldrb r1, [r4, #10]	@ 000e499e a17a
.org 0xe49a0
	movs r0, #254	@ 000e49a0 fe20
.org 0xe49a2
	ands r0, r1	@ 000e49a2 0840
.org 0xe49a4
	b.n 0xe49ac	@ 000e49a4 02e0
.org 0xe49a6
	ldrb r0, [r4, #10]	@ 000e49a6 a07a
.org 0xe49a8
	movs r1, #1	@ 000e49a8 0121
.org 0xe49aa
	orrs r0, r1	@ 000e49aa 0843
.org 0xe49ac
	strb r0, [r4, #10]	@ 000e49ac a072
.org 0xe49ae
	ldrb r0, [r4, #18]	@ 000e49ae a07c
.org 0xe49b0
	subs r0, #1	@ 000e49b0 0138
.org 0xe49b2
	strb r0, [r4, #18]	@ 000e49b2 a074
.org 0xe49b4
	lsls r0, r0, #24	@ 000e49b4 0006
.org 0xe49b6
	cmp r0, #0	@ 000e49b6 0028
.org 0xe49b8
	bne.n 0xe49d2	@ 000e49b8 0bd1
.org 0xe49ba
	ldr r1, [pc, #28]	@ 000e49ba 0749
.org 0xe49bc
	ldrb r0, [r4, #9]	@ 000e49bc 607a
.org 0xe49be
	lsls r0, r0, #2	@ 000e49be 8000
.org 0xe49c0
	adds r0, r0, r1	@ 000e49c0 4018
.org 0xe49c2
	movs r1, #2	@ 000e49c2 0221
.org 0xe49c4
	str r1, [r4, #12]	@ 000e49c4 e160
.org 0xe49c6
	ldr r0, [r0, #0]	@ 000e49c6 0068
.org 0xe49c8
	ldr r0, [r0, #8]	@ 000e49c8 8068
.org 0xe49ca
	str r0, [r4, #20]	@ 000e49ca 6061
.org 0xe49cc
	adds r0, r4, #0	@ 000e49cc 201c
.org 0xe49ce
	bl 0xe429c	@ 000e49ce fff765fc
.org 0xe49d2
	pop {r4}	@ 000e49d2 10bc
.org 0xe49d4
	pop {r0}	@ 000e49d4 01bc
.org 0xe49d6
	bx r0	@ 000e49d6 0047
