@ FUN_081134f4  entry 0x081134f4  size 352
.thumb
.org 0x1134f4
FUN_081134f4:
	push {r4, r5, r6, lr}	@ 001134f4 70b5
.org 0x1134f6
	sub sp, #8	@ 001134f6 82b0
.org 0x1134f8
	adds r5, r0, #0	@ 001134f8 051c
.org 0x1134fa
	ldrb r4, [r5, #3]	@ 001134fa ec78
.org 0x1134fc
	cmp r4, #0	@ 001134fc 002c
.org 0x1134fe
	bne.n 0x11357a	@ 001134fe 3cd1
.org 0x113500
	ldr r1, [pc, #92]	@ 00113500 1749
.org 0x113502
	adds r0, r5, r1	@ 00113502 6818
.org 0x113504
	ldr r6, [r0, #0]	@ 00113504 0668
.org 0x113506
	ldr r0, [pc, #92]	@ 00113506 1748
.org 0x113508
	ldrb r1, [r0, #21]	@ 00113508 417d
.org 0x11350a
	movs r0, #1	@ 0011350a 0120
.org 0x11350c
	ands r0, r1	@ 0011350c 0840
.org 0x11350e
	cmp r0, #0	@ 0011350e 0028
.org 0x113510
	beq.n 0x113516	@ 00113510 01d0
.org 0x113512
	bl 0x112888	@ 00113512 fff7b9f9
.org 0x113516
	adds r0, r5, #0	@ 00113516 281c
.org 0x113518
	bl 0x112ad8	@ 00113518 fff7defa
.org 0x11351c
	bl 0x2464	@ 0011351c eef6a2ff
.org 0x113520
	strh r4, [r5, #4]	@ 00113520 ac80
.org 0x113522
	adds r0, r6, #0	@ 00113522 301c
.org 0x113524
	bl 0x3891c	@ 00113524 25f7faf9
.org 0x113528
	adds r1, r0, #0	@ 00113528 011c
.org 0x11352a
	lsls r1, r1, #24	@ 0011352a 0906
.org 0x11352c
	lsrs r1, r1, #24	@ 0011352c 090e
.org 0x11352e
	adds r0, r6, #0	@ 0011352e 301c
.org 0x113530
	bl 0x2b53c	@ 00113530 18f704f8
.org 0x113534
	ldr r0, [pc, #48]	@ 00113534 0c48
.org 0x113536
	ldrh r1, [r0, #8]	@ 00113536 0189
.org 0x113538
	movs r0, #32	@ 00113538 2020
.org 0x11353a
	ands r0, r1	@ 0011353a 0840
.org 0x11353c
	cmp r0, #0	@ 0011353c 0028
.org 0x11353e
	beq.n 0x113574	@ 0011353e 19d0
.org 0x113540
	ldr r2, [pc, #40]	@ 00113540 0a4a
.org 0x113542
	ldrh r1, [r2, #0]	@ 00113542 1188
.org 0x113544
	ldr r0, [pc, #40]	@ 00113544 0a48
.org 0x113546
	ands r0, r1	@ 00113546 0840
.org 0x113548
	movs r3, #128	@ 00113548 8023
.org 0x11354a
	lsls r3, r3, #1	@ 0011354a 5b00
.org 0x11354c
	adds r1, r3, #0	@ 0011354c 191c
.org 0x11354e
	orrs r0, r1	@ 0011354e 0843
.org 0x113550
	strh r0, [r2, #0]	@ 00113550 1080
.org 0x113552
	movs r1, #128	@ 00113552 8021
.org 0x113554
	lsls r1, r1, #4	@ 00113554 0901
.org 0x113556
	adds r0, r5, #0	@ 00113556 281c
.org 0x113558
	bl 0x1126ac	@ 00113558 fff7a8f8
.org 0x11355c
	b.n 0x11369e	@ 0011355c 9fe0
.org 0x11355e
	.byte 0x00	@ 0011355e data
.org 0x11355f
	.byte 0x00	@ 0011355f data
.org 0x113560
	.byte 0xa8,0x63,0x00,0x00	@ 00113560 data
.org 0x113564
	.byte 0xb0,0xe8,0x02,0x02	@ 00113564 data
.org 0x113568
	.byte 0x10,0xe9,0x02,0x02	@ 00113568 data
.org 0x11356c
	.byte 0x00,0x0a,0x00,0x02	@ 0011356c data
.org 0x113570
	.byte 0xff,0xf0,0x00,0x00	@ 00113570 data
.org 0x113574
	ldrb r0, [r5, #3]	@ 00113574 e878
.org 0x113576
	adds r0, #1	@ 00113576 0130
.org 0x113578
	strb r0, [r5, #3]	@ 00113578 e870
.org 0x11357a
	movs r0, #154	@ 0011357a 9a20
.org 0x11357c
	lsls r0, r0, #4	@ 0011357c 0001
.org 0x11357e
	adds r4, r5, r0	@ 0011357e 2c18
.org 0x113580
	adds r0, r4, #0	@ 00113580 201c
.org 0x113582
	bl 0x3470	@ 00113582 eff675ff
.org 0x113586
	bl 0x560c	@ 00113586 f2f641f8
.org 0x11358a
	ldr r1, [pc, #192]	@ 0011358a 3049
.org 0x11358c
	movs r0, #0	@ 0011358c 0020
.org 0x11358e
	strb r0, [r1, #0]	@ 0011358e 0870
.org 0x113590
	movs r6, #0	@ 00113590 0026
.org 0x113592
	ldr r1, [pc, #188]	@ 00113592 2f49
.org 0x113594
	str r6, [sp, #0]	@ 00113594 0096
.org 0x113596
	ldr r2, [pc, #188]	@ 00113596 2f4a
.org 0x113598
	mov r0, sp	@ 00113598 6846
.org 0x11359a
	bl 0x128be0	@ 0011359a 15f021fb
.org 0x11359e
	movs r0, #1	@ 0011359e 0120
.org 0x1135a0
	bl 0x1f2e0	@ 001135a0 0bf79efe
.org 0x1135a4
	ldr r0, [pc, #176]	@ 001135a4 2c48
.org 0x1135a6
	ldr r0, [r0, #0]	@ 001135a6 0068
.org 0x1135a8
	adds r1, r4, #0	@ 001135a8 211c
.org 0x1135aa
	bl 0x1ca0c	@ 001135aa 09f72ffa
.org 0x1135ae
	ldr r0, [pc, #172]	@ 001135ae 2b48
.org 0x1135b0
	ldr r0, [r0, #0]	@ 001135b0 0068
.org 0x1135b2
	adds r1, r4, #0	@ 001135b2 211c
.org 0x1135b4
	bl 0x1ca0c	@ 001135b4 09f72afa
.org 0x1135b8
	ldr r0, [pc, #164]	@ 001135b8 2948
.org 0x1135ba
	ldr r0, [r0, #0]	@ 001135ba 0068
.org 0x1135bc
	adds r1, r4, #0	@ 001135bc 211c
.org 0x1135be
	bl 0x1ca0c	@ 001135be 09f725fa
.org 0x1135c2
	ldr r0, [pc, #160]	@ 001135c2 2848
.org 0x1135c4
	ldr r0, [r0, #0]	@ 001135c4 0068
.org 0x1135c6
	adds r1, r4, #0	@ 001135c6 211c
.org 0x1135c8
	bl 0x1ca0c	@ 001135c8 09f720fa
.org 0x1135cc
	ldr r0, [pc, #152]	@ 001135cc 2648
.org 0x1135ce
	ldr r0, [r0, #0]	@ 001135ce 0068
.org 0x1135d0
	adds r1, r4, #0	@ 001135d0 211c
.org 0x1135d2
	bl 0x1c924	@ 001135d2 09f7a7f9
.org 0x1135d6
	adds r0, r4, #0	@ 001135d6 201c
.org 0x1135d8
	bl 0x3a7dc	@ 001135d8 27f700f9
.org 0x1135dc
	ldr r0, [pc, #140]	@ 001135dc 2348
.org 0x1135de
	ldr r0, [r0, #0]	@ 001135de 0068
.org 0x1135e0
	adds r1, r4, #0	@ 001135e0 211c
.org 0x1135e2
	bl 0x1c924	@ 001135e2 09f79ff9
.org 0x1135e6
	ldr r0, [pc, #136]	@ 001135e6 2248
.org 0x1135e8
	ldr r0, [r0, #0]	@ 001135e8 0068
.org 0x1135ea
	adds r1, r4, #0	@ 001135ea 211c
.org 0x1135ec
	bl 0x1c924	@ 001135ec 09f79af9
.org 0x1135f0
	ldr r0, [pc, #128]	@ 001135f0 2048
.org 0x1135f2
	ldr r0, [r0, #0]	@ 001135f2 0068
.org 0x1135f4
	adds r1, r4, #0	@ 001135f4 211c
.org 0x1135f6
	bl 0x1ca0c	@ 001135f6 09f709fa
.org 0x1135fa
	movs r0, #1	@ 001135fa 0120
.org 0x1135fc
	bl 0x1f460	@ 001135fc 0bf730ff
.org 0x113600
	adds r0, r5, #0	@ 00113600 281c
.org 0x113602
	bl 0x114c18	@ 00113602 01f009fb
.org 0x113606
	bl 0x10e4cc	@ 00113606 faf761ff
.org 0x11360a
	ldrh r0, [r5, #4]	@ 0011360a a888
.org 0x11360c
	adds r0, #2	@ 0011360c 0230
.org 0x11360e
	adds r2, r0, #0	@ 0011360e 021c
.org 0x113610
	strh r0, [r5, #4]	@ 00113610 a880
.org 0x113612
	ldr r3, [pc, #100]	@ 00113612 194b
.org 0x113614
	ldr r4, [pc, #100]	@ 00113614 194c
.org 0x113616
	adds r1, r3, r4	@ 00113616 1919
.org 0x113618
	strb r2, [r1, #0]	@ 00113618 0a70
.org 0x11361a
	movs r1, #255	@ 0011361a ff21
.org 0x11361c
	ands r1, r2	@ 0011361c 1140
.org 0x11361e
	subs r4, #1	@ 0011361e 013c
.org 0x113620
	adds r2, r3, r4	@ 00113620 1a19
.org 0x113622
	strb r1, [r2, #0]	@ 00113622 1170
.org 0x113624
	movs r2, #128	@ 00113624 8022
.org 0x113626
	lsls r2, r2, #3	@ 00113626 d200
.org 0x113628
	adds r3, r3, r2	@ 00113628 9b18
.org 0x11362a
	strb r1, [r3, #0]	@ 0011362a 1970
.org 0x11362c
	lsls r0, r0, #16	@ 0011362c 0004
.org 0x11362e
	asrs r0, r0, #16	@ 0011362e 0014
.org 0x113630
	cmp r0, #32	@ 00113630 2028
.org 0x113632
	bne.n 0x11369e	@ 00113632 34d1
.org 0x113634
	ldr r3, [pc, #72]	@ 00113634 124b
.org 0x113636
	adds r0, r5, r3	@ 00113636 e818
.org 0x113638
	strh r6, [r0, #0]	@ 00113638 0680
.org 0x11363a
	ldr r0, [pc, #72]	@ 0011363a 1248
.org 0x11363c
	ldrb r1, [r0, #8]	@ 0011363c 017a
.org 0x11363e
	movs r0, #128	@ 0011363e 8020
.org 0x113640
	ands r0, r1	@ 00113640 0840
.org 0x113642
	cmp r0, #0	@ 00113642 0028
.org 0x113644
	bne.n 0x113688	@ 00113644 20d1
.org 0x113646
	bl 0x2a50	@ 00113646 eff603fa
.org 0x11364a
	b.n 0x113694	@ 0011364a 23e0
.org 0x11364c
	.byte 0x04,0xdc,0x02,0x02	@ 0011364c data
.org 0x113650
	.byte 0x10,0xdc,0x02,0x02	@ 00113650 data
