@ FUN_08089690  entry 0x08089690  size 194
.thumb
.org 0x89690
FUN_08089690:
	push {r4, r5, lr}	@ 00089690 30b5
.org 0x89692
	adds r5, r0, #0	@ 00089692 051c
.org 0x89694
	ldrb r0, [r5, #14]	@ 00089694 a87b
.org 0x89696
	cmp r0, #0	@ 00089696 0028
.org 0x89698
	beq.n 0x896a0	@ 00089698 02d0
.org 0x8969a
	cmp r0, #1	@ 0008969a 0128
.org 0x8969c
	beq.n 0x896d6	@ 0008969c 1bd0
.org 0x8969e
	b.n 0x89760	@ 0008969e 5fe0
.org 0x896a0
	adds r4, r5, #0	@ 000896a0 2c1c
.org 0x896a2
	adds r4, #192	@ 000896a2 c034
.org 0x896a4
	ldr r0, [pc, #96]	@ 000896a4 1848
.org 0x896a6
	adds r1, r0, #0	@ 000896a6 011c
.org 0x896a8
	ldrb r0, [r4, #0]	@ 000896a8 2078
.org 0x896aa
	adds r1, r1, r0	@ 000896aa 0918
.org 0x896ac
	adds r0, r5, #0	@ 000896ac 281c
.org 0x896ae
	bl 0x1cf00	@ 000896ae 93f727fc
.org 0x896b2
	adds r0, r5, #0	@ 000896b2 281c
.org 0x896b4
	adds r0, #116	@ 000896b4 7430
.org 0x896b6
	ldr r2, [pc, #84]	@ 000896b6 154a
.org 0x896b8
	ldrb r1, [r4, #0]	@ 000896b8 2178
.org 0x896ba
	adds r1, r1, r2	@ 000896ba 8918
.org 0x896bc
	ldrb r2, [r1, #0]	@ 000896bc 0a78
.org 0x896be
	lsls r1, r2, #1	@ 000896be 5100
.org 0x896c0
	adds r1, r1, r2	@ 000896c0 8918
.org 0x896c2
	lsls r1, r1, #3	@ 000896c2 c900
.org 0x896c4
	ldr r2, [pc, #72]	@ 000896c4 124a
.org 0x896c6
	adds r1, r1, r2	@ 000896c6 8918
.org 0x896c8
	bl 0x5784	@ 000896c8 7cf75cf8
.org 0x896cc
	movs r0, #128	@ 000896cc 8020
.org 0x896ce
	strb r0, [r5, #18]	@ 000896ce a874
.org 0x896d0
	ldrb r0, [r5, #14]	@ 000896d0 a87b
.org 0x896d2
	adds r0, #1	@ 000896d2 0130
.org 0x896d4
	strb r0, [r5, #14]	@ 000896d4 a873
.org 0x896d6
	ldrb r0, [r5, #18]	@ 000896d6 a87c
.org 0x896d8
	movs r1, #6	@ 000896d8 0621
.org 0x896da
	bl 0x129198	@ 000896da 9ff05dfd
.org 0x896de
	lsls r0, r0, #24	@ 000896de 0006
.org 0x896e0
	cmp r0, #0	@ 000896e0 0028
.org 0x896e2
	bne.n 0x89730	@ 000896e2 25d1
.org 0x896e4
	ldr r0, [pc, #44]	@ 000896e4 0b48
.org 0x896e6
	ldr r1, [pc, #48]	@ 000896e6 0c49
.org 0x896e8
	adds r0, r0, r1	@ 000896e8 4018
.org 0x896ea
	ldrb r0, [r0, #0]	@ 000896ea 0078
.org 0x896ec
	movs r3, #15	@ 000896ec 0f23
.org 0x896ee
	ands r3, r0	@ 000896ee 0340
.org 0x896f0
	cmp r3, #1	@ 000896f0 012b
.org 0x896f2
	bne.n 0x8971c	@ 000896f2 13d1
.org 0x896f4
	adds r1, r5, #0	@ 000896f4 291c
.org 0x896f6
	adds r1, #84	@ 000896f6 5431
.org 0x896f8
	ldrb r2, [r5, #10]	@ 000896f8 aa7a
.org 0x896fa
	lsrs r2, r2, #4	@ 000896fa 1209
.org 0x896fc
	ands r2, r3	@ 000896fc 1a40
.org 0x896fe
	adds r0, r5, #0	@ 000896fe 281c
.org 0x89700
	movs r3, #1	@ 00089700 0123
.org 0x89702
	bl 0xbe240	@ 00089702 34f09dfd
.org 0x89706
	b.n 0x89730	@ 00089706 13e0
.org 0x89708
	.byte 0x06,0x1f,0x00,0x00	@ 00089708 data
.org 0x8970c
	.byte 0xac,0xf2,0x85,0x08	@ 0008970c data
.org 0x89710
	.byte 0x44,0xf1,0x85,0x08	@ 00089710 data
.org 0x89714
	.byte 0xb0,0x0a,0x00,0x02	@ 00089714 data
.org 0x89718
	.byte 0x10,0xc0,0x02,0x00	@ 00089718 data
.org 0x8971c
	adds r1, r5, #0	@ 0008971c 291c
.org 0x8971e
	adds r1, #84	@ 0008971e 5431
.org 0x89720
	ldrb r2, [r5, #10]	@ 00089720 aa7a
.org 0x89722
	lsrs r2, r2, #4	@ 00089722 1209
.org 0x89724
	movs r0, #1	@ 00089724 0120
.org 0x89726
	ands r2, r0	@ 00089726 0240
.org 0x89728
	adds r0, r5, #0	@ 00089728 281c
.org 0x8972a
	movs r3, #3	@ 0008972a 0323
.org 0x8972c
	bl 0xbe240	@ 0008972c 34f088fd
.org 0x89730
	ldrb r0, [r5, #18]	@ 00089730 a87c
.org 0x89732
	movs r1, #31	@ 00089732 1f21
.org 0x89734
	ands r0, r1	@ 00089734 0840
.org 0x89736
	cmp r0, #0	@ 00089736 0028
.org 0x89738
	bne.n 0x89742	@ 00089738 03d1
.org 0x8973a
	movs r0, #158	@ 0008973a 9e20
.org 0x8973c
	lsls r0, r0, #1	@ 0008973c 4000
.org 0x8973e
	bl 0x2b10	@ 0008973e 79f7e7f9
.org 0x89742
	adds r0, r5, #0	@ 00089742 281c
.org 0x89744
	bl 0x1cff0	@ 00089744 93f754fc
.org 0x89748
	ldrb r0, [r5, #18]	@ 00089748 a87c
.org 0x8974a
	cmp r0, #0	@ 0008974a 0028
.org 0x8974c
	beq.n 0x89758	@ 0008974c 04d0
.org 0x8974e
	subs r0, #1	@ 0008974e 0138
.org 0x89750
	strb r0, [r5, #18]	@ 00089750 a874
