@ FUN_080c35ac  entry 0x080c35ac  size 170
.thumb
.org 0xc35ac
FUN_080c35ac:
	push {r4, r5, r6, lr}	@ 000c35ac 70b5
.org 0xc35ae
	adds r6, r0, #0	@ 000c35ae 061c
.org 0xc35b0
	bl 0x1cc9c	@ 000c35b0 59f774fb
.org 0xc35b4
	ldrb r1, [r6, #10]	@ 000c35b4 b17a
.org 0xc35b6
	movs r0, #1	@ 000c35b6 0120
.org 0xc35b8
	orrs r0, r1	@ 000c35b8 0843
.org 0xc35ba
	movs r1, #2	@ 000c35ba 0221
.org 0xc35bc
	orrs r0, r1	@ 000c35bc 0843
.org 0xc35be
	strb r0, [r6, #10]	@ 000c35be b072
.org 0xc35c0
	ldr r1, [pc, #84]	@ 000c35c0 1549
.org 0xc35c2
	adds r0, r6, #0	@ 000c35c2 301c
.org 0xc35c4
	bl 0x1cf00	@ 000c35c4 59f79cfc
.org 0xc35c8
	adds r0, r6, #0	@ 000c35c8 301c
.org 0xc35ca
	bl 0x1cff0	@ 000c35ca 59f711fd
.org 0xc35ce
	movs r5, #0	@ 000c35ce 0025
.org 0xc35d0
	ldrb r1, [r6, #10]	@ 000c35d0 b17a
.org 0xc35d2
	movs r0, #239	@ 000c35d2 ef20
.org 0xc35d4
	ands r0, r1	@ 000c35d4 0840
.org 0xc35d6
	strb r0, [r6, #10]	@ 000c35d6 b072
.org 0xc35d8
	adds r0, r6, #0	@ 000c35d8 301c
.org 0xc35da
	adds r0, #76	@ 000c35da 4c30
.org 0xc35dc
	strb r5, [r0, #0]	@ 000c35dc 0570
.org 0xc35de
	adds r2, r6, #0	@ 000c35de 321c
.org 0xc35e0
	adds r2, #74	@ 000c35e0 4a32
.org 0xc35e2
	ldrb r1, [r2, #0]	@ 000c35e2 1178
.org 0xc35e4
	movs r0, #17	@ 000c35e4 1120
.org 0xc35e6
	negs r0, r0	@ 000c35e6 4042
.org 0xc35e8
	ands r0, r1	@ 000c35e8 0840
.org 0xc35ea
	strb r0, [r2, #0]	@ 000c35ea 1070
.org 0xc35ec
	ldrb r1, [r6, #10]	@ 000c35ec b17a
.org 0xc35ee
	movs r0, #4	@ 000c35ee 0420
.org 0xc35f0
	orrs r0, r1	@ 000c35f0 0843
.org 0xc35f2
	strb r0, [r6, #10]	@ 000c35f2 b072
.org 0xc35f4
	adds r4, r6, #0	@ 000c35f4 341c
.org 0xc35f6
	adds r4, #116	@ 000c35f6 7434
.org 0xc35f8
	ldr r1, [pc, #32]	@ 000c35f8 0849
.org 0xc35fa
	adds r2, #10	@ 000c35fa 0a32
.org 0xc35fc
	adds r0, r4, #0	@ 000c35fc 201c
.org 0xc35fe
	movs r3, #8	@ 000c35fe 0823
.org 0xc3600
	bl 0x5760	@ 000c3600 42f7aef8
.org 0xc3604
	str r6, [r4, #44]	@ 000c3604 e662
.org 0xc3606
	str r5, [r4, #36]	@ 000c3606 6562
.org 0xc3608
	ldrb r0, [r6, #17]	@ 000c3608 707c
.org 0xc360a
	cmp r0, #0	@ 000c360a 0028
.org 0xc360c
	bne.n 0xc3620	@ 000c360c 08d1
.org 0xc360e
	adds r1, r6, #0	@ 000c360e 311c
.org 0xc3610
	adds r1, #180	@ 000c3610 b431
.org 0xc3612
	movs r0, #80	@ 000c3612 5020
.org 0xc3614
	b.n 0xc3626	@ 000c3614 07e0
.org 0xc3616
	.byte 0x00	@ 000c3616 data
.org 0xc3617
	.byte 0x00	@ 000c3617 data
.org 0xc3618
	.byte 0x07,0x86,0x00,0x00	@ 000c3618 data
.org 0xc361c
	.byte 0x88,0x55,0x86,0x08	@ 000c361c data
.org 0xc3620
	adds r1, r6, #0	@ 000c3620 311c
.org 0xc3622
	adds r1, #180	@ 000c3622 b431
.org 0xc3624
	movs r0, #48	@ 000c3624 3020
.org 0xc3626
	strb r0, [r1, #0]	@ 000c3626 0870
.org 0xc3628
	adds r1, r6, #0	@ 000c3628 311c
.org 0xc362a
	adds r1, #181	@ 000c362a b531
.org 0xc362c
	movs r0, #0	@ 000c362c 0020
.org 0xc362e
	strb r0, [r1, #0]	@ 000c362e 0870
.org 0xc3630
	adds r1, #1	@ 000c3630 0131
.org 0xc3632
	strb r0, [r1, #0]	@ 000c3632 0870
.org 0xc3634
	movs r0, #0	@ 000c3634 0020
.org 0xc3636
	strb r0, [r6, #18]	@ 000c3636 b074
.org 0xc3638
	strb r0, [r6, #19]	@ 000c3638 f074
.org 0xc363a
	adds r0, r6, #0	@ 000c363a 301c
.org 0xc363c
	movs r1, #4	@ 000c363c 0421
.org 0xc363e
	bl 0xc34e0	@ 000c363e fff74fff
.org 0xc3642
	ldr r1, [pc, #28]	@ 000c3642 0749
.org 0xc3644
	ldrb r0, [r6, #9]	@ 000c3644 707a
.org 0xc3646
	lsls r0, r0, #2	@ 000c3646 8000
.org 0xc3648
	adds r0, r0, r1	@ 000c3648 4018
.org 0xc364a
	movs r1, #1	@ 000c364a 0121
.org 0xc364c
	str r1, [r6, #12]	@ 000c364c f160
.org 0xc364e
	ldr r0, [r0, #0]	@ 000c364e 0068
.org 0xc3650
	ldr r0, [r0, #4]	@ 000c3650 4068
.org 0xc3652
	str r0, [r6, #20]	@ 000c3652 7061
.org 0xc3654
	adds r0, r6, #0	@ 000c3654 301c
