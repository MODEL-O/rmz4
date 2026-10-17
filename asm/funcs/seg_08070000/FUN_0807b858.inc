@ FUN_0807b858  entry 0x0807b858  size 108
.thumb
.org 0x7b858
FUN_0807b858:
	push {r4, r5, lr}	@ 0007b858 30b5
.org 0x7b85a
	adds r4, r0, #0	@ 0007b85a 041c
.org 0x7b85c
	ldrb r0, [r4, #15]	@ 0007b85c e07b
.org 0x7b85e
	cmp r0, #0	@ 0007b85e 0028
.org 0x7b860
	bne.n 0x7b870	@ 0007b860 06d1
.org 0x7b862
	adds r0, r4, #0	@ 0007b862 201c
.org 0x7b864
	movs r1, #1	@ 0007b864 0121
.org 0x7b866
	bl 0x7e8c8	@ 0007b866 03f02ff8
.org 0x7b86a
	ldrb r0, [r4, #15]	@ 0007b86a e07b
.org 0x7b86c
	adds r0, #1	@ 0007b86c 0130
.org 0x7b86e
	strb r0, [r4, #15]	@ 0007b86e e073
.org 0x7b870
	adds r5, r4, #0	@ 0007b870 251c
.org 0x7b872
	adds r5, #188	@ 0007b872 bc35
.org 0x7b874
	ldrb r0, [r5, #0]	@ 0007b874 2878
.org 0x7b876
	cmp r0, #0	@ 0007b876 0028
.org 0x7b878
	beq.n 0x7b880	@ 0007b878 02d0
.org 0x7b87a
	adds r0, r4, #0	@ 0007b87a 201c
.org 0x7b87c
	bl 0x1cff0	@ 0007b87c a1f7b8fb
.org 0x7b880
	adds r0, r4, #0	@ 0007b880 201c
.org 0x7b882
	adds r0, #116	@ 0007b882 7430
.org 0x7b884
	ldr r3, [pc, #60]	@ 0007b884 0f4b
.org 0x7b886
	ldr r2, [pc, #64]	@ 0007b886 104a
.org 0x7b888
	ldrb r1, [r5, #0]	@ 0007b888 2978
.org 0x7b88a
	lsls r1, r1, #1	@ 0007b88a 4900
.org 0x7b88c
	adds r1, r1, r2	@ 0007b88c 8918
.org 0x7b88e
	ldrh r2, [r1, #0]	@ 0007b88e 0a88
.org 0x7b890
	lsls r2, r2, #2	@ 0007b890 9200
.org 0x7b892
	adds r2, r2, r3	@ 0007b892 d218
.org 0x7b894
	adds r1, r4, #0	@ 0007b894 211c
.org 0x7b896
	adds r1, #113	@ 0007b896 7131
.org 0x7b898
	ldrb r1, [r1, #0]	@ 0007b898 0978
.org 0x7b89a
	lsls r1, r1, #24	@ 0007b89a 0906
.org 0x7b89c
	asrs r1, r1, #24	@ 0007b89c 0916
.org 0x7b89e
	ldr r2, [r2, #0]	@ 0007b89e 1268
.org 0x7b8a0
	lsls r1, r1, #2	@ 0007b8a0 8900
.org 0x7b8a2
	adds r1, r1, r2	@ 0007b8a2 8918
.org 0x7b8a4
	ldr r1, [r1, #0]	@ 0007b8a4 0968
.org 0x7b8a6
	bl 0x5784	@ 0007b8a6 89f76dff
.org 0x7b8aa
	ldr r0, [pc, #32]	@ 0007b8aa 0848
.org 0x7b8ac
	ldrb r0, [r0, #18]	@ 0007b8ac 807c
.org 0x7b8ae
	movs r1, #1	@ 0007b8ae 0121
.org 0x7b8b0
	ands r1, r0	@ 0007b8b0 0140
.org 0x7b8b2
	cmp r1, #0	@ 0007b8b2 0029
.org 0x7b8b4
	bne.n 0x7b8be	@ 0007b8b4 03d1
.org 0x7b8b6
	ldrb r0, [r4, #14]	@ 0007b8b6 a07b
.org 0x7b8b8
	adds r0, #1	@ 0007b8b8 0130
.org 0x7b8ba
	strb r0, [r4, #14]	@ 0007b8ba a073
.org 0x7b8bc
	strb r1, [r4, #15]	@ 0007b8bc e173
.org 0x7b8be
	pop {r4, r5}	@ 0007b8be 30bc
.org 0x7b8c0
	pop {r0}	@ 0007b8c0 01bc
.org 0x7b8c2
	bx r0	@ 0007b8c2 0047
