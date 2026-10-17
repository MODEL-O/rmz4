@ FUN_0806ced8  entry 0x0806ced8  size 162
.thumb
.org 0x6ced8
FUN_0806ced8:
	push {r4, r5, lr}	@ 0006ced8 30b5
.org 0x6ceda
	adds r4, r0, #0	@ 0006ceda 041c
.org 0x6cedc
	ldrb r5, [r4, #14]	@ 0006cedc a57b
.org 0x6cede
	cmp r5, #0	@ 0006cede 002d
.org 0x6cee0
	bne.n 0x6cf0c	@ 0006cee0 14d1
.org 0x6cee2
	ldr r1, [pc, #32]	@ 0006cee2 0849
.org 0x6cee4
	bl 0x1cf00	@ 0006cee4 b0f70cf8
.org 0x6cee8
	movs r0, #211	@ 0006cee8 d320
.org 0x6ceea
	bl 0x2b10	@ 0006ceea 95f711fe
.org 0x6ceee
	adds r0, r4, #0	@ 0006ceee 201c
.org 0x6cef0
	adds r0, #116	@ 0006cef0 7430
.org 0x6cef2
	ldr r1, [pc, #20]	@ 0006cef2 0549
.org 0x6cef4
	bl 0x5784	@ 0006cef4 98f746fc
.org 0x6cef8
	adds r0, r4, #0	@ 0006cef8 201c
.org 0x6cefa
	adds r0, #221	@ 0006cefa dd30
.org 0x6cefc
	ldrb r0, [r0, #0]	@ 0006cefc 0078
.org 0x6cefe
	strb r0, [r4, #18]	@ 0006cefe a074
.org 0x6cf00
	strb r5, [r4, #15]	@ 0006cf00 e573
.org 0x6cf02
	b.n 0x6cf28	@ 0006cf02 11e0
.org 0x6cf04
	.byte 0x16,0xaa,0x00,0x00	@ 0006cf04 data
.org 0x6cf08
	.byte 0x44,0xc3,0x85,0x08	@ 0006cf08 data
.org 0x6cf0c
	cmp r5, #1	@ 0006cf0c 012d
.org 0x6cf0e
	bne.n 0x6cf2e	@ 0006cf0e 0ed1
.org 0x6cf10
	adds r0, r4, #0	@ 0006cf10 201c
.org 0x6cf12
	adds r0, #113	@ 0006cf12 7130
.org 0x6cf14
	ldrb r0, [r0, #0]	@ 0006cf14 0078
.org 0x6cf16
	lsls r0, r0, #24	@ 0006cf16 0006
.org 0x6cf18
	asrs r0, r0, #24	@ 0006cf18 0016
.org 0x6cf1a
	cmp r0, #1	@ 0006cf1a 0128
.org 0x6cf1c
	ble.n 0x6cf2e	@ 0006cf1c 07dd
.org 0x6cf1e
	adds r0, r4, #0	@ 0006cf1e 201c
.org 0x6cf20
	adds r0, #116	@ 0006cf20 7430
.org 0x6cf22
	ldr r1, [pc, #60]	@ 0006cf22 0f49
.org 0x6cf24
	bl 0x5784	@ 0006cf24 98f72efc
.org 0x6cf28
	ldrb r0, [r4, #14]	@ 0006cf28 a07b
.org 0x6cf2a
	adds r0, #1	@ 0006cf2a 0130
.org 0x6cf2c
	strb r0, [r4, #14]	@ 0006cf2c a073
.org 0x6cf2e
	adds r0, r4, #0	@ 0006cf2e 201c
.org 0x6cf30
	bl 0x1cff0	@ 0006cf30 b0f75ef8
.org 0x6cf34
	ldrb r0, [r4, #18]	@ 0006cf34 a07c
.org 0x6cf36
	subs r0, #1	@ 0006cf36 0138
.org 0x6cf38
	movs r3, #0	@ 0006cf38 0023
.org 0x6cf3a
	strb r0, [r4, #18]	@ 0006cf3a a074
.org 0x6cf3c
	ldrb r0, [r4, #15]	@ 0006cf3c e07b
.org 0x6cf3e
	cmp r0, #0	@ 0006cf3e 0028
.org 0x6cf40
	bne.n 0x6cf80	@ 0006cf40 1ed1
.org 0x6cf42
	adds r0, r4, #0	@ 0006cf42 201c
.org 0x6cf44
	adds r0, #115	@ 0006cf44 7330
.org 0x6cf46
	ldrb r2, [r0, #0]	@ 0006cf46 0278
.org 0x6cf48
	cmp r2, #3	@ 0006cf48 032a
.org 0x6cf4a
	bne.n 0x6cf86	@ 0006cf4a 1cd1
.org 0x6cf4c
	adds r1, r4, #0	@ 0006cf4c 211c
.org 0x6cf4e
	adds r1, #220	@ 0006cf4e dc31
.org 0x6cf50
	ldrb r0, [r1, #0]	@ 0006cf50 0878
.org 0x6cf52
	subs r0, #1	@ 0006cf52 0138
.org 0x6cf54
	strb r0, [r1, #0]	@ 0006cf54 0870
.org 0x6cf56
	lsls r0, r0, #24	@ 0006cf56 0006
.org 0x6cf58
	cmp r0, #0	@ 0006cf58 0028
.org 0x6cf5a
	bne.n 0x6cf64	@ 0006cf5a 03d1
.org 0x6cf5c
	strb r2, [r4, #13]	@ 0006cf5c 6273
.org 0x6cf5e
	b.n 0x6cf84	@ 0006cf5e 11e0
.org 0x6cf60
	.byte 0xac,0xc1,0x85,0x08	@ 0006cf60 data
.org 0x6cf64
	ldr r1, [pc, #20]	@ 0006cf64 0549
.org 0x6cf66
	adds r0, r4, #0	@ 0006cf66 201c
.org 0x6cf68
	bl 0x1cf00	@ 0006cf68 aff7caff
.org 0x6cf6c
	adds r0, r4, #0	@ 0006cf6c 201c
.org 0x6cf6e
	bl 0x1cff0	@ 0006cf6e b0f73ff8
.org 0x6cf72
	ldrb r0, [r4, #15]	@ 0006cf72 e07b
.org 0x6cf74
	adds r0, #1	@ 0006cf74 0130
.org 0x6cf76
	strb r0, [r4, #15]	@ 0006cf76 e073
.org 0x6cf78
	b.n 0x6cf86	@ 0006cf78 05e0
