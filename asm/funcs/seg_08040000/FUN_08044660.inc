@ FUN_08044660  entry 0x08044660  size 140
.thumb
.org 0x44660
FUN_08044660:
	push {r4, r5, r6, lr}	@ 00044660 70b5
.org 0x44662
	adds r4, r0, #0	@ 00044662 041c
.org 0x44664
	lsls r1, r1, #24	@ 00044664 0906
.org 0x44666
	lsrs r6, r1, #24	@ 00044666 0e0e
.org 0x44668
	lsls r2, r2, #24	@ 00044668 1206
.org 0x4466a
	lsrs r5, r2, #24	@ 0004466a 150e
.org 0x4466c
	ldr r0, [pc, #60]	@ 0004466c 0f48
.org 0x4466e
	ldr r0, [r0, #0]	@ 0004466e 0068
.org 0x44670
	bl 0x5500	@ 00044670 c0f746ff
.org 0x44674
	adds r2, r0, #0	@ 00044674 021c
.org 0x44676
	cmp r2, #0	@ 00044676 002a
.org 0x44678
	beq.n 0x446f4	@ 00044678 3cd0
.org 0x4467a
	adds r0, r4, #0	@ 0004467a 201c
.org 0x4467c
	adds r0, #248	@ 0004467c f830
.org 0x4467e
	ldrb r0, [r0, #0]	@ 0004467e 0078
.org 0x44680
	cmp r0, #2	@ 00044680 0228
.org 0x44682
	bne.n 0x446bc	@ 00044682 1bd1
.org 0x44684
	ldr r1, [pc, #40]	@ 00044684 0a49
.org 0x44686
	movs r0, #21	@ 00044686 1520
.org 0x44688
	strb r0, [r2, #9]	@ 00044688 5072
.org 0x4468a
	ldr r0, [r1, #84]	@ 0004468a 486d
.org 0x4468c
	ldr r0, [r0, #0]	@ 0004468c 0068
.org 0x4468e
	str r0, [r2, #20]	@ 0004468e 5061
.org 0x44690
	ldrb r1, [r2, #11]	@ 00044690 d17a
.org 0x44692
	movs r0, #191	@ 00044692 bf20
.org 0x44694
	ands r0, r1	@ 00044694 0840
.org 0x44696
	strb r0, [r2, #11]	@ 00044696 d072
.org 0x44698
	adds r1, r2, #0	@ 00044698 111c
.org 0x4469a
	adds r1, #37	@ 0004469a 2531
.org 0x4469c
	movs r0, #16	@ 0004469c 1020
.org 0x4469e
	strb r0, [r1, #0]	@ 0004469e 0870
.org 0x446a0
	ldr r0, [pc, #16]	@ 000446a0 0448
.org 0x446a2
	ldrh r0, [r0, #0]	@ 000446a2 0088
.org 0x446a4
	strh r0, [r2, #32]	@ 000446a4 1084
.org 0x446a6
	ldr r0, [pc, #16]	@ 000446a6 0448
.org 0x446a8
	ldrb r0, [r0, #0]	@ 000446a8 0078
.org 0x446aa
	b.n 0x446e2	@ 000446aa 1ae0
.org 0x446ac
	.byte 0x88,0xed,0x02,0x02	@ 000446ac data
.org 0x446b0
	.byte 0xf8,0x39,0x85,0x08	@ 000446b0 data
.org 0x446b4
	.byte 0xfc,0x36,0x85,0x08	@ 000446b4 data
.org 0x446b8
	.byte 0x04,0x37,0x85,0x08	@ 000446b8 data
.org 0x446bc
	ldr r1, [pc, #60]	@ 000446bc 0f49
.org 0x446be
	movs r0, #21	@ 000446be 1520
.org 0x446c0
	strb r0, [r2, #9]	@ 000446c0 5072
.org 0x446c2
	ldr r0, [r1, #84]	@ 000446c2 486d
.org 0x446c4
	ldr r0, [r0, #0]	@ 000446c4 0068
.org 0x446c6
	str r0, [r2, #20]	@ 000446c6 5061
.org 0x446c8
	ldrb r1, [r2, #11]	@ 000446c8 d17a
.org 0x446ca
	movs r0, #191	@ 000446ca bf20
.org 0x446cc
	ands r0, r1	@ 000446cc 0840
.org 0x446ce
	strb r0, [r2, #11]	@ 000446ce d072
.org 0x446d0
	adds r1, r2, #0	@ 000446d0 111c
.org 0x446d2
	adds r1, #37	@ 000446d2 2531
.org 0x446d4
	movs r0, #16	@ 000446d4 1020
.org 0x446d6
	strb r0, [r1, #0]	@ 000446d6 0870
.org 0x446d8
	ldr r0, [pc, #36]	@ 000446d8 0948
.org 0x446da
	ldrh r0, [r0, #2]	@ 000446da 4088
.org 0x446dc
	strh r0, [r2, #32]	@ 000446dc 1084
.org 0x446de
	ldr r0, [pc, #36]	@ 000446de 0948
.org 0x446e0
	ldrb r0, [r0, #1]	@ 000446e0 4078
.org 0x446e2
	subs r1, #3	@ 000446e2 0339
.org 0x446e4
	strb r0, [r1, #0]	@ 000446e4 0870
.org 0x446e6
	str r4, [r2, #40]	@ 000446e6 9462
.org 0x446e8
	movs r0, #0	@ 000446e8 0020
.org 0x446ea
	strb r6, [r2, #16]	@ 000446ea 1674
