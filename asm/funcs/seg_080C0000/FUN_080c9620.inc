@ FUN_080c9620  entry 0x080c9620  size 122
.thumb
.org 0xc9620
FUN_080c9620:
	push {lr}	@ 000c9620 00b5
.org 0xc9622
	adds r3, r0, #0	@ 000c9622 031c
.org 0xc9624
	ldr r2, [r3, #40]	@ 000c9624 9a6a
.org 0xc9626
	ldrb r0, [r2, #30]	@ 000c9626 907f
.org 0xc9628
	lsls r0, r0, #8	@ 000c9628 0002
.org 0xc962a
	adds r1, r2, #0	@ 000c962a 111c
.org 0xc962c
	adds r1, #112	@ 000c962c 7031
.org 0xc962e
	ldrb r1, [r1, #0]	@ 000c962e 0978
.org 0xc9630
	orrs r0, r1	@ 000c9630 0843
.org 0xc9632
	ldr r1, [pc, #60]	@ 000c9632 0f49
.org 0xc9634
	cmp r0, r1	@ 000c9634 8842
.org 0xc9636
	beq.n 0xc9678	@ 000c9636 1fd0
.org 0xc9638
	ldrb r1, [r3, #10]	@ 000c9638 997a
.org 0xc963a
	movs r0, #254	@ 000c963a fe20
.org 0xc963c
	ands r0, r1	@ 000c963c 0840
.org 0xc963e
	movs r2, #0	@ 000c963e 0022
.org 0xc9640
	movs r1, #253	@ 000c9640 fd21
.org 0xc9642
	ands r0, r1	@ 000c9642 0840
.org 0xc9644
	strb r0, [r3, #10]	@ 000c9644 9872
.org 0xc9646
	adds r0, r3, #0	@ 000c9646 181c
.org 0xc9648
	adds r0, #140	@ 000c9648 8c30
.org 0xc964a
	str r2, [r0, #0]	@ 000c964a 0260
.org 0xc964c
	adds r0, #4	@ 000c964c 0430
.org 0xc964e
	str r2, [r0, #0]	@ 000c964e 0260
.org 0xc9650
	adds r0, #4	@ 000c9650 0430
.org 0xc9652
	strb r2, [r0, #0]	@ 000c9652 0270
.org 0xc9654
	ldrb r1, [r3, #10]	@ 000c9654 997a
.org 0xc9656
	movs r0, #251	@ 000c9656 fb20
.org 0xc9658
	ands r0, r1	@ 000c9658 0840
.org 0xc965a
	strb r0, [r3, #10]	@ 000c965a 9872
.org 0xc965c
	ldr r1, [pc, #20]	@ 000c965c 0549
.org 0xc965e
	ldrb r0, [r3, #9]	@ 000c965e 587a
.org 0xc9660
	lsls r0, r0, #2	@ 000c9660 8000
.org 0xc9662
	adds r0, r0, r1	@ 000c9662 4018
.org 0xc9664
	movs r1, #3	@ 000c9664 0321
.org 0xc9666
	str r1, [r3, #12]	@ 000c9666 d960
.org 0xc9668
	ldr r0, [r0, #0]	@ 000c9668 0068
.org 0xc966a
	ldr r0, [r0, #12]	@ 000c966a c068
.org 0xc966c
	str r0, [r3, #20]	@ 000c966c 5861
.org 0xc966e
	b.n 0xc969e	@ 000c966e 16e0
.org 0xc9670
	.byte 0x1c,0xa9,0x00,0x00	@ 000c9670 data
.org 0xc9674
	.byte 0xf4,0x49,0x86,0x08	@ 000c9674 data
.org 0xc9678
	adds r0, r2, #0	@ 000c9678 101c
.org 0xc967a
	adds r0, #113	@ 000c967a 7130
.org 0xc967c
	ldrb r0, [r0, #0]	@ 000c967c 0078
.org 0xc967e
	lsls r0, r0, #24	@ 000c967e 0006
.org 0xc9680
	asrs r0, r0, #24	@ 000c9680 0016
.org 0xc9682
	cmp r0, #4	@ 000c9682 0428
.org 0xc9684
	ble.n 0xc969e	@ 000c9684 0bdd
.org 0xc9686
	ldr r1, [pc, #28]	@ 000c9686 0749
.org 0xc9688
	ldrb r0, [r3, #9]	@ 000c9688 587a
.org 0xc968a
	lsls r0, r0, #2	@ 000c968a 8000
.org 0xc968c
	adds r0, r0, r1	@ 000c968c 4018
.org 0xc968e
	movs r1, #2	@ 000c968e 0221
.org 0xc9690
	str r1, [r3, #12]	@ 000c9690 d960
.org 0xc9692
	ldr r0, [r0, #0]	@ 000c9692 0068
.org 0xc9694
	ldr r0, [r0, #8]	@ 000c9694 8068
.org 0xc9696
	str r0, [r3, #20]	@ 000c9696 5861
.org 0xc9698
	adds r0, r3, #0	@ 000c9698 181c
