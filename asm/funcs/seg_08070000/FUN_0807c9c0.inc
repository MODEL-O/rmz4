@ FUN_0807c9c0  entry 0x0807c9c0  size 138
.thumb
.org 0x7c9c0
FUN_0807c9c0:
	push {r4, r5, lr}	@ 0007c9c0 30b5
.org 0x7c9c2
	adds r4, r0, #0	@ 0007c9c2 041c
.org 0x7c9c4
	ldrb r5, [r4, #15]	@ 0007c9c4 e57b
.org 0x7c9c6
	cmp r5, #0	@ 0007c9c6 002d
.org 0x7c9c8
	bne.n 0x7c9f4	@ 0007c9c8 14d1
.org 0x7c9ca
	ldr r0, [pc, #128]	@ 0007c9ca 2048
.org 0x7c9cc
	bl 0x2b10	@ 0007c9cc 86f7a0f8
.org 0x7c9d0
	ldr r0, [pc, #124]	@ 0007c9d0 1f48
.org 0x7c9d2
	strh r5, [r0, #0]	@ 0007c9d2 0580
.org 0x7c9d4
	adds r2, r4, #0	@ 0007c9d4 221c
.org 0x7c9d6
	adds r2, #69	@ 0007c9d6 4532
.org 0x7c9d8
	ldrb r1, [r2, #0]	@ 0007c9d8 1178
.org 0x7c9da
	movs r0, #13	@ 0007c9da 0d20
.org 0x7c9dc
	negs r0, r0	@ 0007c9dc 4042
.org 0x7c9de
	ands r0, r1	@ 0007c9de 0840
.org 0x7c9e0
	strb r0, [r2, #0]	@ 0007c9e0 1070
.org 0x7c9e2
	adds r0, r4, #0	@ 0007c9e2 201c
.org 0x7c9e4
	movs r1, #22	@ 0007c9e4 1621
.org 0x7c9e6
	bl 0x7e8c8	@ 0007c9e6 01f06fff
.org 0x7c9ea
	movs r0, #32	@ 0007c9ea 2020
.org 0x7c9ec
	strb r0, [r4, #18]	@ 0007c9ec a074
.org 0x7c9ee
	ldrb r0, [r4, #15]	@ 0007c9ee e07b
.org 0x7c9f0
	adds r0, #1	@ 0007c9f0 0130
.org 0x7c9f2
	strb r0, [r4, #15]	@ 0007c9f2 e073
.org 0x7c9f4
	adds r5, r4, #0	@ 0007c9f4 251c
.org 0x7c9f6
	adds r5, #188	@ 0007c9f6 bc35
.org 0x7c9f8
	ldrb r0, [r5, #0]	@ 0007c9f8 2878
.org 0x7c9fa
	cmp r0, #0	@ 0007c9fa 0028
.org 0x7c9fc
	beq.n 0x7ca04	@ 0007c9fc 02d0
.org 0x7c9fe
	adds r0, r4, #0	@ 0007c9fe 201c
.org 0x7ca00
	bl 0x1cff0	@ 0007ca00 a0f7f6fa
.org 0x7ca04
	adds r0, r4, #0	@ 0007ca04 201c
.org 0x7ca06
	adds r0, #116	@ 0007ca06 7430
.org 0x7ca08
	ldr r3, [pc, #72]	@ 0007ca08 124b
.org 0x7ca0a
	ldr r2, [pc, #76]	@ 0007ca0a 134a
.org 0x7ca0c
	ldrb r1, [r5, #0]	@ 0007ca0c 2978
.org 0x7ca0e
	lsls r1, r1, #1	@ 0007ca0e 4900
.org 0x7ca10
	adds r1, r1, r2	@ 0007ca10 8918
.org 0x7ca12
	ldrh r2, [r1, #0]	@ 0007ca12 0a88
.org 0x7ca14
	lsls r2, r2, #2	@ 0007ca14 9200
.org 0x7ca16
	adds r2, r2, r3	@ 0007ca16 d218
.org 0x7ca18
	adds r1, r4, #0	@ 0007ca18 211c
.org 0x7ca1a
	adds r1, #113	@ 0007ca1a 7131
.org 0x7ca1c
	ldrb r1, [r1, #0]	@ 0007ca1c 0978
.org 0x7ca1e
	lsls r1, r1, #24	@ 0007ca1e 0906
.org 0x7ca20
	asrs r1, r1, #24	@ 0007ca20 0916
.org 0x7ca22
	ldr r2, [r2, #0]	@ 0007ca22 1268
.org 0x7ca24
	lsls r1, r1, #2	@ 0007ca24 8900
.org 0x7ca26
	adds r1, r1, r2	@ 0007ca26 8918
.org 0x7ca28
	ldr r1, [r1, #0]	@ 0007ca28 0968
.org 0x7ca2a
	bl 0x5784	@ 0007ca2a 88f7abfe
.org 0x7ca2e
	ldrb r0, [r4, #18]	@ 0007ca2e a07c
.org 0x7ca30
	subs r0, #1	@ 0007ca30 0138
.org 0x7ca32
	strb r0, [r4, #18]	@ 0007ca32 a074
.org 0x7ca34
	lsls r0, r0, #24	@ 0007ca34 0006
.org 0x7ca36
	lsrs r1, r0, #24	@ 0007ca36 010e
.org 0x7ca38
	cmp r1, #0	@ 0007ca38 0029
.org 0x7ca3a
	bne.n 0x7ca44	@ 0007ca3a 03d1
.org 0x7ca3c
	ldrb r0, [r4, #14]	@ 0007ca3c a07b
.org 0x7ca3e
	adds r0, #1	@ 0007ca3e 0130
.org 0x7ca40
	strb r0, [r4, #14]	@ 0007ca40 a073
.org 0x7ca42
	strb r1, [r4, #15]	@ 0007ca42 e173
.org 0x7ca44
	pop {r4, r5}	@ 0007ca44 30bc
.org 0x7ca46
	pop {r0}	@ 0007ca46 01bc
.org 0x7ca48
	bx r0	@ 0007ca48 0047
