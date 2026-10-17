@ FUN_080ff5d4  entry 0x080ff5d4  size 184
.thumb
.org 0xff5d4
FUN_080ff5d4:
	push {r4, lr}	@ 000ff5d4 10b5
.org 0xff5d6
	adds r4, r0, #0	@ 000ff5d6 041c
.org 0xff5d8
	bl 0x1cff0	@ 000ff5d8 1df70afd
.org 0xff5dc
	ldrb r0, [r4, #13]	@ 000ff5dc 607b
.org 0xff5de
	cmp r0, #0	@ 000ff5de 0028
.org 0xff5e0
	bne.n 0xff62e	@ 000ff5e0 25d1
.org 0xff5e2
	ldrb r0, [r4, #30]	@ 000ff5e2 a07f
.org 0xff5e4
	lsls r0, r0, #8	@ 000ff5e4 0002
.org 0xff5e6
	adds r1, r4, #0	@ 000ff5e6 211c
.org 0xff5e8
	adds r1, #112	@ 000ff5e8 7031
.org 0xff5ea
	ldrb r1, [r1, #0]	@ 000ff5ea 0978
.org 0xff5ec
	orrs r0, r1	@ 000ff5ec 0843
.org 0xff5ee
	movs r1, #169	@ 000ff5ee a921
.org 0xff5f0
	lsls r1, r1, #8	@ 000ff5f0 0902
.org 0xff5f2
	cmp r0, r1	@ 000ff5f2 8842
.org 0xff5f4
	beq.n 0xff608	@ 000ff5f4 08d0
.org 0xff5f6
	adds r0, r4, #0	@ 000ff5f6 201c
.org 0xff5f8
	bl 0x1cf00	@ 000ff5f8 1df782fc
.org 0xff5fc
	adds r0, r4, #0	@ 000ff5fc 201c
.org 0xff5fe
	adds r0, #184	@ 000ff5fe b830
.org 0xff600
	ldr r0, [r0, #0]	@ 000ff600 0068
.org 0xff602
	str r0, [r4, #88]	@ 000ff602 a065
.org 0xff604
	movs r0, #8	@ 000ff604 0820
.org 0xff606
	strb r0, [r4, #18]	@ 000ff606 a074
.org 0xff608
	ldr r0, [r4, #44]	@ 000ff608 e06a
.org 0xff60a
	cmp r0, #0	@ 000ff60a 0028
.org 0xff60c
	beq.n 0xff628	@ 000ff60c 0cd0
.org 0xff60e
	ldrb r0, [r4, #18]	@ 000ff60e a07c
.org 0xff610
	subs r0, #1	@ 000ff610 0138
.org 0xff612
	strb r0, [r4, #18]	@ 000ff612 a074
.org 0xff614
	lsls r0, r0, #24	@ 000ff614 0006
.org 0xff616
	lsrs r0, r0, #24	@ 000ff616 000e
.org 0xff618
	cmp r0, #255	@ 000ff618 ff28
.org 0xff61a
	bne.n 0xff68e	@ 000ff61a 38d1
.org 0xff61c
	movs r0, #194	@ 000ff61c c220
.org 0xff61e
	lsls r0, r0, #1	@ 000ff61e 4000
.org 0xff620
	bl 0x2b10	@ 000ff620 03f776fa
.org 0xff624
	movs r0, #1	@ 000ff624 0120
.org 0xff626
	b.n 0xff68c	@ 000ff626 31e0
.org 0xff628
	movs r0, #8	@ 000ff628 0820
.org 0xff62a
	strb r0, [r4, #18]	@ 000ff62a a074
.org 0xff62c
	b.n 0xff68e	@ 000ff62c 2fe0
.org 0xff62e
	ldr r1, [pc, #64]	@ 000ff62e 1049
.org 0xff630
	ldr r0, [pc, #64]	@ 000ff630 1048
.org 0xff632
	adds r1, r1, r0	@ 000ff632 0918
.org 0xff634
	ldrh r0, [r1, #0]	@ 000ff634 0888
.org 0xff636
	adds r0, #2	@ 000ff636 0230
.org 0xff638
	strh r0, [r1, #0]	@ 000ff638 0880
.org 0xff63a
	ldrb r0, [r4, #30]	@ 000ff63a a07f
.org 0xff63c
	lsls r0, r0, #8	@ 000ff63c 0002
.org 0xff63e
	adds r1, r4, #0	@ 000ff63e 211c
.org 0xff640
	adds r1, #112	@ 000ff640 7031
.org 0xff642
	ldrb r1, [r1, #0]	@ 000ff642 0978
.org 0xff644
	orrs r0, r1	@ 000ff644 0843
.org 0xff646
	ldr r1, [pc, #48]	@ 000ff646 0c49
.org 0xff648
	cmp r0, r1	@ 000ff648 8842
.org 0xff64a
	beq.n 0xff664	@ 000ff64a 0bd0
.org 0xff64c
	adds r0, r4, #0	@ 000ff64c 201c
.org 0xff64e
	bl 0x1cf00	@ 000ff64e 1df757fc
.org 0xff652
	adds r0, r4, #0	@ 000ff652 201c
.org 0xff654
	adds r0, #184	@ 000ff654 b830
.org 0xff656
	ldr r0, [r0, #0]	@ 000ff656 0068
.org 0xff658
	movs r1, #128	@ 000ff658 8021
.org 0xff65a
	lsls r1, r1, #4	@ 000ff65a 0901
.org 0xff65c
	adds r0, r0, r1	@ 000ff65c 4018
.org 0xff65e
	str r0, [r4, #88]	@ 000ff65e a065
.org 0xff660
	movs r0, #48	@ 000ff660 3020
.org 0xff662
	strb r0, [r4, #18]	@ 000ff662 a074
.org 0xff664
	ldr r0, [r4, #44]	@ 000ff664 e06a
.org 0xff666
	cmp r0, #0	@ 000ff666 0028
.org 0xff668
	beq.n 0xff67c	@ 000ff668 08d0
.org 0xff66a
	movs r0, #48	@ 000ff66a 3020
.org 0xff66c
	strb r0, [r4, #18]	@ 000ff66c a074
.org 0xff66e
	b.n 0xff68e	@ 000ff66e 0ee0
.org 0xff670
	.byte 0xb0,0x0a,0x00,0x02	@ 000ff670 data
.org 0xff674
	.byte 0x3c,0xd0,0x02,0x00	@ 000ff674 data
.org 0xff678
	.byte 0x01,0xa9,0x00,0x00	@ 000ff678 data
.org 0xff67c
	ldrb r0, [r4, #18]	@ 000ff67c a07c
.org 0xff67e
	subs r0, #1	@ 000ff67e 0138
.org 0xff680
	strb r0, [r4, #18]	@ 000ff680 a074
.org 0xff682
	lsls r0, r0, #24	@ 000ff682 0006
.org 0xff684
	lsrs r0, r0, #24	@ 000ff684 000e
.org 0xff686
	cmp r0, #255	@ 000ff686 ff28
.org 0xff688
	bne.n 0xff68e	@ 000ff688 01d1
.org 0xff68a
	movs r0, #0	@ 000ff68a 0020
