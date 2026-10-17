@ FUN_08074588  entry 0x08074588  size 188
.thumb
.org 0x74588
FUN_08074588:
	push {r4, r5, r6, lr}	@ 00074588 70b5
.org 0x7458a
	adds r4, r0, #0	@ 0007458a 041c
.org 0x7458c
	ldrb r5, [r4, #14]	@ 0007458c a57b
.org 0x7458e
	cmp r5, #0	@ 0007458e 002d
.org 0x74590
	bne.n 0x745bc	@ 00074590 14d1
.org 0x74592
	ldrb r0, [r4, #30]	@ 00074592 a07f
.org 0x74594
	lsls r0, r0, #8	@ 00074594 0002
.org 0x74596
	adds r1, r4, #0	@ 00074596 211c
.org 0x74598
	adds r1, #112	@ 00074598 7031
.org 0x7459a
	ldrb r1, [r1, #0]	@ 0007459a 0978
.org 0x7459c
	orrs r0, r1	@ 0007459c 0843
.org 0x7459e
	movs r1, #147	@ 0007459e 9321
.org 0x745a0
	lsls r1, r1, #8	@ 000745a0 0902
.org 0x745a2
	cmp r0, r1	@ 000745a2 8842
.org 0x745a4
	beq.n 0x745ac	@ 000745a4 02d0
.org 0x745a6
	adds r0, r4, #0	@ 000745a6 201c
.org 0x745a8
	bl 0x1cf00	@ 000745a8 a8f7aafc
.org 0x745ac
	adds r0, r4, #0	@ 000745ac 201c
.org 0x745ae
	adds r0, #180	@ 000745ae b430
.org 0x745b0
	strh r5, [r0, #20]	@ 000745b0 8582
.org 0x745b2
	movs r0, #4	@ 000745b2 0420
.org 0x745b4
	strb r0, [r4, #18]	@ 000745b4 a074
.org 0x745b6
	ldrb r0, [r4, #14]	@ 000745b6 a07b
.org 0x745b8
	adds r0, #1	@ 000745b8 0130
.org 0x745ba
	strb r0, [r4, #14]	@ 000745ba a073
.org 0x745bc
	adds r0, r4, #0	@ 000745bc 201c
.org 0x745be
	bl 0x1cff0	@ 000745be a8f717fd
.org 0x745c2
	adds r3, r4, #0	@ 000745c2 231c
.org 0x745c4
	adds r3, #180	@ 000745c4 b433
.org 0x745c6
	ldr r1, [pc, #124]	@ 000745c6 1f49
.org 0x745c8
	adds r2, r4, #0	@ 000745c8 221c
.org 0x745ca
	adds r2, #224	@ 000745ca e032
.org 0x745cc
	ldrb r0, [r2, #0]	@ 000745cc 1078
.org 0x745ce
	lsls r0, r0, #1	@ 000745ce 4000
.org 0x745d0
	adds r0, r0, r1	@ 000745d0 4018
.org 0x745d2
	movs r5, #0	@ 000745d2 0025
.org 0x745d4
	ldrsh r1, [r0, r5]	@ 000745d4 415f
.org 0x745d6
	lsls r1, r1, #2	@ 000745d6 8900
.org 0x745d8
	ldr r0, [r3, #4]	@ 000745d8 5868
.org 0x745da
	adds r0, r0, r1	@ 000745da 4018
.org 0x745dc
	str r0, [r4, #88]	@ 000745dc a065
.org 0x745de
	ldrb r0, [r2, #0]	@ 000745de 1078
.org 0x745e0
	adds r0, #1	@ 000745e0 0130
.org 0x745e2
	strb r0, [r2, #0]	@ 000745e2 1070
.org 0x745e4
	ldrh r0, [r3, #20]	@ 000745e4 988a
.org 0x745e6
	ldrh r6, [r3, #16]	@ 000745e6 1e8a
.org 0x745e8
	adds r1, r0, r6	@ 000745e8 8119
.org 0x745ea
	movs r5, #0	@ 000745ea 0025
.org 0x745ec
	strh r1, [r3, #16]	@ 000745ec 1982
.org 0x745ee
	ldrh r2, [r3, #22]	@ 000745ee da8a
.org 0x745f0
	ldrh r6, [r3, #18]	@ 000745f0 5e8a
.org 0x745f2
	adds r1, r2, r6	@ 000745f2 9119
.org 0x745f4
	strh r1, [r3, #18]	@ 000745f4 5982
.org 0x745f6
	adds r0, #128	@ 000745f6 8030
.org 0x745f8
	strh r0, [r3, #20]	@ 000745f8 9882
.org 0x745fa
	adds r2, #128	@ 000745fa 8032
.org 0x745fc
	strh r2, [r3, #22]	@ 000745fc da82
.org 0x745fe
	lsls r0, r0, #16	@ 000745fe 0004
.org 0x74600
	asrs r0, r0, #16	@ 00074600 0014
.org 0x74602
	movs r1, #128	@ 00074602 8021
.org 0x74604
	lsls r1, r1, #2	@ 00074604 8900
.org 0x74606
	cmp r0, r1	@ 00074606 8842
.org 0x74608
	ble.n 0x7460e	@ 00074608 01dd
.org 0x7460a
	strh r1, [r3, #20]	@ 0007460a 9982
.org 0x7460c
	strh r1, [r3, #22]	@ 0007460c d982
.org 0x7460e
	ldrh r1, [r3, #12]	@ 0007460e 9989
.org 0x74610
	adds r1, #128	@ 00074610 8031
.org 0x74612
	strh r1, [r3, #12]	@ 00074612 9981
.org 0x74614
	ldrh r0, [r3, #14]	@ 00074614 d889
.org 0x74616
	adds r0, #128	@ 00074616 8030
.org 0x74618
	strh r0, [r3, #14]	@ 00074618 d881
.org 0x7461a
	lsls r1, r1, #16	@ 0007461a 0904
.org 0x7461c
	asrs r1, r1, #16	@ 0007461c 0914
.org 0x7461e
	movs r0, #192	@ 0007461e c020
.org 0x74620
	lsls r0, r0, #6	@ 00074620 8001
.org 0x74622
	cmp r1, r0	@ 00074622 8142
.org 0x74624
	ble.n 0x7462a	@ 00074624 01dd
.org 0x74626
	strh r0, [r3, #12]	@ 00074626 9881
.org 0x74628
	strh r0, [r3, #14]	@ 00074628 d881
.org 0x7462a
	ldr r0, [pc, #28]	@ 0007462a 0748
.org 0x7462c
	ldrb r1, [r0, #18]	@ 0007462c 817c
.org 0x7462e
	movs r0, #1	@ 0007462e 0120
.org 0x74630
	ands r0, r1	@ 00074630 0840
.org 0x74632
	cmp r0, #0	@ 00074632 0028
.org 0x74634
	bne.n 0x7463e	@ 00074634 03d1
.org 0x74636
	movs r0, #3	@ 00074636 0320
.org 0x74638
	strb r0, [r4, #13]	@ 00074638 6073
.org 0x7463a
	strb r5, [r4, #14]	@ 0007463a a573
.org 0x7463c
	strb r5, [r4, #15]	@ 0007463c e573
.org 0x7463e
	pop {r4, r5, r6}	@ 0007463e 70bc
.org 0x74640
	pop {r0}	@ 00074640 01bc
.org 0x74642
	bx r0	@ 00074642 0047
