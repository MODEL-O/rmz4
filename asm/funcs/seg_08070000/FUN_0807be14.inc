@ FUN_0807be14  entry 0x0807be14  size 114
.thumb
.org 0x7be14
FUN_0807be14:
	push {r4, r5, lr}	@ 0007be14 30b5
.org 0x7be16
	adds r4, r0, #0	@ 0007be16 041c
.org 0x7be18
	ldrb r0, [r4, #15]	@ 0007be18 e07b
.org 0x7be1a
	cmp r0, #0	@ 0007be1a 0028
.org 0x7be1c
	bne.n 0x7be30	@ 0007be1c 08d1
.org 0x7be1e
	adds r0, r4, #0	@ 0007be1e 201c
.org 0x7be20
	movs r1, #0	@ 0007be20 0021
.org 0x7be22
	bl 0x7e8c8	@ 0007be22 02f051fd
.org 0x7be26
	movs r0, #16	@ 0007be26 1020
.org 0x7be28
	strb r0, [r4, #18]	@ 0007be28 a074
.org 0x7be2a
	ldrb r0, [r4, #15]	@ 0007be2a e07b
.org 0x7be2c
	adds r0, #1	@ 0007be2c 0130
.org 0x7be2e
	strb r0, [r4, #15]	@ 0007be2e e073
.org 0x7be30
	adds r5, r4, #0	@ 0007be30 251c
.org 0x7be32
	adds r5, #188	@ 0007be32 bc35
.org 0x7be34
	ldrb r0, [r5, #0]	@ 0007be34 2878
.org 0x7be36
	cmp r0, #0	@ 0007be36 0028
.org 0x7be38
	beq.n 0x7be40	@ 0007be38 02d0
.org 0x7be3a
	adds r0, r4, #0	@ 0007be3a 201c
.org 0x7be3c
	bl 0x1cff0	@ 0007be3c a1f7d8f8
.org 0x7be40
	adds r0, r4, #0	@ 0007be40 201c
.org 0x7be42
	adds r0, #116	@ 0007be42 7430
.org 0x7be44
	ldr r3, [pc, #64]	@ 0007be44 104b
.org 0x7be46
	ldr r2, [pc, #68]	@ 0007be46 114a
.org 0x7be48
	ldrb r1, [r5, #0]	@ 0007be48 2978
.org 0x7be4a
	lsls r1, r1, #1	@ 0007be4a 4900
.org 0x7be4c
	adds r1, r1, r2	@ 0007be4c 8918
.org 0x7be4e
	ldrh r2, [r1, #0]	@ 0007be4e 0a88
.org 0x7be50
	lsls r2, r2, #2	@ 0007be50 9200
.org 0x7be52
	adds r2, r2, r3	@ 0007be52 d218
.org 0x7be54
	adds r1, r4, #0	@ 0007be54 211c
.org 0x7be56
	adds r1, #113	@ 0007be56 7131
.org 0x7be58
	ldrb r1, [r1, #0]	@ 0007be58 0978
.org 0x7be5a
	lsls r1, r1, #24	@ 0007be5a 0906
.org 0x7be5c
	asrs r1, r1, #24	@ 0007be5c 0916
.org 0x7be5e
	ldr r2, [r2, #0]	@ 0007be5e 1268
.org 0x7be60
	lsls r1, r1, #2	@ 0007be60 8900
.org 0x7be62
	adds r1, r1, r2	@ 0007be62 8918
.org 0x7be64
	ldr r1, [r1, #0]	@ 0007be64 0968
.org 0x7be66
	bl 0x5784	@ 0007be66 89f78dfc
.org 0x7be6a
	ldrb r0, [r4, #18]	@ 0007be6a a07c
.org 0x7be6c
	subs r0, #1	@ 0007be6c 0138
.org 0x7be6e
	strb r0, [r4, #18]	@ 0007be6e a074
.org 0x7be70
	lsls r0, r0, #24	@ 0007be70 0006
.org 0x7be72
	lsrs r1, r0, #24	@ 0007be72 010e
.org 0x7be74
	cmp r1, #0	@ 0007be74 0029
.org 0x7be76
	bne.n 0x7be80	@ 0007be76 03d1
.org 0x7be78
	ldrb r0, [r4, #14]	@ 0007be78 a07b
.org 0x7be7a
	adds r0, #1	@ 0007be7a 0130
.org 0x7be7c
	strb r0, [r4, #14]	@ 0007be7c a073
.org 0x7be7e
	strb r1, [r4, #15]	@ 0007be7e e173
.org 0x7be80
	pop {r4, r5}	@ 0007be80 30bc
.org 0x7be82
	pop {r0}	@ 0007be82 01bc
.org 0x7be84
	bx r0	@ 0007be84 0047
