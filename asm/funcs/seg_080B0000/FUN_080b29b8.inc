@ FUN_080b29b8  entry 0x080b29b8  size 134
.thumb
.org 0xb29b8
FUN_080b29b8:
	push {r4, r5, lr}	@ 000b29b8 30b5
.org 0xb29ba
	sub sp, #12	@ 000b29ba 83b0
.org 0xb29bc
	adds r4, r0, #0	@ 000b29bc 041c
.org 0xb29be
	ldr r1, [pc, #128]	@ 000b29be 2049
.org 0xb29c0
	mov r0, sp	@ 000b29c0 6846
.org 0xb29c2
	movs r2, #3	@ 000b29c2 0322
.org 0xb29c4
	bl 0x129258	@ 000b29c4 76f048fc
.org 0xb29c8
	adds r0, r4, #0	@ 000b29c8 201c
.org 0xb29ca
	adds r0, #184	@ 000b29ca b830
.org 0xb29cc
	adds r1, r4, #0	@ 000b29cc 211c
.org 0xb29ce
	adds r1, #185	@ 000b29ce b931
.org 0xb29d0
	ldrb r2, [r1, #0]	@ 000b29d0 0a78
.org 0xb29d2
	lsls r2, r2, #2	@ 000b29d2 9200
.org 0xb29d4
	ldrb r0, [r0, #0]	@ 000b29d4 0078
.org 0xb29d6
	adds r2, r2, r0	@ 000b29d6 1218
.org 0xb29d8
	lsls r2, r2, #24	@ 000b29d8 1206
.org 0xb29da
	lsrs r2, r2, #24	@ 000b29da 120e
.org 0xb29dc
	ldr r0, [r4, #84]	@ 000b29dc 606d
.org 0xb29de
	str r0, [sp, #4]	@ 000b29de 0190
.org 0xb29e0
	ldr r0, [r4, #88]	@ 000b29e0 a06d
.org 0xb29e2
	ldr r1, [pc, #96]	@ 000b29e2 1849
.org 0xb29e4
	adds r0, r0, r1	@ 000b29e4 4018
.org 0xb29e6
	add r5, sp, #4	@ 000b29e6 01ad
.org 0xb29e8
	str r0, [r5, #4]	@ 000b29e8 6860
.org 0xb29ea
	mov r3, sp	@ 000b29ea 6b46
.org 0xb29ec
	mov r1, sp	@ 000b29ec 6946
.org 0xb29ee
	ldr r0, [pc, #88]	@ 000b29ee 1648
.org 0xb29f0
	adds r2, r2, r0	@ 000b29f0 1218
.org 0xb29f2
	ldrb r0, [r2, #0]	@ 000b29f2 1078
.org 0xb29f4
	ldrb r1, [r1, #0]	@ 000b29f4 0978
.org 0xb29f6
	adds r0, r0, r1	@ 000b29f6 4018
.org 0xb29f8
	strb r0, [r3, #0]	@ 000b29f8 1870
.org 0xb29fa
	mov r0, sp	@ 000b29fa 6846
.org 0xb29fc
	ldrb r0, [r0, #1]	@ 000b29fc 4078
.org 0xb29fe
	ldrb r1, [r2, #0]	@ 000b29fe 1178
.org 0xb2a00
	adds r0, r0, r1	@ 000b2a00 4018
.org 0xb2a02
	strb r0, [r3, #1]	@ 000b2a02 5870
.org 0xb2a04
	mov r0, sp	@ 000b2a04 6846
.org 0xb2a06
	ldrb r0, [r0, #2]	@ 000b2a06 8078
.org 0xb2a08
	ldrb r1, [r2, #0]	@ 000b2a08 1178
.org 0xb2a0a
	adds r0, r0, r1	@ 000b2a0a 4018
.org 0xb2a0c
	strb r0, [r3, #2]	@ 000b2a0c 9870
.org 0xb2a0e
	movs r4, #192	@ 000b2a0e c024
.org 0xb2a10
	lsls r4, r4, #2	@ 000b2a10 a400
.org 0xb2a12
	mov r0, sp	@ 000b2a12 6846
.org 0xb2a14
	ldrb r2, [r0, #0]	@ 000b2a14 0278
.org 0xb2a16
	adds r0, r5, #0	@ 000b2a16 281c
.org 0xb2a18
	adds r1, r4, #0	@ 000b2a18 211c
.org 0xb2a1a
	bl 0xbd4d4	@ 000b2a1a 0af05bfd
.org 0xb2a1e
	mov r0, sp	@ 000b2a1e 6846
.org 0xb2a20
	ldrb r2, [r0, #1]	@ 000b2a20 4278
.org 0xb2a22
	adds r0, r5, #0	@ 000b2a22 281c
.org 0xb2a24
	adds r1, r4, #0	@ 000b2a24 211c
.org 0xb2a26
	bl 0xbd4d4	@ 000b2a26 0af055fd
.org 0xb2a2a
	mov r0, sp	@ 000b2a2a 6846
.org 0xb2a2c
	ldrb r2, [r0, #2]	@ 000b2a2c 8278
.org 0xb2a2e
	adds r0, r5, #0	@ 000b2a2e 281c
.org 0xb2a30
	adds r1, r4, #0	@ 000b2a30 211c
.org 0xb2a32
	bl 0xbd4d4	@ 000b2a32 0af04ffd
.org 0xb2a36
	add sp, #12	@ 000b2a36 03b0
.org 0xb2a38
	pop {r4, r5}	@ 000b2a38 30bc
.org 0xb2a3a
	pop {r0}	@ 000b2a3a 01bc
.org 0xb2a3c
	bx r0	@ 000b2a3c 0047
