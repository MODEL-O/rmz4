@ FUN_080f79d4  entry 0x080f79d4  size 110
.thumb
.org 0xf79d4
FUN_080f79d4:
	push {r4, lr}	@ 000f79d4 10b5
.org 0xf79d6
	adds r4, r0, #0	@ 000f79d6 041c
.org 0xf79d8
	adds r0, #180	@ 000f79d8 b430
.org 0xf79da
	ldr r0, [r0, #0]	@ 000f79da 0068
.org 0xf79dc
	bl 0xe954c	@ 000f79dc f1f7b6fd
.org 0xf79e0
	adds r0, r4, #0	@ 000f79e0 201c
.org 0xf79e2
	adds r0, #184	@ 000f79e2 b830
.org 0xf79e4
	ldr r0, [r0, #0]	@ 000f79e4 0068
.org 0xf79e6
	bl 0xe954c	@ 000f79e6 f1f7b1fd
.org 0xf79ea
	ldr r0, [r4, #92]	@ 000f79ea e06d
.org 0xf79ec
	bl 0xe954c	@ 000f79ec f1f7aefd
.org 0xf79f0
	ldr r0, [r4, #96]	@ 000f79f0 206e
.org 0xf79f2
	bl 0xe954c	@ 000f79f2 f1f7abfd
.org 0xf79f6
	ldr r0, [r4, #100]	@ 000f79f6 606e
.org 0xf79f8
	bl 0xe954c	@ 000f79f8 f1f7a8fd
.org 0xf79fc
	ldr r0, [r4, #104]	@ 000f79fc a06e
.org 0xf79fe
	bl 0xe954c	@ 000f79fe f1f7a5fd
.org 0xf7a02
	ldrb r1, [r4, #10]	@ 000f7a02 a17a
.org 0xf7a04
	movs r0, #254	@ 000f7a04 fe20
.org 0xf7a06
	ands r0, r1	@ 000f7a06 0840
.org 0xf7a08
	movs r1, #0	@ 000f7a08 0021
.org 0xf7a0a
	strb r0, [r4, #10]	@ 000f7a0a a072
.org 0xf7a0c
	adds r0, r4, #0	@ 000f7a0c 201c
.org 0xf7a0e
	adds r0, #140	@ 000f7a0e 8c30
.org 0xf7a10
	str r1, [r0, #0]	@ 000f7a10 0160
.org 0xf7a12
	adds r0, #4	@ 000f7a12 0430
.org 0xf7a14
	str r1, [r0, #0]	@ 000f7a14 0160
.org 0xf7a16
	adds r0, #4	@ 000f7a16 0430
.org 0xf7a18
	strb r1, [r0, #0]	@ 000f7a18 0170
.org 0xf7a1a
	ldrb r1, [r4, #10]	@ 000f7a1a a17a
.org 0xf7a1c
	movs r0, #251	@ 000f7a1c fb20
.org 0xf7a1e
	ands r0, r1	@ 000f7a1e 0840
.org 0xf7a20
	strb r0, [r4, #10]	@ 000f7a20 a072
.org 0xf7a22
	ldrb r1, [r4, #11]	@ 000f7a22 e17a
.org 0xf7a24
	movs r0, #247	@ 000f7a24 f720
.org 0xf7a26
	ands r0, r1	@ 000f7a26 0840
.org 0xf7a28
	strb r0, [r4, #11]	@ 000f7a28 e072
.org 0xf7a2a
	ldr r1, [pc, #24]	@ 000f7a2a 0649
.org 0xf7a2c
	ldrb r0, [r4, #9]	@ 000f7a2c 607a
.org 0xf7a2e
	lsls r0, r0, #2	@ 000f7a2e 8000
.org 0xf7a30
	adds r0, r0, r1	@ 000f7a30 4018
.org 0xf7a32
	movs r1, #4	@ 000f7a32 0421
.org 0xf7a34
	str r1, [r4, #12]	@ 000f7a34 e160
.org 0xf7a36
	ldr r0, [r0, #0]	@ 000f7a36 0068
.org 0xf7a38
	ldr r0, [r0, #16]	@ 000f7a38 0069
.org 0xf7a3a
	str r0, [r4, #20]	@ 000f7a3a 6061
.org 0xf7a3c
	pop {r4}	@ 000f7a3c 10bc
.org 0xf7a3e
	pop {r0}	@ 000f7a3e 01bc
.org 0xf7a40
	bx r0	@ 000f7a40 0047
