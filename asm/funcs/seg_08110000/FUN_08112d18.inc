@ FUN_08112d18  entry 0x08112d18  size 60
.thumb
.org 0x112d18
FUN_08112d18:
	push {r4, r5, r6, r7, lr}	@ 00112d18 f0b5
.org 0x112d1a
	adds r6, r0, #0	@ 00112d1a 061c
.org 0x112d1c
	ldr r0, [pc, #52]	@ 00112d1c 0d48
.org 0x112d1e
	adds r4, r6, r0	@ 00112d1e 3418
.org 0x112d20
	ldr r0, [pc, #52]	@ 00112d20 0d48
.org 0x112d22
	movs r1, #180	@ 00112d22 b421
.org 0x112d24
	lsls r1, r1, #1	@ 00112d24 4900
.org 0x112d26
	adds r7, r0, r1	@ 00112d26 4718
.org 0x112d28
	ldr r0, [r7, #0]	@ 00112d28 3868
.org 0x112d2a
	str r0, [r4, #4]	@ 00112d2a 6060
.org 0x112d2c
	movs r5, #1	@ 00112d2c 0125
.org 0x112d2e
	negs r5, r5	@ 00112d2e 6d42
.org 0x112d30
	cmp r0, r5	@ 00112d30 a842
.org 0x112d32
	beq.n 0x112d3e	@ 00112d32 04d0
.org 0x112d34
	lsls r0, r0, #16	@ 00112d34 0004
.org 0x112d36
	lsrs r0, r0, #16	@ 00112d36 000c
.org 0x112d38
	bl 0x2a98	@ 00112d38 eff6aefe
.org 0x112d3c
	str r5, [r7, #0]	@ 00112d3c 3d60
.org 0x112d3e
	movs r0, #1	@ 00112d3e 0120
.org 0x112d40
	strb r0, [r4, #1]	@ 00112d40 6070
.org 0x112d42
	ldr r0, [pc, #24]	@ 00112d42 0648
.org 0x112d44
	str r0, [r4, #8]	@ 00112d44 a060
.org 0x112d46
	adds r0, r6, #0	@ 00112d46 301c
.org 0x112d48
	movs r1, #5	@ 00112d48 0521
.org 0x112d4a
	bl 0x1126ac	@ 00112d4a fff7affc
.org 0x112d4e
	pop {r4, r5, r6, r7}	@ 00112d4e f0bc
.org 0x112d50
	pop {r0}	@ 00112d50 01bc
.org 0x112d52
	bx r0	@ 00112d52 0047
