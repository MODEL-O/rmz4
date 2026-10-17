@ FUN_08054624  entry 0x08054624  size 98
.thumb
.org 0x54624
FUN_08054624:
	push {r4, lr}	@ 00054624 10b5
.org 0x54626
	adds r4, r0, #0	@ 00054626 041c
.org 0x54628
	ldrb r0, [r4, #15]	@ 00054628 e07b
.org 0x5462a
	cmp r0, #0	@ 0005462a 0028
.org 0x5462c
	bne.n 0x5464e	@ 0005462c 0fd1
.org 0x5462e
	movs r0, #87	@ 0005462e 5720
.org 0x54630
	bl 0x2b10	@ 00054630 aef76efa
.org 0x54634
	movs r1, #176	@ 00054634 b021
.org 0x54636
	lsls r1, r1, #6	@ 00054636 8901
.org 0x54638
	adds r0, r4, #0	@ 00054638 201c
.org 0x5463a
	bl 0x1cf00	@ 0005463a c8f761fc
.org 0x5463e
	adds r0, r4, #0	@ 0005463e 201c
.org 0x54640
	movs r1, #12	@ 00054640 0c21
.org 0x54642
	movs r2, #1	@ 00054642 0122
.org 0x54644
	bl 0x5516c	@ 00054644 00f092fd
.org 0x54648
	ldrb r0, [r4, #15]	@ 00054648 e07b
.org 0x5464a
	adds r0, #1	@ 0005464a 0130
.org 0x5464c
	strb r0, [r4, #15]	@ 0005464c e073
.org 0x5464e
	adds r0, r4, #0	@ 0005464e 201c
.org 0x54650
	bl 0x1cff0	@ 00054650 c8f7cefc
.org 0x54654
	adds r0, r4, #0	@ 00054654 201c
.org 0x54656
	adds r0, #188	@ 00054656 bc30
.org 0x54658
	ldr r1, [r0, #0]	@ 00054658 0168
.org 0x5465a
	ldr r0, [pc, #32]	@ 0005465a 0848
.org 0x5465c
	adds r1, r1, r0	@ 0005465c 0918
.org 0x5465e
	adds r0, r4, #0	@ 0005465e 201c
.org 0x54660
	bl 0x55188	@ 00054660 00f092fd
.org 0x54664
	adds r2, r0, #0	@ 00054664 021c
.org 0x54666
	cmp r2, #0	@ 00054666 002a
.org 0x54668
	bne.n 0x54686	@ 00054668 0dd1
.org 0x5466a
	adds r0, r4, #0	@ 0005466a 201c
.org 0x5466c
	adds r0, #192	@ 0005466c c030
.org 0x5466e
	ldr r1, [r4, #84]	@ 0005466e 616d
.org 0x54670
	ldr r0, [r0, #0]	@ 00054670 0068
.org 0x54672
	cmp r1, r0	@ 00054672 8142
.org 0x54674
	bne.n 0x54680	@ 00054674 04d1
.org 0x54676
	movs r0, #3	@ 00054676 0320
.org 0x54678
	b.n 0x54682	@ 00054678 03e0
.org 0x5467a
	.byte 0x00	@ 0005467a data
.org 0x5467b
	.byte 0x00	@ 0005467b data
.org 0x5467c
	.byte 0xff,0xef,0x00,0x00	@ 0005467c data
.org 0x54680
	movs r0, #2	@ 00054680 0220
.org 0x54682
	strb r0, [r4, #14]	@ 00054682 a073
.org 0x54684
	strb r2, [r4, #15]	@ 00054684 e273
