@ FUN_08055648  entry 0x08055648  size 156
.thumb
.org 0x55648
FUN_08055648:
	push {r4, lr}	@ 00055648 10b5
.org 0x5564a
	sub sp, #8	@ 0005564a 82b0
.org 0x5564c
	adds r4, r0, #0	@ 0005564c 041c
.org 0x5564e
	ldr r0, [pc, #148]	@ 0005564e 2548
.org 0x55650
	ldr r1, [r0, #4]	@ 00055650 4168
.org 0x55652
	ldr r0, [r0, #0]	@ 00055652 0068
.org 0x55654
	str r0, [sp, #0]	@ 00055654 0090
.org 0x55656
	str r1, [sp, #4]	@ 00055656 0191
.org 0x55658
	ldrb r0, [r4, #15]	@ 00055658 e07b
.org 0x5565a
	cmp r0, #0	@ 0005565a 0028
.org 0x5565c
	bne.n 0x55688	@ 0005565c 14d1
.org 0x5565e
	ldr r0, [pc, #136]	@ 0005565e 2248
.org 0x55660
	ldrh r0, [r0, #0]	@ 00055660 0088
.org 0x55662
	movs r1, #0	@ 00055662 0021
.org 0x55664
	cmp r0, #16	@ 00055664 1028
.org 0x55666
	bne.n 0x5566a	@ 00055666 00d1
.org 0x55668
	movs r1, #4	@ 00055668 0421
.org 0x5566a
	mov r2, sp	@ 0005566a 6a46
.org 0x5566c
	adds r0, r1, r2	@ 0005566c 8818
.org 0x5566e
	ldrh r0, [r0, #0]	@ 0005566e 0088
.org 0x55670
	bl 0x2b10	@ 00055670 adf74efa
.org 0x55674
	movs r0, #248	@ 00055674 f820
.org 0x55676
	bl 0x2b10	@ 00055676 adf74bfa
.org 0x5567a
	ldr r1, [pc, #112]	@ 0005567a 1c49
.org 0x5567c
	adds r0, r4, #0	@ 0005567c 201c
.org 0x5567e
	bl 0x1cf00	@ 0005567e c7f73ffc
.org 0x55682
	ldrb r0, [r4, #15]	@ 00055682 e07b
.org 0x55684
	adds r0, #1	@ 00055684 0130
.org 0x55686
	strb r0, [r4, #15]	@ 00055686 e073
.org 0x55688
	adds r0, r4, #0	@ 00055688 201c
.org 0x5568a
	bl 0x1cff0	@ 0005568a c7f7b1fc
.org 0x5568e
	adds r0, r4, #0	@ 0005568e 201c
.org 0x55690
	adds r0, #116	@ 00055690 7430
.org 0x55692
	ldr r3, [pc, #92]	@ 00055692 174b
.org 0x55694
	ldrb r1, [r4, #30]	@ 00055694 a17f
.org 0x55696
	lsls r1, r1, #8	@ 00055696 0902
.org 0x55698
	adds r2, r4, #0	@ 00055698 221c
.org 0x5569a
	adds r2, #112	@ 0005569a 7032
.org 0x5569c
	ldrb r2, [r2, #0]	@ 0005569c 1278
.org 0x5569e
	orrs r1, r2	@ 0005569e 1143
.org 0x556a0
	ldr r2, [pc, #80]	@ 000556a0 144a
.org 0x556a2
	adds r1, r1, r2	@ 000556a2 8918
.org 0x556a4
	lsls r1, r1, #2	@ 000556a4 8900
.org 0x556a6
	adds r1, r1, r3	@ 000556a6 c918
.org 0x556a8
	adds r2, r4, #0	@ 000556a8 221c
.org 0x556aa
	adds r2, #113	@ 000556aa 7132
.org 0x556ac
	ldrb r2, [r2, #0]	@ 000556ac 1278
.org 0x556ae
	lsls r2, r2, #24	@ 000556ae 1206
.org 0x556b0
	asrs r2, r2, #24	@ 000556b0 1216
.org 0x556b2
	ldr r1, [r1, #0]	@ 000556b2 0968
.org 0x556b4
	lsls r2, r2, #2	@ 000556b4 9200
.org 0x556b6
	adds r2, r2, r1	@ 000556b6 5218
.org 0x556b8
	ldr r1, [r2, #0]	@ 000556b8 1168
.org 0x556ba
	ldrb r2, [r1, #0]	@ 000556ba 0a78
.org 0x556bc
	lsls r1, r2, #1	@ 000556bc 5100
.org 0x556be
	adds r1, r1, r2	@ 000556be 8918
.org 0x556c0
	lsls r1, r1, #3	@ 000556c0 c900
.org 0x556c2
	ldr r2, [pc, #52]	@ 000556c2 0d4a
.org 0x556c4
	adds r1, r1, r2	@ 000556c4 8918
.org 0x556c6
	bl 0x5784	@ 000556c6 b0f75df8
.org 0x556ca
	adds r0, r4, #0	@ 000556ca 201c
.org 0x556cc
	adds r0, #115	@ 000556cc 7330
.org 0x556ce
	ldrb r0, [r0, #0]	@ 000556ce 0078
.org 0x556d0
	cmp r0, #3	@ 000556d0 0328
.org 0x556d2
	bne.n 0x556dc	@ 000556d2 03d1
.org 0x556d4
	movs r1, #0	@ 000556d4 0021
.org 0x556d6
	movs r0, #2	@ 000556d6 0220
.org 0x556d8
	strb r0, [r4, #14]	@ 000556d8 a073
.org 0x556da
	strb r1, [r4, #15]	@ 000556da e173
.org 0x556dc
	add sp, #8	@ 000556dc 02b0
.org 0x556de
	pop {r4}	@ 000556de 10bc
.org 0x556e0
	pop {r0}	@ 000556e0 01bc
.org 0x556e2
	bx r0	@ 000556e2 0047
