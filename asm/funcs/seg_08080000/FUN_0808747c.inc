@ FUN_0808747c  entry 0x0808747c  size 170
.thumb
.org 0x8747c
FUN_0808747c:
	push {r4, r5, lr}	@ 0008747c 30b5
.org 0x8747e
	sub sp, #16	@ 0008747e 84b0
.org 0x87480
	adds r4, r0, #0	@ 00087480 041c
.org 0x87482
	ldrb r5, [r4, #15]	@ 00087482 e57b
.org 0x87484
	cmp r5, #0	@ 00087484 002d
.org 0x87486
	bne.n 0x874a2	@ 00087486 0cd1
.org 0x87488
	adds r0, #116	@ 00087488 7430
.org 0x8748a
	ldr r1, [pc, #60]	@ 0008748a 0f49
.org 0x8748c
	bl 0x5784	@ 0008748c 7ef77af9
.org 0x87490
	movs r1, #232	@ 00087490 e821
.org 0x87492
	lsls r1, r1, #5	@ 00087492 4901
.org 0x87494
	adds r0, r4, #0	@ 00087494 201c
.org 0x87496
	bl 0x1cf00	@ 00087496 95f733fd
.org 0x8749a
	strb r5, [r4, #18]	@ 0008749a a574
.org 0x8749c
	ldrb r0, [r4, #15]	@ 0008749c e07b
.org 0x8749e
	adds r0, #1	@ 0008749e 0130
.org 0x874a0
	strb r0, [r4, #15]	@ 000874a0 e073
.org 0x874a2
	adds r0, r4, #0	@ 000874a2 201c
.org 0x874a4
	bl 0x1cff0	@ 000874a4 95f7a4fd
.org 0x874a8
	ldrb r0, [r4, #18]	@ 000874a8 a07c
.org 0x874aa
	adds r0, #1	@ 000874aa 0130
.org 0x874ac
	strb r0, [r4, #18]	@ 000874ac a074
.org 0x874ae
	movs r1, #63	@ 000874ae 3f21
.org 0x874b0
	ands r0, r1	@ 000874b0 0840
.org 0x874b2
	cmp r0, #0	@ 000874b2 0028
.org 0x874b4
	bne.n 0x874ec	@ 000874b4 1ad1
.org 0x874b6
	ldr r2, [r4, #84]	@ 000874b6 626d
.org 0x874b8
	ldrb r1, [r4, #10]	@ 000874b8 a17a
.org 0x874ba
	movs r0, #16	@ 000874ba 1020
.org 0x874bc
	ands r0, r1	@ 000874bc 0840
.org 0x874be
	cmp r0, #0	@ 000874be 0028
.org 0x874c0
	beq.n 0x874cc	@ 000874c0 04d0
.org 0x874c2
	movs r1, #128	@ 000874c2 8021
.org 0x874c4
	lsls r1, r1, #3	@ 000874c4 c900
.org 0x874c6
	b.n 0x874ce	@ 000874c6 02e0
.org 0x874c8
	.byte 0xd4,0xef,0x85,0x08	@ 000874c8 data
.org 0x874cc
	ldr r1, [pc, #92]	@ 000874cc 1749
.org 0x874ce
	adds r0, r2, r1	@ 000874ce 5018
.org 0x874d0
	str r0, [sp, #0]	@ 000874d0 0090
.org 0x874d2
	ldr r0, [r4, #88]	@ 000874d2 a06d
.org 0x874d4
	str r0, [sp, #4]	@ 000874d4 0190
.org 0x874d6
	movs r0, #128	@ 000874d6 8020
.org 0x874d8
	lsls r0, r0, #2	@ 000874d8 8000
.org 0x874da
	str r0, [sp, #8]	@ 000874da 0290
.org 0x874dc
	add r1, sp, #8	@ 000874dc 02a9
.org 0x874de
	movs r0, #0	@ 000874de 0020
.org 0x874e0
	str r0, [r1, #4]	@ 000874e0 4860
.org 0x874e2
	mov r0, sp	@ 000874e2 6846
.org 0x874e4
	movs r2, #0	@ 000874e4 0022
.org 0x874e6
	movs r3, #2	@ 000874e6 0223
.org 0x874e8
	bl 0x88ff0	@ 000874e8 01f082fd
.org 0x874ec
	ldr r0, [pc, #64]	@ 000874ec 1048
.org 0x874ee
	ldr r2, [r0, #0]	@ 000874ee 0268
.org 0x874f0
	ldr r0, [r2, #84]	@ 000874f0 506d
.org 0x874f2
	ldr r1, [r4, #84]	@ 000874f2 616d
.org 0x874f4
	subs r0, r0, r1	@ 000874f4 401a
.org 0x874f6
	movs r1, #208	@ 000874f6 d021
.org 0x874f8
	lsls r1, r1, #7	@ 000874f8 c901
.org 0x874fa
	adds r0, r0, r1	@ 000874fa 4018
.org 0x874fc
	movs r1, #208	@ 000874fc d021
.org 0x874fe
	lsls r1, r1, #8	@ 000874fe 0902
.org 0x87500
	cmp r0, r1	@ 00087500 8842
.org 0x87502
	bhi.n 0x87522	@ 00087502 0ed8
.org 0x87504
	ldr r0, [r2, #88]	@ 00087504 906d
.org 0x87506
	ldr r1, [r4, #88]	@ 00087506 a16d
.org 0x87508
	subs r0, r0, r1	@ 00087508 401a
.org 0x8750a
	movs r1, #160	@ 0008750a a021
.org 0x8750c
	lsls r1, r1, #8	@ 0008750c 0902
.org 0x8750e
	adds r0, r0, r1	@ 0008750e 4018
.org 0x87510
	movs r1, #160	@ 00087510 a021
.org 0x87512
	lsls r1, r1, #9	@ 00087512 4902
.org 0x87514
	cmp r0, r1	@ 00087514 8842
.org 0x87516
	bhi.n 0x87522	@ 00087516 04d8
.org 0x87518
	movs r1, #0	@ 00087518 0021
.org 0x8751a
	movs r0, #3	@ 0008751a 0320
.org 0x8751c
	strb r0, [r4, #13]	@ 0008751c 6073
.org 0x8751e
	strb r1, [r4, #14]	@ 0008751e a173
.org 0x87520
	strb r1, [r4, #15]	@ 00087520 e173
.org 0x87522
	add sp, #16	@ 00087522 04b0
.org 0x87524
	pop {r4, r5}	@ 00087524 30bc
