@ FUN_080d7634  entry 0x080d7634  size 126
.thumb
.org 0xd7634
FUN_080d7634:
	push {r4, r5, r6, r7, lr}	@ 000d7634 f0b5
.org 0xd7636
	mov r7, r9	@ 000d7636 4f46
.org 0xd7638
	mov r6, r8	@ 000d7638 4646
.org 0xd763a
	push {r6, r7}	@ 000d763a c0b4
.org 0xd763c
	adds r6, r0, #0	@ 000d763c 061c
.org 0xd763e
	adds r4, r1, #0	@ 000d763e 0c1c
.org 0xd7640
	adds r5, r2, #0	@ 000d7640 151c
.org 0xd7642
	mov r8, r3	@ 000d7642 9846
.org 0xd7644
	ldr r0, [sp, #32]	@ 000d7644 0898
.org 0xd7646
	lsls r0, r0, #24	@ 000d7646 0006
.org 0xd7648
	lsrs r0, r0, #24	@ 000d7648 000e
.org 0xd764a
	mov r9, r0	@ 000d764a 8146
.org 0xd764c
	ldr r0, [pc, #100]	@ 000d764c 1948
.org 0xd764e
	ldr r0, [r0, #0]	@ 000d764e 0068
.org 0xd7650
	bl 0x5500	@ 000d7650 2df756ff
.org 0xd7654
	mov ip, r0	@ 000d7654 8446
.org 0xd7656
	cmp r0, #0	@ 000d7656 0028
.org 0xd7658
	beq.n 0xd76a6	@ 000d7658 25d0
.org 0xd765a
	adds r0, #37	@ 000d765a 2530
.org 0xd765c
	movs r2, #0	@ 000d765c 0022
.org 0xd765e
	movs r3, #1	@ 000d765e 0123
.org 0xd7660
	strb r3, [r0, #0]	@ 000d7660 0370
.org 0xd7662
	ldr r1, [pc, #84]	@ 000d7662 1549
.org 0xd7664
	movs r0, #23	@ 000d7664 1720
.org 0xd7666
	mov r7, ip	@ 000d7666 6746
.org 0xd7668
	strb r0, [r7, #9]	@ 000d7668 7872
.org 0xd766a
	ldr r0, [r1, #92]	@ 000d766a c86d
.org 0xd766c
	ldr r0, [r0, #0]	@ 000d766c 0068
.org 0xd766e
	str r0, [r7, #20]	@ 000d766e 7861
.org 0xd7670
	movs r1, #0	@ 000d7670 0021
.org 0xd7672
	strh r2, [r7, #32]	@ 000d7672 3a84
.org 0xd7674
	mov r0, ip	@ 000d7674 6046
.org 0xd7676
	adds r0, #34	@ 000d7676 2230
.org 0xd7678
	strb r1, [r0, #0]	@ 000d7678 0170
.org 0xd767a
	movs r0, #3	@ 000d767a 0320
.org 0xd767c
	strb r0, [r7, #16]	@ 000d767c 3874
.org 0xd767e
	str r6, [r7, #40]	@ 000d767e be62
.org 0xd7680
	ldr r0, [sp, #28]	@ 000d7680 0798
.org 0xd7682
	str r0, [r7, #116]	@ 000d7682 7867
.org 0xd7684
	ldr r0, [r4, #0]	@ 000d7684 2068
.org 0xd7686
	str r0, [r7, #84]	@ 000d7686 7865
.org 0xd7688
	ldr r0, [r4, #4]	@ 000d7688 6068
.org 0xd768a
	str r0, [r7, #88]	@ 000d768a b865
.org 0xd768c
	ldr r0, [r5, #0]	@ 000d768c 2868
.org 0xd768e
	str r0, [r7, #92]	@ 000d768e f865
.org 0xd7690
	ldr r0, [r5, #4]	@ 000d7690 6868
.org 0xd7692
	str r0, [r7, #96]	@ 000d7692 3866
.org 0xd7694
	mov r0, r8	@ 000d7694 4046
.org 0xd7696
	str r0, [r7, #104]	@ 000d7696 b866
.org 0xd7698
	mov r2, r9	@ 000d7698 4a46
.org 0xd769a
	strb r2, [r7, #18]	@ 000d769a ba74
.org 0xd769c
	mov r0, ip	@ 000d769c 6046
.org 0xd769e
	adds r0, #120	@ 000d769e 7830
.org 0xd76a0
	strb r3, [r0, #0]	@ 000d76a0 0370
.org 0xd76a2
	adds r0, #1	@ 000d76a2 0130
.org 0xd76a4
	strb r1, [r0, #0]	@ 000d76a4 0170
.org 0xd76a6
	pop {r3, r4}	@ 000d76a6 18bc
.org 0xd76a8
	mov r8, r3	@ 000d76a8 9846
.org 0xd76aa
	mov r9, r4	@ 000d76aa a146
.org 0xd76ac
	pop {r4, r5, r6, r7}	@ 000d76ac f0bc
.org 0xd76ae
	pop {r0}	@ 000d76ae 01bc
.org 0xd76b0
	bx r0	@ 000d76b0 0047
