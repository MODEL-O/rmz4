@ FUN_08120940  entry 0x08120940  size 296
.thumb
.org 0x120940
FUN_08120940:
	push {r4, r5, r6, r7, lr}	@ 00120940 f0b5
.org 0x120942
	mov r7, r8	@ 00120942 4746
.org 0x120944
	push {r7}	@ 00120944 80b4
.org 0x120946
	adds r5, r0, #0	@ 00120946 051c
.org 0x120948
	bl 0x120cb0	@ 00120948 00f0b2f9
.org 0x12094c
	movs r4, #0	@ 0012094c 0024
.org 0x12094e
	ldr r7, [pc, #12]	@ 0012094e 034f
.org 0x120950
	ldr r0, [pc, #12]	@ 00120950 0348
.org 0x120952
	adds r0, r0, r7	@ 00120952 c019
.org 0x120954
	mov r8, r0	@ 00120954 8046
.org 0x120956
	ldr r6, [pc, #12]	@ 00120956 034e
.org 0x120958
	b.n 0x120988	@ 00120958 16e0
.org 0x12095a
	.byte 0x00	@ 0012095a data
.org 0x12095b
	.byte 0x00	@ 0012095b data
.org 0x12095c
	.byte 0xf8,0xcf,0x86,0x08	@ 0012095c data
.org 0x120960
	.byte 0xbe,0x03,0x00,0x00	@ 00120960 data
.org 0x120964
	.byte 0x5f,0x0e,0x01,0x09	@ 00120964 data
.org 0x120968
	ldrb r0, [r1, #0]	@ 00120968 0878
.org 0x12096a
	movs r1, #150	@ 0012096a 9621
.org 0x12096c
	lsls r1, r1, #2	@ 0012096c 8900
.org 0x12096e
	adds r0, r0, r1	@ 0012096e 4018
.org 0x120970
	lsls r0, r0, #1	@ 00120970 4000
.org 0x120972
	adds r0, r0, r7	@ 00120972 c019
.org 0x120974
	ldrh r0, [r0, #0]	@ 00120974 0088
.org 0x120976
	adds r0, r0, r6	@ 00120976 8019
.org 0x120978
	lsls r2, r4, #1	@ 00120978 6200
.org 0x12097a
	adds r2, #2	@ 0012097a 0232
.org 0x12097c
	movs r1, #2	@ 0012097c 0221
.org 0x12097e
	bl 0x10d85c	@ 0012097e ecf76dff
.org 0x120982
	adds r0, r4, #1	@ 00120982 601c
.org 0x120984
	lsls r0, r0, #24	@ 00120984 0006
.org 0x120986
	lsrs r4, r0, #24	@ 00120986 040e
.org 0x120988
	cmp r4, #6	@ 00120988 062c
.org 0x12098a
	bhi.n 0x1209aa	@ 0012098a 0ed8
.org 0x12098c
	ldr r2, [pc, #132]	@ 0012098c 214a
.org 0x12098e
	adds r0, r5, r2	@ 0012098e a818
.org 0x120990
	adds r1, r0, r4	@ 00120990 0119
.org 0x120992
	ldrb r0, [r1, #0]	@ 00120992 0878
.org 0x120994
	cmp r0, #255	@ 00120994 ff28
.org 0x120996
	bne.n 0x120968	@ 00120996 e7d1
.org 0x120998
	cmp r4, #0	@ 00120998 002c
.org 0x12099a
	bne.n 0x1209aa	@ 0012099a 06d1
.org 0x12099c
	mov r1, r8	@ 0012099c 4146
.org 0x12099e
	ldrh r0, [r1, #0]	@ 0012099e 0888
.org 0x1209a0
	adds r0, r0, r6	@ 001209a0 8019
.org 0x1209a2
	movs r1, #2	@ 001209a2 0221
.org 0x1209a4
	movs r2, #2	@ 001209a4 0222
.org 0x1209a6
	bl 0x10d85c	@ 001209a6 ecf759ff
.org 0x1209aa
	ldrb r0, [r5, #3]	@ 001209aa e878
.org 0x1209ac
	cmp r0, #1	@ 001209ac 0128
.org 0x1209ae
	bhi.n 0x120a28	@ 001209ae 3bd8
.org 0x1209b0
	movs r4, #0	@ 001209b0 0024
.org 0x1209b2
	movs r6, #0	@ 001209b2 0026
.org 0x1209b4
	ldr r5, [pc, #96]	@ 001209b4 184d
.org 0x1209b6
	movs r3, #7	@ 001209b6 0723
.org 0x1209b8
	movs r2, #1	@ 001209b8 0122
.org 0x1209ba
	adds r0, r4, #0	@ 001209ba 201c
.org 0x1209bc
	adds r0, #84	@ 001209bc 5430
.org 0x1209be
	asrs r1, r0, #3	@ 001209be c110
.org 0x1209c0
	adds r1, r1, r5	@ 001209c0 4919
.org 0x1209c2
	ldrb r1, [r1, #0]	@ 001209c2 0978
.org 0x1209c4
	ands r0, r3	@ 001209c4 1840
.org 0x1209c6
	asrs r1, r0	@ 001209c6 0141
.org 0x1209c8
	ands r1, r2	@ 001209c8 1140
.org 0x1209ca
	cmp r1, #0	@ 001209ca 0029
.org 0x1209cc
	beq.n 0x1209d4	@ 001209cc 02d0
.org 0x1209ce
	adds r0, r6, #1	@ 001209ce 701c
.org 0x1209d0
	lsls r0, r0, #24	@ 001209d0 0006
.org 0x1209d2
	lsrs r6, r0, #24	@ 001209d2 060e
.org 0x1209d4
	adds r0, r4, #1	@ 001209d4 601c
.org 0x1209d6
	lsls r0, r0, #24	@ 001209d6 0006
.org 0x1209d8
	lsrs r4, r0, #24	@ 001209d8 040e
.org 0x1209da
	cmp r4, #15	@ 001209da 0f2c
.org 0x1209dc
	bls.n 0x1209ba	@ 001209dc edd9
.org 0x1209de
	adds r0, r6, #0	@ 001209de 301c
.org 0x1209e0
	movs r1, #21	@ 001209e0 1521
.org 0x1209e2
	movs r2, #1	@ 001209e2 0122
.org 0x1209e4
	bl 0x118348	@ 001209e4 f7f7b0fc
.org 0x1209e8
	ldr r4, [pc, #48]	@ 001209e8 0c4c
.org 0x1209ea
	ldrh r0, [r4, #12]	@ 001209ea a089
.org 0x1209ec
	ldr r5, [pc, #48]	@ 001209ec 0c4d
.org 0x1209ee
	adds r0, r0, r5	@ 001209ee 4019
.org 0x1209f0
	movs r1, #22	@ 001209f0 1621
.org 0x1209f2
	movs r2, #1	@ 001209f2 0122
.org 0x1209f4
	bl 0x10d85c	@ 001209f4 ecf732ff
.org 0x1209f8
	movs r0, #16	@ 001209f8 1020
.org 0x1209fa
	movs r1, #24	@ 001209fa 1821
.org 0x1209fc
	movs r2, #1	@ 001209fc 0122
.org 0x1209fe
	bl 0x118348	@ 001209fe f7f7a3fc
.org 0x120a02
	ldr r2, [pc, #32]	@ 00120a02 084a
.org 0x120a04
	adds r4, r4, r2	@ 00120a04 a418
.org 0x120a06
	ldrh r0, [r4, #0]	@ 00120a06 2088
.org 0x120a08
	adds r0, r0, r5	@ 00120a08 4019
.org 0x120a0a
	movs r1, #17	@ 00120a0a 1121
.org 0x120a0c
	movs r2, #5	@ 00120a0c 0522
.org 0x120a0e
	bl 0x10d85c	@ 00120a0e ecf725ff
.org 0x120a12
	b.n 0x120a94	@ 00120a12 3fe0
.org 0x120a14
	.byte 0xd2,0x0d,0x00,0x00	@ 00120a14 data
.org 0x120a18
	.byte 0x70,0x0a,0x00,0x02	@ 00120a18 data
.org 0x120a1c
	.byte 0xf8,0xcf,0x86,0x08	@ 00120a1c data
.org 0x120a20
	.byte 0x5f,0x0e,0x01,0x09	@ 00120a20 data
.org 0x120a24
	.byte 0x76,0x05,0x00,0x00	@ 00120a24 data
.org 0x120a28
	ldr r0, [pc, #36]	@ 00120a28 0948
.org 0x120a2a
	adds r1, r5, r0	@ 00120a2a 2918
.org 0x120a2c
	ldr r2, [pc, #36]	@ 00120a2c 094a
.org 0x120a2e
	adds r0, r5, r2	@ 00120a2e a818
.org 0x120a30
	ldrb r1, [r1, #2]	@ 00120a30 8978
.org 0x120a32
	adds r0, r0, r1	@ 00120a32 4018
.org 0x120a34
	ldrb r6, [r0, #0]	@ 00120a34 0678
.org 0x120a36
	cmp r6, #255	@ 00120a36 ff2e
.org 0x120a38
	bne.n 0x120a64	@ 00120a38 14d1
.org 0x120a3a
	ldr r0, [pc, #28]	@ 00120a3a 0748
.org 0x120a3c
	ldr r1, [pc, #28]	@ 00120a3c 0749
.org 0x120a3e
	adds r0, r0, r1	@ 00120a3e 4018
.org 0x120a40
	ldrh r0, [r0, #0]	@ 00120a40 0088
.org 0x120a42
	ldr r1, [pc, #28]	@ 00120a42 0749
.org 0x120a44
	adds r0, r0, r1	@ 00120a44 4018
.org 0x120a46
	movs r1, #17	@ 00120a46 1121
.org 0x120a48
	movs r2, #1	@ 00120a48 0122
.org 0x120a4a
	bl 0x10d85c	@ 00120a4a ecf707ff
.org 0x120a4e
	b.n 0x120a94	@ 00120a4e 21e0
.org 0x120a50
	.byte 0xcc,0x0d,0x00,0x00	@ 00120a50 data
.org 0x120a54
	.byte 0xd2,0x0d,0x00,0x00	@ 00120a54 data
.org 0x120a58
	.byte 0xf8,0xcf,0x86,0x08	@ 00120a58 data
.org 0x120a5c
	.byte 0xbe,0x03,0x00,0x00	@ 00120a5c data
.org 0x120a60
	.byte 0x5f,0x0e,0x01,0x09	@ 00120a60 data
.org 0x120a64
	ldr r5, [pc, #56]	@ 00120a64 0e4d
.org 0x120a66
	movs r2, #150	@ 00120a66 9622
