@ FUN_08126b04  entry 0x08126b04  size 106
.thumb
.org 0x126b04
FUN_08126b04:
	ldr r0, [pc, #104]	@ 00126b04 1a48
.org 0x126b06
	ldr r0, [r0, #0]	@ 00126b06 0068
.org 0x126b08
	ldr r2, [pc, #104]	@ 00126b08 1a4a
.org 0x126b0a
	ldr r3, [r0, #0]	@ 00126b0a 0368
.org 0x126b0c
	cmp r2, r3	@ 00126b0c 9a42
.org 0x126b0e
	beq.n 0x126b12	@ 00126b0e 00d0
.org 0x126b10
	bx lr	@ 00126b10 7047
.org 0x126b12
	adds r3, #1	@ 00126b12 0133
.org 0x126b14
	str r3, [r0, #0]	@ 00126b14 0360
.org 0x126b16
	push {r4, r5, r6, r7, lr}	@ 00126b16 f0b5
.org 0x126b18
	mov r1, r8	@ 00126b18 4146
.org 0x126b1a
	mov r2, r9	@ 00126b1a 4a46
.org 0x126b1c
	mov r3, sl	@ 00126b1c 5346
.org 0x126b1e
	mov r4, fp	@ 00126b1e 5c46
.org 0x126b20
	push {r0, r1, r2, r3, r4}	@ 00126b20 1fb4
.org 0x126b22
	sub sp, #24	@ 00126b22 86b0
.org 0x126b24
	ldrb r1, [r0, #12]	@ 00126b24 017b
.org 0x126b26
	cmp r1, #0	@ 00126b26 0029
.org 0x126b28
	beq.n 0x126b36	@ 00126b28 05d0
.org 0x126b2a
	ldr r2, [pc, #80]	@ 00126b2a 144a
.org 0x126b2c
	ldrb r2, [r2, #0]	@ 00126b2c 1278
.org 0x126b2e
	cmp r2, #160	@ 00126b2e a02a
.org 0x126b30
	bcs.n 0x126b34	@ 00126b30 00d2
.org 0x126b32
	adds r2, #228	@ 00126b32 e432
.org 0x126b34
	adds r1, r1, r2	@ 00126b34 8918
.org 0x126b36
	str r1, [sp, #20]	@ 00126b36 0591
.org 0x126b38
	ldr r3, [r0, #32]	@ 00126b38 036a
.org 0x126b3a
	cmp r3, #0	@ 00126b3a 002b
.org 0x126b3c
	beq.n 0x126b46	@ 00126b3c 03d0
.org 0x126b3e
	ldr r0, [r0, #36]	@ 00126b3e 406a
.org 0x126b40
	bl 0x126eb2	@ 00126b40 00f0b7f9
.org 0x126b44
	ldr r0, [sp, #24]	@ 00126b44 0698
.org 0x126b46
	ldr r3, [r0, #40]	@ 00126b46 836a
.org 0x126b48
	bl 0x126eb2	@ 00126b48 00f0b3f9
.org 0x126b4c
	ldr r0, [sp, #24]	@ 00126b4c 0698
.org 0x126b4e
	ldr r3, [r0, #16]	@ 00126b4e 0369
.org 0x126b50
	mov r8, r3	@ 00126b50 9846
.org 0x126b52
	ldr r5, [pc, #44]	@ 00126b52 0b4d
.org 0x126b54
	adds r5, r5, r0	@ 00126b54 2d18
.org 0x126b56
	ldrb r4, [r0, #4]	@ 00126b56 0479
.org 0x126b58
	subs r7, r4, #1	@ 00126b58 671e
.org 0x126b5a
	bls.n 0x126b66	@ 00126b5a 04d9
.org 0x126b5c
	ldrb r1, [r0, #11]	@ 00126b5c c17a
.org 0x126b5e
	subs r1, r1, r7	@ 00126b5e c91b
.org 0x126b60
	mov r2, r8	@ 00126b60 4246
.org 0x126b62
	muls r2, r1	@ 00126b62 4a43
.org 0x126b64
	adds r5, r5, r2	@ 00126b64 ad18
.org 0x126b66
	str r5, [sp, #8]	@ 00126b66 0295
.org 0x126b68
	ldr r6, [pc, #24]	@ 00126b68 064e
.org 0x126b6a
	ldr r3, [pc, #12]	@ 00126b6a 034b
.org 0x126b6c
	bx r3	@ 00126b6c 1847
