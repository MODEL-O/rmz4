@ FUN_080a29f8  entry 0x080a29f8  size 80
.thumb
.org 0xa29f8
FUN_080a29f8:
	push {r4, lr}	@ 000a29f8 10b5
.org 0xa29fa
	adds r4, r0, #0	@ 000a29fa 041c
.org 0xa29fc
	ldrb r0, [r4, #15]	@ 000a29fc e07b
.org 0xa29fe
	cmp r0, #0	@ 000a29fe 0028
.org 0xa2a00
	bne.n 0xa2a26	@ 000a2a00 11d1
.org 0xa2a02
	adds r1, r4, #0	@ 000a2a02 211c
.org 0xa2a04
	adds r1, #37	@ 000a2a04 2531
.org 0xa2a06
	movs r0, #24	@ 000a2a06 1820
.org 0xa2a08
	strb r0, [r1, #0]	@ 000a2a08 0870
.org 0xa2a0a
	adds r0, r4, #0	@ 000a2a0a 201c
.org 0xa2a0c
	adds r0, #116	@ 000a2a0c 7430
.org 0xa2a0e
	ldr r1, [pc, #56]	@ 000a2a0e 0e49
.org 0xa2a10
	bl 0x5784	@ 000a2a10 62f7b8fe
.org 0xa2a14
	ldr r1, [pc, #52]	@ 000a2a14 0d49
.org 0xa2a16
	adds r0, r4, #0	@ 000a2a16 201c
.org 0xa2a18
	bl 0x1cf00	@ 000a2a18 7af772fa
.org 0xa2a1c
	movs r0, #16	@ 000a2a1c 1020
.org 0xa2a1e
	strb r0, [r4, #18]	@ 000a2a1e a074
.org 0xa2a20
	ldrb r0, [r4, #15]	@ 000a2a20 e07b
.org 0xa2a22
	adds r0, #1	@ 000a2a22 0130
.org 0xa2a24
	strb r0, [r4, #15]	@ 000a2a24 e073
.org 0xa2a26
	adds r0, r4, #0	@ 000a2a26 201c
.org 0xa2a28
	bl 0x1cff0	@ 000a2a28 7af7e2fa
.org 0xa2a2c
	ldrb r0, [r4, #18]	@ 000a2a2c a07c
.org 0xa2a2e
	subs r0, #1	@ 000a2a2e 0138
.org 0xa2a30
	strb r0, [r4, #18]	@ 000a2a30 a074
.org 0xa2a32
	lsls r0, r0, #24	@ 000a2a32 0006
.org 0xa2a34
	lsrs r1, r0, #24	@ 000a2a34 010e
.org 0xa2a36
	cmp r1, #0	@ 000a2a36 0029
.org 0xa2a38
	bne.n 0xa2a42	@ 000a2a38 03d1
.org 0xa2a3a
	movs r0, #3	@ 000a2a3a 0320
.org 0xa2a3c
	strb r0, [r4, #13]	@ 000a2a3c 6073
.org 0xa2a3e
	strb r1, [r4, #14]	@ 000a2a3e a173
.org 0xa2a40
	strb r1, [r4, #15]	@ 000a2a40 e173
.org 0xa2a42
	pop {r4}	@ 000a2a42 10bc
.org 0xa2a44
	pop {r0}	@ 000a2a44 01bc
.org 0xa2a46
	bx r0	@ 000a2a46 0047
