@ FUN_0804bd34  entry 0x0804bd34  size 244
.thumb
.org 0x4bd34
FUN_0804bd34:
	push {r4, r5, r6, r7, lr}	@ 0004bd34 f0b5
.org 0x4bd36
	mov r7, r8	@ 0004bd36 4746
.org 0x4bd38
	push {r7}	@ 0004bd38 80b4
.org 0x4bd3a
	sub sp, #8	@ 0004bd3a 82b0
.org 0x4bd3c
	adds r5, r0, #0	@ 0004bd3c 051c
.org 0x4bd3e
	ldr r0, [r5, #40]	@ 0004bd3e a86a
.org 0x4bd40
	mov r8, r0	@ 0004bd40 8046
.org 0x4bd42
	ldr r1, [pc, #228]	@ 0004bd42 3949
.org 0x4bd44
	ldrb r0, [r5, #9]	@ 0004bd44 687a
.org 0x4bd46
	lsls r0, r0, #2	@ 0004bd46 8000
.org 0x4bd48
	adds r0, r0, r1	@ 0004bd48 4018
.org 0x4bd4a
	movs r1, #1	@ 0004bd4a 0121
.org 0x4bd4c
	str r1, [r5, #12]	@ 0004bd4c e960
.org 0x4bd4e
	ldr r0, [r0, #0]	@ 0004bd4e 0068
.org 0x4bd50
	ldr r0, [r0, #4]	@ 0004bd50 4068
.org 0x4bd52
	str r0, [r5, #20]	@ 0004bd52 6861
.org 0x4bd54
	adds r0, r5, #0	@ 0004bd54 281c
.org 0x4bd56
	bl 0x1cc9c	@ 0004bd56 d0f7a1ff
.org 0x4bd5a
	adds r0, r5, #0	@ 0004bd5a 281c
.org 0x4bd5c
	bl 0x1ceec	@ 0004bd5c d1f7c6f8
.org 0x4bd60
	ldrb r1, [r5, #10]	@ 0004bd60 a97a
.org 0x4bd62
	movs r0, #1	@ 0004bd62 0120
.org 0x4bd64
	orrs r0, r1	@ 0004bd64 0843
.org 0x4bd66
	movs r1, #2	@ 0004bd66 0221
.org 0x4bd68
	orrs r0, r1	@ 0004bd68 0843
.org 0x4bd6a
	strb r0, [r5, #10]	@ 0004bd6a a872
.org 0x4bd6c
	ldr r1, [pc, #188]	@ 0004bd6c 2f49
.org 0x4bd6e
	adds r0, r5, #0	@ 0004bd6e 281c
.org 0x4bd70
	bl 0x1cf00	@ 0004bd70 d1f7c6f8
.org 0x4bd74
	adds r0, r5, #0	@ 0004bd74 281c
.org 0x4bd76
	bl 0x1cff0	@ 0004bd76 d1f73bf9
.org 0x4bd7a
	movs r2, #0	@ 0004bd7a 0022
.org 0x4bd7c
	ldrb r1, [r5, #10]	@ 0004bd7c a97a
.org 0x4bd7e
	movs r0, #239	@ 0004bd7e ef20
.org 0x4bd80
	ands r0, r1	@ 0004bd80 0840
.org 0x4bd82
	strb r0, [r5, #10]	@ 0004bd82 a872
.org 0x4bd84
	adds r0, r5, #0	@ 0004bd84 281c
.org 0x4bd86
	adds r0, #76	@ 0004bd86 4c30
.org 0x4bd88
	strb r2, [r0, #0]	@ 0004bd88 0270
.org 0x4bd8a
	adds r2, r5, #0	@ 0004bd8a 2a1c
.org 0x4bd8c
	adds r2, #74	@ 0004bd8c 4a32
.org 0x4bd8e
	ldrb r1, [r2, #0]	@ 0004bd8e 1178
.org 0x4bd90
	movs r0, #17	@ 0004bd90 1120
.org 0x4bd92
	negs r0, r0	@ 0004bd92 4042
.org 0x4bd94
	ands r0, r1	@ 0004bd94 0840
.org 0x4bd96
	strb r0, [r2, #0]	@ 0004bd96 1070
.org 0x4bd98
	ldrb r1, [r5, #10]	@ 0004bd98 a97a
.org 0x4bd9a
	movs r0, #4	@ 0004bd9a 0420
.org 0x4bd9c
	orrs r0, r1	@ 0004bd9c 0843
.org 0x4bd9e
	strb r0, [r5, #10]	@ 0004bd9e a872
.org 0x4bda0
	adds r7, r5, #0	@ 0004bda0 2f1c
.org 0x4bda2
	adds r7, #116	@ 0004bda2 7437
.org 0x4bda4
	ldr r4, [pc, #136]	@ 0004bda4 224c
.org 0x4bda6
	adds r2, #10	@ 0004bda6 0a32
.org 0x4bda8
	adds r0, r7, #0	@ 0004bda8 381c
.org 0x4bdaa
	adds r1, r4, #0	@ 0004bdaa 211c
.org 0x4bdac
	movs r3, #8	@ 0004bdac 0823
.org 0x4bdae
	bl 0x5760	@ 0004bdae b9f7d7fc
.org 0x4bdb2
	str r5, [r7, #44]	@ 0004bdb2 fd62
.org 0x4bdb4
	ldr r0, [pc, #124]	@ 0004bdb4 1f48
.org 0x4bdb6
	str r0, [r7, #36]	@ 0004bdb6 7862
.org 0x4bdb8
	mov r0, r8	@ 0004bdb8 4046
.org 0x4bdba
	bl 0x3a4a8	@ 0004bdba eef775fb
.org 0x4bdbe
	adds r0, #4	@ 0004bdbe 0430
.org 0x4bdc0
	lsls r0, r0, #24	@ 0004bdc0 0006
.org 0x4bdc2
	lsrs r6, r0, #24	@ 0004bdc2 060e
.org 0x4bdc4
	mov r0, r8	@ 0004bdc4 4046
.org 0x4bdc6
	bl 0x38a78	@ 0004bdc6 ecf757fe
.org 0x4bdca
	lsls r0, r0, #24	@ 0004bdca 0006
.org 0x4bdcc
	cmp r0, #0	@ 0004bdcc 0028
.org 0x4bdce
	beq.n 0x4bdd4	@ 0004bdce 01d0
.org 0x4bdd0
	lsls r0, r6, #25	@ 0004bdd0 7006
.org 0x4bdd2
	lsrs r6, r0, #24	@ 0004bdd2 060e
.org 0x4bdd4
	movs r3, #1	@ 0004bdd4 0123
.org 0x4bdd6
	negs r3, r3	@ 0004bdd6 5b42
.org 0x4bdd8
	str r3, [sp, #0]	@ 0004bdd8 0093
.org 0x4bdda
	str r3, [sp, #4]	@ 0004bdda 0193
.org 0x4bddc
	adds r0, r7, #0	@ 0004bddc 381c
.org 0x4bdde
	adds r1, r4, #0	@ 0004bdde 211c
.org 0x4bde0
	adds r2, r6, #0	@ 0004bde0 321c
.org 0x4bde2
	bl 0x5794	@ 0004bde2 b9f7d7fc
.org 0x4bde6
	ldr r1, [pc, #80]	@ 0004bde6 1449
.org 0x4bde8
	ldrb r0, [r5, #17]	@ 0004bde8 687c
.org 0x4bdea
	adds r0, #64	@ 0004bdea 4030
.org 0x4bdec
	lsls r0, r0, #24	@ 0004bdec 0006
.org 0x4bdee
	lsrs r0, r0, #23	@ 0004bdee c00d
.org 0x4bdf0
	adds r0, r0, r1	@ 0004bdf0 4018
.org 0x4bdf2
	movs r2, #0	@ 0004bdf2 0022
.org 0x4bdf4
	ldrsh r0, [r0, r2]	@ 0004bdf4 805e
.org 0x4bdf6
	lsls r0, r0, #2	@ 0004bdf6 8000
.org 0x4bdf8
	str r0, [r5, #92]	@ 0004bdf8 e865
.org 0x4bdfa
	ldrb r0, [r5, #17]	@ 0004bdfa 687c
.org 0x4bdfc
	lsls r0, r0, #1	@ 0004bdfc 4000
.org 0x4bdfe
	adds r0, r0, r1	@ 0004bdfe 4018
.org 0x4be00
	movs r1, #0	@ 0004be00 0021
.org 0x4be02
	ldrsh r0, [r0, r1]	@ 0004be02 405e
.org 0x4be04
	lsls r0, r0, #2	@ 0004be04 8000
.org 0x4be06
	str r0, [r5, #96]	@ 0004be06 2866
.org 0x4be08
	adds r1, r5, #0	@ 0004be08 291c
.org 0x4be0a
	adds r1, #180	@ 0004be0a b431
.org 0x4be0c
	ldr r0, [r5, #84]	@ 0004be0c 686d
.org 0x4be0e
	str r0, [r1, #0]	@ 0004be0e 0860
.org 0x4be10
	adds r1, #4	@ 0004be10 0431
.org 0x4be12
	ldr r0, [r5, #88]	@ 0004be12 a86d
.org 0x4be14
	str r0, [r1, #0]	@ 0004be14 0860
.org 0x4be16
	adds r0, r5, #0	@ 0004be16 281c
.org 0x4be18
	bl 0x4be3c	@ 0004be18 00f010f8
.org 0x4be1c
	add sp, #8	@ 0004be1c 02b0
.org 0x4be1e
	pop {r3}	@ 0004be1e 08bc
.org 0x4be20
	mov r8, r3	@ 0004be20 9846
.org 0x4be22
	pop {r4, r5, r6, r7}	@ 0004be22 f0bc
.org 0x4be24
	pop {r0}	@ 0004be24 01bc
.org 0x4be26
	bx r0	@ 0004be26 0047
