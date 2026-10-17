@ FUN_0803fdec  entry 0x0803fdec  size 124
.thumb
.org 0x3fdec
FUN_0803fdec:
	push {r4, r5, lr}	@ 0003fdec 30b5
.org 0x3fdee
	adds r5, r0, #0	@ 0003fdee 051c
.org 0x3fdf0
	ldr r4, [r5, #44]	@ 0003fdf0 ec6a
.org 0x3fdf2
	bl 0x1cff0	@ 0003fdf2 ddf7fdf8
.org 0x3fdf6
	ldr r0, [r5, #84]	@ 0003fdf6 686d
.org 0x3fdf8
	ldr r1, [r5, #92]	@ 0003fdf8 e96d
.org 0x3fdfa
	adds r0, r0, r1	@ 0003fdfa 4018
.org 0x3fdfc
	str r0, [r5, #84]	@ 0003fdfc 6865
.org 0x3fdfe
	ldr r0, [r5, #88]	@ 0003fdfe a86d
.org 0x3fe00
	ldr r1, [r5, #96]	@ 0003fe00 296e
.org 0x3fe02
	adds r0, r0, r1	@ 0003fe02 4018
.org 0x3fe04
	str r0, [r5, #88]	@ 0003fe04 a865
.org 0x3fe06
	adds r0, r5, #0	@ 0003fe06 281c
.org 0x3fe08
	movs r1, #3	@ 0003fe08 0321
.org 0x3fe0a
	bl 0x3a99c	@ 0003fe0a faf7c7fd
.org 0x3fe0e
	lsls r0, r0, #24	@ 0003fe0e 0006
.org 0x3fe10
	lsrs r2, r0, #24	@ 0003fe10 020e
.org 0x3fe12
	adds r4, #250	@ 0003fe12 fa34
.org 0x3fe14
	ldrb r0, [r4, #0]	@ 0003fe14 2078
.org 0x3fe16
	cmp r0, #2	@ 0003fe16 0228
.org 0x3fe18
	bne.n 0x3fe1c	@ 0003fe18 00d1
.org 0x3fe1a
	movs r2, #1	@ 0003fe1a 0122
.org 0x3fe1c
	cmp r2, #0	@ 0003fe1c 002a
.org 0x3fe1e
	bne.n 0x3fe3c	@ 0003fe1e 0dd1
.org 0x3fe20
	ldrb r0, [r5, #18]	@ 0003fe20 a87c
.org 0x3fe22
	subs r0, #1	@ 0003fe22 0138
.org 0x3fe24
	strb r0, [r5, #18]	@ 0003fe24 a874
.org 0x3fe26
	lsls r0, r0, #24	@ 0003fe26 0006
.org 0x3fe28
	lsrs r0, r0, #24	@ 0003fe28 000e
.org 0x3fe2a
	cmp r0, #255	@ 0003fe2a ff28
.org 0x3fe2c
	beq.n 0x3fe3c	@ 0003fe2c 06d0
.org 0x3fe2e
	adds r0, r5, #0	@ 0003fe2e 281c
.org 0x3fe30
	adds r0, #140	@ 0003fe30 8c30
.org 0x3fe32
	ldr r0, [r0, #0]	@ 0003fe32 0068
.org 0x3fe34
	movs r1, #4	@ 0003fe34 0421
.org 0x3fe36
	ands r0, r1	@ 0003fe36 0840
.org 0x3fe38
	cmp r0, #0	@ 0003fe38 0028
.org 0x3fe3a
	beq.n 0x3fe62	@ 0003fe3a 12d0
.org 0x3fe3c
	cmp r2, #255	@ 0003fe3c ff2a
.org 0x3fe3e
	beq.n 0x3fe4a	@ 0003fe3e 04d0
.org 0x3fe40
	adds r1, r5, #0	@ 0003fe40 291c
.org 0x3fe42
	adds r1, #84	@ 0003fe42 5431
.org 0x3fe44
	movs r0, #2	@ 0003fe44 0220
.org 0x3fe46
	bl 0xd0c88	@ 0003fe46 90f01fff
.org 0x3fe4a
	ldr r1, [pc, #28]	@ 0003fe4a 0749
.org 0x3fe4c
	ldrb r0, [r5, #9]	@ 0003fe4c 687a
.org 0x3fe4e
	lsls r0, r0, #2	@ 0003fe4e 8000
.org 0x3fe50
	adds r0, r0, r1	@ 0003fe50 4018
.org 0x3fe52
	movs r1, #2	@ 0003fe52 0221
.org 0x3fe54
	str r1, [r5, #12]	@ 0003fe54 e960
.org 0x3fe56
	ldr r0, [r0, #0]	@ 0003fe56 0068
.org 0x3fe58
	ldr r0, [r0, #8]	@ 0003fe58 8068
.org 0x3fe5a
	str r0, [r5, #20]	@ 0003fe5a 6861
.org 0x3fe5c
	adds r0, r5, #0	@ 0003fe5c 281c
.org 0x3fe5e
	bl 0x3fd20	@ 0003fe5e fff75fff
.org 0x3fe62
	pop {r4, r5}	@ 0003fe62 30bc
.org 0x3fe64
	pop {r0}	@ 0003fe64 01bc
.org 0x3fe66
	bx r0	@ 0003fe66 0047
