@ FUN_08093610  entry 0x08093610  size 78
.thumb
.org 0x93610
FUN_08093610:
	push {r4, lr}	@ 00093610 10b5
.org 0x93612
	adds r4, r0, #0	@ 00093612 041c
.org 0x93614
	ldrb r0, [r4, #15]	@ 00093614 e07b
.org 0x93616
	cmp r0, #0	@ 00093616 0028
.org 0x93618
	bne.n 0x93638	@ 00093618 0ed1
.org 0x9361a
	adds r0, r4, #0	@ 0009361a 201c
.org 0x9361c
	adds r0, #116	@ 0009361c 7430
.org 0x9361e
	ldr r1, [pc, #64]	@ 0009361e 1049
.org 0x93620
	bl 0x5784	@ 00093620 72f7b0f8
.org 0x93624
	movs r1, #128	@ 00093624 8021
.org 0x93626
	lsls r1, r1, #7	@ 00093626 c901
.org 0x93628
	adds r0, r4, #0	@ 00093628 201c
.org 0x9362a
	bl 0x1cf00	@ 0009362a 89f769fc
.org 0x9362e
	movs r0, #8	@ 0009362e 0820
.org 0x93630
	strb r0, [r4, #18]	@ 00093630 a074
.org 0x93632
	ldrb r0, [r4, #15]	@ 00093632 e07b
.org 0x93634
	adds r0, #1	@ 00093634 0130
.org 0x93636
	strb r0, [r4, #15]	@ 00093636 e073
.org 0x93638
	adds r0, r4, #0	@ 00093638 201c
.org 0x9363a
	bl 0x1cff0	@ 0009363a 89f7d9fc
.org 0x9363e
	adds r0, r4, #0	@ 0009363e 201c
.org 0x93640
	bl 0x94a38	@ 00093640 01f0faf9
.org 0x93644
	ldrb r0, [r4, #18]	@ 00093644 a07c
.org 0x93646
	subs r0, #1	@ 00093646 0138
.org 0x93648
	strb r0, [r4, #18]	@ 00093648 a074
.org 0x9364a
	lsls r0, r0, #24	@ 0009364a 0006
.org 0x9364c
	lsrs r1, r0, #24	@ 0009364c 010e
.org 0x9364e
	cmp r1, #0	@ 0009364e 0029
.org 0x93650
	bne.n 0x93658	@ 00093650 02d1
.org 0x93652
	movs r0, #1	@ 00093652 0120
.org 0x93654
	strb r0, [r4, #14]	@ 00093654 a073
.org 0x93656
	strb r1, [r4, #15]	@ 00093656 e173
.org 0x93658
	pop {r4}	@ 00093658 10bc
.org 0x9365a
	pop {r0}	@ 0009365a 01bc
.org 0x9365c
	bx r0	@ 0009365c 0047
