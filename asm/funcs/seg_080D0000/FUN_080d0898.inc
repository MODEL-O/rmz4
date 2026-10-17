@ FUN_080d0898  entry 0x080d0898  size 176
.thumb
.org 0xd0898
FUN_080d0898:
	push {r4, lr}	@ 000d0898 10b5
.org 0xd089a
	adds r4, r0, #0	@ 000d089a 041c
.org 0xd089c
	ldr r1, [pc, #76]	@ 000d089c 1349
.org 0xd089e
	ldrb r0, [r4, #16]	@ 000d089e 207c
.org 0xd08a0
	lsls r0, r0, #2	@ 000d08a0 8000
.org 0xd08a2
	adds r0, r0, r1	@ 000d08a2 4018
.org 0xd08a4
	ldr r1, [r0, #0]	@ 000d08a4 0168
.org 0xd08a6
	lsls r1, r1, #8	@ 000d08a6 0902
.org 0xd08a8
	ldr r0, [r4, #84]	@ 000d08a8 606d
.org 0xd08aa
	adds r0, r0, r1	@ 000d08aa 4018
.org 0xd08ac
	ldr r1, [r4, #88]	@ 000d08ac a16d
.org 0xd08ae
	bl 0x7c7c	@ 000d08ae 37f7e5f9
.org 0xd08b2
	lsls r0, r0, #24	@ 000d08b2 0006
.org 0xd08b4
	lsrs r0, r0, #24	@ 000d08b4 000e
.org 0xd08b6
	cmp r0, #0	@ 000d08b6 0028
.org 0xd08b8
	beq.n 0xd08d0	@ 000d08b8 0ad0
.org 0xd08ba
	cmp r0, #15	@ 000d08ba 0f28
.org 0xd08bc
	beq.n 0xd08d0	@ 000d08bc 08d0
.org 0xd08be
	ldr r1, [pc, #48]	@ 000d08be 0c49
.org 0xd08c0
	ldrb r0, [r4, #9]	@ 000d08c0 607a
.org 0xd08c2
	lsls r0, r0, #2	@ 000d08c2 8000
.org 0xd08c4
	adds r0, r0, r1	@ 000d08c4 4018
.org 0xd08c6
	movs r1, #2	@ 000d08c6 0221
.org 0xd08c8
	str r1, [r4, #12]	@ 000d08c8 e160
.org 0xd08ca
	ldr r0, [r0, #0]	@ 000d08ca 0068
.org 0xd08cc
	ldr r0, [r0, #8]	@ 000d08cc 8068
.org 0xd08ce
	str r0, [r4, #20]	@ 000d08ce 6061
.org 0xd08d0
	adds r2, r4, #0	@ 000d08d0 221c
.org 0xd08d2
	adds r2, #181	@ 000d08d2 b532
.org 0xd08d4
	ldrb r0, [r2, #0]	@ 000d08d4 1078
.org 0xd08d6
	cmp r0, #0	@ 000d08d6 0028
.org 0xd08d8
	bne.n 0xd08f4	@ 000d08d8 0cd1
.org 0xd08da
	ldr r0, [r4, #84]	@ 000d08da 606d
.org 0xd08dc
	ldr r1, [r4, #92]	@ 000d08dc e16d
.org 0xd08de
	adds r0, r0, r1	@ 000d08de 4018
.org 0xd08e0
	str r0, [r4, #84]	@ 000d08e0 6065
.org 0xd08e2
	adds r0, r4, #0	@ 000d08e2 201c
.org 0xd08e4
	bl 0xd0984	@ 000d08e4 00f04ef8
.org 0xd08e8
	b.n 0xd0906	@ 000d08e8 0de0
.org 0xd08ea
	.byte 0x00	@ 000d08ea data
.org 0xd08eb
	.byte 0x00	@ 000d08eb data
.org 0xd08ec
	.byte 0x28,0x6f,0x86,0x08	@ 000d08ec data
.org 0xd08f0
	.byte 0xf4,0x49,0x86,0x08	@ 000d08f0 data
.org 0xd08f4
	ldrb r0, [r4, #18]	@ 000d08f4 a07c
.org 0xd08f6
	adds r1, r0, #0	@ 000d08f6 011c
.org 0xd08f8
	cmp r1, #0	@ 000d08f8 0029
.org 0xd08fa
	beq.n 0xd0900	@ 000d08fa 01d0
.org 0xd08fc
	subs r0, #1	@ 000d08fc 0138
.org 0xd08fe
	b.n 0xd0904	@ 000d08fe 01e0
.org 0xd0900
	strb r1, [r2, #0]	@ 000d0900 1170
.org 0xd0902
	movs r0, #1	@ 000d0902 0120
.org 0xd0904
	strb r0, [r4, #18]	@ 000d0904 a074
.org 0xd0906
	ldrb r0, [r4, #16]	@ 000d0906 207c
.org 0xd0908
	cmp r0, #0	@ 000d0908 0028
.org 0xd090a
	bne.n 0xd092c	@ 000d090a 0fd1
.org 0xd090c
	ldr r0, [pc, #16]	@ 000d090c 0448
.org 0xd090e
	ldr r1, [r0, #56]	@ 000d090e 816b
.org 0xd0910
	ldr r0, [pc, #16]	@ 000d0910 0448
.org 0xd0912
	adds r1, r1, r0	@ 000d0912 0918
.org 0xd0914
	ldr r0, [r4, #84]	@ 000d0914 606d
.org 0xd0916
	ldr r2, [pc, #16]	@ 000d0916 044a
.org 0xd0918
	adds r0, r0, r2	@ 000d0918 8018
.org 0xd091a
	cmp r1, r0	@ 000d091a 8142
.org 0xd091c
	bge.n 0xd0952	@ 000d091c 19da
.org 0xd091e
	b.n 0xd0940	@ 000d091e 0fe0
.org 0xd0920
	.byte 0xf8,0xe9,0x02,0x02	@ 000d0920 data
.org 0xd0924
	.byte 0xff,0x77,0x00,0x00	@ 000d0924 data
.org 0xd0928
	.byte 0x00,0xf0,0xff,0xff	@ 000d0928 data
.org 0xd092c
	ldr r0, [pc, #48]	@ 000d092c 0c48
.org 0xd092e
	ldr r1, [r0, #56]	@ 000d092e 816b
.org 0xd0930
	ldr r0, [pc, #48]	@ 000d0930 0c48
.org 0xd0932
	adds r1, r1, r0	@ 000d0932 0918
.org 0xd0934
	ldr r0, [r4, #84]	@ 000d0934 606d
.org 0xd0936
	movs r2, #128	@ 000d0936 8022
.org 0xd0938
	lsls r2, r2, #5	@ 000d0938 5201
.org 0xd093a
	adds r0, r0, r2	@ 000d093a 8018
.org 0xd093c
	cmp r1, r0	@ 000d093c 8142
.org 0xd093e
	ble.n 0xd0952	@ 000d093e 08dd
.org 0xd0940
	ldr r1, [pc, #36]	@ 000d0940 0949
.org 0xd0942
	ldrb r0, [r4, #9]	@ 000d0942 607a
.org 0xd0944
	lsls r0, r0, #2	@ 000d0944 8000
.org 0xd0946
	adds r0, r0, r1	@ 000d0946 4018
