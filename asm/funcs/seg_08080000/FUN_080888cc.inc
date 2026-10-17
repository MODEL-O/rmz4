@ FUN_080888cc  entry 0x080888cc  size 204
.thumb
.org 0x888cc
FUN_080888cc:
	push {r4, r5, r6, lr}	@ 000888cc 70b5
.org 0x888ce
	sub sp, #8	@ 000888ce 82b0
.org 0x888d0
	adds r4, r0, #0	@ 000888d0 041c
.org 0x888d2
	ldrb r2, [r4, #10]	@ 000888d2 a27a
.org 0x888d4
	lsls r1, r2, #24	@ 000888d4 1106
.org 0x888d6
	lsrs r5, r1, #28	@ 000888d6 0d0f
.org 0x888d8
	movs r0, #1	@ 000888d8 0120
.org 0x888da
	ands r5, r0	@ 000888da 0540
.org 0x888dc
	lsrs r6, r1, #29	@ 000888dc 4e0f
.org 0x888de
	ands r6, r0	@ 000888de 0640
.org 0x888e0
	ldrb r0, [r4, #15]	@ 000888e0 e07b
.org 0x888e2
	cmp r0, #0	@ 000888e2 0028
.org 0x888e4
	bne.n 0x8893a	@ 000888e4 29d1
.org 0x888e6
	ldr r0, [r4, #84]	@ 000888e6 606d
.org 0x888e8
	str r0, [sp, #0]	@ 000888e8 0090
.org 0x888ea
	ldr r0, [r4, #88]	@ 000888ea a06d
.org 0x888ec
	str r0, [sp, #4]	@ 000888ec 0190
.org 0x888ee
	movs r0, #32	@ 000888ee 2020
.org 0x888f0
	ands r0, r2	@ 000888f0 1040
.org 0x888f2
	cmp r0, #0	@ 000888f2 0028
.org 0x888f4
	beq.n 0x888fc	@ 000888f4 02d0
.org 0x888f6
	adds r0, r5, #2	@ 000888f6 a81c
.org 0x888f8
	adds r2, r0, #0	@ 000888f8 021c
.org 0x888fa
	b.n 0x888fe	@ 000888fa 00e0
.org 0x888fc
	adds r2, r5, #0	@ 000888fc 2a1c
.org 0x888fe
	mov r0, sp	@ 000888fe 6846
.org 0x88900
	movs r1, #3	@ 00088900 0321
.org 0x88902
	bl 0xd83f8	@ 00088902 4ff079fd
.org 0x88906
	ldr r1, [pc, #24]	@ 00088906 0649
.org 0x88908
	adds r0, r4, #0	@ 00088908 201c
.org 0x8890a
	bl 0x1cf00	@ 0008890a 94f7f9fa
.org 0x8890e
	cmp r6, #0	@ 0008890e 002e
.org 0x88910
	beq.n 0x88924	@ 00088910 08d0
.org 0x88912
	lsls r0, r5, #1	@ 00088912 6800
.org 0x88914
	subs r0, #1	@ 00088914 0138
.org 0x88916
	lsls r0, r0, #6	@ 00088916 8001
.org 0x88918
	str r0, [r4, #92]	@ 00088918 e065
.org 0x8891a
	movs r0, #0	@ 0008891a 0020
.org 0x8891c
	b.n 0x8892e	@ 0008891c 07e0
.org 0x8891e
	.byte 0x00	@ 0008891e data
.org 0x8891f
	.byte 0x00	@ 0008891f data
.org 0x88920
	.byte 0x12,0x1d,0x00,0x00	@ 00088920 data
.org 0x88924
	lsls r0, r5, #1	@ 00088924 6800
.org 0x88926
	subs r0, #1	@ 00088926 0138
.org 0x88928
	lsls r0, r0, #6	@ 00088928 8001
.org 0x8892a
	str r0, [r4, #92]	@ 0008892a e065
.org 0x8892c
	ldr r0, [pc, #112]	@ 0008892c 1c48
.org 0x8892e
	str r0, [r4, #96]	@ 0008892e 2066
.org 0x88930
	movs r0, #255	@ 00088930 ff20
.org 0x88932
	strb r0, [r4, #18]	@ 00088932 a074
.org 0x88934
	ldrb r0, [r4, #15]	@ 00088934 e07b
.org 0x88936
	adds r0, #1	@ 00088936 0130
.org 0x88938
	strb r0, [r4, #15]	@ 00088938 e073
.org 0x8893a
	adds r0, r4, #0	@ 0008893a 201c
.org 0x8893c
	bl 0x1cff0	@ 0008893c 94f758fb
.org 0x88940
	ldr r0, [r4, #84]	@ 00088940 606d
.org 0x88942
	ldr r1, [r4, #92]	@ 00088942 e16d
.org 0x88944
	adds r0, r0, r1	@ 00088944 4018
.org 0x88946
	str r0, [r4, #84]	@ 00088946 6065
.org 0x88948
	ldr r0, [r4, #88]	@ 00088948 a06d
.org 0x8894a
	ldr r1, [r4, #96]	@ 0008894a 216e
.org 0x8894c
	adds r0, r0, r1	@ 0008894c 4018
.org 0x8894e
	str r0, [r4, #88]	@ 0008894e a065
.org 0x88950
	adds r1, #64	@ 00088950 4031
.org 0x88952
	str r1, [r4, #96]	@ 00088952 2166
.org 0x88954
	movs r0, #224	@ 00088954 e020
.org 0x88956
	lsls r0, r0, #3	@ 00088956 c000
.org 0x88958
	cmp r1, r0	@ 00088958 8142
.org 0x8895a
	ble.n 0x8895e	@ 0008895a 00dd
.org 0x8895c
	str r0, [r4, #96]	@ 0008895c 2066
.org 0x8895e
	ldr r0, [r4, #84]	@ 0008895e 606d
.org 0x88960
	str r0, [sp, #0]	@ 00088960 0090
.org 0x88962
	lsls r2, r6, #1	@ 00088962 7200
.org 0x88964
	adds r2, r2, r6	@ 00088964 9219
.org 0x88966
	lsls r2, r2, #10	@ 00088966 9202
.org 0x88968
	ldr r1, [r4, #88]	@ 00088968 a16d
.org 0x8896a
	adds r1, r1, r2	@ 0008896a 8918
.org 0x8896c
	str r1, [sp, #4]	@ 0008896c 0191
.org 0x8896e
	bl 0x7c7c	@ 0008896e 7ff785f9
.org 0x88972
	lsls r0, r0, #16	@ 00088972 0004
.org 0x88974
	cmp r0, #0	@ 00088974 0028
.org 0x88976
	bne.n 0x88984	@ 00088976 05d1
.org 0x88978
	ldrb r0, [r4, #18]	@ 00088978 a07c
.org 0x8897a
	subs r0, #1	@ 0008897a 0138
.org 0x8897c
	strb r0, [r4, #18]	@ 0008897c a074
.org 0x8897e
	lsls r0, r0, #24	@ 0008897e 0006
.org 0x88980
	cmp r0, #0	@ 00088980 0028
.org 0x88982
	bne.n 0x88996	@ 00088982 08d1
.org 0x88984
	movs r1, #0	@ 00088984 0021
.org 0x88986
	movs r0, #3	@ 00088986 0320
.org 0x88988
	strb r0, [r4, #14]	@ 00088988 a073
.org 0x8898a
	strb r1, [r4, #15]	@ 0008898a e173
.org 0x8898c
	ldr r0, [pc, #20]	@ 0008898c 0548
.org 0x8898e
	ldr r1, [r0, #12]	@ 0008898e c168
.org 0x88990
	adds r0, r4, #0	@ 00088990 201c
.org 0x88992
	bl 0x128f80	@ 00088992 a0f0f5fa
.org 0x88996
	add sp, #8	@ 00088996 02b0
