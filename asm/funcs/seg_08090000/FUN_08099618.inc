@ FUN_08099618  entry 0x08099618  size 94
.thumb
.org 0x99618
FUN_08099618:
	push {r4, r5, lr}	@ 00099618 30b5
.org 0x9961a
	adds r4, r0, #0	@ 0009961a 041c
.org 0x9961c
	ldr r0, [r4, #20]	@ 0009961c 6069
.org 0x9961e
	movs r1, #1	@ 0009961e 0121
.org 0x99620
	ands r0, r1	@ 00099620 0840
.org 0x99622
	cmp r0, #0	@ 00099622 0028
.org 0x99624
	beq.n 0x99670	@ 00099624 24d0
.org 0x99626
	movs r0, #24	@ 00099626 1820
.org 0x99628
	bl 0x6984	@ 00099628 6df7acf9
.org 0x9962c
	ldr r0, [r4, #12]	@ 0009962c e068
.org 0x9962e
	ldr r0, [r0, #44]	@ 0009962e c06a
.org 0x99630
	ldr r5, [r4, #44]	@ 00099630 e56a
.org 0x99632
	movs r2, #0	@ 00099632 0022
.org 0x99634
	ldr r1, [r0, #84]	@ 00099634 416d
.org 0x99636
	ldr r0, [r5, #84]	@ 00099636 686d
.org 0x99638
	cmp r1, r0	@ 00099638 8142
.org 0x9963a
	ble.n 0x9963e	@ 0009963a 00dd
.org 0x9963c
	movs r2, #1	@ 0009963c 0122
.org 0x9963e
	adds r0, r5, #0	@ 0009963e 281c
.org 0x99640
	adds r0, #188	@ 00099640 bc30
.org 0x99642
	strb r2, [r0, #0]	@ 00099642 0270
.org 0x99644
	ldr r1, [r4, #20]	@ 00099644 6169
.org 0x99646
	movs r0, #128	@ 00099646 8020
.org 0x99648
	lsls r0, r0, #2	@ 00099648 8000
.org 0x9964a
	ands r0, r1	@ 0009964a 0840
.org 0x9964c
	cmp r0, #0	@ 0009964c 0028
.org 0x9964e
	beq.n 0x99670	@ 0009964e 0fd0
.org 0x99650
	movs r0, #128	@ 00099650 8020
.org 0x99652
	lsls r0, r0, #10	@ 00099652 8002
.org 0x99654
	ands r1, r0	@ 00099654 0140
.org 0x99656
	cmp r1, #0	@ 00099656 0029
.org 0x99658
	beq.n 0x99670	@ 00099658 0ad0
.org 0x9965a
	ldr r0, [pc, #28]	@ 0009965a 0748
.org 0x9965c
	ldr r0, [r0, #0]	@ 0009965c 0068
.org 0x9965e
	cmp r0, #0	@ 0009965e 0028
.org 0x99660
	beq.n 0x99670	@ 00099660 06d0
.org 0x99662
	movs r1, #3	@ 00099662 0321
.org 0x99664
	movs r2, #11	@ 00099664 0b22
.org 0x99666
	bl 0x3a578	@ 00099666 a0f787ff
.org 0x9966a
	adds r1, r5, #0	@ 0009966a 291c
.org 0x9966c
	adds r1, #189	@ 0009966c bd31
.org 0x9966e
	strb r0, [r1, #0]	@ 0009966e 0870
.org 0x99670
	pop {r4, r5}	@ 00099670 30bc
.org 0x99672
	pop {r0}	@ 00099672 01bc
.org 0x99674
	bx r0	@ 00099674 0047
