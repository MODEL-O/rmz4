@ FUN_0804777c  entry 0x0804777c  size 204
.thumb
.org 0x4777c
FUN_0804777c:
	push {r4, r5, r6, lr}	@ 0004777c 70b5
.org 0x4777e
	adds r4, r0, #0	@ 0004777e 041c
.org 0x47780
	adds r6, r2, #0	@ 00047780 161c
.org 0x47782
	lsls r3, r3, #24	@ 00047782 1b06
.org 0x47784
	lsrs r5, r3, #24	@ 00047784 1d0e
.org 0x47786
	ldr r0, [pc, #64]	@ 00047786 1048
.org 0x47788
	ldr r0, [r0, #0]	@ 00047788 0068
.org 0x4778a
	bl 0x5500	@ 0004778a bdf7b9fe
.org 0x4778e
	mov ip, r0	@ 0004778e 8446
.org 0x47790
	cmp r0, #0	@ 00047790 0028
.org 0x47792
	beq.n 0x4785c	@ 00047792 63d0
.org 0x47794
	adds r0, r4, #0	@ 00047794 201c
.org 0x47796
	adds r0, #248	@ 00047796 f830
.org 0x47798
	ldrb r0, [r0, #0]	@ 00047798 0078
.org 0x4779a
	cmp r0, #2	@ 0004779a 0228
.org 0x4779c
	bne.n 0x477d8	@ 0004779c 1cd1
.org 0x4779e
	ldr r1, [pc, #44]	@ 0004779e 0b49
.org 0x477a0
	movs r0, #28	@ 000477a0 1c20
.org 0x477a2
	mov r2, ip	@ 000477a2 6246
.org 0x477a4
	strb r0, [r2, #9]	@ 000477a4 5072
.org 0x477a6
	ldr r0, [r1, #112]	@ 000477a6 086f
.org 0x477a8
	ldr r0, [r0, #0]	@ 000477a8 0068
.org 0x477aa
	str r0, [r2, #20]	@ 000477aa 5061
.org 0x477ac
	ldrb r1, [r2, #11]	@ 000477ac d17a
.org 0x477ae
	movs r0, #191	@ 000477ae bf20
.org 0x477b0
	ands r0, r1	@ 000477b0 0840
.org 0x477b2
	strb r0, [r2, #11]	@ 000477b2 d072
.org 0x477b4
	mov r1, ip	@ 000477b4 6146
.org 0x477b6
	adds r1, #37	@ 000477b6 2531
.org 0x477b8
	movs r0, #16	@ 000477b8 1020
.org 0x477ba
	strb r0, [r1, #0]	@ 000477ba 0870
.org 0x477bc
	ldr r0, [pc, #16]	@ 000477bc 0448
.org 0x477be
	ldrh r0, [r0, #0]	@ 000477be 0088
.org 0x477c0
	strh r0, [r2, #32]	@ 000477c0 1084
.org 0x477c2
	ldr r0, [pc, #16]	@ 000477c2 0448
.org 0x477c4
	ldrb r0, [r0, #0]	@ 000477c4 0078
.org 0x477c6
	b.n 0x47800	@ 000477c6 1be0
.org 0x477c8
	.byte 0x88,0xed,0x02,0x02	@ 000477c8 data
.org 0x477cc
	.byte 0xf8,0x39,0x85,0x08	@ 000477cc data
.org 0x477d0
	.byte 0xfc,0x36,0x85,0x08	@ 000477d0 data
.org 0x477d4
	.byte 0x04,0x37,0x85,0x08	@ 000477d4 data
.org 0x477d8
	ldr r1, [pc, #76]	@ 000477d8 1349
.org 0x477da
	movs r0, #28	@ 000477da 1c20
.org 0x477dc
	mov r2, ip	@ 000477dc 6246
.org 0x477de
	strb r0, [r2, #9]	@ 000477de 5072
.org 0x477e0
	ldr r0, [r1, #112]	@ 000477e0 086f
.org 0x477e2
	ldr r0, [r0, #0]	@ 000477e2 0068
.org 0x477e4
	str r0, [r2, #20]	@ 000477e4 5061
.org 0x477e6
	ldrb r1, [r2, #11]	@ 000477e6 d17a
.org 0x477e8
	movs r0, #191	@ 000477e8 bf20
.org 0x477ea
	ands r0, r1	@ 000477ea 0840
.org 0x477ec
	strb r0, [r2, #11]	@ 000477ec d072
.org 0x477ee
	mov r1, ip	@ 000477ee 6146
.org 0x477f0
	adds r1, #37	@ 000477f0 2531
.org 0x477f2
	movs r0, #16	@ 000477f2 1020
.org 0x477f4
	strb r0, [r1, #0]	@ 000477f4 0870
.org 0x477f6
	ldr r0, [pc, #52]	@ 000477f6 0d48
.org 0x477f8
	ldrh r0, [r0, #2]	@ 000477f8 4088
.org 0x477fa
	strh r0, [r2, #32]	@ 000477fa 1084
.org 0x477fc
	ldr r0, [pc, #48]	@ 000477fc 0c48
.org 0x477fe
	ldrb r0, [r0, #1]	@ 000477fe 4078
.org 0x47800
	subs r1, #3	@ 00047800 0339
.org 0x47802
	strb r0, [r1, #0]	@ 00047802 0870
.org 0x47804
	mov r0, ip	@ 00047804 6046
.org 0x47806
	str r4, [r0, #40]	@ 00047806 8462
.org 0x47808
	ldr r0, [r6, #0]	@ 00047808 3068
.org 0x4780a
	ldr r1, [r6, #4]	@ 0004780a 7168
.org 0x4780c
	mov r2, ip	@ 0004780c 6246
.org 0x4780e
	str r0, [r2, #84]	@ 0004780e 5065
.org 0x47810
	str r1, [r2, #88]	@ 00047810 9165
.org 0x47812
	movs r0, #1	@ 00047812 0120
.org 0x47814
	strb r0, [r2, #16]	@ 00047814 1074
.org 0x47816
	strb r5, [r2, #17]	@ 00047816 5574
.org 0x47818
	adds r3, r5, #0	@ 00047818 2b1c
.org 0x4781a
	cmp r3, #0	@ 0004781a 002b
.org 0x4781c
	beq.n 0x47834	@ 0004781c 0ad0
.org 0x4781e
	ldrb r0, [r2, #10]	@ 0004781e 907a
.org 0x47820
	movs r1, #16	@ 00047820 1021
.org 0x47822
	orrs r0, r1	@ 00047822 0843
.org 0x47824
	strb r0, [r2, #10]	@ 00047824 9072
.org 0x47826
	b.n 0x47840	@ 00047826 0be0
.org 0x47828
	.byte 0xf8,0x39,0x85,0x08	@ 00047828 data
.org 0x4782c
	.byte 0xfc,0x36,0x85,0x08	@ 0004782c data
.org 0x47830
	.byte 0x04,0x37,0x85,0x08	@ 00047830 data
.org 0x47834
	mov r0, ip	@ 00047834 6046
.org 0x47836
	ldrb r1, [r0, #10]	@ 00047836 817a
.org 0x47838
	movs r0, #239	@ 00047838 ef20
.org 0x4783a
	ands r0, r1	@ 0004783a 0840
.org 0x4783c
	mov r1, ip	@ 0004783c 6146
.org 0x4783e
	strb r0, [r1, #10]	@ 0004783e 8872
.org 0x47840
	movs r1, #1	@ 00047840 0121
.org 0x47842
	ands r1, r3	@ 00047842 1940
.org 0x47844
	mov r0, ip	@ 00047844 6046
.org 0x47846
	adds r0, #76	@ 00047846 4c30
