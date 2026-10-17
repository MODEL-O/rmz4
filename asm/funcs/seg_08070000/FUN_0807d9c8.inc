@ FUN_0807d9c8  entry 0x0807d9c8  size 108
.thumb
.org 0x7d9c8
FUN_0807d9c8:
	push {r4, r5, lr}	@ 0007d9c8 30b5
.org 0x7d9ca
	adds r4, r0, #0	@ 0007d9ca 041c
.org 0x7d9cc
	ldrb r0, [r4, #15]	@ 0007d9cc e07b
.org 0x7d9ce
	cmp r0, #0	@ 0007d9ce 0028
.org 0x7d9d0
	bne.n 0x7d9e0	@ 0007d9d0 06d1
.org 0x7d9d2
	adds r0, r4, #0	@ 0007d9d2 201c
.org 0x7d9d4
	movs r1, #19	@ 0007d9d4 1321
.org 0x7d9d6
	bl 0x7e8c8	@ 0007d9d6 00f077ff
.org 0x7d9da
	ldrb r0, [r4, #15]	@ 0007d9da e07b
.org 0x7d9dc
	adds r0, #1	@ 0007d9dc 0130
.org 0x7d9de
	strb r0, [r4, #15]	@ 0007d9de e073
.org 0x7d9e0
	adds r5, r4, #0	@ 0007d9e0 251c
.org 0x7d9e2
	adds r5, #188	@ 0007d9e2 bc35
.org 0x7d9e4
	ldrb r0, [r5, #0]	@ 0007d9e4 2878
.org 0x7d9e6
	cmp r0, #0	@ 0007d9e6 0028
.org 0x7d9e8
	beq.n 0x7d9f0	@ 0007d9e8 02d0
.org 0x7d9ea
	adds r0, r4, #0	@ 0007d9ea 201c
.org 0x7d9ec
	bl 0x1cff0	@ 0007d9ec 9ff700fb
.org 0x7d9f0
	adds r0, r4, #0	@ 0007d9f0 201c
.org 0x7d9f2
	adds r0, #116	@ 0007d9f2 7430
.org 0x7d9f4
	ldr r3, [pc, #60]	@ 0007d9f4 0f4b
.org 0x7d9f6
	ldr r2, [pc, #64]	@ 0007d9f6 104a
.org 0x7d9f8
	ldrb r1, [r5, #0]	@ 0007d9f8 2978
.org 0x7d9fa
	lsls r1, r1, #1	@ 0007d9fa 4900
.org 0x7d9fc
	adds r1, r1, r2	@ 0007d9fc 8918
.org 0x7d9fe
	ldrh r2, [r1, #0]	@ 0007d9fe 0a88
.org 0x7da00
	lsls r2, r2, #2	@ 0007da00 9200
.org 0x7da02
	adds r2, r2, r3	@ 0007da02 d218
.org 0x7da04
	adds r1, r4, #0	@ 0007da04 211c
.org 0x7da06
	adds r1, #113	@ 0007da06 7131
.org 0x7da08
	ldrb r1, [r1, #0]	@ 0007da08 0978
.org 0x7da0a
	lsls r1, r1, #24	@ 0007da0a 0906
.org 0x7da0c
	asrs r1, r1, #24	@ 0007da0c 0916
.org 0x7da0e
	ldr r2, [r2, #0]	@ 0007da0e 1268
.org 0x7da10
	lsls r1, r1, #2	@ 0007da10 8900
.org 0x7da12
	adds r1, r1, r2	@ 0007da12 8918
.org 0x7da14
	ldr r1, [r1, #0]	@ 0007da14 0968
.org 0x7da16
	bl 0x5784	@ 0007da16 87f7b5fe
.org 0x7da1a
	adds r0, r4, #0	@ 0007da1a 201c
.org 0x7da1c
	adds r0, #115	@ 0007da1c 7330
.org 0x7da1e
	ldrb r0, [r0, #0]	@ 0007da1e 0078
.org 0x7da20
	cmp r0, #3	@ 0007da20 0328
.org 0x7da22
	bne.n 0x7da2e	@ 0007da22 04d1
.org 0x7da24
	ldrb r0, [r4, #14]	@ 0007da24 a07b
.org 0x7da26
	adds r0, #1	@ 0007da26 0130
.org 0x7da28
	movs r1, #0	@ 0007da28 0021
.org 0x7da2a
	strb r0, [r4, #14]	@ 0007da2a a073
.org 0x7da2c
	strb r1, [r4, #15]	@ 0007da2c e173
.org 0x7da2e
	pop {r4, r5}	@ 0007da2e 30bc
.org 0x7da30
	pop {r0}	@ 0007da30 01bc
.org 0x7da32
	bx r0	@ 0007da32 0047
