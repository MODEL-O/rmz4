@ FUN_0804385c  entry 0x0804385c  size 222
.thumb
.org 0x4385c
FUN_0804385c:
	push {r4, r5, lr}	@ 0004385c 30b5
.org 0x4385e
	adds r5, r0, #0	@ 0004385e 051c
.org 0x43860
	adds r4, r1, #0	@ 00043860 0c1c
.org 0x43862
	ldr r0, [pc, #64]	@ 00043862 1048
.org 0x43864
	ldr r0, [r0, #0]	@ 00043864 0068
.org 0x43866
	bl 0x5500	@ 00043866 c1f74bfe
.org 0x4386a
	adds r3, r0, #0	@ 0004386a 031c
.org 0x4386c
	cmp r3, #0	@ 0004386c 002b
.org 0x4386e
	beq.n 0x43950	@ 0004386e 6fd0
.org 0x43870
	adds r0, r5, #0	@ 00043870 281c
.org 0x43872
	adds r0, #248	@ 00043872 f830
.org 0x43874
	ldrb r0, [r0, #0]	@ 00043874 0078
.org 0x43876
	cmp r0, #2	@ 00043876 0228
.org 0x43878
	bne.n 0x438b4	@ 00043878 1cd1
.org 0x4387a
	ldr r1, [pc, #44]	@ 0004387a 0b49
.org 0x4387c
	movs r0, #17	@ 0004387c 1120
.org 0x4387e
	strb r0, [r3, #9]	@ 0004387e 5872
.org 0x43880
	ldr r0, [r1, #68]	@ 00043880 486c
.org 0x43882
	ldr r0, [r0, #0]	@ 00043882 0068
.org 0x43884
	str r0, [r3, #20]	@ 00043884 5861
.org 0x43886
	ldrb r1, [r3, #11]	@ 00043886 d97a
.org 0x43888
	movs r0, #191	@ 00043888 bf20
.org 0x4388a
	ands r0, r1	@ 0004388a 0840
.org 0x4388c
	strb r0, [r3, #11]	@ 0004388c d872
.org 0x4388e
	adds r1, r3, #0	@ 0004388e 191c
.org 0x43890
	adds r1, #37	@ 00043890 2531
.org 0x43892
	movs r0, #16	@ 00043892 1020
.org 0x43894
	strb r0, [r1, #0]	@ 00043894 0870
.org 0x43896
	ldr r0, [pc, #20]	@ 00043896 0548
.org 0x43898
	ldrh r0, [r0, #0]	@ 00043898 0088
.org 0x4389a
	strh r0, [r3, #32]	@ 0004389a 1884
.org 0x4389c
	ldr r0, [pc, #16]	@ 0004389c 0448
.org 0x4389e
	ldrb r0, [r0, #0]	@ 0004389e 0078
.org 0x438a0
	b.n 0x438da	@ 000438a0 1be0
.org 0x438a2
	.byte 0x00	@ 000438a2 data
.org 0x438a3
	.byte 0x00	@ 000438a3 data
.org 0x438a4
	.byte 0x88,0xed,0x02,0x02	@ 000438a4 data
.org 0x438a8
	.byte 0xf8,0x39,0x85,0x08	@ 000438a8 data
.org 0x438ac
	.byte 0xfc,0x36,0x85,0x08	@ 000438ac data
.org 0x438b0
	.byte 0x04,0x37,0x85,0x08	@ 000438b0 data
.org 0x438b4
	ldr r1, [pc, #68]	@ 000438b4 1149
.org 0x438b6
	movs r0, #17	@ 000438b6 1120
.org 0x438b8
	strb r0, [r3, #9]	@ 000438b8 5872
.org 0x438ba
	ldr r0, [r1, #68]	@ 000438ba 486c
.org 0x438bc
	ldr r0, [r0, #0]	@ 000438bc 0068
.org 0x438be
	str r0, [r3, #20]	@ 000438be 5861
.org 0x438c0
	ldrb r1, [r3, #11]	@ 000438c0 d97a
.org 0x438c2
	movs r0, #191	@ 000438c2 bf20
.org 0x438c4
	ands r0, r1	@ 000438c4 0840
.org 0x438c6
	strb r0, [r3, #11]	@ 000438c6 d872
.org 0x438c8
	adds r1, r3, #0	@ 000438c8 191c
.org 0x438ca
	adds r1, #37	@ 000438ca 2531
.org 0x438cc
	movs r0, #16	@ 000438cc 1020
.org 0x438ce
	strb r0, [r1, #0]	@ 000438ce 0870
.org 0x438d0
	ldr r0, [pc, #44]	@ 000438d0 0b48
.org 0x438d2
	ldrh r0, [r0, #2]	@ 000438d2 4088
.org 0x438d4
	strh r0, [r3, #32]	@ 000438d4 1884
.org 0x438d6
	ldr r0, [pc, #44]	@ 000438d6 0b48
.org 0x438d8
	ldrb r0, [r0, #1]	@ 000438d8 4078
.org 0x438da
	subs r1, #3	@ 000438da 0339
.org 0x438dc
	strb r0, [r1, #0]	@ 000438dc 0870
.org 0x438de
	str r4, [r3, #40]	@ 000438de 9c62
.org 0x438e0
	str r5, [r3, #44]	@ 000438e0 dd62
.org 0x438e2
	movs r0, #0	@ 000438e2 0020
.org 0x438e4
	strb r0, [r3, #16]	@ 000438e4 1874
.org 0x438e6
	strb r0, [r3, #17]	@ 000438e6 5874
.org 0x438e8
	ldrb r0, [r4, #10]	@ 000438e8 a07a
.org 0x438ea
	lsrs r2, r0, #4	@ 000438ea 0209
.org 0x438ec
	movs r0, #1	@ 000438ec 0120
.org 0x438ee
	ands r2, r0	@ 000438ee 0240
.org 0x438f0
	cmp r2, #0	@ 000438f0 002a
.org 0x438f2
	beq.n 0x43908	@ 000438f2 09d0
.org 0x438f4
	ldrb r0, [r3, #10]	@ 000438f4 987a
.org 0x438f6
	movs r1, #16	@ 000438f6 1021
.org 0x438f8
	orrs r0, r1	@ 000438f8 0843
.org 0x438fa
	b.n 0x4390e	@ 000438fa 08e0
.org 0x438fc
	.byte 0xf8,0x39,0x85,0x08	@ 000438fc data
.org 0x43900
	.byte 0xfc,0x36,0x85,0x08	@ 00043900 data
.org 0x43904
	.byte 0x04,0x37,0x85,0x08	@ 00043904 data
.org 0x43908
	ldrb r1, [r3, #10]	@ 00043908 997a
.org 0x4390a
	movs r0, #239	@ 0004390a ef20
.org 0x4390c
	ands r0, r1	@ 0004390c 0840
.org 0x4390e
	strb r0, [r3, #10]	@ 0004390e 9872
.org 0x43910
	adds r1, r2, #0	@ 00043910 111c
.org 0x43912
	adds r0, r3, #0	@ 00043912 181c
.org 0x43914
	adds r0, #76	@ 00043914 4c30
.org 0x43916
	strb r1, [r0, #0]	@ 00043916 0170
.org 0x43918
	movs r0, #74	@ 00043918 4a20
.org 0x4391a
	adds r0, r0, r3	@ 0004391a c018
.org 0x4391c
	mov ip, r0	@ 0004391c 8446
.org 0x4391e
	lsls r1, r1, #4	@ 0004391e 0901
.org 0x43920
	ldrb r2, [r0, #0]	@ 00043920 0278
.org 0x43922
	movs r0, #17	@ 00043922 1120
.org 0x43924
	negs r0, r0	@ 00043924 4042
.org 0x43926
	ands r0, r2	@ 00043926 1040
.org 0x43928
	orrs r0, r1	@ 00043928 0843
.org 0x4392a
	mov r1, ip	@ 0004392a 6146
.org 0x4392c
	strb r0, [r1, #0]	@ 0004392c 0870
.org 0x4392e
	ldrb r1, [r3, #10]	@ 0004392e 997a
.org 0x43930
	movs r0, #16	@ 00043930 1020
.org 0x43932
	ands r0, r1	@ 00043932 0840
.org 0x43934
	cmp r0, #0	@ 00043934 0028
.org 0x43936
	beq.n 0x43940	@ 00043936 03d0
.org 0x43938
	ldr r0, [r4, #84]	@ 00043938 606d
