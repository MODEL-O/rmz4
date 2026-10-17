@ FUN_080556fc  entry 0x080556fc  size 122
.thumb
.org 0x556fc
FUN_080556fc:
	push {r4, lr}	@ 000556fc 10b5
.org 0x556fe
	adds r4, r0, #0	@ 000556fe 041c
.org 0x55700
	ldrb r0, [r4, #15]	@ 00055700 e07b
.org 0x55702
	cmp r0, #0	@ 00055702 0028
.org 0x55704
	bne.n 0x5571a	@ 00055704 09d1
.org 0x55706
	movs r1, #160	@ 00055706 a021
.org 0x55708
	lsls r1, r1, #8	@ 00055708 0902
.org 0x5570a
	adds r0, r4, #0	@ 0005570a 201c
.org 0x5570c
	bl 0x1cf00	@ 0005570c c7f7f8fb
.org 0x55710
	movs r0, #32	@ 00055710 2020
.org 0x55712
	strb r0, [r4, #18]	@ 00055712 a074
.org 0x55714
	ldrb r0, [r4, #15]	@ 00055714 e07b
.org 0x55716
	adds r0, #1	@ 00055716 0130
.org 0x55718
	strb r0, [r4, #15]	@ 00055718 e073
.org 0x5571a
	adds r0, r4, #0	@ 0005571a 201c
.org 0x5571c
	bl 0x1cff0	@ 0005571c c7f768fc
.org 0x55720
	adds r0, r4, #0	@ 00055720 201c
.org 0x55722
	adds r0, #116	@ 00055722 7430
.org 0x55724
	ldr r3, [pc, #80]	@ 00055724 144b
.org 0x55726
	ldrb r1, [r4, #30]	@ 00055726 a17f
.org 0x55728
	lsls r1, r1, #8	@ 00055728 0902
.org 0x5572a
	adds r2, r4, #0	@ 0005572a 221c
.org 0x5572c
	adds r2, #112	@ 0005572c 7032
.org 0x5572e
	ldrb r2, [r2, #0]	@ 0005572e 1278
.org 0x55730
	orrs r1, r2	@ 00055730 1143
.org 0x55732
	ldr r2, [pc, #72]	@ 00055732 124a
.org 0x55734
	adds r1, r1, r2	@ 00055734 8918
.org 0x55736
	lsls r1, r1, #2	@ 00055736 8900
.org 0x55738
	adds r1, r1, r3	@ 00055738 c918
.org 0x5573a
	adds r2, r4, #0	@ 0005573a 221c
.org 0x5573c
	adds r2, #113	@ 0005573c 7132
.org 0x5573e
	ldrb r2, [r2, #0]	@ 0005573e 1278
.org 0x55740
	lsls r2, r2, #24	@ 00055740 1206
.org 0x55742
	asrs r2, r2, #24	@ 00055742 1216
.org 0x55744
	ldr r1, [r1, #0]	@ 00055744 0968
.org 0x55746
	lsls r2, r2, #2	@ 00055746 9200
.org 0x55748
	adds r2, r2, r1	@ 00055748 5218
.org 0x5574a
	ldr r1, [r2, #0]	@ 0005574a 1168
.org 0x5574c
	ldrb r2, [r1, #0]	@ 0005574c 0a78
.org 0x5574e
	lsls r1, r2, #1	@ 0005574e 5100
.org 0x55750
	adds r1, r1, r2	@ 00055750 8918
.org 0x55752
	lsls r1, r1, #3	@ 00055752 c900
.org 0x55754
	ldr r2, [pc, #40]	@ 00055754 0a4a
.org 0x55756
	adds r1, r1, r2	@ 00055756 8918
.org 0x55758
	bl 0x5784	@ 00055758 b0f714f8
.org 0x5575c
	ldrb r0, [r4, #18]	@ 0005575c a07c
.org 0x5575e
	subs r0, #1	@ 0005575e 0138
.org 0x55760
	strb r0, [r4, #18]	@ 00055760 a074
.org 0x55762
	lsls r0, r0, #24	@ 00055762 0006
.org 0x55764
	lsrs r1, r0, #24	@ 00055764 010e
.org 0x55766
	cmp r1, #0	@ 00055766 0029
.org 0x55768
	bne.n 0x55770	@ 00055768 02d1
.org 0x5576a
	movs r0, #3	@ 0005576a 0320
.org 0x5576c
	strb r0, [r4, #14]	@ 0005576c a073
.org 0x5576e
	strb r1, [r4, #15]	@ 0005576e e173
.org 0x55770
	pop {r4}	@ 00055770 10bc
.org 0x55772
	pop {r0}	@ 00055772 01bc
.org 0x55774
	bx r0	@ 00055774 0047
