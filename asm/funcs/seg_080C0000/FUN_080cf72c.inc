@ FUN_080cf72c  entry 0x080cf72c  size 110
.thumb
.org 0xcf72c
FUN_080cf72c:
	push {r4, lr}	@ 000cf72c 10b5
.org 0xcf72e
	adds r4, r0, #0	@ 000cf72e 041c
.org 0xcf730
	ldr r2, [r4, #40]	@ 000cf730 a26a
.org 0xcf732
	ldrb r1, [r4, #16]	@ 000cf732 217c
.org 0xcf734
	ldrb r0, [r4, #15]	@ 000cf734 e07b
.org 0xcf736
	cmp r0, #0	@ 000cf736 0028
.org 0xcf738
	bne.n 0xcf760	@ 000cf738 12d1
.org 0xcf73a
	cmp r1, #1	@ 000cf73a 0129
.org 0xcf73c
	bne.n 0xcf754	@ 000cf73c 0ad1
.org 0xcf73e
	adds r1, r4, #0	@ 000cf73e 211c
.org 0xcf740
	adds r1, #84	@ 000cf740 5431
.org 0xcf742
	adds r0, r2, #0	@ 000cf742 101c
.org 0xcf744
	movs r2, #2	@ 000cf744 0222
.org 0xcf746
	movs r3, #0	@ 000cf746 0023
.org 0xcf748
	bl 0xcf36c	@ 000cf748 fff710fe
.org 0xcf74c
	ldr r0, [pc, #0]	@ 000cf74c 0048
.org 0xcf74e
	b.n 0xcf758	@ 000cf74e 03e0
.org 0xcf750
	.byte 0xc0,0xfc,0xff,0xff	@ 000cf750 data
.org 0xcf754
	movs r0, #208	@ 000cf754 d020
.org 0xcf756
	lsls r0, r0, #2	@ 000cf756 8000
.org 0xcf758
	str r0, [r4, #92]	@ 000cf758 e065
.org 0xcf75a
	ldrb r0, [r4, #15]	@ 000cf75a e07b
.org 0xcf75c
	adds r0, #1	@ 000cf75c 0130
.org 0xcf75e
	strb r0, [r4, #15]	@ 000cf75e e073
.org 0xcf760
	adds r0, r4, #0	@ 000cf760 201c
.org 0xcf762
	bl 0x1cff0	@ 000cf762 4df745fc
.org 0xcf766
	ldr r0, [r4, #84]	@ 000cf766 606d
.org 0xcf768
	ldr r1, [r4, #92]	@ 000cf768 e16d
.org 0xcf76a
	adds r0, r0, r1	@ 000cf76a 4018
.org 0xcf76c
	str r0, [r4, #84]	@ 000cf76c 6065
.org 0xcf76e
	ldr r0, [pc, #48]	@ 000cf76e 0c48
.org 0xcf770
	adds r1, r4, #0	@ 000cf770 211c
.org 0xcf772
	adds r1, #84	@ 000cf772 5431
.org 0xcf774
	bl 0x1fb14	@ 000cf774 50f7cef9
.org 0xcf778
	movs r1, #128	@ 000cf778 8021
.org 0xcf77a
	lsls r1, r1, #5	@ 000cf77a 4901
.org 0xcf77c
	cmp r0, r1	@ 000cf77c 8842
.org 0xcf77e
	bls.n 0xcf798	@ 000cf77e 0bd9
.org 0xcf780
	ldr r1, [pc, #32]	@ 000cf780 0849
.org 0xcf782
	ldrb r0, [r4, #9]	@ 000cf782 607a
.org 0xcf784
	lsls r0, r0, #2	@ 000cf784 8000
.org 0xcf786
	adds r0, r0, r1	@ 000cf786 4018
.org 0xcf788
	movs r1, #2	@ 000cf788 0221
.org 0xcf78a
	str r1, [r4, #12]	@ 000cf78a e160
.org 0xcf78c
	ldr r0, [r0, #0]	@ 000cf78c 0068
.org 0xcf78e
	ldr r0, [r0, #8]	@ 000cf78e 8068
.org 0xcf790
	str r0, [r4, #20]	@ 000cf790 6061
.org 0xcf792
	adds r0, r4, #0	@ 000cf792 201c
.org 0xcf794
	bl 0xcf7a8	@ 000cf794 00f008f8
.org 0xcf798
	pop {r4}	@ 000cf798 10bc
