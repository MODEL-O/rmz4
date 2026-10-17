@ FUN_0808754c  entry 0x0808754c  size 134
.thumb
.org 0x8754c
FUN_0808754c:
	push {r4, lr}	@ 0008754c 10b5
.org 0x8754e
	adds r4, r0, #0	@ 0008754e 041c
.org 0x87550
	ldrb r0, [r4, #15]	@ 00087550 e07b
.org 0x87552
	cmp r0, #0	@ 00087552 0028
.org 0x87554
	bne.n 0x87592	@ 00087554 1dd1
.org 0x87556
	adds r0, r4, #0	@ 00087556 201c
.org 0x87558
	adds r0, #116	@ 00087558 7430
.org 0x8755a
	ldr r1, [pc, #120]	@ 0008755a 1e49
.org 0x8755c
	bl 0x5784	@ 0008755c 7ef712f9
.org 0x87560
	movs r1, #232	@ 00087560 e821
.org 0x87562
	lsls r1, r1, #5	@ 00087562 4901
.org 0x87564
	adds r0, r4, #0	@ 00087564 201c
.org 0x87566
	bl 0x1cf00	@ 00087566 95f7cbfc
.org 0x8756a
	movs r2, #1	@ 0008756a 0122
.org 0x8756c
	ldrb r1, [r4, #10]	@ 0008756c a17a
.org 0x8756e
	movs r0, #32	@ 0008756e 2020
.org 0x87570
	orrs r0, r1	@ 00087570 0843
.org 0x87572
	strb r0, [r4, #10]	@ 00087572 a072
.org 0x87574
	adds r0, r4, #0	@ 00087574 201c
.org 0x87576
	adds r0, #77	@ 00087576 4d30
.org 0x87578
	strb r2, [r0, #0]	@ 00087578 0270
.org 0x8757a
	adds r3, r4, #0	@ 0008757a 231c
.org 0x8757c
	adds r3, #74	@ 0008757c 4a33
.org 0x8757e
	movs r2, #32	@ 0008757e 2022
.org 0x87580
	ldrb r1, [r3, #0]	@ 00087580 1978
.org 0x87582
	movs r0, #33	@ 00087582 2120
.org 0x87584
	negs r0, r0	@ 00087584 4042
.org 0x87586
	ands r0, r1	@ 00087586 0840
.org 0x87588
	orrs r0, r2	@ 00087588 1043
.org 0x8758a
	strb r0, [r3, #0]	@ 0008758a 1870
.org 0x8758c
	ldrb r0, [r4, #15]	@ 0008758c e07b
.org 0x8758e
	adds r0, #1	@ 0008758e 0130
.org 0x87590
	strb r0, [r4, #15]	@ 00087590 e073
.org 0x87592
	adds r0, r4, #0	@ 00087592 201c
.org 0x87594
	bl 0x1cff0	@ 00087594 95f72cfd
.org 0x87598
	ldr r0, [pc, #60]	@ 00087598 0f48
.org 0x8759a
	ldr r2, [r0, #0]	@ 0008759a 0268
.org 0x8759c
	ldr r0, [r2, #84]	@ 0008759c 506d
.org 0x8759e
	ldr r1, [r4, #84]	@ 0008759e 616d
.org 0x875a0
	subs r0, r0, r1	@ 000875a0 401a
.org 0x875a2
	movs r1, #208	@ 000875a2 d021
.org 0x875a4
	lsls r1, r1, #7	@ 000875a4 c901
.org 0x875a6
	adds r0, r0, r1	@ 000875a6 4018
.org 0x875a8
	movs r1, #208	@ 000875a8 d021
.org 0x875aa
	lsls r1, r1, #8	@ 000875aa 0902
.org 0x875ac
	cmp r0, r1	@ 000875ac 8842
.org 0x875ae
	bhi.n 0x875cc	@ 000875ae 0dd8
.org 0x875b0
	ldr r0, [r2, #88]	@ 000875b0 906d
.org 0x875b2
	ldr r1, [r4, #88]	@ 000875b2 a16d
.org 0x875b4
	subs r0, r0, r1	@ 000875b4 401a
.org 0x875b6
	movs r1, #160	@ 000875b6 a021
.org 0x875b8
	lsls r1, r1, #8	@ 000875b8 0902
.org 0x875ba
	adds r0, r0, r1	@ 000875ba 4018
.org 0x875bc
	movs r1, #160	@ 000875bc a021
.org 0x875be
	lsls r1, r1, #9	@ 000875be 4902
.org 0x875c0
	cmp r0, r1	@ 000875c0 8842
.org 0x875c2
	bhi.n 0x875cc	@ 000875c2 03d8
.org 0x875c4
	movs r1, #0	@ 000875c4 0021
.org 0x875c6
	movs r0, #1	@ 000875c6 0120
.org 0x875c8
	strb r0, [r4, #14]	@ 000875c8 a073
.org 0x875ca
	strb r1, [r4, #15]	@ 000875ca e173
.org 0x875cc
	pop {r4}	@ 000875cc 10bc
.org 0x875ce
	pop {r0}	@ 000875ce 01bc
.org 0x875d0
	bx r0	@ 000875d0 0047
