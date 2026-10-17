@ FUN_0807e598  entry 0x0807e598  size 108
.thumb
.org 0x7e598
FUN_0807e598:
	push {r4, r5, lr}	@ 0007e598 30b5
.org 0x7e59a
	adds r4, r0, #0	@ 0007e59a 041c
.org 0x7e59c
	ldrb r0, [r4, #15]	@ 0007e59c e07b
.org 0x7e59e
	cmp r0, #0	@ 0007e59e 0028
.org 0x7e5a0
	bne.n 0x7e5b0	@ 0007e5a0 06d1
.org 0x7e5a2
	adds r0, r4, #0	@ 0007e5a2 201c
.org 0x7e5a4
	movs r1, #3	@ 0007e5a4 0321
.org 0x7e5a6
	bl 0x7e8c8	@ 0007e5a6 00f08ff9
.org 0x7e5aa
	ldrb r0, [r4, #15]	@ 0007e5aa e07b
.org 0x7e5ac
	adds r0, #1	@ 0007e5ac 0130
.org 0x7e5ae
	strb r0, [r4, #15]	@ 0007e5ae e073
.org 0x7e5b0
	adds r5, r4, #0	@ 0007e5b0 251c
.org 0x7e5b2
	adds r5, #188	@ 0007e5b2 bc35
.org 0x7e5b4
	ldrb r0, [r5, #0]	@ 0007e5b4 2878
.org 0x7e5b6
	cmp r0, #0	@ 0007e5b6 0028
.org 0x7e5b8
	beq.n 0x7e5c0	@ 0007e5b8 02d0
.org 0x7e5ba
	adds r0, r4, #0	@ 0007e5ba 201c
.org 0x7e5bc
	bl 0x1cff0	@ 0007e5bc 9ef718fd
.org 0x7e5c0
	adds r0, r4, #0	@ 0007e5c0 201c
.org 0x7e5c2
	adds r0, #116	@ 0007e5c2 7430
.org 0x7e5c4
	ldr r3, [pc, #60]	@ 0007e5c4 0f4b
.org 0x7e5c6
	ldr r2, [pc, #64]	@ 0007e5c6 104a
.org 0x7e5c8
	ldrb r1, [r5, #0]	@ 0007e5c8 2978
.org 0x7e5ca
	lsls r1, r1, #1	@ 0007e5ca 4900
.org 0x7e5cc
	adds r1, r1, r2	@ 0007e5cc 8918
.org 0x7e5ce
	ldrh r2, [r1, #0]	@ 0007e5ce 0a88
.org 0x7e5d0
	lsls r2, r2, #2	@ 0007e5d0 9200
.org 0x7e5d2
	adds r2, r2, r3	@ 0007e5d2 d218
.org 0x7e5d4
	adds r1, r4, #0	@ 0007e5d4 211c
.org 0x7e5d6
	adds r1, #113	@ 0007e5d6 7131
.org 0x7e5d8
	ldrb r1, [r1, #0]	@ 0007e5d8 0978
.org 0x7e5da
	lsls r1, r1, #24	@ 0007e5da 0906
.org 0x7e5dc
	asrs r1, r1, #24	@ 0007e5dc 0916
.org 0x7e5de
	ldr r2, [r2, #0]	@ 0007e5de 1268
.org 0x7e5e0
	lsls r1, r1, #2	@ 0007e5e0 8900
.org 0x7e5e2
	adds r1, r1, r2	@ 0007e5e2 8918
.org 0x7e5e4
	ldr r1, [r1, #0]	@ 0007e5e4 0968
.org 0x7e5e6
	bl 0x5784	@ 0007e5e6 87f7cdf8
.org 0x7e5ea
	adds r0, r4, #0	@ 0007e5ea 201c
.org 0x7e5ec
	adds r0, #115	@ 0007e5ec 7330
.org 0x7e5ee
	ldrb r0, [r0, #0]	@ 0007e5ee 0078
.org 0x7e5f0
	cmp r0, #3	@ 0007e5f0 0328
.org 0x7e5f2
	bne.n 0x7e5fe	@ 0007e5f2 04d1
.org 0x7e5f4
	ldrb r0, [r4, #14]	@ 0007e5f4 a07b
.org 0x7e5f6
	adds r0, #1	@ 0007e5f6 0130
.org 0x7e5f8
	movs r1, #0	@ 0007e5f8 0021
.org 0x7e5fa
	strb r0, [r4, #14]	@ 0007e5fa a073
.org 0x7e5fc
	strb r1, [r4, #15]	@ 0007e5fc e173
.org 0x7e5fe
	pop {r4, r5}	@ 0007e5fe 30bc
.org 0x7e600
	pop {r0}	@ 0007e600 01bc
.org 0x7e602
	bx r0	@ 0007e602 0047
