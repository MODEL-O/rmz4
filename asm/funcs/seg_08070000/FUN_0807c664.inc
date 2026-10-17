@ FUN_0807c664  entry 0x0807c664  size 114
.thumb
.org 0x7c664
FUN_0807c664:
	push {r4, r5, lr}	@ 0007c664 30b5
.org 0x7c666
	adds r4, r0, #0	@ 0007c666 041c
.org 0x7c668
	ldrb r0, [r4, #15]	@ 0007c668 e07b
.org 0x7c66a
	cmp r0, #0	@ 0007c66a 0028
.org 0x7c66c
	bne.n 0x7c680	@ 0007c66c 08d1
.org 0x7c66e
	adds r0, r4, #0	@ 0007c66e 201c
.org 0x7c670
	movs r1, #0	@ 0007c670 0021
.org 0x7c672
	bl 0x7e8c8	@ 0007c672 02f029f9
.org 0x7c676
	movs r0, #48	@ 0007c676 3020
.org 0x7c678
	strb r0, [r4, #18]	@ 0007c678 a074
.org 0x7c67a
	ldrb r0, [r4, #15]	@ 0007c67a e07b
.org 0x7c67c
	adds r0, #1	@ 0007c67c 0130
.org 0x7c67e
	strb r0, [r4, #15]	@ 0007c67e e073
.org 0x7c680
	adds r5, r4, #0	@ 0007c680 251c
.org 0x7c682
	adds r5, #188	@ 0007c682 bc35
.org 0x7c684
	ldrb r0, [r5, #0]	@ 0007c684 2878
.org 0x7c686
	cmp r0, #0	@ 0007c686 0028
.org 0x7c688
	beq.n 0x7c690	@ 0007c688 02d0
.org 0x7c68a
	adds r0, r4, #0	@ 0007c68a 201c
.org 0x7c68c
	bl 0x1cff0	@ 0007c68c a0f7b0fc
.org 0x7c690
	adds r0, r4, #0	@ 0007c690 201c
.org 0x7c692
	adds r0, #116	@ 0007c692 7430
.org 0x7c694
	ldr r3, [pc, #64]	@ 0007c694 104b
.org 0x7c696
	ldr r2, [pc, #68]	@ 0007c696 114a
.org 0x7c698
	ldrb r1, [r5, #0]	@ 0007c698 2978
.org 0x7c69a
	lsls r1, r1, #1	@ 0007c69a 4900
.org 0x7c69c
	adds r1, r1, r2	@ 0007c69c 8918
.org 0x7c69e
	ldrh r2, [r1, #0]	@ 0007c69e 0a88
.org 0x7c6a0
	lsls r2, r2, #2	@ 0007c6a0 9200
.org 0x7c6a2
	adds r2, r2, r3	@ 0007c6a2 d218
.org 0x7c6a4
	adds r1, r4, #0	@ 0007c6a4 211c
.org 0x7c6a6
	adds r1, #113	@ 0007c6a6 7131
.org 0x7c6a8
	ldrb r1, [r1, #0]	@ 0007c6a8 0978
.org 0x7c6aa
	lsls r1, r1, #24	@ 0007c6aa 0906
.org 0x7c6ac
	asrs r1, r1, #24	@ 0007c6ac 0916
.org 0x7c6ae
	ldr r2, [r2, #0]	@ 0007c6ae 1268
.org 0x7c6b0
	lsls r1, r1, #2	@ 0007c6b0 8900
.org 0x7c6b2
	adds r1, r1, r2	@ 0007c6b2 8918
.org 0x7c6b4
	ldr r1, [r1, #0]	@ 0007c6b4 0968
.org 0x7c6b6
	bl 0x5784	@ 0007c6b6 89f765f8
.org 0x7c6ba
	ldrb r0, [r4, #18]	@ 0007c6ba a07c
.org 0x7c6bc
	subs r0, #1	@ 0007c6bc 0138
.org 0x7c6be
	strb r0, [r4, #18]	@ 0007c6be a074
.org 0x7c6c0
	lsls r0, r0, #24	@ 0007c6c0 0006
.org 0x7c6c2
	lsrs r1, r0, #24	@ 0007c6c2 010e
.org 0x7c6c4
	cmp r1, #0	@ 0007c6c4 0029
.org 0x7c6c6
	bne.n 0x7c6d0	@ 0007c6c6 03d1
.org 0x7c6c8
	ldrb r0, [r4, #14]	@ 0007c6c8 a07b
.org 0x7c6ca
	adds r0, #1	@ 0007c6ca 0130
.org 0x7c6cc
	strb r0, [r4, #14]	@ 0007c6cc a073
.org 0x7c6ce
	strb r1, [r4, #15]	@ 0007c6ce e173
.org 0x7c6d0
	pop {r4, r5}	@ 0007c6d0 30bc
.org 0x7c6d2
	pop {r0}	@ 0007c6d2 01bc
.org 0x7c6d4
	bx r0	@ 0007c6d4 0047
