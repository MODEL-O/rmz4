@ FUN_0806b8ac  entry 0x0806b8ac  size 114
.thumb
.org 0x6b8ac
FUN_0806b8ac:
	push {r4, lr}	@ 0006b8ac 10b5
.org 0x6b8ae
	adds r4, r0, #0	@ 0006b8ae 041c
.org 0x6b8b0
	ldrb r0, [r4, #14]	@ 0006b8b0 a07b
.org 0x6b8b2
	cmp r0, #0	@ 0006b8b2 0028
.org 0x6b8b4
	bne.n 0x6b8f6	@ 0006b8b4 1fd1
.org 0x6b8b6
	ldr r1, [pc, #28]	@ 0006b8b6 0749
.org 0x6b8b8
	adds r0, r4, #0	@ 0006b8b8 201c
.org 0x6b8ba
	bl 0x1cf00	@ 0006b8ba b1f721fb
.org 0x6b8be
	ldrb r1, [r4, #10]	@ 0006b8be a17a
.org 0x6b8c0
	movs r0, #16	@ 0006b8c0 1020
.org 0x6b8c2
	ands r0, r1	@ 0006b8c2 0840
.org 0x6b8c4
	cmp r0, #0	@ 0006b8c4 0028
.org 0x6b8c6
	beq.n 0x6b8d8	@ 0006b8c6 07d0
.org 0x6b8c8
	movs r0, #128	@ 0006b8c8 8020
.org 0x6b8ca
	lsls r0, r0, #2	@ 0006b8ca 8000
.org 0x6b8cc
	str r0, [r4, #92]	@ 0006b8cc e065
.org 0x6b8ce
	movs r0, #64	@ 0006b8ce 4020
.org 0x6b8d0
	b.n 0x6b8e0	@ 0006b8d0 06e0
.org 0x6b8d2
	.byte 0x00	@ 0006b8d2 data
.org 0x6b8d3
	.byte 0x00	@ 0006b8d3 data
.org 0x6b8d4
	.byte 0x0a,0xaa,0x00,0x00	@ 0006b8d4 data
.org 0x6b8d8
	ldr r0, [pc, #72]	@ 0006b8d8 1248
.org 0x6b8da
	str r0, [r4, #92]	@ 0006b8da e065
.org 0x6b8dc
	movs r0, #64	@ 0006b8dc 4020
.org 0x6b8de
	negs r0, r0	@ 0006b8de 4042
.org 0x6b8e0
	str r0, [r4, #100]	@ 0006b8e0 6066
.org 0x6b8e2
	adds r0, r4, #0	@ 0006b8e2 201c
.org 0x6b8e4
	adds r0, #116	@ 0006b8e4 7430
.org 0x6b8e6
	ldr r1, [pc, #64]	@ 0006b8e6 1049
.org 0x6b8e8
	bl 0x5784	@ 0006b8e8 99f74cff
.org 0x6b8ec
	movs r0, #0	@ 0006b8ec 0020
.org 0x6b8ee
	strb r0, [r4, #15]	@ 0006b8ee e073
.org 0x6b8f0
	ldrb r0, [r4, #14]	@ 0006b8f0 a07b
.org 0x6b8f2
	adds r0, #1	@ 0006b8f2 0130
.org 0x6b8f4
	strb r0, [r4, #14]	@ 0006b8f4 a073
.org 0x6b8f6
	adds r0, r4, #0	@ 0006b8f6 201c
.org 0x6b8f8
	bl 0x1cff0	@ 0006b8f8 b1f77afb
.org 0x6b8fc
	ldr r1, [r4, #92]	@ 0006b8fc e16d
.org 0x6b8fe
	cmp r1, #0	@ 0006b8fe 0029
.org 0x6b900
	beq.n 0x6b90e	@ 0006b900 05d0
.org 0x6b902
	ldr r0, [r4, #84]	@ 0006b902 606d
.org 0x6b904
	adds r0, r0, r1	@ 0006b904 4018
.org 0x6b906
	str r0, [r4, #84]	@ 0006b906 6065
.org 0x6b908
	ldr r0, [r4, #100]	@ 0006b908 606e
.org 0x6b90a
	subs r0, r1, r0	@ 0006b90a 081a
.org 0x6b90c
	str r0, [r4, #92]	@ 0006b90c e065
.org 0x6b90e
	adds r0, r4, #0	@ 0006b90e 201c
.org 0x6b910
	adds r0, #115	@ 0006b910 7330
.org 0x6b912
	ldrb r1, [r0, #0]	@ 0006b912 0178
.org 0x6b914
	cmp r1, #3	@ 0006b914 0329
.org 0x6b916
	bne.n 0x6b91e	@ 0006b916 02d1
.org 0x6b918
	movs r0, #0	@ 0006b918 0020
.org 0x6b91a
	strb r1, [r4, #13]	@ 0006b91a 6173
.org 0x6b91c
	strb r0, [r4, #14]	@ 0006b91c a073
