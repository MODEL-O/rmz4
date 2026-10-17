@ FUN_08081908  entry 0x08081908  size 228
.thumb
.org 0x81908
FUN_08081908:
	push {r4, r5, r6, lr}	@ 00081908 70b5
.org 0x8190a
	sub sp, #40	@ 0008190a 8ab0
.org 0x8190c
	adds r6, r0, #0	@ 0008190c 061c
.org 0x8190e
	ldrb r0, [r6, #15]	@ 0008190e f07b
.org 0x81910
	cmp r0, #0	@ 00081910 0028
.org 0x81912
	bne.n 0x8197c	@ 00081912 33d1
.org 0x81914
	mov r1, sp	@ 00081914 6946
.org 0x81916
	ldr r0, [pc, #172]	@ 00081916 2b48
.org 0x81918
	ldmia r0!, {r2, r3, r4}	@ 00081918 1cc8
.org 0x8191a
	stmia r1!, {r2, r3, r4}	@ 0008191a 1cc1
.org 0x8191c
	ldr r0, [r0, #0]	@ 0008191c 0068
.org 0x8191e
	str r0, [r1, #0]	@ 0008191e 0860
.org 0x81920
	add r4, sp, #16	@ 00081920 04ac
.org 0x81922
	ldr r1, [pc, #164]	@ 00081922 2949
.org 0x81924
	adds r0, r4, #0	@ 00081924 201c
.org 0x81926
	movs r2, #16	@ 00081926 1022
.org 0x81928
	bl 0x129258	@ 00081928 a7f096fc
.org 0x8192c
	ldrb r2, [r6, #10]	@ 0008192c b27a
.org 0x8192e
	lsrs r2, r2, #4	@ 0008192e 1209
.org 0x81930
	movs r0, #1	@ 00081930 0120
.org 0x81932
	ands r2, r0	@ 00081932 0240
.org 0x81934
	adds r5, r6, #0	@ 00081934 351c
.org 0x81936
	adds r5, #180	@ 00081936 b435
.org 0x81938
	ldrb r0, [r5, #0]	@ 00081938 2878
.org 0x8193a
	lsls r0, r0, #2	@ 0008193a 8000
.org 0x8193c
	adds r4, r4, r0	@ 0008193c 2418
.org 0x8193e
	movs r0, #0	@ 0008193e 0020
.org 0x81940
	ldrsh r1, [r4, r0]	@ 00081940 215e
.org 0x81942
	ldr r0, [r6, #84]	@ 00081942 706d
.org 0x81944
	adds r0, r0, r1	@ 00081944 4018
.org 0x81946
	str r0, [sp, #32]	@ 00081946 0890
.org 0x81948
	ldrb r1, [r5, #0]	@ 00081948 2978
.org 0x8194a
	lsls r1, r1, #2	@ 0008194a 8900
.org 0x8194c
	mov r0, sp	@ 0008194c 6846
.org 0x8194e
	adds r0, #18	@ 0008194e 1230
.org 0x81950
	adds r0, r0, r1	@ 00081950 4018
.org 0x81952
	movs r1, #0	@ 00081952 0021
.org 0x81954
	ldrsh r0, [r0, r1]	@ 00081954 405e
.org 0x81956
	ldr r1, [r6, #88]	@ 00081956 b16d
.org 0x81958
	adds r1, r1, r0	@ 00081958 0918
.org 0x8195a
	add r0, sp, #32	@ 0008195a 08a8
.org 0x8195c
	str r1, [r0, #4]	@ 0008195c 4160
.org 0x8195e
	movs r1, #0	@ 0008195e 0021
.org 0x81960
	bl 0xa4584	@ 00081960 22f010fe
.org 0x81964
	ldrb r0, [r5, #0]	@ 00081964 2878
.org 0x81966
	lsls r0, r0, #2	@ 00081966 8000
.org 0x81968
	add r0, sp	@ 00081968 6844
.org 0x8196a
	ldrh r1, [r0, #0]	@ 0008196a 0188
.org 0x8196c
	adds r0, r6, #0	@ 0008196c 301c
.org 0x8196e
	bl 0x1cf00	@ 0008196e 9bf7c7fa
.org 0x81972
	movs r0, #32	@ 00081972 2020
.org 0x81974
	strb r0, [r6, #18]	@ 00081974 b074
.org 0x81976
	ldrb r0, [r6, #15]	@ 00081976 f07b
.org 0x81978
	adds r0, #1	@ 00081978 0130
.org 0x8197a
	strb r0, [r6, #15]	@ 0008197a f073
.org 0x8197c
	adds r0, r6, #0	@ 0008197c 301c
.org 0x8197e
	bl 0x1cff0	@ 0008197e 9bf737fb
.org 0x81982
	ldrb r0, [r6, #13]	@ 00081982 707b
.org 0x81984
	cmp r0, #0	@ 00081984 0028
.org 0x81986
	beq.n 0x819d4	@ 00081986 25d0
.org 0x81988
	adds r0, r6, #0	@ 00081988 301c
.org 0x8198a
	adds r0, #116	@ 0008198a 7430
.org 0x8198c
	ldr r4, [pc, #60]	@ 0008198c 0f4c
.org 0x8198e
	adds r1, r6, #0	@ 0008198e 311c
.org 0x81990
	adds r1, #181	@ 00081990 b531
.org 0x81992
	ldrb r3, [r1, #0]	@ 00081992 0b78
.org 0x81994
	lsls r3, r3, #2	@ 00081994 9b00
.org 0x81996
	ldrb r1, [r6, #30]	@ 00081996 b17f
.org 0x81998
	lsls r1, r1, #8	@ 00081998 0902
.org 0x8199a
	adds r2, r6, #0	@ 0008199a 321c
.org 0x8199c
	adds r2, #112	@ 0008199c 7032
.org 0x8199e
	ldrb r2, [r2, #0]	@ 0008199e 1278
.org 0x819a0
	orrs r1, r2	@ 000819a0 1143
.org 0x819a2
	ldr r2, [pc, #44]	@ 000819a2 0b4a
.org 0x819a4
	adds r1, r1, r2	@ 000819a4 8918
.org 0x819a6
	lsls r1, r1, #3	@ 000819a6 c900
.org 0x819a8
	adds r3, r3, r1	@ 000819a8 5b18
.org 0x819aa
	adds r3, r3, r4	@ 000819aa 1b19
.org 0x819ac
	adds r1, r6, #0	@ 000819ac 311c
.org 0x819ae
	adds r1, #113	@ 000819ae 7131
.org 0x819b0
	ldrb r1, [r1, #0]	@ 000819b0 0978
.org 0x819b2
	lsls r1, r1, #24	@ 000819b2 0906
.org 0x819b4
	asrs r1, r1, #24	@ 000819b4 0916
.org 0x819b6
	ldr r2, [r3, #0]	@ 000819b6 1a68
.org 0x819b8
	lsls r1, r1, #2	@ 000819b8 8900
.org 0x819ba
	adds r1, r1, r2	@ 000819ba 8918
.org 0x819bc
	ldr r1, [r1, #0]	@ 000819bc 0968
.org 0x819be
	bl 0x5784	@ 000819be 83f7e1fe
.org 0x819c2
	b.n 0x819de	@ 000819c2 0ce0
.org 0x819c4
	.byte 0xe4,0x9a,0x12,0x08	@ 000819c4 data
.org 0x819c8
	.byte 0xf4,0x9a,0x12,0x08	@ 000819c8 data
.org 0x819cc
	.byte 0x1c,0xe7,0x85,0x08	@ 000819cc data
.org 0x819d0
	.byte 0x00,0xe9,0xff,0xff	@ 000819d0 data
.org 0x819d4
	adds r0, r6, #0	@ 000819d4 301c
.org 0x819d6
	adds r0, #116	@ 000819d6 7430
.org 0x819d8
	ldr r1, [pc, #32]	@ 000819d8 0849
.org 0x819da
	bl 0x5784	@ 000819da 83f7d3fe
.org 0x819de
	ldrb r0, [r6, #18]	@ 000819de b07c
.org 0x819e0
	subs r0, #1	@ 000819e0 0138
.org 0x819e2
	strb r0, [r6, #18]	@ 000819e2 b074
.org 0x819e4
	lsls r0, r0, #24	@ 000819e4 0006
.org 0x819e6
	lsrs r1, r0, #24	@ 000819e6 010e
.org 0x819e8
	cmp r1, #0	@ 000819e8 0029
.org 0x819ea
	bne.n 0x819f4	@ 000819ea 03d1
