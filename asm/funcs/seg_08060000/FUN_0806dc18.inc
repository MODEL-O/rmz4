@ FUN_0806dc18  entry 0x0806dc18  size 76
.thumb
.org 0x6dc18
FUN_0806dc18:
	push {r4, r5, lr}	@ 0006dc18 30b5
.org 0x6dc1a
	adds r4, r0, #0	@ 0006dc1a 041c
.org 0x6dc1c
	ldrb r5, [r4, #15]	@ 0006dc1c e57b
.org 0x6dc1e
	cmp r5, #0	@ 0006dc1e 002d
.org 0x6dc20
	bne.n 0x6dc4a	@ 0006dc20 13d1
.org 0x6dc22
	adds r0, #116	@ 0006dc22 7430
.org 0x6dc24
	ldr r1, [pc, #60]	@ 0006dc24 0f49
.org 0x6dc26
	bl 0x5784	@ 0006dc26 97f7adfd
.org 0x6dc2a
	ldrb r1, [r4, #10]	@ 0006dc2a a17a
.org 0x6dc2c
	movs r0, #254	@ 0006dc2c fe20
.org 0x6dc2e
	ands r0, r1	@ 0006dc2e 0840
.org 0x6dc30
	strb r0, [r4, #10]	@ 0006dc30 a072
.org 0x6dc32
	adds r0, r4, #0	@ 0006dc32 201c
.org 0x6dc34
	adds r0, #195	@ 0006dc34 c330
.org 0x6dc36
	strb r5, [r0, #0]	@ 0006dc36 0570
.org 0x6dc38
	adds r2, r4, #0	@ 0006dc38 221c
.org 0x6dc3a
	adds r2, #73	@ 0006dc3a 4932
.org 0x6dc3c
	ldrb r0, [r2, #0]	@ 0006dc3c 1078
.org 0x6dc3e
	movs r1, #12	@ 0006dc3e 0c21
.org 0x6dc40
	orrs r0, r1	@ 0006dc40 0843
.org 0x6dc42
	strb r0, [r2, #0]	@ 0006dc42 1070
.org 0x6dc44
	ldrb r0, [r4, #15]	@ 0006dc44 e07b
.org 0x6dc46
	adds r0, #1	@ 0006dc46 0130
.org 0x6dc48
	strb r0, [r4, #15]	@ 0006dc48 e073
.org 0x6dc4a
	ldr r0, [r4, #24]	@ 0006dc4a a069
.org 0x6dc4c
	ldrb r1, [r0, #9]	@ 0006dc4c 417a
.org 0x6dc4e
	movs r2, #1	@ 0006dc4e 0122
.org 0x6dc50
	adds r0, r2, #0	@ 0006dc50 101c
.org 0x6dc52
	ands r0, r1	@ 0006dc52 0840
.org 0x6dc54
	cmp r0, #0	@ 0006dc54 0028
.org 0x6dc56
	beq.n 0x6dc5e	@ 0006dc56 02d0
.org 0x6dc58
	movs r0, #0	@ 0006dc58 0020
.org 0x6dc5a
	strb r2, [r4, #14]	@ 0006dc5a a273
.org 0x6dc5c
	strb r0, [r4, #15]	@ 0006dc5c e073
.org 0x6dc5e
	pop {r4, r5}	@ 0006dc5e 30bc
.org 0x6dc60
	pop {r0}	@ 0006dc60 01bc
.org 0x6dc62
	bx r0	@ 0006dc62 0047
