@ FUN_080df71c  entry 0x080df71c  size 128
.thumb
.org 0xdf71c
FUN_080df71c:
	push {r4, lr}	@ 000df71c 10b5
.org 0xdf71e
	adds r4, r0, #0	@ 000df71e 041c
.org 0xdf720
	lsls r1, r1, #24	@ 000df720 0906
.org 0xdf722
	movs r0, #254	@ 000df722 fe20
.org 0xdf724
	lsls r0, r0, #24	@ 000df724 0006
.org 0xdf726
	adds r1, r1, r0	@ 000df726 0918
.org 0xdf728
	lsrs r3, r1, #24	@ 000df728 0b0e
.org 0xdf72a
	ldrb r0, [r4, #16]	@ 000df72a 207c
.org 0xdf72c
	cmp r0, #0	@ 000df72c 0028
.org 0xdf72e
	bne.n 0xdf736	@ 000df72e 02d1
.org 0xdf730
	adds r0, r3, #4	@ 000df730 181d
.org 0xdf732
	lsls r0, r0, #24	@ 000df732 0006
.org 0xdf734
	lsrs r3, r0, #24	@ 000df734 030e
.org 0xdf736
	ldrb r1, [r4, #10]	@ 000df736 a17a
.org 0xdf738
	movs r0, #16	@ 000df738 1020
.org 0xdf73a
	ands r0, r1	@ 000df73a 0840
.org 0xdf73c
	cmp r0, #0	@ 000df73c 0028
.org 0xdf73e
	beq.n 0xdf754	@ 000df73e 09d0
.org 0xdf740
	ldr r2, [pc, #12]	@ 000df740 034a
.org 0xdf742
	lsls r3, r3, #3	@ 000df742 db00
.org 0xdf744
	adds r0, r3, r2	@ 000df744 9818
.org 0xdf746
	ldr r1, [r0, #0]	@ 000df746 0168
.org 0xdf748
	lsls r1, r1, #8	@ 000df748 0902
.org 0xdf74a
	ldr r0, [r4, #84]	@ 000df74a 606d
.org 0xdf74c
	subs r0, r0, r1	@ 000df74c 401a
.org 0xdf74e
	b.n 0xdf762	@ 000df74e 08e0
.org 0xdf750
	.byte 0xe0,0x87,0x86,0x08	@ 000df750 data
.org 0xdf754
	ldr r2, [pc, #44]	@ 000df754 0b4a
.org 0xdf756
	lsls r3, r3, #3	@ 000df756 db00
.org 0xdf758
	adds r0, r3, r2	@ 000df758 9818
.org 0xdf75a
	ldr r1, [r0, #0]	@ 000df75a 0168
.org 0xdf75c
	lsls r1, r1, #8	@ 000df75c 0902
.org 0xdf75e
	ldr r0, [r4, #84]	@ 000df75e 606d
.org 0xdf760
	adds r0, r0, r1	@ 000df760 4018
.org 0xdf762
	str r0, [r4, #84]	@ 000df762 6065
.org 0xdf764
	adds r0, r2, #4	@ 000df764 101d
.org 0xdf766
	adds r0, r3, r0	@ 000df766 1818
.org 0xdf768
	ldr r1, [r0, #0]	@ 000df768 0168
.org 0xdf76a
	lsls r1, r1, #8	@ 000df76a 0902
.org 0xdf76c
	ldr r0, [r4, #88]	@ 000df76c a06d
.org 0xdf76e
	adds r0, r0, r1	@ 000df76e 4018
.org 0xdf770
	str r0, [r4, #88]	@ 000df770 a065
.org 0xdf772
	adds r0, r4, #0	@ 000df772 201c
.org 0xdf774
	adds r0, #116	@ 000df774 7430
.org 0xdf776
	ldrb r0, [r0, #0]	@ 000df776 0078
.org 0xdf778
	cmp r0, #0	@ 000df778 0028
.org 0xdf77a
	beq.n 0xdf78c	@ 000df77a 07d0
.org 0xdf77c
	ldr r1, [pc, #8]	@ 000df77c 0249
.org 0xdf77e
	adds r0, r3, r1	@ 000df77e 5818
.org 0xdf780
	ldr r0, [r0, #0]	@ 000df780 0068
.org 0xdf782
	b.n 0xdf794	@ 000df782 07e0
.org 0xdf784
	.byte 0xe0,0x87,0x86,0x08	@ 000df784 data
.org 0xdf788
	.byte 0x20,0x88,0x86,0x08	@ 000df788 data
.org 0xdf78c
	ldr r1, [pc, #24]	@ 000df78c 0649
.org 0xdf78e
	adds r0, r3, r1	@ 000df78e 5818
.org 0xdf790
	ldr r0, [r0, #0]	@ 000df790 0068
.org 0xdf792
	negs r0, r0	@ 000df792 4042
.org 0xdf794
	lsls r0, r0, #8	@ 000df794 0002
.org 0xdf796
	str r0, [r4, #92]	@ 000df796 e065
.org 0xdf798
	adds r0, r1, #4	@ 000df798 081d
.org 0xdf79a
	adds r0, r3, r0	@ 000df79a 1818
