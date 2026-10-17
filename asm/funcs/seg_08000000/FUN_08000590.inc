@ FUN_08000590  entry 0x08000590  size 232
.thumb
.org 0x590
FUN_08000590:
	push {r4, r5, r6, r7, lr}	@ 00000590 f0b5
.org 0x592
	mov r7, r8	@ 00000592 4746
.org 0x594
	push {r7}	@ 00000594 80b4
.org 0x596
	adds r5, r0, #0	@ 00000596 051c
.org 0x598
	adds r6, r1, #0	@ 00000598 0e1c
.org 0x59a
	ldr r7, [pc, #224]	@ 0000059a 384f
.org 0x59c
	ldr r0, [r5, #16]	@ 0000059c 2869
.org 0x59e
	lsls r0, r0, #2	@ 0000059e 8000
.org 0x5a0
	lsrs r0, r0, #27	@ 000005a0 c00e
.org 0x5a2
	lsls r0, r0, #5	@ 000005a2 4001
.org 0x5a4
	adds r7, r7, r0	@ 000005a4 3f18
.org 0x5a6
	strb r6, [r5, #27]	@ 000005a6 ee76
.org 0x5a8
	lsls r6, r6, #1	@ 000005a8 7600
.org 0x5aa
	ldrb r0, [r5, #24]	@ 000005aa 287e
.org 0x5ac
	ldrb r1, [r5, #25]	@ 000005ac 697e
.org 0x5ae
	eors r0, r1	@ 000005ae 4840
.org 0x5b0
	beq.n 0x5b8	@ 000005b0 02d0
.org 0x5b2
	negs r6, r6	@ 000005b2 7642
.org 0x5b4
	lsls r6, r6, #23	@ 000005b4 f605
.org 0x5b6
	lsrs r6, r6, #23	@ 000005b6 f60d
.org 0x5b8
	movs r1, #128	@ 000005b8 8021
.org 0x5ba
	adds r1, r1, r6	@ 000005ba 8919
.org 0x5bc
	lsls r1, r1, #23	@ 000005bc c905
.org 0x5be
	lsrs r1, r1, #23	@ 000005be c90d
.org 0x5c0
	mov r8, r1	@ 000005c0 8846
.org 0x5c2
	ldrb r0, [r5, #24]	@ 000005c2 287e
.org 0x5c4
	orrs r0, r0	@ 000005c4 0043
.org 0x5c6
	beq.n 0x5f2	@ 000005c6 14d0
.org 0x5c8
	ldr r0, [pc, #172]	@ 000005c8 2b48
.org 0x5ca
	ldrsh r0, [r0, r1]	@ 000005ca 405e
.org 0x5cc
	lsls r0, r0, #8	@ 000005cc 0002
.org 0x5ce
	ldrh r1, [r5, #28]	@ 000005ce a98b
.org 0x5d0
	movs r2, #22	@ 000005d0 1622
.org 0x5d2
	adds r1, r1, r2	@ 000005d2 8918
.org 0x5d4
	bl 0x128fb8	@ 000005d4 28f1f0fc
.org 0x5d8
	negs r0, r0	@ 000005d8 4042
.org 0x5da
	strh r0, [r7, #6]	@ 000005da f880
.org 0x5dc
	ldr r0, [pc, #152]	@ 000005dc 2648
.org 0x5de
	ldrsh r0, [r0, r6]	@ 000005de 805f
.org 0x5e0
	lsls r0, r0, #8	@ 000005e0 0002
.org 0x5e2
	ldrh r1, [r5, #28]	@ 000005e2 a98b
.org 0x5e4
	movs r2, #22	@ 000005e4 1622
.org 0x5e6
	adds r1, r1, r2	@ 000005e6 8918
.org 0x5e8
	bl 0x128fb8	@ 000005e8 28f1e6fc
.org 0x5ec
	negs r0, r0	@ 000005ec 4042
.org 0x5ee
	strh r0, [r7, #14]	@ 000005ee f881
.org 0x5f0
	b.n 0x616	@ 000005f0 11e0
.org 0x5f2
	ldr r0, [pc, #132]	@ 000005f2 2148
.org 0x5f4
	ldrsh r0, [r0, r1]	@ 000005f4 405e
.org 0x5f6
	lsls r0, r0, #8	@ 000005f6 0002
.org 0x5f8
	ldrh r1, [r5, #28]	@ 000005f8 a98b
.org 0x5fa
	movs r2, #22	@ 000005fa 1622
.org 0x5fc
	adds r1, r1, r2	@ 000005fc 8918
.org 0x5fe
	bl 0x128fb8	@ 000005fe 28f1dbfc
.org 0x602
	strh r0, [r7, #6]	@ 00000602 f880
.org 0x604
	ldr r0, [pc, #112]	@ 00000604 1c48
.org 0x606
	ldrsh r0, [r0, r6]	@ 00000606 805f
.org 0x608
	lsls r0, r0, #8	@ 00000608 0002
.org 0x60a
	ldrh r1, [r5, #28]	@ 0000060a a98b
.org 0x60c
	movs r2, #22	@ 0000060c 1622
.org 0x60e
	adds r1, r1, r2	@ 0000060e 8918
.org 0x610
	bl 0x128fb8	@ 00000610 28f1d2fc
.org 0x614
	strh r0, [r7, #14]	@ 00000614 f881
.org 0x616
	ldrb r0, [r5, #25]	@ 00000616 687e
.org 0x618
	orrs r0, r0	@ 00000618 0043
.org 0x61a
	beq.n 0x646	@ 0000061a 14d0
.org 0x61c
	ldr r0, [pc, #88]	@ 0000061c 1648
.org 0x61e
	ldrsh r0, [r0, r6]	@ 0000061e 805f
.org 0x620
	lsls r0, r0, #8	@ 00000620 0002
.org 0x622
	ldrh r1, [r5, #30]	@ 00000622 e98b
.org 0x624
	movs r2, #22	@ 00000624 1622
.org 0x626
	adds r1, r1, r2	@ 00000626 8918
.org 0x628
	bl 0x128fb8	@ 00000628 28f1c6fc
.org 0x62c
	strh r0, [r7, #22]	@ 0000062c f882
.org 0x62e
	mov r1, r8	@ 0000062e 4146
.org 0x630
	ldr r0, [pc, #68]	@ 00000630 1148
.org 0x632
	ldrsh r0, [r0, r1]	@ 00000632 405e
.org 0x634
	lsls r0, r0, #8	@ 00000634 0002
.org 0x636
	ldrh r1, [r5, #30]	@ 00000636 e98b
.org 0x638
	movs r2, #22	@ 00000638 1622
.org 0x63a
	adds r1, r1, r2	@ 0000063a 8918
.org 0x63c
	bl 0x128fb8	@ 0000063c 28f1bcfc
.org 0x640
	negs r0, r0	@ 00000640 4042
.org 0x642
	strh r0, [r7, #30]	@ 00000642 f883
.org 0x644
	b.n 0x66e	@ 00000644 13e0
.org 0x646
	ldr r0, [pc, #48]	@ 00000646 0c48
.org 0x648
	ldrsh r0, [r0, r6]	@ 00000648 805f
.org 0x64a
	lsls r0, r0, #8	@ 0000064a 0002
.org 0x64c
	ldrh r1, [r5, #30]	@ 0000064c e98b
.org 0x64e
	movs r2, #22	@ 0000064e 1622
.org 0x650
	adds r1, r1, r2	@ 00000650 8918
.org 0x652
	bl 0x128fb8	@ 00000652 28f1b1fc
.org 0x656
	negs r0, r0	@ 00000656 4042
.org 0x658
	strh r0, [r7, #22]	@ 00000658 f882
.org 0x65a
	mov r1, r8	@ 0000065a 4146
.org 0x65c
	ldr r0, [pc, #24]	@ 0000065c 0648
.org 0x65e
	ldrsh r0, [r0, r1]	@ 0000065e 405e
.org 0x660
	lsls r0, r0, #8	@ 00000660 0002
.org 0x662
	ldrh r1, [r5, #30]	@ 00000662 e98b
.org 0x664
	movs r2, #22	@ 00000664 1622
.org 0x666
	adds r1, r1, r2	@ 00000666 8918
.org 0x668
	bl 0x128fb8	@ 00000668 28f1a6fc
.org 0x66c
	strh r0, [r7, #30]	@ 0000066c f883
.org 0x66e
	pop {r7}	@ 0000066e 80bc
.org 0x670
	mov r8, r7	@ 00000670 b846
.org 0x672
	pop {r4, r5, r6, r7}	@ 00000672 f0bc
.org 0x674
	pop {r0}	@ 00000674 01bc
.org 0x676
	bx r0	@ 00000676 0047
