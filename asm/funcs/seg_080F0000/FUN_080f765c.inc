@ FUN_080f765c  entry 0x080f765c  size 200
.thumb
.org 0xf765c
FUN_080f765c:
	push {r4, lr}	@ 000f765c 10b5
.org 0xf765e
	adds r4, r0, #0	@ 000f765e 041c
.org 0xf7660
	ldr r0, [pc, #192]	@ 000f7660 3048
.org 0xf7662
	ldrh r0, [r0, #0]	@ 000f7662 0088
.org 0xf7664
	ldr r2, [pc, #192]	@ 000f7664 304a
.org 0xf7666
	cmp r0, #16	@ 000f7666 1028
.org 0xf7668
	bne.n 0xf767a	@ 000f7668 07d1
.org 0xf766a
	adds r1, r2, #0	@ 000f766a 111c
.org 0xf766c
	adds r1, #206	@ 000f766c ce31
.org 0xf766e
	ldr r0, [pc, #188]	@ 000f766e 2f48
.org 0xf7670
	strh r0, [r1, #0]	@ 000f7670 0880
.org 0xf7672
	ldr r0, [pc, #188]	@ 000f7672 2f48
.org 0xf7674
	adds r0, #206	@ 000f7674 ce30
.org 0xf7676
	movs r1, #9	@ 000f7676 0921
.org 0xf7678
	strh r1, [r0, #0]	@ 000f7678 0180
.org 0xf767a
	ldr r0, [pc, #184]	@ 000f767a 2e48
.org 0xf767c
	adds r1, r2, #0	@ 000f767c 111c
.org 0xf767e
	adds r1, #206	@ 000f767e ce31
.org 0xf7680
	ldrh r1, [r1, #0]	@ 000f7680 0988
.org 0xf7682
	ldrh r2, [r0, #6]	@ 000f7682 c288
.org 0xf7684
	lsrs r2, r2, #6	@ 000f7684 9209
.org 0xf7686
	subs r1, r1, r2	@ 000f7686 891a
.org 0xf7688
	lsls r1, r1, #5	@ 000f7688 4901
.org 0xf768a
	movs r2, #128	@ 000f768a 8022
.org 0xf768c
	lsls r2, r2, #9	@ 000f768c 5202
.org 0xf768e
	adds r1, r1, r2	@ 000f768e 8918
.org 0xf7690
	bl 0x1d30	@ 000f7690 0af74efb
.org 0xf7694
	ldr r0, [pc, #160]	@ 000f7694 2848
.org 0xf7696
	ldr r1, [pc, #152]	@ 000f7696 2649
.org 0xf7698
	adds r1, #206	@ 000f7698 ce31
.org 0xf769a
	ldrh r1, [r1, #0]	@ 000f769a 0988
.org 0xf769c
	ldrb r2, [r0, #7]	@ 000f769c c279
.org 0xf769e
	subs r1, r1, r2	@ 000f769e 891a
.org 0xf76a0
	lsls r1, r1, #5	@ 000f76a0 4901
.org 0xf76a2
	movs r2, #128	@ 000f76a2 8022
.org 0xf76a4
	lsls r2, r2, #2	@ 000f76a4 9200
.org 0xf76a6
	adds r1, r1, r2	@ 000f76a6 8918
.org 0xf76a8
	bl 0x2208	@ 000f76a8 0af7aefd
.org 0xf76ac
	adds r0, r4, #0	@ 000f76ac 201c
.org 0xf76ae
	movs r1, #1	@ 000f76ae 0121
.org 0xf76b0
	movs r2, #2	@ 000f76b0 0222
.org 0xf76b2
	bl 0xf75bc	@ 000f76b2 fff783ff
.org 0xf76b6
	str r0, [r4, #92]	@ 000f76b6 e065
.org 0xf76b8
	adds r0, r4, #0	@ 000f76b8 201c
.org 0xf76ba
	movs r1, #1	@ 000f76ba 0121
.org 0xf76bc
	movs r2, #0	@ 000f76bc 0022
.org 0xf76be
	bl 0xf75bc	@ 000f76be fff77dff
.org 0xf76c2
	adds r1, r4, #0	@ 000f76c2 211c
.org 0xf76c4
	adds r1, #180	@ 000f76c4 b431
.org 0xf76c6
	str r0, [r1, #0]	@ 000f76c6 0860
.org 0xf76c8
	adds r0, r4, #0	@ 000f76c8 201c
.org 0xf76ca
	movs r1, #1	@ 000f76ca 0121
.org 0xf76cc
	movs r2, #1	@ 000f76cc 0122
.org 0xf76ce
	bl 0xf75bc	@ 000f76ce fff775ff
.org 0xf76d2
	adds r1, r4, #0	@ 000f76d2 211c
.org 0xf76d4
	adds r1, #184	@ 000f76d4 b831
.org 0xf76d6
	str r0, [r1, #0]	@ 000f76d6 0860
.org 0xf76d8
	adds r0, r4, #0	@ 000f76d8 201c
.org 0xf76da
	movs r1, #2	@ 000f76da 0221
.org 0xf76dc
	movs r2, #3	@ 000f76dc 0322
.org 0xf76de
	bl 0xf75bc	@ 000f76de fff76dff
.org 0xf76e2
	str r0, [r4, #96]	@ 000f76e2 2066
.org 0xf76e4
	adds r0, r4, #0	@ 000f76e4 201c
.org 0xf76e6
	movs r1, #1	@ 000f76e6 0121
.org 0xf76e8
	movs r2, #4	@ 000f76e8 0422
.org 0xf76ea
	bl 0xf75bc	@ 000f76ea fff767ff
.org 0xf76ee
	str r0, [r4, #100]	@ 000f76ee 6066
.org 0xf76f0
	adds r0, r4, #0	@ 000f76f0 201c
.org 0xf76f2
	movs r1, #2	@ 000f76f2 0221
.org 0xf76f4
	movs r2, #5	@ 000f76f4 0522
.org 0xf76f6
	bl 0xf75bc	@ 000f76f6 fff761ff
.org 0xf76fa
	str r0, [r4, #104]	@ 000f76fa a066
.org 0xf76fc
	ldr r1, [pc, #60]	@ 000f76fc 0f49
.org 0xf76fe
	ldrb r0, [r4, #9]	@ 000f76fe 607a
.org 0xf7700
	lsls r0, r0, #2	@ 000f7700 8000
.org 0xf7702
	adds r0, r0, r1	@ 000f7702 4018
.org 0xf7704
	movs r1, #1	@ 000f7704 0121
.org 0xf7706
	str r1, [r4, #12]	@ 000f7706 e160
.org 0xf7708
	ldr r0, [r0, #0]	@ 000f7708 0068
.org 0xf770a
	ldr r0, [r0, #4]	@ 000f770a 4068
.org 0xf770c
	str r0, [r4, #20]	@ 000f770c 6061
.org 0xf770e
	ldrb r0, [r4, #17]	@ 000f770e 607c
.org 0xf7710
	cmp r0, #1	@ 000f7710 0128
.org 0xf7712
	bne.n 0xf7718	@ 000f7712 01d1
.org 0xf7714
	movs r0, #4	@ 000f7714 0420
.org 0xf7716
	strb r0, [r4, #14]	@ 000f7716 a073
.org 0xf7718
	adds r0, r4, #0	@ 000f7718 201c
.org 0xf771a
	bl 0xf762c	@ 000f771a fff787ff
.org 0xf771e
	pop {r4}	@ 000f771e 10bc
.org 0xf7720
	pop {r0}	@ 000f7720 01bc
.org 0xf7722
	bx r0	@ 000f7722 0047
