@ FUN_0811ed08  entry 0x0811ed08  size 142
.thumb
.org 0x11ed08
FUN_0811ed08:
	push {r4, r5, lr}	@ 0011ed08 30b5
.org 0x11ed0a
	adds r4, r0, #0	@ 0011ed0a 041c
.org 0x11ed0c
	ldr r5, [pc, #104]	@ 0011ed0c 1a4d
.org 0x11ed0e
	ldrh r1, [r5, #6]	@ 0011ed0e e988
.org 0x11ed10
	movs r0, #128	@ 0011ed10 8020
.org 0x11ed12
	ands r0, r1	@ 0011ed12 0840
.org 0x11ed14
	cmp r0, #0	@ 0011ed14 0028
.org 0x11ed16
	beq.n 0x11ed2c	@ 0011ed16 09d0
.org 0x11ed18
	movs r0, #1	@ 0011ed18 0120
.org 0x11ed1a
	bl 0x2b10	@ 0011ed1a e3f6f9fe
.org 0x11ed1e
	movs r1, #10	@ 0011ed1e 0a21
.org 0x11ed20
	ldrsh r0, [r4, r1]	@ 0011ed20 605e
.org 0x11ed22
	adds r0, #1	@ 0011ed22 0130
.org 0x11ed24
	movs r1, #3	@ 0011ed24 0321
.org 0x11ed26
	bl 0x129050	@ 0011ed26 0af093f9
.org 0x11ed2a
	strh r0, [r4, #10]	@ 0011ed2a 6081
.org 0x11ed2c
	ldrh r1, [r5, #6]	@ 0011ed2c e988
.org 0x11ed2e
	movs r0, #64	@ 0011ed2e 4020
.org 0x11ed30
	ands r0, r1	@ 0011ed30 0840
.org 0x11ed32
	cmp r0, #0	@ 0011ed32 0028
.org 0x11ed34
	beq.n 0x11ed4a	@ 0011ed34 09d0
.org 0x11ed36
	movs r0, #1	@ 0011ed36 0120
.org 0x11ed38
	bl 0x2b10	@ 0011ed38 e3f6eafe
.org 0x11ed3c
	movs r1, #10	@ 0011ed3c 0a21
.org 0x11ed3e
	ldrsh r0, [r4, r1]	@ 0011ed3e 605e
.org 0x11ed40
	adds r0, #2	@ 0011ed40 0230
.org 0x11ed42
	movs r1, #3	@ 0011ed42 0321
.org 0x11ed44
	bl 0x129050	@ 0011ed44 0af084f9
.org 0x11ed48
	strh r0, [r4, #10]	@ 0011ed48 6081
.org 0x11ed4a
	ldr r0, [pc, #48]	@ 0011ed4a 0c48
.org 0x11ed4c
	ldrh r0, [r0, #0]	@ 0011ed4c 0088
.org 0x11ed4e
	ldr r1, [pc, #48]	@ 0011ed4e 0c49
.org 0x11ed50
	adds r0, r0, r1	@ 0011ed50 4018
.org 0x11ed52
	movs r1, #10	@ 0011ed52 0a21
.org 0x11ed54
	ldrsh r2, [r4, r1]	@ 0011ed54 625e
.org 0x11ed56
	lsls r2, r2, #1	@ 0011ed56 5200
.org 0x11ed58
	adds r2, #13	@ 0011ed58 0d32
.org 0x11ed5a
	movs r1, #2	@ 0011ed5a 0221
.org 0x11ed5c
	bl 0x10d85c	@ 0011ed5c eef77efd
.org 0x11ed60
	ldrh r1, [r5, #4]	@ 0011ed60 a988
.org 0x11ed62
	movs r0, #2	@ 0011ed62 0220
.org 0x11ed64
	ands r0, r1	@ 0011ed64 0840
.org 0x11ed66
	cmp r0, #0	@ 0011ed66 0028
.org 0x11ed68
	beq.n 0x11ed84	@ 0011ed68 0cd0
.org 0x11ed6a
	movs r0, #3	@ 0011ed6a 0320
.org 0x11ed6c
	bl 0x2b10	@ 0011ed6c e3f6d0fe
.org 0x11ed70
	movs r0, #2	@ 0011ed70 0220
.org 0x11ed72
	negs r0, r0	@ 0011ed72 4042
.org 0x11ed74
	b.n 0x11ed9e	@ 0011ed74 13e0
.org 0x11ed76
	.byte 0x00	@ 0011ed76 data
.org 0x11ed77
	.byte 0x00	@ 0011ed77 data
.org 0x11ed78
	.byte 0x60,0x07,0x00,0x02	@ 0011ed78 data
.org 0x11ed7c
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ed7c data
.org 0x11ed80
	.byte 0x5f,0x0e,0x01,0x09	@ 0011ed80 data
.org 0x11ed84
	movs r0, #1	@ 0011ed84 0120
.org 0x11ed86
	ands r0, r1	@ 0011ed86 0840
.org 0x11ed88
	cmp r0, #0	@ 0011ed88 0028
.org 0x11ed8a
	bne.n 0x11ed90	@ 0011ed8a 01d1
.org 0x11ed8c
	movs r0, #0	@ 0011ed8c 0020
.org 0x11ed8e
	b.n 0x11ed9e	@ 0011ed8e 06e0
.org 0x11ed90
	movs r0, #2	@ 0011ed90 0220
.org 0x11ed92
	bl 0x2b10	@ 0011ed92 e3f6bdfe
