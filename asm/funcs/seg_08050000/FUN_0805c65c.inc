@ FUN_0805c65c  entry 0x0805c65c  size 278
.thumb
.org 0x5c65c
FUN_0805c65c:
	push {r4, r5, lr}	@ 0005c65c 30b5
.org 0x5c65e
	sub sp, #8	@ 0005c65e 82b0
.org 0x5c660
	adds r5, r0, #0	@ 0005c660 051c
.org 0x5c662
	ldr r1, [pc, #208]	@ 0005c662 3449
.org 0x5c664
	mov r0, sp	@ 0005c664 6846
.org 0x5c666
	movs r2, #6	@ 0005c666 0622
.org 0x5c668
	bl 0x129258	@ 0005c668 ccf0f6fd
.org 0x5c66c
	ldrb r0, [r5, #16]	@ 0005c66c 287c
.org 0x5c66e
	ldrb r4, [r5, #15]	@ 0005c66e ec7b
.org 0x5c670
	cmp r4, #0	@ 0005c670 002c
.org 0x5c672
	bne.n 0x5c6b2	@ 0005c672 1ed1
.org 0x5c674
	lsls r0, r0, #1	@ 0005c674 4000
.org 0x5c676
	add r0, sp	@ 0005c676 6844
.org 0x5c678
	ldrb r1, [r0, #0]	@ 0005c678 0178
.org 0x5c67a
	adds r0, r5, #0	@ 0005c67a 281c
.org 0x5c67c
	bl 0x5ee6c	@ 0005c67c 02f0f6fb
.org 0x5c680
	movs r0, #160	@ 0005c680 a020
.org 0x5c682
	lsls r0, r0, #2	@ 0005c682 8000
.org 0x5c684
	str r0, [r5, #96]	@ 0005c684 2866
.org 0x5c686
	movs r0, #32	@ 0005c686 2020
.org 0x5c688
	str r0, [r5, #104]	@ 0005c688 a866
.org 0x5c68a
	movs r2, #0	@ 0005c68a 0022
.org 0x5c68c
	adds r0, r5, #0	@ 0005c68c 281c
.org 0x5c68e
	adds r0, #180	@ 0005c68e b430
.org 0x5c690
	ldr r0, [r0, #0]	@ 0005c690 0068
.org 0x5c692
	ldr r1, [pc, #164]	@ 0005c692 2949
.org 0x5c694
	adds r0, r0, r1	@ 0005c694 4018
.org 0x5c696
	ldr r1, [r5, #88]	@ 0005c696 a96d
.org 0x5c698
	cmp r1, r0	@ 0005c698 8142
.org 0x5c69a
	blt.n 0x5c69e	@ 0005c69a 00db
.org 0x5c69c
	movs r2, #1	@ 0005c69c 0122
.org 0x5c69e
	str r2, [r5, #92]	@ 0005c69e ea65
.org 0x5c6a0
	str r1, [r5, #100]	@ 0005c6a0 6966
.org 0x5c6a2
	adds r0, r5, #0	@ 0005c6a2 281c
.org 0x5c6a4
	bl 0x5f08c	@ 0005c6a4 02f0f2fc
.org 0x5c6a8
	strb r0, [r5, #18]	@ 0005c6a8 a874
.org 0x5c6aa
	strb r4, [r5, #19]	@ 0005c6aa ec74
.org 0x5c6ac
	ldrb r0, [r5, #15]	@ 0005c6ac e87b
.org 0x5c6ae
	adds r0, #1	@ 0005c6ae 0130
.org 0x5c6b0
	strb r0, [r5, #15]	@ 0005c6b0 e873
.org 0x5c6b2
	adds r0, r5, #0	@ 0005c6b2 281c
.org 0x5c6b4
	bl 0x1cff0	@ 0005c6b4 c0f79cfc
.org 0x5c6b8
	adds r0, r5, #0	@ 0005c6b8 281c
.org 0x5c6ba
	adds r0, #116	@ 0005c6ba 7430
.org 0x5c6bc
	ldr r4, [pc, #124]	@ 0005c6bc 1f4c
.org 0x5c6be
	ldr r3, [pc, #128]	@ 0005c6be 204b
.org 0x5c6c0
	adds r1, r5, #0	@ 0005c6c0 291c
.org 0x5c6c2
	adds r1, #184	@ 0005c6c2 b831
.org 0x5c6c4
	ldrb r2, [r1, #0]	@ 0005c6c4 0a78
.org 0x5c6c6
	lsls r1, r2, #1	@ 0005c6c6 5100
.org 0x5c6c8
	adds r1, r1, r3	@ 0005c6c8 c918
.org 0x5c6ca
	ldrh r1, [r1, #0]	@ 0005c6ca 0988
.org 0x5c6cc
	lsls r1, r1, #2	@ 0005c6cc 8900
.org 0x5c6ce
	adds r1, r1, r4	@ 0005c6ce 0919
.org 0x5c6d0
	adds r3, r5, #0	@ 0005c6d0 2b1c
.org 0x5c6d2
	adds r3, #113	@ 0005c6d2 7133
.org 0x5c6d4
	movs r4, #0	@ 0005c6d4 0024
.org 0x5c6d6
	ldrsb r4, [r3, r4]	@ 0005c6d6 1c57
.org 0x5c6d8
	ldr r1, [r1, #0]	@ 0005c6d8 0968
.org 0x5c6da
	lsls r3, r4, #2	@ 0005c6da a300
.org 0x5c6dc
	adds r3, r3, r1	@ 0005c6dc 5b18
.org 0x5c6de
	ldr r1, [pc, #100]	@ 0005c6de 1949
.org 0x5c6e0
	lsls r2, r2, #2	@ 0005c6e0 9200
.org 0x5c6e2
	adds r2, r2, r1	@ 0005c6e2 5218
.org 0x5c6e4
	ldr r1, [r2, #0]	@ 0005c6e4 1168
.org 0x5c6e6
	adds r1, r1, r4	@ 0005c6e6 0919
.org 0x5c6e8
	ldrb r1, [r1, #0]	@ 0005c6e8 0978
.org 0x5c6ea
	lsls r2, r1, #1	@ 0005c6ea 4a00
.org 0x5c6ec
	adds r2, r2, r1	@ 0005c6ec 5218
.org 0x5c6ee
	lsls r2, r2, #3	@ 0005c6ee d200
.org 0x5c6f0
	ldr r1, [r3, #0]	@ 0005c6f0 1968
.org 0x5c6f2
	adds r1, r1, r2	@ 0005c6f2 8918
.org 0x5c6f4
	bl 0x5784	@ 0005c6f4 a9f746f8
.org 0x5c6f8
	ldr r2, [r5, #88]	@ 0005c6f8 aa6d
.org 0x5c6fa
	ldr r4, [r5, #92]	@ 0005c6fa ec6d
.org 0x5c6fc
	adds r1, r2, r4	@ 0005c6fc 1119
.org 0x5c6fe
	ldr r0, [r5, #100]	@ 0005c6fe 686e
.org 0x5c700
	subs r0, r0, r1	@ 0005c700 401a
.org 0x5c702
	movs r3, #1	@ 0005c702 0123
.org 0x5c704
	lsrs r0, r0, #31	@ 0005c704 c00f
.org 0x5c706
	ldrb r1, [r5, #19]	@ 0005c706 e97c
.org 0x5c708
	adds r0, r0, r1	@ 0005c708 4018
.org 0x5c70a
	ands r0, r3	@ 0005c70a 1840
.org 0x5c70c
	lsls r0, r0, #1	@ 0005c70c 4000
.org 0x5c70e
	subs r0, #1	@ 0005c70e 0138
.org 0x5c710
	ldr r3, [r5, #96]	@ 0005c710 2b6e
.org 0x5c712
	muls r0, r3	@ 0005c712 5843
.org 0x5c714
	adds r2, r2, r0	@ 0005c714 1218
.org 0x5c716
	str r2, [r5, #88]	@ 0005c716 aa65
.org 0x5c718
	lsls r1, r1, #24	@ 0005c718 0906
.org 0x5c71a
	cmp r1, #0	@ 0005c71a 0029
.org 0x5c71c
	beq.n 0x5c748	@ 0005c71c 14d0
.org 0x5c71e
	ldr r0, [r5, #104]	@ 0005c71e a86e
.org 0x5c720
	adds r0, r3, r0	@ 0005c720 1818
.org 0x5c722
	str r0, [r5, #96]	@ 0005c722 2866
.org 0x5c724
	movs r1, #160	@ 0005c724 a021
.org 0x5c726
	lsls r1, r1, #2	@ 0005c726 8900
.org 0x5c728
	cmp r0, r1	@ 0005c728 8842
.org 0x5c72a
	ble.n 0x5c760	@ 0005c72a 19dd
.org 0x5c72c
	str r1, [r5, #96]	@ 0005c72c 2966
.org 0x5c72e
	movs r0, #0	@ 0005c72e 0020
.org 0x5c730
	strb r0, [r5, #19]	@ 0005c730 e874
.org 0x5c732
	b.n 0x5c760	@ 0005c732 15e0
.org 0x5c734
	.byte 0x2c,0x97,0x12,0x08	@ 0005c734 data
.org 0x5c738
	.byte 0x00,0xb0,0xff,0xff	@ 0005c738 data
.org 0x5c73c
	.byte 0xa8,0xa7,0x85,0x08	@ 0005c73c data
.org 0x5c740
	.byte 0x10,0xa9,0x85,0x08	@ 0005c740 data
.org 0x5c744
	.byte 0x44,0xa8,0x85,0x08	@ 0005c744 data
.org 0x5c748
	ldr r0, [r5, #104]	@ 0005c748 a86e
.org 0x5c74a
	subs r0, r3, r0	@ 0005c74a 181a
.org 0x5c74c
	str r0, [r5, #96]	@ 0005c74c 2866
.org 0x5c74e
	cmp r0, #31	@ 0005c74e 1f28
.org 0x5c750
	bgt.n 0x5c760	@ 0005c750 06dc
.org 0x5c752
	movs r0, #32	@ 0005c752 2020
.org 0x5c754
	str r0, [r5, #96]	@ 0005c754 2866
.org 0x5c756
	movs r1, #1	@ 0005c756 0121
.org 0x5c758
	strb r1, [r5, #19]	@ 0005c758 e974
.org 0x5c75a
	adds r0, r4, #1	@ 0005c75a 601c
.org 0x5c75c
	ands r0, r1	@ 0005c75c 0840
.org 0x5c75e
	str r0, [r5, #92]	@ 0005c75e e865
.org 0x5c760
	ldr r0, [pc, #36]	@ 0005c760 0948
.org 0x5c762
	ldrh r1, [r0, #8]	@ 0005c762 0189
.org 0x5c764
	movs r0, #8	@ 0005c764 0820
.org 0x5c766
	ands r0, r1	@ 0005c766 0840
.org 0x5c768
	cmp r0, #0	@ 0005c768 0028
.org 0x5c76a
	bne.n 0x5c77e	@ 0005c76a 08d1
.org 0x5c76c
	ldrb r0, [r5, #18]	@ 0005c76c a87c
.org 0x5c76e
	subs r0, #1	@ 0005c76e 0138
.org 0x5c770
	strb r0, [r5, #18]	@ 0005c770 a874
