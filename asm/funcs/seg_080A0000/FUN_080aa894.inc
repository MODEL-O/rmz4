@ FUN_080aa894  entry 0x080aa894  size 172
.thumb
.org 0xaa894
FUN_080aa894:
	push {r4, lr}	@ 000aa894 10b5
.org 0xaa896
	adds r4, r0, #0	@ 000aa896 041c
.org 0xaa898
	ldrb r0, [r4, #14]	@ 000aa898 a07b
.org 0xaa89a
	cmp r0, #0	@ 000aa89a 0028
.org 0xaa89c
	bne.n 0xaa8cc	@ 000aa89c 16d1
.org 0xaa89e
	adds r0, r4, #0	@ 000aa89e 201c
.org 0xaa8a0
	adds r0, #116	@ 000aa8a0 7430
.org 0xaa8a2
	ldr r1, [pc, #144]	@ 000aa8a2 2449
.org 0xaa8a4
	bl 0x5784	@ 000aa8a4 5af76eff
.org 0xaa8a8
	ldr r1, [pc, #140]	@ 000aa8a8 2349
.org 0xaa8aa
	adds r0, r4, #0	@ 000aa8aa 201c
.org 0xaa8ac
	bl 0x1cf00	@ 000aa8ac 72f728fb
.org 0xaa8b0
	movs r0, #96	@ 000aa8b0 6020
.org 0xaa8b2
	strb r0, [r4, #19]	@ 000aa8b2 e074
.org 0xaa8b4
	ldr r1, [r4, #44]	@ 000aa8b4 e16a
.org 0xaa8b6
	cmp r1, #0	@ 000aa8b6 0029
.org 0xaa8b8
	beq.n 0xaa8c0	@ 000aa8b8 02d0
.org 0xaa8ba
	adds r1, #180	@ 000aa8ba b431
.org 0xaa8bc
	movs r0, #1	@ 000aa8bc 0120
.org 0xaa8be
	strb r0, [r1, #0]	@ 000aa8be 0870
.org 0xaa8c0
	ldr r0, [pc, #120]	@ 000aa8c0 1e48
.org 0xaa8c2
	bl 0x2b10	@ 000aa8c2 58f725f9
.org 0xaa8c6
	ldrb r0, [r4, #14]	@ 000aa8c6 a07b
.org 0xaa8c8
	adds r0, #1	@ 000aa8c8 0130
.org 0xaa8ca
	strb r0, [r4, #14]	@ 000aa8ca a073
.org 0xaa8cc
	ldrb r2, [r4, #14]	@ 000aa8cc a27b
.org 0xaa8ce
	cmp r2, #1	@ 000aa8ce 012a
.org 0xaa8d0
	bne.n 0xaa8ec	@ 000aa8d0 0cd1
.org 0xaa8d2
	ldrb r1, [r4, #19]	@ 000aa8d2 e17c
.org 0xaa8d4
	movs r0, #7	@ 000aa8d4 0720
.org 0xaa8d6
	ands r0, r1	@ 000aa8d6 0840
.org 0xaa8d8
	cmp r0, #0	@ 000aa8d8 0028
.org 0xaa8da
	bne.n 0xaa8ec	@ 000aa8da 07d1
.org 0xaa8dc
	adds r0, r4, #0	@ 000aa8dc 201c
.org 0xaa8de
	adds r0, #84	@ 000aa8de 5430
.org 0xaa8e0
	ldrb r1, [r4, #10]	@ 000aa8e0 a17a
.org 0xaa8e2
	lsrs r1, r1, #4	@ 000aa8e2 0909
.org 0xaa8e4
	ands r1, r2	@ 000aa8e4 1140
.org 0xaa8e6
	movs r2, #0	@ 000aa8e6 0022
.org 0xaa8e8
	bl 0xcc9e0	@ 000aa8e8 22f07af8
.org 0xaa8ec
	adds r0, r4, #0	@ 000aa8ec 201c
.org 0xaa8ee
	bl 0xaab30	@ 000aa8ee 00f01ff9
.org 0xaa8f2
	lsls r0, r0, #24	@ 000aa8f2 0006
.org 0xaa8f4
	cmp r0, #0	@ 000aa8f4 0028
.org 0xaa8f6
	bne.n 0xaa902	@ 000aa8f6 04d1
.org 0xaa8f8
	adds r0, r4, #0	@ 000aa8f8 201c
.org 0xaa8fa
	adds r0, #115	@ 000aa8fa 7330
.org 0xaa8fc
	ldrb r0, [r0, #0]	@ 000aa8fc 0078
.org 0xaa8fe
	cmp r0, #3	@ 000aa8fe 0328
.org 0xaa900
	bne.n 0xaa94c	@ 000aa900 24d1
.org 0xaa902
	ldrb r0, [r4, #14]	@ 000aa902 a07b
.org 0xaa904
	cmp r0, #1	@ 000aa904 0128
.org 0xaa906
	bne.n 0xaa944	@ 000aa906 1dd1
.org 0xaa908
	ldr r1, [pc, #52]	@ 000aa908 0d49
.org 0xaa90a
	adds r0, r4, #0	@ 000aa90a 201c
.org 0xaa90c
	bl 0x1cf00	@ 000aa90c 72f7f8fa
.org 0xaa910
	movs r0, #255	@ 000aa910 ff20
.org 0xaa912
	strb r0, [r4, #19]	@ 000aa912 e074
.org 0xaa914
	ldr r1, [r4, #44]	@ 000aa914 e16a
.org 0xaa916
	ldrb r0, [r1, #12]	@ 000aa916 087b
.org 0xaa918
	cmp r0, #1	@ 000aa918 0128
.org 0xaa91a
	bhi.n 0xaa920	@ 000aa91a 01d8
.org 0xaa91c
	movs r0, #0	@ 000aa91c 0020
.org 0xaa91e
	strb r0, [r1, #18]	@ 000aa91e 8874
.org 0xaa920
	movs r1, #0	@ 000aa920 0021
.org 0xaa922
	str r1, [r4, #44]	@ 000aa922 e162
.org 0xaa924
	adds r0, r4, #0	@ 000aa924 201c
.org 0xaa926
	adds r0, #180	@ 000aa926 b430
.org 0xaa928
	strb r1, [r0, #0]	@ 000aa928 0170
.org 0xaa92a
	ldrb r0, [r4, #14]	@ 000aa92a a07b
.org 0xaa92c
	adds r0, #1	@ 000aa92c 0130
.org 0xaa92e
	strb r0, [r4, #14]	@ 000aa92e a073
.org 0xaa930
	b.n 0xaa94c	@ 000aa930 0ce0
.org 0xaa932
	.byte 0x00	@ 000aa932 data
.org 0xaa933
	.byte 0x00	@ 000aa933 data
.org 0xaa934
	.byte 0x20,0x2b,0x86,0x08	@ 000aa934 data
.org 0xaa938
	.byte 0x06,0x94,0x00,0x00	@ 000aa938 data
.org 0xaa93c
	.byte 0x67,0x01,0x00,0x00	@ 000aa93c data
