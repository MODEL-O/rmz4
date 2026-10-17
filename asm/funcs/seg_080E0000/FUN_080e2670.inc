@ FUN_080e2670  entry 0x080e2670  size 170
.thumb
.org 0xe2670
FUN_080e2670:
	push {r4, r5, r6, lr}	@ 000e2670 70b5
.org 0xe2672
	sub sp, #16	@ 000e2672 84b0
.org 0xe2674
	adds r4, r0, #0	@ 000e2674 041c
.org 0xe2676
	mov r1, sp	@ 000e2676 6946
.org 0xe2678
	ldr r0, [pc, #160]	@ 000e2678 2848
.org 0xe267a
	ldmia r0!, {r2, r3, r5}	@ 000e267a 2cc8
.org 0xe267c
	stmia r1!, {r2, r3, r5}	@ 000e267c 2cc1
.org 0xe267e
	ldr r0, [r0, #0]	@ 000e267e 0068
.org 0xe2680
	str r0, [r1, #0]	@ 000e2680 0860
.org 0xe2682
	ldrb r5, [r4, #17]	@ 000e2682 657c
.org 0xe2684
	ldr r3, [r4, #116]	@ 000e2684 636f
.org 0xe2686
	adds r0, r4, #0	@ 000e2686 201c
.org 0xe2688
	adds r0, #120	@ 000e2688 7830
.org 0xe268a
	ldrb r0, [r0, #0]	@ 000e268a 0078
.org 0xe268c
	adds r2, r0, #0	@ 000e268c 021c
.org 0xe268e
	ldr r1, [pc, #144]	@ 000e268e 2449
.org 0xe2690
	ldrb r0, [r4, #9]	@ 000e2690 607a
.org 0xe2692
	lsls r0, r0, #2	@ 000e2692 8000
.org 0xe2694
	adds r0, r0, r1	@ 000e2694 4018
.org 0xe2696
	movs r1, #1	@ 000e2696 0121
.org 0xe2698
	str r1, [r4, #12]	@ 000e2698 e160
.org 0xe269a
	ldr r0, [r0, #0]	@ 000e269a 0068
.org 0xe269c
	ldr r0, [r0, #4]	@ 000e269c 4068
.org 0xe269e
	str r0, [r4, #20]	@ 000e269e 6061
.org 0xe26a0
	ldrb r1, [r4, #10]	@ 000e26a0 a17a
.org 0xe26a2
	movs r0, #1	@ 000e26a2 0120
.org 0xe26a4
	orrs r0, r1	@ 000e26a4 0843
.org 0xe26a6
	movs r1, #2	@ 000e26a6 0221
.org 0xe26a8
	orrs r0, r1	@ 000e26a8 0843
.org 0xe26aa
	strb r0, [r4, #10]	@ 000e26aa a072
.org 0xe26ac
	ldr r1, [pc, #116]	@ 000e26ac 1d49
.org 0xe26ae
	adds r0, r2, #0	@ 000e26ae 101c
.org 0xe26b0
	adds r0, #64	@ 000e26b0 4030
.org 0xe26b2
	lsls r0, r0, #24	@ 000e26b2 0006
.org 0xe26b4
	lsrs r0, r0, #23	@ 000e26b4 c00d
.org 0xe26b6
	adds r0, r0, r1	@ 000e26b6 4018
.org 0xe26b8
	movs r6, #0	@ 000e26b8 0026
.org 0xe26ba
	ldrsh r0, [r0, r6]	@ 000e26ba 805f
.org 0xe26bc
	muls r0, r3	@ 000e26bc 5843
.org 0xe26be
	cmp r0, #0	@ 000e26be 0028
.org 0xe26c0
	bge.n 0xe26c4	@ 000e26c0 00da
.org 0xe26c2
	adds r0, #255	@ 000e26c2 ff30
.org 0xe26c4
	asrs r0, r0, #8	@ 000e26c4 0012
.org 0xe26c6
	str r0, [r4, #92]	@ 000e26c6 e065
.org 0xe26c8
	lsls r0, r2, #1	@ 000e26c8 5000
.org 0xe26ca
	adds r0, r0, r1	@ 000e26ca 4018
.org 0xe26cc
	movs r1, #0	@ 000e26cc 0021
.org 0xe26ce
	ldrsh r0, [r0, r1]	@ 000e26ce 405e
.org 0xe26d0
	muls r0, r3	@ 000e26d0 5843
.org 0xe26d2
	cmp r0, #0	@ 000e26d2 0028
.org 0xe26d4
	bge.n 0xe26d8	@ 000e26d4 00da
.org 0xe26d6
	adds r0, #255	@ 000e26d6 ff30
.org 0xe26d8
	asrs r0, r0, #8	@ 000e26d8 0012
.org 0xe26da
	str r0, [r4, #96]	@ 000e26da 2066
.org 0xe26dc
	adds r0, r4, #0	@ 000e26dc 201c
.org 0xe26de
	bl 0x1cc9c	@ 000e26de 3af7ddfa
.org 0xe26e2
	movs r2, #0	@ 000e26e2 0022
.org 0xe26e4
	ldrb r1, [r4, #10]	@ 000e26e4 a17a
.org 0xe26e6
	movs r0, #239	@ 000e26e6 ef20
.org 0xe26e8
	ands r0, r1	@ 000e26e8 0840
.org 0xe26ea
	strb r0, [r4, #10]	@ 000e26ea a072
.org 0xe26ec
	adds r0, r4, #0	@ 000e26ec 201c
.org 0xe26ee
	adds r0, #76	@ 000e26ee 4c30
.org 0xe26f0
	strb r2, [r0, #0]	@ 000e26f0 0270
.org 0xe26f2
	adds r2, r4, #0	@ 000e26f2 221c
.org 0xe26f4
	adds r2, #74	@ 000e26f4 4a32
.org 0xe26f6
	ldrb r1, [r2, #0]	@ 000e26f6 1178
.org 0xe26f8
	movs r0, #17	@ 000e26f8 1120
.org 0xe26fa
	negs r0, r0	@ 000e26fa 4042
.org 0xe26fc
	ands r0, r1	@ 000e26fc 0840
.org 0xe26fe
	strb r0, [r2, #0]	@ 000e26fe 1070
.org 0xe2700
	lsls r0, r5, #2	@ 000e2700 a800
.org 0xe2702
	add r0, sp	@ 000e2702 6844
.org 0xe2704
	ldrh r1, [r0, #0]	@ 000e2704 0188
.org 0xe2706
	adds r0, r4, #0	@ 000e2706 201c
.org 0xe2708
	bl 0x1cf00	@ 000e2708 3af7fafb
.org 0xe270c
	adds r0, r4, #0	@ 000e270c 201c
.org 0xe270e
	bl 0xe2728	@ 000e270e 00f00bf8
.org 0xe2712
	add sp, #16	@ 000e2712 04b0
.org 0xe2714
	pop {r4, r5, r6}	@ 000e2714 70bc
.org 0xe2716
	pop {r0}	@ 000e2716 01bc
.org 0xe2718
	bx r0	@ 000e2718 0047
