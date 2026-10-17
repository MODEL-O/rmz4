@ FUN_08123530  entry 0x08123530  size 854
.thumb
.org 0x123530
FUN_08123530:
	push {r4, r5, r6, r7, lr}	@ 00123530 f0b5
.org 0x123532
	mov r7, sl	@ 00123532 5746
.org 0x123534
	mov r6, r9	@ 00123534 4e46
.org 0x123536
	mov r5, r8	@ 00123536 4546
.org 0x123538
	push {r5, r6, r7}	@ 00123538 e0b4
.org 0x12353a
	sub sp, #16	@ 0012353a 84b0
.org 0x12353c
	str r0, [sp, #12]	@ 0012353c 0390
.org 0x12353e
	ldr r2, [pc, #840]	@ 0012353e d24a
.org 0x123540
	adds r1, r0, r2	@ 00123540 8118
.org 0x123542
	movs r3, #180	@ 00123542 b423
.org 0x123544
	lsls r3, r3, #9	@ 00123544 5b02
.org 0x123546
	str r3, [r1, #0]	@ 00123546 0b60
.org 0x123548
	movs r0, #240	@ 00123548 f020
.org 0x12354a
	lsls r0, r0, #8	@ 0012354a 0002
.org 0x12354c
	str r0, [r1, #4]	@ 0012354c 4860
.org 0x12354e
	movs r0, #19	@ 0012354e 1320
.org 0x123550
	bl 0x6a94	@ 00123550 e3f6a0fa
.org 0x123554
	ldr r6, [pc, #820]	@ 00123554 cd4e
.org 0x123556
	ldr r0, [pc, #824]	@ 00123556 ce48
.org 0x123558
	mov r9, r0	@ 00123558 8146
.org 0x12355a
	ldrh r1, [r0, #0]	@ 0012355a 0188
.org 0x12355c
	ldrh r0, [r6, #6]	@ 0012355c f088
.org 0x12355e
	lsrs r0, r0, #6	@ 0012355e 8009
.org 0x123560
	subs r1, r1, r0	@ 00123560 091a
.org 0x123562
	lsls r1, r1, #5	@ 00123562 4901
.org 0x123564
	movs r2, #128	@ 00123564 8022
.org 0x123566
	lsls r2, r2, #9	@ 00123566 5202
.org 0x123568
	adds r1, r1, r2	@ 00123568 8918
.org 0x12356a
	adds r0, r6, #0	@ 0012356a 301c
.org 0x12356c
	bl 0x1d30	@ 0012356c def6e0fb
.org 0x123570
	ldr r7, [pc, #800]	@ 00123570 c84f
.org 0x123572
	ldr r3, [pc, #804]	@ 00123572 c94b
.org 0x123574
	mov r8, r3	@ 00123574 9846
.org 0x123576
	ldrh r1, [r3, #0]	@ 00123576 1988
.org 0x123578
	ldrb r0, [r7, #7]	@ 00123578 f879
.org 0x12357a
	subs r1, r1, r0	@ 0012357a 091a
.org 0x12357c
	lsls r1, r1, #5	@ 0012357c 4901
.org 0x12357e
	movs r0, #128	@ 0012357e 8020
.org 0x123580
	lsls r0, r0, #2	@ 00123580 8000
.org 0x123582
	mov sl, r0	@ 00123582 8246
.org 0x123584
	add r1, sl	@ 00123584 5144
.org 0x123586
	adds r0, r7, #0	@ 00123586 381c
.org 0x123588
	bl 0x2208	@ 00123588 def63efe
.org 0x12358c
	adds r0, r6, #0	@ 0012358c 301c
.org 0x12358e
	adds r0, #20	@ 0012358e 1430
.org 0x123590
	mov r2, r9	@ 00123590 4a46
.org 0x123592
	ldrh r1, [r2, #2]	@ 00123592 5188
.org 0x123594
	ldrh r2, [r0, #6]	@ 00123594 c288
.org 0x123596
	lsrs r2, r2, #6	@ 00123596 9209
.org 0x123598
	subs r1, r1, r2	@ 00123598 891a
.org 0x12359a
	lsls r1, r1, #5	@ 0012359a 4901
.org 0x12359c
	movs r3, #128	@ 0012359c 8023
.org 0x12359e
	lsls r3, r3, #9	@ 0012359e 5b02
.org 0x1235a0
	adds r1, r1, r3	@ 001235a0 c918
.org 0x1235a2
	bl 0x1d30	@ 001235a2 def6c5fb
.org 0x1235a6
	adds r0, r7, #0	@ 001235a6 381c
.org 0x1235a8
	adds r0, #20	@ 001235a8 1430
.org 0x1235aa
	mov r2, r8	@ 001235aa 4246
.org 0x1235ac
	ldrh r1, [r2, #2]	@ 001235ac 5188
.org 0x1235ae
	ldrb r2, [r0, #7]	@ 001235ae c279
.org 0x1235b0
	subs r1, r1, r2	@ 001235b0 891a
.org 0x1235b2
	lsls r1, r1, #5	@ 001235b2 4901
.org 0x1235b4
	add r1, sl	@ 001235b4 5144
.org 0x1235b6
	bl 0x2208	@ 001235b6 def627fe
.org 0x1235ba
	adds r0, r6, #0	@ 001235ba 301c
.org 0x1235bc
	adds r0, #40	@ 001235bc 2830
.org 0x1235be
	mov r3, r9	@ 001235be 4b46
.org 0x1235c0
	ldrh r1, [r3, #4]	@ 001235c0 9988
.org 0x1235c2
	ldrh r2, [r0, #6]	@ 001235c2 c288
.org 0x1235c4
	lsrs r2, r2, #6	@ 001235c4 9209
.org 0x1235c6
	subs r1, r1, r2	@ 001235c6 891a
.org 0x1235c8
	lsls r1, r1, #5	@ 001235c8 4901
.org 0x1235ca
	movs r2, #128	@ 001235ca 8022
.org 0x1235cc
	lsls r2, r2, #9	@ 001235cc 5202
.org 0x1235ce
	adds r1, r1, r2	@ 001235ce 8918
.org 0x1235d0
	bl 0x1d30	@ 001235d0 def6aefb
.org 0x1235d4
	adds r0, r7, #0	@ 001235d4 381c
.org 0x1235d6
	adds r0, #40	@ 001235d6 2830
.org 0x1235d8
	mov r3, r8	@ 001235d8 4346
.org 0x1235da
	ldrh r1, [r3, #4]	@ 001235da 9988
.org 0x1235dc
	ldrb r2, [r0, #7]	@ 001235dc c279
.org 0x1235de
	subs r1, r1, r2	@ 001235de 891a
.org 0x1235e0
	lsls r1, r1, #5	@ 001235e0 4901
.org 0x1235e2
	add r1, sl	@ 001235e2 5144
.org 0x1235e4
	bl 0x2208	@ 001235e4 def610fe
.org 0x1235e8
	adds r0, r6, #0	@ 001235e8 301c
.org 0x1235ea
	adds r0, #80	@ 001235ea 5030
.org 0x1235ec
	mov r2, r9	@ 001235ec 4a46
.org 0x1235ee
	ldrh r1, [r2, #8]	@ 001235ee 1189
.org 0x1235f0
	ldrh r2, [r0, #6]	@ 001235f0 c288
.org 0x1235f2
	lsrs r2, r2, #6	@ 001235f2 9209
.org 0x1235f4
	subs r1, r1, r2	@ 001235f4 891a
.org 0x1235f6
	lsls r1, r1, #5	@ 001235f6 4901
.org 0x1235f8
	movs r3, #128	@ 001235f8 8023
.org 0x1235fa
	lsls r3, r3, #9	@ 001235fa 5b02
.org 0x1235fc
	adds r1, r1, r3	@ 001235fc c918
.org 0x1235fe
	bl 0x1d30	@ 001235fe def697fb
.org 0x123602
	adds r0, r7, #0	@ 00123602 381c
.org 0x123604
	adds r0, #80	@ 00123604 5030
.org 0x123606
	mov r2, r8	@ 00123606 4246
.org 0x123608
	ldrh r1, [r2, #8]	@ 00123608 1189
.org 0x12360a
	ldrb r2, [r0, #7]	@ 0012360a c279
.org 0x12360c
	subs r1, r1, r2	@ 0012360c 891a
.org 0x12360e
	lsls r1, r1, #5	@ 0012360e 4901
.org 0x123610
	add r1, sl	@ 00123610 5144
.org 0x123612
	bl 0x2208	@ 00123612 def6f9fd
.org 0x123616
	adds r0, r6, #0	@ 00123616 301c
.org 0x123618
	adds r0, #100	@ 00123618 6430
.org 0x12361a
	mov r3, r9	@ 0012361a 4b46
.org 0x12361c
	ldrh r1, [r3, #10]	@ 0012361c 5989
.org 0x12361e
	ldrh r2, [r0, #6]	@ 0012361e c288
.org 0x123620
	lsrs r2, r2, #6	@ 00123620 9209
.org 0x123622
	subs r1, r1, r2	@ 00123622 891a
.org 0x123624
	lsls r1, r1, #5	@ 00123624 4901
.org 0x123626
	movs r2, #128	@ 00123626 8022
.org 0x123628
	lsls r2, r2, #9	@ 00123628 5202
.org 0x12362a
	adds r1, r1, r2	@ 0012362a 8918
.org 0x12362c
	bl 0x1d30	@ 0012362c def680fb
.org 0x123630
	adds r0, r7, #0	@ 00123630 381c
.org 0x123632
	adds r0, #100	@ 00123632 6430
.org 0x123634
	mov r3, r8	@ 00123634 4346
.org 0x123636
	ldrh r1, [r3, #10]	@ 00123636 5989
.org 0x123638
	ldrb r2, [r0, #7]	@ 00123638 c279
.org 0x12363a
	subs r1, r1, r2	@ 0012363a 891a
.org 0x12363c
	lsls r1, r1, #5	@ 0012363c 4901
.org 0x12363e
	add r1, sl	@ 0012363e 5144
.org 0x123640
	bl 0x2208	@ 00123640 def6e2fd
.org 0x123644
	movs r4, #236	@ 00123644 ec24
.org 0x123646
	lsls r5, r4, #1	@ 00123646 6500
.org 0x123648
	mov r1, r9	@ 00123648 4946
.org 0x12364a
	adds r0, r1, r5	@ 0012364a 4819
.org 0x12364c
	mov r2, sl	@ 0012364c 5246
.org 0x12364e
	strh r2, [r0, #0]	@ 0012364e 0280
.org 0x123650
	add r5, r8	@ 00123650 4544
.org 0x123652
	movs r3, #4	@ 00123652 0423
.org 0x123654
	strh r3, [r5, #0]	@ 00123654 2b80
.org 0x123656
	lsls r4, r4, #4	@ 00123656 2401
.org 0x123658
	movs r0, #236	@ 00123658 ec20
.org 0x12365a
	lsls r0, r0, #2	@ 0012365a 8000
.org 0x12365c
	adds r4, r4, r0	@ 0012365c 2418
.org 0x12365e
	adds r0, r4, r6	@ 0012365e a019
.org 0x123660
	ldrh r1, [r0, #6]	@ 00123660 c188
.org 0x123662
	lsrs r1, r1, #6	@ 00123662 8909
.org 0x123664
	mov r2, sl	@ 00123664 5246
.org 0x123666
	subs r1, r2, r1	@ 00123666 511a
.org 0x123668
	lsls r1, r1, #5	@ 00123668 4901
.org 0x12366a
	movs r3, #128	@ 0012366a 8023
.org 0x12366c
	lsls r3, r3, #9	@ 0012366c 5b02
.org 0x12366e
	adds r1, r1, r3	@ 0012366e c918
.org 0x123670
	bl 0x1d30	@ 00123670 def65efb
.org 0x123674
	adds r4, r4, r7	@ 00123674 e419
.org 0x123676
	ldrh r1, [r5, #0]	@ 00123676 2988
.org 0x123678
	ldrb r0, [r4, #7]	@ 00123678 e079
.org 0x12367a
	subs r1, r1, r0	@ 0012367a 091a
.org 0x12367c
	lsls r1, r1, #5	@ 0012367c 4901
.org 0x12367e
	add r1, sl	@ 0012367e 5144
.org 0x123680
	adds r0, r4, #0	@ 00123680 201c
.org 0x123682
	bl 0x2208	@ 00123682 def6c1fd
.org 0x123686
	movs r4, #237	@ 00123686 ed24
.org 0x123688
	lsls r5, r4, #1	@ 00123688 6500
.org 0x12368a
	mov r1, r9	@ 0012368a 4946
.org 0x12368c
	adds r0, r1, r5	@ 0012368c 4819
.org 0x12368e
	movs r1, #148	@ 0012368e 9421
.org 0x123690
	lsls r1, r1, #2	@ 00123690 8900
.org 0x123692
	strh r1, [r0, #0]	@ 00123692 0180
.org 0x123694
	add r5, r8	@ 00123694 4544
.org 0x123696
	movs r2, #5	@ 00123696 0522
.org 0x123698
	strh r2, [r5, #0]	@ 00123698 2a80
.org 0x12369a
	lsls r4, r4, #4	@ 0012369a 2401
.org 0x12369c
	movs r3, #237	@ 0012369c ed23
.org 0x12369e
	lsls r3, r3, #2	@ 0012369e 9b00
.org 0x1236a0
	adds r4, r4, r3	@ 001236a0 e418
.org 0x1236a2
	adds r0, r4, r6	@ 001236a2 a019
.org 0x1236a4
	ldrh r2, [r0, #6]	@ 001236a4 c288
.org 0x1236a6
	lsrs r2, r2, #6	@ 001236a6 9209
.org 0x1236a8
	subs r1, r1, r2	@ 001236a8 891a
.org 0x1236aa
	lsls r1, r1, #5	@ 001236aa 4901
.org 0x1236ac
	movs r2, #128	@ 001236ac 8022
.org 0x1236ae
	lsls r2, r2, #9	@ 001236ae 5202
.org 0x1236b0
	adds r1, r1, r2	@ 001236b0 8918
.org 0x1236b2
	bl 0x1d30	@ 001236b2 def63dfb
.org 0x1236b6
	adds r4, r4, r7	@ 001236b6 e419
.org 0x1236b8
	ldrh r1, [r5, #0]	@ 001236b8 2988
.org 0x1236ba
	ldrb r0, [r4, #7]	@ 001236ba e079
.org 0x1236bc
	subs r1, r1, r0	@ 001236bc 091a
.org 0x1236be
	lsls r1, r1, #5	@ 001236be 4901
.org 0x1236c0
	add r1, sl	@ 001236c0 5144
.org 0x1236c2
	adds r0, r4, #0	@ 001236c2 201c
.org 0x1236c4
	bl 0x2208	@ 001236c4 def6a0fd
.org 0x1236c8
	movs r4, #178	@ 001236c8 b224
.org 0x1236ca
	lsls r5, r4, #1	@ 001236ca 6500
.org 0x1236cc
	mov r3, r9	@ 001236cc 4b46
.org 0x1236ce
	adds r0, r3, r5	@ 001236ce 5819
.org 0x1236d0
	movs r1, #163	@ 001236d0 a321
.org 0x1236d2
	lsls r1, r1, #2	@ 001236d2 8900
.org 0x1236d4
	strh r1, [r0, #0]	@ 001236d4 0180
.org 0x1236d6
	add r5, r8	@ 001236d6 4544
.org 0x1236d8
	movs r0, #6	@ 001236d8 0620
.org 0x1236da
	strh r0, [r5, #0]	@ 001236da 2880
.org 0x1236dc
	lsls r4, r4, #4	@ 001236dc 2401
.org 0x1236de
	movs r0, #178	@ 001236de b220
.org 0x1236e0
	lsls r0, r0, #2	@ 001236e0 8000
.org 0x1236e2
	adds r4, r4, r0	@ 001236e2 2418
.org 0x1236e4
	adds r0, r4, r6	@ 001236e4 a019
.org 0x1236e6
	ldrh r2, [r0, #6]	@ 001236e6 c288
.org 0x1236e8
	lsrs r2, r2, #6	@ 001236e8 9209
.org 0x1236ea
	subs r1, r1, r2	@ 001236ea 891a
.org 0x1236ec
	lsls r1, r1, #5	@ 001236ec 4901
.org 0x1236ee
	movs r2, #128	@ 001236ee 8022
.org 0x1236f0
	lsls r2, r2, #9	@ 001236f0 5202
.org 0x1236f2
	adds r1, r1, r2	@ 001236f2 8918
.org 0x1236f4
	bl 0x1d30	@ 001236f4 def61cfb
.org 0x1236f8
	adds r4, r4, r7	@ 001236f8 e419
.org 0x1236fa
	ldrh r1, [r5, #0]	@ 001236fa 2988
.org 0x1236fc
	ldrb r0, [r4, #7]	@ 001236fc e079
.org 0x1236fe
	subs r1, r1, r0	@ 001236fe 091a
.org 0x123700
	lsls r1, r1, #5	@ 00123700 4901
.org 0x123702
	add r1, sl	@ 00123702 5144
.org 0x123704
	adds r0, r4, #0	@ 00123704 201c
.org 0x123706
	bl 0x2208	@ 00123706 def67ffd
.org 0x12370a
	movs r4, #235	@ 0012370a eb24
.org 0x12370c
	lsls r5, r4, #1	@ 0012370c 6500
.org 0x12370e
	mov r3, r9	@ 0012370e 4b46
.org 0x123710
	adds r0, r3, r5	@ 00123710 5819
.org 0x123712
	movs r1, #203	@ 00123712 cb21
.org 0x123714
	lsls r1, r1, #2	@ 00123714 8900
.org 0x123716
	strh r1, [r0, #0]	@ 00123716 0180
.org 0x123718
	add r5, r8	@ 00123718 4544
.org 0x12371a
	movs r0, #7	@ 0012371a 0720
.org 0x12371c
	strh r0, [r5, #0]	@ 0012371c 2880
.org 0x12371e
	lsls r4, r4, #4	@ 0012371e 2401
.org 0x123720
	movs r0, #235	@ 00123720 eb20
.org 0x123722
	lsls r0, r0, #2	@ 00123722 8000
.org 0x123724
	adds r4, r4, r0	@ 00123724 2418
.org 0x123726
	adds r0, r4, r6	@ 00123726 a019
.org 0x123728
	ldrh r2, [r0, #6]	@ 00123728 c288
.org 0x12372a
	lsrs r2, r2, #6	@ 0012372a 9209
.org 0x12372c
	subs r1, r1, r2	@ 0012372c 891a
.org 0x12372e
	lsls r1, r1, #5	@ 0012372e 4901
.org 0x123730
	movs r2, #128	@ 00123730 8022
.org 0x123732
	lsls r2, r2, #9	@ 00123732 5202
.org 0x123734
	adds r1, r1, r2	@ 00123734 8918
.org 0x123736
	bl 0x1d30	@ 00123736 def6fbfa
.org 0x12373a
	adds r4, r4, r7	@ 0012373a e419
.org 0x12373c
	ldrh r1, [r5, #0]	@ 0012373c 2988
.org 0x12373e
	ldrb r0, [r4, #7]	@ 0012373e e079
.org 0x123740
	subs r1, r1, r0	@ 00123740 091a
.org 0x123742
	lsls r1, r1, #5	@ 00123742 4901
.org 0x123744
	add r1, sl	@ 00123744 5144
.org 0x123746
	adds r0, r4, #0	@ 00123746 201c
.org 0x123748
	bl 0x2208	@ 00123748 def65efd
.org 0x12374c
	movs r4, #247	@ 0012374c f724
.org 0x12374e
	lsls r5, r4, #1	@ 0012374e 6500
.org 0x123750
	mov r3, r9	@ 00123750 4b46
.org 0x123752
	adds r1, r3, r5	@ 00123752 5919
.org 0x123754
	ldr r0, [pc, #324]	@ 00123754 5148
.org 0x123756
	strh r0, [r1, #0]	@ 00123756 0880
.org 0x123758
	add r5, r8	@ 00123758 4544
.org 0x12375a
	movs r0, #10	@ 0012375a 0a20
.org 0x12375c
	strh r0, [r5, #0]	@ 0012375c 2880
.org 0x12375e
	lsls r4, r4, #4	@ 0012375e 2401
.org 0x123760
	movs r2, #247	@ 00123760 f722
.org 0x123762
	lsls r2, r2, #2	@ 00123762 9200
.org 0x123764
	adds r4, r4, r2	@ 00123764 a418
.org 0x123766
	adds r0, r4, r6	@ 00123766 a019
.org 0x123768
	ldrh r1, [r1, #0]	@ 00123768 0988
.org 0x12376a
	ldrh r2, [r0, #6]	@ 0012376a c288
.org 0x12376c
	lsrs r2, r2, #6	@ 0012376c 9209
.org 0x12376e
	subs r1, r1, r2	@ 0012376e 891a
.org 0x123770
	lsls r1, r1, #5	@ 00123770 4901
.org 0x123772
	movs r3, #128	@ 00123772 8023
.org 0x123774
	lsls r3, r3, #9	@ 00123774 5b02
.org 0x123776
	adds r1, r1, r3	@ 00123776 c918
.org 0x123778
	bl 0x1d30	@ 00123778 def6dafa
.org 0x12377c
	adds r4, r4, r7	@ 0012377c e419
.org 0x12377e
	ldrh r1, [r5, #0]	@ 0012377e 2988
.org 0x123780
	ldrb r0, [r4, #7]	@ 00123780 e079
.org 0x123782
	subs r1, r1, r0	@ 00123782 091a
.org 0x123784
	lsls r1, r1, #5	@ 00123784 4901
.org 0x123786
	add r1, sl	@ 00123786 5144
.org 0x123788
	adds r0, r4, #0	@ 00123788 201c
.org 0x12378a
	bl 0x2208	@ 0012378a def63dfd
.org 0x12378e
	movs r0, #206	@ 0012378e ce20
.org 0x123790
	add r9, r0	@ 00123790 8144
.org 0x123792
	movs r1, #234	@ 00123792 ea21
.org 0x123794
	lsls r1, r1, #2	@ 00123794 8900
.org 0x123796
	mov r2, r9	@ 00123796 4a46
.org 0x123798
	strh r1, [r2, #0]	@ 00123798 1180
.org 0x12379a
	add r8, r0	@ 0012379a 8044
.org 0x12379c
	movs r0, #10	@ 0012379c 0a20
.org 0x12379e
	mov r3, r8	@ 0012379e 4346
.org 0x1237a0
	strh r0, [r3, #0]	@ 001237a0 1880
.org 0x1237a2
	ldr r4, [pc, #252]	@ 001237a2 3f4c
.org 0x1237a4
	adds r6, r4, r6	@ 001237a4 a619
.org 0x1237a6
	ldrh r0, [r6, #6]	@ 001237a6 f088
.org 0x1237a8
	lsrs r0, r0, #6	@ 001237a8 8009
.org 0x1237aa
	subs r1, r1, r0	@ 001237aa 091a
.org 0x1237ac
	lsls r1, r1, #5	@ 001237ac 4901
.org 0x1237ae
	movs r2, #128	@ 001237ae 8022
.org 0x1237b0
	lsls r2, r2, #9	@ 001237b0 5202
.org 0x1237b2
	adds r1, r1, r2	@ 001237b2 8918
.org 0x1237b4
	adds r0, r6, #0	@ 001237b4 301c
.org 0x1237b6
	bl 0x1d30	@ 001237b6 def6bbfa
.org 0x1237ba
	adds r4, r4, r7	@ 001237ba e419
.org 0x1237bc
	mov r3, r8	@ 001237bc 4346
.org 0x1237be
	ldrh r1, [r3, #0]	@ 001237be 1988
.org 0x1237c0
	ldrb r0, [r4, #7]	@ 001237c0 e079
.org 0x1237c2
	subs r1, r1, r0	@ 001237c2 091a
.org 0x1237c4
	lsls r1, r1, #5	@ 001237c4 4901
.org 0x1237c6
	add r1, sl	@ 001237c6 5144
.org 0x1237c8
	adds r0, r4, #0	@ 001237c8 201c
.org 0x1237ca
	bl 0x2208	@ 001237ca def61dfd
.org 0x1237ce
	movs r1, #176	@ 001237ce b021
.org 0x1237d0
	lsls r1, r1, #2	@ 001237d0 8900
.org 0x1237d2
	movs r0, #221	@ 001237d2 dd20
.org 0x1237d4
	bl 0x249c	@ 001237d4 def662fe
.org 0x1237d8
	movs r0, #221	@ 001237d8 dd20
.org 0x1237da
	bl 0x25d8	@ 001237da def6fdfe
.org 0x1237de
	movs r0, #221	@ 001237de dd20
.org 0x1237e0
	bl 0x2624	@ 001237e0 def620ff
.org 0x1237e4
	movs r0, #180	@ 001237e4 b420
.org 0x1237e6
	lsls r0, r0, #9	@ 001237e6 4002
.org 0x1237e8
	str r0, [sp, #4]	@ 001237e8 0190
.org 0x1237ea
	movs r0, #220	@ 001237ea dc20
.org 0x1237ec
	lsls r0, r0, #8	@ 001237ec 0002
.org 0x1237ee
	str r0, [sp, #8]	@ 001237ee 0290
.org 0x1237f0
	add r0, sp, #4	@ 001237f0 01a8
.org 0x1237f2
	bl 0x2f190	@ 001237f2 0bf7cdfc
.org 0x1237f6
	ldr r1, [sp, #12]	@ 001237f6 0399
.org 0x1237f8
	ldr r2, [pc, #168]	@ 001237f8 2a4a
.org 0x1237fa
	adds r4, r1, r2	@ 001237fa 8c18
.org 0x1237fc
	str r0, [r4, #0]	@ 001237fc 2060
.org 0x1237fe
	ldr r3, [pc, #168]	@ 001237fe 2a4b
.org 0x123800
	str r3, [sp, #0]	@ 00123800 0093
.org 0x123802
	movs r1, #0	@ 00123802 0021
.org 0x123804
	movs r2, #0	@ 00123804 0022
.org 0x123806
	bl 0x2cbec	@ 00123806 09f7f1f9
.org 0x12380a
	ldr r1, [pc, #160]	@ 0012380a 2849
.org 0x12380c
	ldr r0, [r4, #0]	@ 0012380c 2068
.org 0x12380e
	str r0, [r1, #0]	@ 0012380e 0860
.org 0x123810
	ldr r1, [pc, #156]	@ 00123810 2749
.org 0x123812
	bl 0x382b0	@ 00123812 14f74dfd
.org 0x123816
	movs r1, #0	@ 00123816 0021
.org 0x123818
	str r1, [r4, #8]	@ 00123818 a160
.org 0x12381a
	str r1, [r4, #12]	@ 0012381a e160
.org 0x12381c
	ldr r0, [pc, #148]	@ 0012381c 2548
.org 0x12381e
	ldr r0, [r0, #28]	@ 0012381e c069
.org 0x123820
	str r0, [r4, #16]	@ 00123820 2061
.org 0x123822
	movs r0, #225	@ 00123822 e120
.org 0x123824
	lsls r0, r0, #4	@ 00123824 0001
.org 0x123826
	str r0, [r4, #20]	@ 00123826 6061
.org 0x123828
	strb r1, [r4, #24]	@ 00123828 2176
.org 0x12382a
	movs r3, #0	@ 0012382a 0023
.org 0x12382c
	strb r3, [r4, #25]	@ 0012382c 6376
.org 0x12382e
	strb r3, [r4, #26]	@ 0012382e a376
.org 0x123830
	strb r3, [r4, #27]	@ 00123830 e376
.org 0x123832
	strb r3, [r4, #28]	@ 00123832 2377
.org 0x123834
	strb r3, [r4, #29]	@ 00123834 6377
.org 0x123836
	strb r3, [r4, #30]	@ 00123836 a377
.org 0x123838
	strb r3, [r4, #31]	@ 00123838 e377
.org 0x12383a
	ldr r2, [sp, #12]	@ 0012383a 039a
.org 0x12383c
	ldr r3, [pc, #120]	@ 0012383c 1e4b
.org 0x12383e
	adds r0, r2, r3	@ 0012383e d018
.org 0x123840
	movs r2, #0	@ 00123840 0022
.org 0x123842
	strb r2, [r0, #0]	@ 00123842 0270
.org 0x123844
	ldr r3, [sp, #12]	@ 00123844 039b
.org 0x123846
	ldr r2, [pc, #116]	@ 00123846 1d4a
.org 0x123848
	adds r0, r3, r2	@ 00123848 9818
.org 0x12384a
	movs r3, #0	@ 0012384a 0023
.org 0x12384c
	strb r3, [r0, #0]	@ 0012384c 0370
.org 0x12384e
	ldr r2, [sp, #12]	@ 0012384e 039a
.org 0x123850
	ldr r3, [pc, #108]	@ 00123850 1b4b
.org 0x123852
	adds r0, r2, r3	@ 00123852 d018
.org 0x123854
	movs r2, #0	@ 00123854 0022
.org 0x123856
	strb r2, [r0, #0]	@ 00123856 0270
.org 0x123858
	ldr r3, [sp, #12]	@ 00123858 039b
.org 0x12385a
	ldr r2, [pc, #104]	@ 0012385a 1a4a
.org 0x12385c
	adds r0, r3, r2	@ 0012385c 9818
.org 0x12385e
	movs r3, #0	@ 0012385e 0023
.org 0x123860
	strb r3, [r0, #0]	@ 00123860 0370
.org 0x123862
	str r1, [r4, #44]	@ 00123862 e162
.org 0x123864
	str r1, [r4, #48]	@ 00123864 2163
.org 0x123866
	str r1, [r4, #40]	@ 00123866 a162
.org 0x123868
	str r1, [r4, #36]	@ 00123868 6162
.org 0x12386a
	str r1, [r4, #52]	@ 0012386a 6163
.org 0x12386c
	str r1, [r4, #60]	@ 0012386c e163
.org 0x12386e
	str r1, [r4, #56]	@ 0012386e a163
.org 0x123870
	movs r0, #136	@ 00123870 8820
.org 0x123872
	bl 0x2a88	@ 00123872 dff609f9
.org 0x123876
	add sp, #16	@ 00123876 04b0
.org 0x123878
	pop {r3, r4, r5}	@ 00123878 38bc
.org 0x12387a
	mov r8, r3	@ 0012387a 9846
.org 0x12387c
	mov r9, r4	@ 0012387c a146
.org 0x12387e
	mov sl, r5	@ 0012387e aa46
.org 0x123880
	pop {r4, r5, r6, r7}	@ 00123880 f0bc
.org 0x123882
	pop {r0}	@ 00123882 01bc
.org 0x123884
	bx r0	@ 00123884 0047
