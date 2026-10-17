@ FUN_080de928  entry 0x080de928  size 92
.thumb
.org 0xde928
FUN_080de928:
	push {r4, lr}	@ 000de928 10b5
.org 0xde92a
	adds r4, r0, #0	@ 000de92a 041c
.org 0xde92c
	bl 0x1cff0	@ 000de92c 3ef760fb
.org 0xde930
	ldr r0, [r4, #88]	@ 000de930 a06d
.org 0xde932
	ldr r1, [r4, #96]	@ 000de932 216e
.org 0xde934
	adds r0, r0, r1	@ 000de934 4018
.org 0xde936
	str r0, [r4, #88]	@ 000de936 a065
.org 0xde938
	ldrb r0, [r4, #18]	@ 000de938 a07c
.org 0xde93a
	subs r1, r0, #1	@ 000de93a 411e
.org 0xde93c
	strb r1, [r4, #18]	@ 000de93c a174
.org 0xde93e
	lsls r0, r1, #24	@ 000de93e 0806
.org 0xde940
	cmp r0, #0	@ 000de940 0028
.org 0xde942
	bne.n 0xde964	@ 000de942 0fd1
.org 0xde944
	ldr r1, [pc, #24]	@ 000de944 0649
.org 0xde946
	ldrb r0, [r4, #9]	@ 000de946 607a
.org 0xde948
	lsls r0, r0, #2	@ 000de948 8000
.org 0xde94a
	adds r0, r0, r1	@ 000de94a 4018
.org 0xde94c
	movs r1, #2	@ 000de94c 0221
.org 0xde94e
	str r1, [r4, #12]	@ 000de94e e160
.org 0xde950
	ldr r0, [r0, #0]	@ 000de950 0068
.org 0xde952
	ldr r0, [r0, #8]	@ 000de952 8068
.org 0xde954
	str r0, [r4, #20]	@ 000de954 6061
.org 0xde956
	adds r0, r4, #0	@ 000de956 201c
.org 0xde958
	bl 0xde98c	@ 000de958 00f018f8
.org 0xde95c
	b.n 0xde984	@ 000de95c 12e0
.org 0xde95e
	.byte 0x00	@ 000de95e data
.org 0xde95f
	.byte 0x00	@ 000de95f data
.org 0xde960
	.byte 0x64,0x6f,0x86,0x08	@ 000de960 data
.org 0xde964
	lsls r0, r1, #24	@ 000de964 0806
.org 0xde966
	lsrs r0, r0, #24	@ 000de966 000e
.org 0xde968
	cmp r0, #31	@ 000de968 1f28
.org 0xde96a
	bhi.n 0xde984	@ 000de96a 0bd8
.org 0xde96c
	movs r0, #1	@ 000de96c 0120
.org 0xde96e
	ands r1, r0	@ 000de96e 0140
.org 0xde970
	cmp r1, #0	@ 000de970 0029
.org 0xde972
	beq.n 0xde97c	@ 000de972 03d0
.org 0xde974
	ldrb r1, [r4, #10]	@ 000de974 a17a
.org 0xde976
	movs r0, #254	@ 000de976 fe20
.org 0xde978
	ands r0, r1	@ 000de978 0840
.org 0xde97a
	b.n 0xde982	@ 000de97a 02e0
.org 0xde97c
	ldrb r0, [r4, #10]	@ 000de97c a07a
.org 0xde97e
	movs r1, #1	@ 000de97e 0121
.org 0xde980
	orrs r0, r1	@ 000de980 0843
.org 0xde982
	strb r0, [r4, #10]	@ 000de982 a072
