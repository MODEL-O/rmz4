@ FUN_0808582c  entry 0x0808582c  size 138
.thumb
.org 0x8582c
FUN_0808582c:
	push {r4, lr}	@ 0008582c 10b5
.org 0x8582e
	adds r4, r0, #0	@ 0008582e 041c
.org 0x85830
	ldrb r0, [r4, #14]	@ 00085830 a07b
.org 0x85832
	cmp r0, #0	@ 00085832 0028
.org 0x85834
	beq.n 0x8583c	@ 00085834 02d0
.org 0x85836
	cmp r0, #1	@ 00085836 0128
.org 0x85838
	beq.n 0x8585a	@ 00085838 0fd0
.org 0x8583a
	b.n 0x858c0	@ 0008583a 41e0
.org 0x8583c
	str r0, [r4, #92]	@ 0008583c e065
.org 0x8583e
	movs r0, #60	@ 0008583e 3c20
.org 0x85840
	strb r0, [r4, #18]	@ 00085840 a074
.org 0x85842
	adds r0, r4, #0	@ 00085842 201c
.org 0x85844
	adds r0, #116	@ 00085844 7430
.org 0x85846
	ldr r1, [pc, #32]	@ 00085846 0849
.org 0x85848
	bl 0x5784	@ 00085848 7ff79cff
.org 0x8584c
	ldr r1, [pc, #28]	@ 0008584c 0749
.org 0x8584e
	adds r0, r4, #0	@ 0008584e 201c
.org 0x85850
	bl 0x1cf00	@ 00085850 97f756fb
.org 0x85854
	ldrb r0, [r4, #14]	@ 00085854 a07b
.org 0x85856
	adds r0, #1	@ 00085856 0130
.org 0x85858
	strb r0, [r4, #14]	@ 00085858 a073
.org 0x8585a
	ldrb r0, [r4, #18]	@ 0008585a a07c
.org 0x8585c
	cmp r0, #0	@ 0008585c 0028
.org 0x8585e
	beq.n 0x85870	@ 0008585e 07d0
.org 0x85860
	subs r0, #1	@ 00085860 0138
.org 0x85862
	strb r0, [r4, #18]	@ 00085862 a074
.org 0x85864
	ldr r3, [r4, #84]	@ 00085864 636d
.org 0x85866
	b.n 0x858a0	@ 00085866 1be0
.org 0x85868
	.byte 0xe0,0xeb,0x85,0x08	@ 00085868 data
.org 0x8586c
	.byte 0x02,0x1b,0x00,0x00	@ 0008586c data
.org 0x85870
	ldr r0, [pc, #20]	@ 00085870 0548
.org 0x85872
	ldr r0, [r0, #0]	@ 00085872 0068
.org 0x85874
	ldr r2, [r0, #84]	@ 00085874 426d
.org 0x85876
	ldr r0, [r4, #84]	@ 00085876 606d
.org 0x85878
	subs r1, r2, r0	@ 00085878 111a
.org 0x8587a
	adds r3, r0, #0	@ 0008587a 031c
.org 0x8587c
	cmp r1, #0	@ 0008587c 0029
.org 0x8587e
	blt.n 0x85890	@ 0008587e 07db
.org 0x85880
	ldr r0, [pc, #8]	@ 00085880 0248
.org 0x85882
	cmp r1, r0	@ 00085882 8142
.org 0x85884
	ble.n 0x85898	@ 00085884 08dd
.org 0x85886
	b.n 0x858a0	@ 00085886 0be0
.org 0x85888
	.byte 0xf0,0xdb,0x02,0x02	@ 00085888 data
.org 0x8588c
	.byte 0xff,0x5f,0x00,0x00	@ 0008588c data
.org 0x85890
	subs r1, r3, r2	@ 00085890 991a
.org 0x85892
	ldr r0, [pc, #52]	@ 00085892 0d48
.org 0x85894
	cmp r1, r0	@ 00085894 8142
.org 0x85896
	bgt.n 0x858a0	@ 00085896 03dc
.org 0x85898
	movs r1, #0	@ 00085898 0021
.org 0x8589a
	movs r0, #1	@ 0008589a 0120
.org 0x8589c
	strb r0, [r4, #13]	@ 0008589c 6073
.org 0x8589e
	strb r1, [r4, #14]	@ 0008589e a173
.org 0x858a0
	ldr r1, [r4, #88]	@ 000858a0 a16d
.org 0x858a2
	movs r0, #128	@ 000858a2 8020
.org 0x858a4
	lsls r0, r0, #3	@ 000858a4 c000
.org 0x858a6
	adds r1, r1, r0	@ 000858a6 0918
.org 0x858a8
	adds r0, r3, #0	@ 000858a8 181c
.org 0x858aa
	bl 0x8aa4	@ 000858aa 83f7fbf8
.org 0x858ae
	adds r1, r0, #0	@ 000858ae 011c
.org 0x858b0
	movs r2, #128	@ 000858b0 8022
.org 0x858b2
	lsls r2, r2, #4	@ 000858b2 1201
.org 0x858b4
	adds r0, r4, #0	@ 000858b4 201c
