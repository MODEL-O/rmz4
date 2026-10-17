@ FUN_08046048  entry 0x08046048  size 80
.thumb
.org 0x46048
FUN_08046048:
	push {r4, lr}	@ 00046048 10b5
.org 0x4604a
	adds r4, r0, #0	@ 0004604a 041c
.org 0x4604c
	ldrb r0, [r4, #13]	@ 0004604c 607b
.org 0x4604e
	cmp r0, #0	@ 0004604e 0028
.org 0x46050
	bne.n 0x46074	@ 00046050 10d1
.org 0x46052
	ldrb r0, [r4, #18]	@ 00046052 a07c
.org 0x46054
	adds r0, #1	@ 00046054 0130
.org 0x46056
	strb r0, [r4, #18]	@ 00046056 a074
.org 0x46058
	lsls r0, r0, #24	@ 00046058 0006
.org 0x4605a
	lsrs r0, r0, #24	@ 0004605a 000e
.org 0x4605c
	cmp r0, #4	@ 0004605c 0428
.org 0x4605e
	bls.n 0x46090	@ 0004605e 17d9
.org 0x46060
	ldr r1, [pc, #12]	@ 00046060 0349
.org 0x46062
	adds r0, r4, #0	@ 00046062 201c
.org 0x46064
	bl 0x1cf00	@ 00046064 d6f74cff
.org 0x46068
	ldrb r0, [r4, #13]	@ 00046068 607b
.org 0x4606a
	adds r0, #1	@ 0004606a 0130
.org 0x4606c
	strb r0, [r4, #13]	@ 0004606c 6073
.org 0x4606e
	b.n 0x46090	@ 0004606e 0fe0
.org 0x46070
	.byte 0x0e,0x84,0x00,0x00	@ 00046070 data
.org 0x46074
	adds r0, r4, #0	@ 00046074 201c
.org 0x46076
	adds r0, #115	@ 00046076 7330
.org 0x46078
	ldrb r0, [r0, #0]	@ 00046078 0078
.org 0x4607a
	cmp r0, #3	@ 0004607a 0328
.org 0x4607c
	bne.n 0x46090	@ 0004607c 08d1
.org 0x4607e
	ldr r1, [pc, #28]	@ 0004607e 0749
.org 0x46080
	ldrb r0, [r4, #9]	@ 00046080 607a
.org 0x46082
	lsls r0, r0, #2	@ 00046082 8000
.org 0x46084
	adds r0, r0, r1	@ 00046084 4018
.org 0x46086
	movs r1, #2	@ 00046086 0221
.org 0x46088
	str r1, [r4, #12]	@ 00046088 e160
.org 0x4608a
	ldr r0, [r0, #0]	@ 0004608a 0068
.org 0x4608c
	ldr r0, [r0, #8]	@ 0004608c 8068
.org 0x4608e
	str r0, [r4, #20]	@ 0004608e 6061
.org 0x46090
	adds r0, r4, #0	@ 00046090 201c
.org 0x46092
	bl 0x1cff0	@ 00046092 d6f7adff
.org 0x46096
	pop {r4}	@ 00046096 10bc
