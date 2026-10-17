@ FUN_080095e8  entry 0x080095e8  size 156
.thumb
.org 0x95e8
FUN_080095e8:
	push {r4, r5, r6, r7, lr}	@ 000095e8 f0b5
.org 0x95ea
	mov r7, sl	@ 000095ea 5746
.org 0x95ec
	mov r6, r9	@ 000095ec 4e46
.org 0x95ee
	mov r5, r8	@ 000095ee 4546
.org 0x95f0
	push {r5, r6, r7}	@ 000095f0 e0b4
.org 0x95f2
	sub sp, #8	@ 000095f2 82b0
.org 0x95f4
	adds r6, r0, #0	@ 000095f4 061c
.org 0x95f6
	str r1, [sp, #0]	@ 000095f6 0091
.org 0x95f8
	ldr r0, [pc, #104]	@ 000095f8 1a48
.org 0x95fa
	str r0, [sp, #4]	@ 000095fa 0190
.org 0x95fc
	movs r5, #0	@ 000095fc 0025
.org 0x95fe
	ldr r1, [sp, #4]	@ 000095fe 0199
.org 0x9600
	movs r2, #233	@ 00009600 e922
.org 0x9602
	lsls r2, r2, #1	@ 00009602 5200
.org 0x9604
	adds r0, r1, r2	@ 00009604 8818
.org 0x9606
	ldrb r0, [r0, #0]	@ 00009606 0078
.org 0x9608
	cmp r5, r0	@ 00009608 8542
.org 0x960a
	bge.n 0x9676	@ 0000960a 34da
.org 0x960c
	movs r7, #240	@ 0000960c f027
.org 0x960e
	lsls r7, r7, #1	@ 0000960e 7f00
.org 0x9610
	adds r7, r7, r1	@ 00009610 7f18
.org 0x9612
	mov r9, r7	@ 00009612 b946
.org 0x9614
	adds r2, #10	@ 00009614 0a32
.org 0x9616
	adds r2, r2, r1	@ 00009616 5218
.org 0x9618
	mov r8, r2	@ 00009618 9046
.org 0x961a
	mov ip, r1	@ 0000961a 8c46
.org 0x961c
	mov sl, r0	@ 0000961c 8246
.org 0x961e
	movs r0, #236	@ 0000961e ec20
.org 0x9620
	lsls r0, r0, #1	@ 00009620 4000
.org 0x9622
	add r0, ip	@ 00009622 6044
.org 0x9624
	ldrh r3, [r0, #0]	@ 00009624 0388
.org 0x9626
	lsls r1, r3, #1	@ 00009626 5900
.org 0x9628
	mov r7, r8	@ 00009628 4746
.org 0x962a
	ldr r4, [r7, #0]	@ 0000962a 3c68
.org 0x962c
	subs r0, r6, r4	@ 0000962c 301b
.org 0x962e
	adds r0, r0, r3	@ 0000962e c018
.org 0x9630
	cmp r1, r0	@ 00009630 8142
.org 0x9632
	bls.n 0x9668	@ 00009632 19d9
.org 0x9634
	movs r0, #237	@ 00009634 ed20
.org 0x9636
	lsls r0, r0, #1	@ 00009636 4000
.org 0x9638
	add r0, ip	@ 00009638 6044
.org 0x963a
	ldrh r0, [r0, #0]	@ 0000963a 0088
.org 0x963c
	lsls r2, r0, #1	@ 0000963c 4200
.org 0x963e
	mov r7, r9	@ 0000963e 4f46
.org 0x9640
	ldr r1, [r7, #0]	@ 00009640 3968
.org 0x9642
	ldr r7, [sp, #0]	@ 00009642 009f
.org 0x9644
	subs r1, r7, r1	@ 00009644 791a
.org 0x9646
	adds r1, r1, r0	@ 00009646 0918
.org 0x9648
	subs r1, #1	@ 00009648 0139
.org 0x964a
	cmp r2, r1	@ 0000964a 8a42
.org 0x964c
	bls.n 0x9668	@ 0000964c 0cd9
.org 0x964e
	movs r0, #235	@ 0000964e eb20
.org 0x9650
	lsls r0, r0, #1	@ 00009650 4000
.org 0x9652
	add r0, ip	@ 00009652 6044
.org 0x9654
	ldrh r1, [r0, #0]	@ 00009654 0188
.org 0x9656
	movs r0, #132	@ 00009656 8420
.org 0x9658
	lsls r0, r0, #8	@ 00009658 0002
.org 0x965a
	ands r0, r1	@ 0000965a 0840
.org 0x965c
	cmp r0, #0	@ 0000965c 0028
.org 0x965e
	bne.n 0x9668	@ 0000965e 03d1
.org 0x9660
	adds r6, r4, r3	@ 00009660 e618
.org 0x9662
	b.n 0x95fc	@ 00009662 cbe7
.org 0x9664
	.byte 0xb0,0x0a,0x00,0x02	@ 00009664 data
.org 0x9668
	movs r0, #24	@ 00009668 1820
.org 0x966a
	add r9, r0	@ 0000966a 8144
.org 0x966c
	add r8, r0	@ 0000966c 8044
.org 0x966e
	add ip, r0	@ 0000966e 8444
.org 0x9670
	adds r5, #1	@ 00009670 0135
.org 0x9672
	cmp r5, sl	@ 00009672 5545
.org 0x9674
	blt.n 0x961e	@ 00009674 d3db
.org 0x9676
	adds r0, r6, #0	@ 00009676 301c
.org 0x9678
	add sp, #8	@ 00009678 02b0
.org 0x967a
	pop {r3, r4, r5}	@ 0000967a 38bc
.org 0x967c
	mov r8, r3	@ 0000967c 9846
.org 0x967e
	mov r9, r4	@ 0000967e a146
.org 0x9680
	mov sl, r5	@ 00009680 aa46
.org 0x9682
	pop {r4, r5, r6, r7}	@ 00009682 f0bc
