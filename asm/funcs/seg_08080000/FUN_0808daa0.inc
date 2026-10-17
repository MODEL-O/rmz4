@ FUN_0808daa0  entry 0x0808daa0  size 96
.thumb
.org 0x8daa0
FUN_0808daa0:
	push {r4, r5, r6, lr}	@ 0008daa0 70b5
.org 0x8daa2
	sub sp, #8	@ 0008daa2 82b0
.org 0x8daa4
	adds r4, r0, #0	@ 0008daa4 041c
.org 0x8daa6
	ldr r0, [pc, #72]	@ 0008daa6 1248
.org 0x8daa8
	ldr r1, [r0, #4]	@ 0008daa8 4168
.org 0x8daaa
	ldr r0, [r0, #0]	@ 0008daaa 0068
.org 0x8daac
	str r0, [sp, #0]	@ 0008daac 0090
.org 0x8daae
	str r1, [sp, #4]	@ 0008daae 0191
.org 0x8dab0
	adds r6, r4, #0	@ 0008dab0 261c
.org 0x8dab2
	adds r6, #188	@ 0008dab2 bc36
.org 0x8dab4
	ldr r5, [r6, #0]	@ 0008dab4 3568
.org 0x8dab6
	cmp r5, #0	@ 0008dab6 002d
.org 0x8dab8
	bne.n 0x8dafa	@ 0008dab8 1fd1
.org 0x8daba
	adds r0, r4, #0	@ 0008daba 201c
.org 0x8dabc
	adds r0, #140	@ 0008dabc 8c30
.org 0x8dabe
	ldr r0, [r0, #0]	@ 0008dabe 0068
.org 0x8dac0
	movs r1, #1	@ 0008dac0 0121
.org 0x8dac2
	ands r0, r1	@ 0008dac2 0840
.org 0x8dac4
	cmp r0, #0	@ 0008dac4 0028
.org 0x8dac6
	beq.n 0x8dafa	@ 0008dac6 18d0
.org 0x8dac8
	movs r0, #0	@ 0008dac8 0020
.org 0x8daca
	adds r1, r4, #0	@ 0008daca 211c
.org 0x8dacc
	mov r2, sp	@ 0008dacc 6a46
.org 0x8dace
	bl 0x2adac	@ 0008dace 9df76df9
.org 0x8dad2
	str r0, [r6, #0]	@ 0008dad2 3060
.org 0x8dad4
	cmp r0, #0	@ 0008dad4 0028
.org 0x8dad6
	beq.n 0x8dafa	@ 0008dad6 10d0
.org 0x8dad8
	adds r0, r4, #0	@ 0008dad8 201c
.org 0x8dada
	bl 0x8db04	@ 0008dada 00f013f8
.org 0x8dade
	adds r0, r4, #0	@ 0008dade 201c
.org 0x8dae0
	adds r0, #151	@ 0008dae0 9730
.org 0x8dae2
	ldrb r0, [r0, #0]	@ 0008dae2 0078
.org 0x8dae4
	movs r1, #240	@ 0008dae4 f021
.org 0x8dae6
	ands r1, r0	@ 0008dae6 0140
.org 0x8dae8
	cmp r1, #48	@ 0008dae8 3029
.org 0x8daea
	bne.n 0x8daf4	@ 0008daea 03d1
.org 0x8daec
	movs r0, #6	@ 0008daec 0620
.org 0x8daee
	b.n 0x8daf6	@ 0008daee 02e0
.org 0x8daf0
	.byte 0x98,0x9b,0x12,0x08	@ 0008daf0 data
.org 0x8daf4
	movs r0, #7	@ 0008daf4 0720
.org 0x8daf6
	strb r0, [r4, #13]	@ 0008daf6 6073
.org 0x8daf8
	strb r5, [r4, #14]	@ 0008daf8 a573
.org 0x8dafa
	movs r0, #1	@ 0008dafa 0120
.org 0x8dafc
	add sp, #8	@ 0008dafc 02b0
.org 0x8dafe
	pop {r4, r5, r6}	@ 0008dafe 70bc
