@ FUN_081244dc  entry 0x081244dc  size 776
.thumb
.org 0x1244dc
FUN_081244dc:
	push {r4, r5, r6, r7, lr}	@ 001244dc f0b5
.org 0x1244de
	mov r7, sl	@ 001244de 5746
.org 0x1244e0
	mov r6, r9	@ 001244e0 4e46
.org 0x1244e2
	mov r5, r8	@ 001244e2 4546
.org 0x1244e4
	push {r5, r6, r7}	@ 001244e4 e0b4
.org 0x1244e6
	sub sp, #16	@ 001244e6 84b0
.org 0x1244e8
	adds r7, r0, #0	@ 001244e8 071c
.org 0x1244ea
	movs r0, #0	@ 001244ea 0020
.org 0x1244ec
	str r0, [sp, #12]	@ 001244ec 0390
.org 0x1244ee
	ldr r2, [pc, #756]	@ 001244ee bd4a
.org 0x1244f0
	adds r1, r7, r2	@ 001244f0 b918
.org 0x1244f2
	movs r0, #180	@ 001244f2 b420
.org 0x1244f4
	lsls r0, r0, #9	@ 001244f4 4002
.org 0x1244f6
	str r0, [r1, #0]	@ 001244f6 0860
.org 0x1244f8
	movs r0, #240	@ 001244f8 f020
.org 0x1244fa
	lsls r0, r0, #8	@ 001244fa 0002
.org 0x1244fc
	str r0, [r1, #4]	@ 001244fc 4860
.org 0x1244fe
	movs r0, #21	@ 001244fe 1520
.org 0x124500
	bl 0x6a94	@ 00124500 e2f6c8fa
.org 0x124504
	ldr r1, [pc, #736]	@ 00124504 b849
.org 0x124506
	mov r8, r1	@ 00124506 8846
.org 0x124508
	ldr r2, [pc, #736]	@ 00124508 b84a
.org 0x12450a
	mov sl, r2	@ 0012450a 9246
.org 0x12450c
	ldrh r1, [r2, #0]	@ 0012450c 1188
.org 0x12450e
	mov r2, r8	@ 0012450e 4246
.org 0x124510
	ldrh r0, [r2, #6]	@ 00124510 d088
.org 0x124512
	lsrs r0, r0, #6	@ 00124512 8009
.org 0x124514
	subs r1, r1, r0	@ 00124514 091a
.org 0x124516
	lsls r1, r1, #5	@ 00124516 4901
.org 0x124518
	movs r0, #128	@ 00124518 8020
.org 0x12451a
	lsls r0, r0, #9	@ 0012451a 4002
.org 0x12451c
	adds r1, r1, r0	@ 0012451c 0918
.org 0x12451e
	mov r0, r8	@ 0012451e 4046
.org 0x124520
	bl 0x1d30	@ 00124520 ddf606fc
.org 0x124524
	ldr r1, [pc, #712]	@ 00124524 b249
.org 0x124526
	mov r9, r1	@ 00124526 8946
.org 0x124528
	ldrh r1, [r1, #0]	@ 00124528 0988
.org 0x12452a
	ldr r2, [pc, #712]	@ 0012452a b24a
.org 0x12452c
	ldrb r0, [r2, #7]	@ 0012452c d079
.org 0x12452e
	subs r1, r1, r0	@ 0012452e 091a
.org 0x124530
	lsls r1, r1, #5	@ 00124530 4901
.org 0x124532
	movs r0, #128	@ 00124532 8020
.org 0x124534
	lsls r0, r0, #2	@ 00124534 8000
.org 0x124536
	adds r1, r1, r0	@ 00124536 0918
.org 0x124538
	adds r0, r2, #0	@ 00124538 101c
.org 0x12453a
	bl 0x2208	@ 0012453a ddf665fe
.org 0x12453e
	movs r6, #4	@ 0012453e 0426
.org 0x124540
	mov r0, r8	@ 00124540 4046
.org 0x124542
	adds r0, #20	@ 00124542 1430
.org 0x124544
	mov r2, sl	@ 00124544 5246
.org 0x124546
	ldrh r1, [r2, #2]	@ 00124546 5188
.org 0x124548
	ldrh r2, [r0, #6]	@ 00124548 c288
.org 0x12454a
	lsrs r2, r2, #6	@ 0012454a 9209
.org 0x12454c
	subs r1, r1, r2	@ 0012454c 891a
.org 0x12454e
	lsls r1, r1, #5	@ 0012454e 4901
.org 0x124550
	movs r2, #128	@ 00124550 8022
.org 0x124552
	lsls r2, r2, #9	@ 00124552 5202
.org 0x124554
	adds r1, r1, r2	@ 00124554 8918
.org 0x124556
	bl 0x1d30	@ 00124556 ddf6ebfb
.org 0x12455a
	ldr r0, [pc, #664]	@ 0012455a a648
.org 0x12455c
	adds r0, #20	@ 0012455c 1430
.org 0x12455e
	mov r2, r9	@ 0012455e 4a46
.org 0x124560
	ldrh r1, [r2, #2]	@ 00124560 5188
.org 0x124562
	ldrb r2, [r0, #7]	@ 00124562 c279
.org 0x124564
	subs r1, r1, r2	@ 00124564 891a
.org 0x124566
	lsls r1, r1, #5	@ 00124566 4901
.org 0x124568
	movs r2, #128	@ 00124568 8022
.org 0x12456a
	lsls r2, r2, #2	@ 0012456a 9200
.org 0x12456c
	adds r1, r1, r2	@ 0012456c 8918
.org 0x12456e
	bl 0x2208	@ 0012456e ddf64bfe
.org 0x124572
	mov r0, r8	@ 00124572 4046
.org 0x124574
	adds r0, #40	@ 00124574 2830
.org 0x124576
	mov r2, sl	@ 00124576 5246
.org 0x124578
	ldrh r1, [r2, #4]	@ 00124578 9188
.org 0x12457a
	ldrh r2, [r0, #6]	@ 0012457a c288
.org 0x12457c
	lsrs r2, r2, #6	@ 0012457c 9209
.org 0x12457e
	subs r1, r1, r2	@ 0012457e 891a
.org 0x124580
	lsls r1, r1, #5	@ 00124580 4901
.org 0x124582
	movs r2, #128	@ 00124582 8022
.org 0x124584
	lsls r2, r2, #9	@ 00124584 5202
.org 0x124586
	adds r1, r1, r2	@ 00124586 8918
.org 0x124588
	bl 0x1d30	@ 00124588 ddf6d2fb
.org 0x12458c
	ldr r0, [pc, #612]	@ 0012458c 9948
.org 0x12458e
	adds r0, #40	@ 0012458e 2830
.org 0x124590
	mov r2, r9	@ 00124590 4a46
.org 0x124592
	ldrh r1, [r2, #4]	@ 00124592 9188
.org 0x124594
	ldrb r2, [r0, #7]	@ 00124594 c279
.org 0x124596
	subs r1, r1, r2	@ 00124596 891a
.org 0x124598
	lsls r1, r1, #5	@ 00124598 4901
.org 0x12459a
	movs r2, #128	@ 0012459a 8022
.org 0x12459c
	lsls r2, r2, #2	@ 0012459c 9200
.org 0x12459e
	adds r1, r1, r2	@ 0012459e 8918
.org 0x1245a0
	bl 0x2208	@ 001245a0 ddf632fe
.org 0x1245a4
	mov r0, r8	@ 001245a4 4046
.org 0x1245a6
	adds r0, #80	@ 001245a6 5030
.org 0x1245a8
	mov r2, sl	@ 001245a8 5246
.org 0x1245aa
	ldrh r1, [r2, #8]	@ 001245aa 1189
.org 0x1245ac
	ldrh r2, [r0, #6]	@ 001245ac c288
.org 0x1245ae
	lsrs r2, r2, #6	@ 001245ae 9209
.org 0x1245b0
	subs r1, r1, r2	@ 001245b0 891a
.org 0x1245b2
	lsls r1, r1, #5	@ 001245b2 4901
.org 0x1245b4
	movs r2, #128	@ 001245b4 8022
.org 0x1245b6
	lsls r2, r2, #9	@ 001245b6 5202
.org 0x1245b8
	adds r1, r1, r2	@ 001245b8 8918
.org 0x1245ba
	bl 0x1d30	@ 001245ba ddf6b9fb
.org 0x1245be
	ldr r0, [pc, #564]	@ 001245be 8d48
.org 0x1245c0
	adds r0, #80	@ 001245c0 5030
.org 0x1245c2
	mov r2, r9	@ 001245c2 4a46
.org 0x1245c4
	ldrh r1, [r2, #8]	@ 001245c4 1189
.org 0x1245c6
	ldrb r2, [r0, #7]	@ 001245c6 c279
.org 0x1245c8
	subs r1, r1, r2	@ 001245c8 891a
.org 0x1245ca
	lsls r1, r1, #5	@ 001245ca 4901
.org 0x1245cc
	movs r2, #128	@ 001245cc 8022
.org 0x1245ce
	lsls r2, r2, #2	@ 001245ce 9200
.org 0x1245d0
	adds r1, r1, r2	@ 001245d0 8918
.org 0x1245d2
	bl 0x2208	@ 001245d2 ddf619fe
.org 0x1245d6
	mov r0, r8	@ 001245d6 4046
.org 0x1245d8
	adds r0, #100	@ 001245d8 6430
.org 0x1245da
	mov r2, sl	@ 001245da 5246
.org 0x1245dc
	ldrh r1, [r2, #10]	@ 001245dc 5189
.org 0x1245de
	ldrh r2, [r0, #6]	@ 001245de c288
.org 0x1245e0
	lsrs r2, r2, #6	@ 001245e0 9209
.org 0x1245e2
	subs r1, r1, r2	@ 001245e2 891a
.org 0x1245e4
	lsls r1, r1, #5	@ 001245e4 4901
.org 0x1245e6
	movs r2, #128	@ 001245e6 8022
.org 0x1245e8
	lsls r2, r2, #9	@ 001245e8 5202
.org 0x1245ea
	adds r1, r1, r2	@ 001245ea 8918
.org 0x1245ec
	bl 0x1d30	@ 001245ec ddf6a0fb
.org 0x1245f0
	ldr r0, [pc, #512]	@ 001245f0 8048
.org 0x1245f2
	adds r0, #100	@ 001245f2 6430
.org 0x1245f4
	mov r2, r9	@ 001245f4 4a46
.org 0x1245f6
	ldrh r1, [r2, #10]	@ 001245f6 5189
.org 0x1245f8
	ldrb r2, [r0, #7]	@ 001245f8 c279
.org 0x1245fa
	subs r1, r1, r2	@ 001245fa 891a
.org 0x1245fc
	lsls r1, r1, #5	@ 001245fc 4901
.org 0x1245fe
	movs r2, #128	@ 001245fe 8022
.org 0x124600
	lsls r2, r2, #2	@ 00124600 9200
.org 0x124602
	adds r1, r1, r2	@ 00124602 8918
.org 0x124604
	bl 0x2208	@ 00124604 ddf600fe
.org 0x124608
	movs r4, #233	@ 00124608 e924
.org 0x12460a
	lsls r5, r4, #1	@ 0012460a 6500
.org 0x12460c
	mov r1, sl	@ 0012460c 5146
.org 0x12460e
	adds r0, r1, r5	@ 0012460e 4819
.org 0x124610
	movs r2, #128	@ 00124610 8022
.org 0x124612
	lsls r2, r2, #2	@ 00124612 9200
.org 0x124614
	strh r2, [r0, #0]	@ 00124614 0280
.org 0x124616
	add r5, r9	@ 00124616 4d44
.org 0x124618
	strh r6, [r5, #0]	@ 00124618 2e80
.org 0x12461a
	lsls r4, r4, #4	@ 0012461a 2401
.org 0x12461c
	movs r0, #233	@ 0012461c e920
.org 0x12461e
	lsls r0, r0, #2	@ 0012461e 8000
.org 0x124620
	adds r4, r4, r0	@ 00124620 2418
.org 0x124622
	mov r1, r8	@ 00124622 4146
.org 0x124624
	adds r0, r4, r1	@ 00124624 6018
.org 0x124626
	ldrh r1, [r0, #6]	@ 00124626 c188
.org 0x124628
	lsrs r1, r1, #6	@ 00124628 8909
.org 0x12462a
	subs r1, r2, r1	@ 0012462a 511a
.org 0x12462c
	lsls r1, r1, #5	@ 0012462c 4901
.org 0x12462e
	movs r2, #128	@ 0012462e 8022
.org 0x124630
	lsls r2, r2, #9	@ 00124630 5202
.org 0x124632
	adds r1, r1, r2	@ 00124632 8918
.org 0x124634
	bl 0x1d30	@ 00124634 ddf67cfb
.org 0x124638
	ldr r0, [pc, #440]	@ 00124638 6e48
.org 0x12463a
	adds r4, r4, r0	@ 0012463a 2418
.org 0x12463c
	ldrh r1, [r5, #0]	@ 0012463c 2988
.org 0x12463e
	ldrb r0, [r4, #7]	@ 0012463e e079
.org 0x124640
	subs r1, r1, r0	@ 00124640 091a
.org 0x124642
	lsls r1, r1, #5	@ 00124642 4901
.org 0x124644
	movs r2, #128	@ 00124644 8022
.org 0x124646
	lsls r2, r2, #2	@ 00124646 9200
.org 0x124648
	adds r1, r1, r2	@ 00124648 8918
.org 0x12464a
	adds r0, r4, #0	@ 0012464a 201c
.org 0x12464c
	bl 0x2208	@ 0012464c ddf6dcfd
.org 0x124650
	movs r6, #234	@ 00124650 ea26
.org 0x124652
	lsls r5, r6, #1	@ 00124652 7500
.org 0x124654
	mov r1, sl	@ 00124654 5146
.org 0x124656
	adds r0, r1, r5	@ 00124656 4819
.org 0x124658
	movs r1, #148	@ 00124658 9421
.org 0x12465a
	lsls r1, r1, #2	@ 0012465a 8900
.org 0x12465c
	strh r1, [r0, #0]	@ 0012465c 0180
.org 0x12465e
	add r5, r9	@ 0012465e 4d44
.org 0x124660
	movs r2, #5	@ 00124660 0522
.org 0x124662
	strh r2, [r5, #0]	@ 00124662 2a80
.org 0x124664
	lsls r6, r6, #2	@ 00124664 b600
.org 0x124666
	adds r4, r6, #0	@ 00124666 341c
.org 0x124668
	adds r4, #234	@ 00124668 ea34
.org 0x12466a
	lsls r4, r4, #2	@ 0012466a a400
.org 0x12466c
	mov r2, r8	@ 0012466c 4246
.org 0x12466e
	adds r0, r4, r2	@ 0012466e a018
.org 0x124670
	ldrh r2, [r0, #6]	@ 00124670 c288
.org 0x124672
	lsrs r2, r2, #6	@ 00124672 9209
.org 0x124674
	subs r1, r1, r2	@ 00124674 891a
.org 0x124676
	lsls r1, r1, #5	@ 00124676 4901
.org 0x124678
	movs r2, #128	@ 00124678 8022
.org 0x12467a
	lsls r2, r2, #9	@ 0012467a 5202
.org 0x12467c
	adds r1, r1, r2	@ 0012467c 8918
.org 0x12467e
	bl 0x1d30	@ 0012467e ddf657fb
.org 0x124682
	ldr r0, [pc, #368]	@ 00124682 5c48
.org 0x124684
	adds r4, r4, r0	@ 00124684 2418
.org 0x124686
	ldrh r1, [r5, #0]	@ 00124686 2988
.org 0x124688
	ldrb r0, [r4, #7]	@ 00124688 e079
.org 0x12468a
	subs r1, r1, r0	@ 0012468a 091a
.org 0x12468c
	lsls r1, r1, #5	@ 0012468c 4901
.org 0x12468e
	movs r2, #128	@ 0012468e 8022
.org 0x124690
	lsls r2, r2, #2	@ 00124690 9200
.org 0x124692
	adds r1, r1, r2	@ 00124692 8918
.org 0x124694
	adds r0, r4, #0	@ 00124694 201c
.org 0x124696
	bl 0x2208	@ 00124696 ddf6b7fd
.org 0x12469a
	movs r4, #247	@ 0012469a f724
.org 0x12469c
	lsls r5, r4, #1	@ 0012469c 6500
.org 0x12469e
	mov r0, sl	@ 0012469e 5046
.org 0x1246a0
	adds r1, r0, r5	@ 001246a0 4119
.org 0x1246a2
	ldr r0, [pc, #340]	@ 001246a2 5548
.org 0x1246a4
	strh r0, [r1, #0]	@ 001246a4 0880
.org 0x1246a6
	add r5, r9	@ 001246a6 4d44
.org 0x1246a8
	movs r2, #10	@ 001246a8 0a22
.org 0x1246aa
	strh r2, [r5, #0]	@ 001246aa 2a80
.org 0x1246ac
	lsls r4, r4, #4	@ 001246ac 2401
.org 0x1246ae
	adds r0, #7	@ 001246ae 0730
.org 0x1246b0
	adds r4, r4, r0	@ 001246b0 2418
.org 0x1246b2
	mov r2, r8	@ 001246b2 4246
.org 0x1246b4
	adds r0, r4, r2	@ 001246b4 a018
.org 0x1246b6
	ldrh r1, [r1, #0]	@ 001246b6 0988
.org 0x1246b8
	ldrh r2, [r0, #6]	@ 001246b8 c288
.org 0x1246ba
	lsrs r2, r2, #6	@ 001246ba 9209
.org 0x1246bc
	subs r1, r1, r2	@ 001246bc 891a
.org 0x1246be
	lsls r1, r1, #5	@ 001246be 4901
.org 0x1246c0
	movs r2, #128	@ 001246c0 8022
.org 0x1246c2
	lsls r2, r2, #9	@ 001246c2 5202
.org 0x1246c4
	adds r1, r1, r2	@ 001246c4 8918
.org 0x1246c6
	bl 0x1d30	@ 001246c6 ddf633fb
.org 0x1246ca
	ldr r0, [pc, #296]	@ 001246ca 4a48
.org 0x1246cc
	adds r4, r4, r0	@ 001246cc 2418
.org 0x1246ce
	ldrh r1, [r5, #0]	@ 001246ce 2988
.org 0x1246d0
	ldrb r0, [r4, #7]	@ 001246d0 e079
.org 0x1246d2
	subs r1, r1, r0	@ 001246d2 091a
.org 0x1246d4
	lsls r1, r1, #5	@ 001246d4 4901
.org 0x1246d6
	movs r2, #128	@ 001246d6 8022
.org 0x1246d8
	lsls r2, r2, #2	@ 001246d8 9200
.org 0x1246da
	adds r1, r1, r2	@ 001246da 8918
.org 0x1246dc
	adds r0, r4, #0	@ 001246dc 201c
.org 0x1246de
	bl 0x2208	@ 001246de ddf693fd
.org 0x1246e2
	movs r0, #206	@ 001246e2 ce20
.org 0x1246e4
	add sl, r0	@ 001246e4 8244
.org 0x1246e6
	mov r1, sl	@ 001246e6 5146
.org 0x1246e8
	strh r6, [r1, #0]	@ 001246e8 0e80
.org 0x1246ea
	add r9, r0	@ 001246ea 8144
.org 0x1246ec
	movs r0, #10	@ 001246ec 0a20
.org 0x1246ee
	mov r2, r9	@ 001246ee 4a46
.org 0x1246f0
	strh r0, [r2, #0]	@ 001246f0 1080
.org 0x1246f2
	ldr r4, [pc, #264]	@ 001246f2 424c
.org 0x1246f4
	add r8, r4	@ 001246f4 a044
.org 0x1246f6
	mov r1, r8	@ 001246f6 4146
.org 0x1246f8
	ldrh r0, [r1, #6]	@ 001246f8 c888
.org 0x1246fa
	lsrs r0, r0, #6	@ 001246fa 8009
.org 0x1246fc
	subs r6, r6, r0	@ 001246fc 361a
.org 0x1246fe
	lsls r6, r6, #5	@ 001246fe 7601
.org 0x124700
	movs r2, #128	@ 00124700 8022
.org 0x124702
	lsls r2, r2, #9	@ 00124702 5202
.org 0x124704
	adds r6, r6, r2	@ 00124704 b618
.org 0x124706
	mov r0, r8	@ 00124706 4046
.org 0x124708
	adds r1, r6, #0	@ 00124708 311c
.org 0x12470a
	bl 0x1d30	@ 0012470a ddf611fb
.org 0x12470e
	ldr r0, [pc, #228]	@ 0012470e 3948
.org 0x124710
	adds r4, r4, r0	@ 00124710 2418
.org 0x124712
	mov r2, r9	@ 00124712 4a46
.org 0x124714
	ldrh r1, [r2, #0]	@ 00124714 1188
.org 0x124716
	ldrb r0, [r4, #7]	@ 00124716 e079
.org 0x124718
	subs r1, r1, r0	@ 00124718 091a
.org 0x12471a
	lsls r1, r1, #5	@ 0012471a 4901
.org 0x12471c
	movs r0, #128	@ 0012471c 8020
.org 0x12471e
	lsls r0, r0, #2	@ 0012471e 8000
.org 0x124720
	adds r1, r1, r0	@ 00124720 0918
.org 0x124722
	adds r0, r4, #0	@ 00124722 201c
.org 0x124724
	bl 0x2208	@ 00124724 ddf670fd
.org 0x124728
	movs r1, #180	@ 00124728 b421
.org 0x12472a
	lsls r1, r1, #9	@ 0012472a 4902
.org 0x12472c
	str r1, [sp, #4]	@ 0012472c 0191
.org 0x12472e
	movs r0, #220	@ 0012472e dc20
.org 0x124730
	lsls r0, r0, #8	@ 00124730 0002
.org 0x124732
	str r0, [sp, #8]	@ 00124732 0290
.org 0x124734
	add r0, sp, #4	@ 00124734 01a8
.org 0x124736
	bl 0x2f190	@ 00124736 0af72bfd
.org 0x12473a
	ldr r2, [pc, #196]	@ 0012473a 314a
.org 0x12473c
	adds r4, r7, r2	@ 0012473c bc18
.org 0x12473e
	str r0, [r4, #0]	@ 0012473e 2060
.org 0x124740
	ldr r3, [pc, #192]	@ 00124740 304b
.org 0x124742
	str r3, [sp, #0]	@ 00124742 0093
.org 0x124744
	movs r1, #0	@ 00124744 0021
.org 0x124746
	movs r2, #0	@ 00124746 0022
.org 0x124748
	bl 0x2cbec	@ 00124748 08f750fa
.org 0x12474c
	ldr r1, [pc, #184]	@ 0012474c 2e49
.org 0x12474e
	ldr r0, [r4, #0]	@ 0012474e 2068
.org 0x124750
	str r0, [r1, #0]	@ 00124750 0860
.org 0x124752
	ldr r1, [pc, #184]	@ 00124752 2e49
.org 0x124754
	bl 0x382b0	@ 00124754 13f7acfd
.org 0x124758
	ldr r0, [sp, #12]	@ 00124758 0398
.org 0x12475a
	str r0, [r4, #8]	@ 0012475a a060
.org 0x12475c
	str r0, [r4, #12]	@ 0012475c e060
.org 0x12475e
	ldr r0, [pc, #176]	@ 0012475e 2c48
.org 0x124760
	ldr r0, [r0, #36]	@ 00124760 406a
.org 0x124762
	str r0, [r4, #16]	@ 00124762 2061
.org 0x124764
	movs r0, #225	@ 00124764 e120
.org 0x124766
	lsls r0, r0, #4	@ 00124766 0001
.org 0x124768
	str r0, [r4, #20]	@ 00124768 6061
.org 0x12476a
	movs r1, #0	@ 0012476a 0021
.org 0x12476c
	strb r1, [r4, #24]	@ 0012476c 2176
.org 0x12476e
	strb r1, [r4, #25]	@ 0012476e 6176
.org 0x124770
	strb r1, [r4, #26]	@ 00124770 a176
.org 0x124772
	strb r1, [r4, #27]	@ 00124772 e176
.org 0x124774
	strb r1, [r4, #28]	@ 00124774 2177
.org 0x124776
	strb r1, [r4, #29]	@ 00124776 6177
.org 0x124778
	strb r1, [r4, #30]	@ 00124778 a177
.org 0x12477a
	strb r1, [r4, #31]	@ 0012477a e177
.org 0x12477c
	ldr r2, [pc, #148]	@ 0012477c 254a
.org 0x12477e
	adds r0, r7, r2	@ 0012477e b818
.org 0x124780
	strb r1, [r0, #0]	@ 00124780 0170
.org 0x124782
	ldr r1, [pc, #148]	@ 00124782 2549
.org 0x124784
	adds r0, r7, r1	@ 00124784 7818
.org 0x124786
	movs r2, #0	@ 00124786 0022
.org 0x124788
	strb r2, [r0, #0]	@ 00124788 0270
.org 0x12478a
	adds r1, #1	@ 0012478a 0131
.org 0x12478c
	adds r0, r7, r1	@ 0012478c 7818
.org 0x12478e
	strb r2, [r0, #0]	@ 0012478e 0270
.org 0x124790
	ldr r2, [pc, #80]	@ 00124790 144a
.org 0x124792
	adds r4, r7, r2	@ 00124792 bc18
.org 0x124794
	add r5, sp, #4	@ 00124794 01ad
.org 0x124796
	ldr r6, [pc, #132]	@ 00124796 214e
.org 0x124798
	ldmia r6!, {r1}	@ 00124798 02ce
.org 0x12479a
	lsls r1, r1, #8	@ 0012479a 0902
.org 0x12479c
	ldr r0, [r4, #0]	@ 0012479c 2068
.org 0x12479e
	adds r0, r0, r1	@ 0012479e 4018
.org 0x1247a0
	str r0, [sp, #4]	@ 001247a0 0190
.org 0x1247a2
	ldr r0, [r4, #4]	@ 001247a2 6068
.org 0x1247a4
	str r0, [r5, #4]	@ 001247a4 6860
.org 0x1247a6
	ldr r0, [sp, #12]	@ 001247a6 0398
.org 0x1247a8
	lsls r1, r0, #24	@ 001247a8 0106
.org 0x1247aa
	lsrs r1, r1, #24	@ 001247aa 090e
.org 0x1247ac
	add r0, sp, #4	@ 001247ac 01a8
.org 0x1247ae
	adds r2, r7, #0	@ 001247ae 3a1c
.org 0x1247b0
	bl 0x1047bc	@ 001247b0 e0f704f8
.org 0x1247b4
	ldr r1, [sp, #12]	@ 001247b4 0399
.org 0x1247b6
	adds r1, #1	@ 001247b6 0131
.org 0x1247b8
	str r1, [sp, #12]	@ 001247b8 0391
.org 0x1247ba
	cmp r1, #2	@ 001247ba 0229
.org 0x1247bc
	ble.n 0x124798	@ 001247bc ecdd
.org 0x1247be
	ldr r2, [pc, #64]	@ 001247be 104a
.org 0x1247c0
	adds r1, r7, r2	@ 001247c0 b918
.org 0x1247c2
	movs r0, #0	@ 001247c2 0020
.org 0x1247c4
	str r0, [r1, #36]	@ 001247c4 4862
.org 0x1247c6
	str r0, [r1, #40]	@ 001247c6 8862
.org 0x1247c8
	str r0, [r1, #52]	@ 001247c8 4863
.org 0x1247ca
	str r0, [r1, #44]	@ 001247ca c862
.org 0x1247cc
	str r0, [r1, #48]	@ 001247cc 0863
.org 0x1247ce
	movs r0, #139	@ 001247ce 8b20
.org 0x1247d0
	bl 0x2a88	@ 001247d0 def65af9
.org 0x1247d4
	add sp, #16	@ 001247d4 04b0
.org 0x1247d6
	pop {r3, r4, r5}	@ 001247d6 38bc
.org 0x1247d8
	mov r8, r3	@ 001247d8 9846
.org 0x1247da
	mov r9, r4	@ 001247da a146
.org 0x1247dc
	mov sl, r5	@ 001247dc aa46
.org 0x1247de
	pop {r4, r5, r6, r7}	@ 001247de f0bc
.org 0x1247e0
	pop {r0}	@ 001247e0 01bc
.org 0x1247e2
	bx r0	@ 001247e2 0047
