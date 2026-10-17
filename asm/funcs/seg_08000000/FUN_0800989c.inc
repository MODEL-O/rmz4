@ FUN_0800989c  entry 0x0800989c  size 178
.thumb
.org 0x989c
FUN_0800989c:
	push {r4, r5, r6, r7, lr}	@ 0000989c f0b5
.org 0x989e
	mov r7, sl	@ 0000989e 5746
.org 0x98a0
	mov r6, r9	@ 000098a0 4e46
.org 0x98a2
	mov r5, r8	@ 000098a2 4546
.org 0x98a4
	push {r5, r6, r7}	@ 000098a4 e0b4
.org 0x98a6
	sub sp, #4	@ 000098a6 81b0
.org 0x98a8
	adds r7, r0, #0	@ 000098a8 071c
.org 0x98aa
	str r1, [sp, #0]	@ 000098aa 0091
.org 0x98ac
	adds r5, r2, #0	@ 000098ac 151c
.org 0x98ae
	cmp r5, r7	@ 000098ae bd42
.org 0x98b0
	ble.n 0x98ba	@ 000098b0 03dd
.org 0x98b2
	adds r0, r5, #0	@ 000098b2 281c
.org 0x98b4
	bl 0x95e8	@ 000098b4 fff798fe
.org 0x98b8
	b.n 0x993e	@ 000098b8 41e0
.org 0x98ba
	subs r0, r7, r5	@ 000098ba 781b
.org 0x98bc
	asrs r0, r0, #1	@ 000098bc 4010
.org 0x98be
	mov sl, r0	@ 000098be 8246
.org 0x98c0
	subs r7, r7, r0	@ 000098c0 3f1a
.org 0x98c2
	ldr r0, [pc, #140]	@ 000098c2 2348
.org 0x98c4
	movs r2, #233	@ 000098c4 e922
.org 0x98c6
	lsls r2, r2, #1	@ 000098c6 5200
.org 0x98c8
	adds r1, r0, r2	@ 000098c8 8118
.org 0x98ca
	ldrb r1, [r1, #0]	@ 000098ca 0978
.org 0x98cc
	cmp r1, #0	@ 000098cc 0029
.org 0x98ce
	beq.n 0x993c	@ 000098ce 35d0
.org 0x98d0
	movs r3, #238	@ 000098d0 ee23
.org 0x98d2
	lsls r3, r3, #1	@ 000098d2 5b00
.org 0x98d4
	adds r3, r3, r0	@ 000098d4 1b18
.org 0x98d6
	mov r9, r3	@ 000098d6 9946
.org 0x98d8
	adds r2, #14	@ 000098d8 0e32
.org 0x98da
	adds r2, r2, r0	@ 000098da 1218
.org 0x98dc
	mov r8, r2	@ 000098dc 9046
.org 0x98de
	mov ip, r0	@ 000098de 8446
.org 0x98e0
	adds r6, r1, #0	@ 000098e0 0e1c
.org 0x98e2
	movs r0, #237	@ 000098e2 ed20
.org 0x98e4
	lsls r0, r0, #1	@ 000098e4 4000
.org 0x98e6
	add r0, ip	@ 000098e6 6044
.org 0x98e8
	ldrh r0, [r0, #0]	@ 000098e8 0088
.org 0x98ea
	lsls r2, r0, #1	@ 000098ea 4200
.org 0x98ec
	mov r3, r8	@ 000098ec 4346
.org 0x98ee
	ldr r1, [r3, #0]	@ 000098ee 1968
.org 0x98f0
	ldr r3, [sp, #0]	@ 000098f0 009b
.org 0x98f2
	subs r1, r3, r1	@ 000098f2 591a
.org 0x98f4
	adds r1, r1, r0	@ 000098f4 0918
.org 0x98f6
	cmp r2, r1	@ 000098f6 8a42
.org 0x98f8
	bls.n 0x992e	@ 000098f8 19d9
.org 0x98fa
	movs r0, #236	@ 000098fa ec20
.org 0x98fc
	lsls r0, r0, #1	@ 000098fc 4000
.org 0x98fe
	add r0, ip	@ 000098fe 6044
.org 0x9900
	ldrh r4, [r0, #0]	@ 00009900 0488
.org 0x9902
	mov r0, sl	@ 00009902 5046
.org 0x9904
	adds r1, r4, r0	@ 00009904 2118
.org 0x9906
	lsls r2, r1, #1	@ 00009906 4a00
.org 0x9908
	mov r0, r9	@ 00009908 4846
.org 0x990a
	ldr r3, [r0, #0]	@ 0000990a 0368
.org 0x990c
	subs r0, r7, r3	@ 0000990c f81a
.org 0x990e
	adds r0, r0, r1	@ 0000990e 4018
.org 0x9910
	cmp r2, r0	@ 00009910 8242
.org 0x9912
	bls.n 0x992e	@ 00009912 0cd9
.org 0x9914
	adds r2, r3, r4	@ 00009914 1a19
.org 0x9916
	cmp r5, r2	@ 00009916 9542
.org 0x9918
	bge.n 0x992e	@ 00009918 09da
.org 0x991a
	movs r0, #235	@ 0000991a eb20
.org 0x991c
	lsls r0, r0, #1	@ 0000991c 4000
.org 0x991e
	add r0, ip	@ 0000991e 6044
.org 0x9920
	ldrh r1, [r0, #0]	@ 00009920 0188
.org 0x9922
	movs r0, #132	@ 00009922 8420
.org 0x9924
	lsls r0, r0, #8	@ 00009924 0002
.org 0x9926
	ands r0, r1	@ 00009926 0840
.org 0x9928
	cmp r0, #0	@ 00009928 0028
.org 0x992a
	bne.n 0x992e	@ 0000992a 00d1
.org 0x992c
	adds r5, r2, #0	@ 0000992c 151c
.org 0x992e
	movs r2, #24	@ 0000992e 1822
.org 0x9930
	add r9, r2	@ 00009930 9144
.org 0x9932
	add r8, r2	@ 00009932 9044
.org 0x9934
	add ip, r2	@ 00009934 9444
.org 0x9936
	subs r6, #1	@ 00009936 013e
.org 0x9938
	cmp r6, #0	@ 00009938 002e
.org 0x993a
	bne.n 0x98e2	@ 0000993a d2d1
.org 0x993c
	adds r0, r5, #0	@ 0000993c 281c
.org 0x993e
	add sp, #4	@ 0000993e 01b0
.org 0x9940
	pop {r3, r4, r5}	@ 00009940 38bc
.org 0x9942
	mov r8, r3	@ 00009942 9846
.org 0x9944
	mov r9, r4	@ 00009944 a146
.org 0x9946
	mov sl, r5	@ 00009946 aa46
.org 0x9948
	pop {r4, r5, r6, r7}	@ 00009948 f0bc
.org 0x994a
	pop {r1}	@ 0000994a 02bc
.org 0x994c
	bx r1	@ 0000994c 0847
