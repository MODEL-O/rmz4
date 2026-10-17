@ FUN_080ea1dc  entry 0x080ea1dc  size 78
.thumb
.org 0xea1dc
FUN_080ea1dc:
	push {r4, lr}	@ 000ea1dc 10b5
.org 0xea1de
	adds r4, r0, #0	@ 000ea1de 041c
.org 0xea1e0
	ldrb r0, [r4, #9]	@ 000ea1e0 607a
.org 0xea1e2
	cmp r0, #1	@ 000ea1e2 0128
.org 0xea1e4
	bne.n 0xea224	@ 000ea1e4 1ed1
.org 0xea1e6
	adds r1, r4, #0	@ 000ea1e6 211c
.org 0xea1e8
	adds r1, #184	@ 000ea1e8 b831
.org 0xea1ea
	ldrb r0, [r1, #0]	@ 000ea1ea 0878
.org 0xea1ec
	cmp r0, #19	@ 000ea1ec 1328
.org 0xea1ee
	beq.n 0xea224	@ 000ea1ee 19d0
.org 0xea1f0
	movs r2, #19	@ 000ea1f0 1322
.org 0xea1f2
	strb r2, [r1, #0]	@ 000ea1f2 0a70
.org 0xea1f4
	ldrb r0, [r4, #17]	@ 000ea1f4 607c
.org 0xea1f6
	cmp r0, #0	@ 000ea1f6 0028
.org 0xea1f8
	bne.n 0xea20c	@ 000ea1f8 08d1
.org 0xea1fa
	lsls r2, r2, #8	@ 000ea1fa 1202
.org 0xea1fc
	adds r0, r4, #0	@ 000ea1fc 201c
.org 0xea1fe
	adds r0, #112	@ 000ea1fe 7030
.org 0xea200
	ldrb r1, [r0, #0]	@ 000ea200 0178
.org 0xea202
	orrs r1, r2	@ 000ea202 1143
.org 0xea204
	adds r0, r4, #0	@ 000ea204 201c
.org 0xea206
	bl 0x1cf00	@ 000ea206 32f77bfe
.org 0xea20a
	b.n 0xea21e	@ 000ea20a 08e0
.org 0xea20c
	ldr r0, [r4, #40]	@ 000ea20c a06a
.org 0xea20e
	ldrb r2, [r0, #30]	@ 000ea20e 827f
.org 0xea210
	lsls r2, r2, #8	@ 000ea210 1202
.org 0xea212
	adds r0, #112	@ 000ea212 7030
.org 0xea214
	ldrb r1, [r0, #0]	@ 000ea214 0178
.org 0xea216
	orrs r1, r2	@ 000ea216 1143
.org 0xea218
	adds r0, r4, #0	@ 000ea218 201c
.org 0xea21a
	bl 0x1cf00	@ 000ea21a 32f771fe
.org 0xea21e
	adds r0, r4, #0	@ 000ea21e 201c
.org 0xea220
	bl 0x1cff0	@ 000ea220 32f7e6fe
.org 0xea224
	pop {r4}	@ 000ea224 10bc
.org 0xea226
	pop {r0}	@ 000ea226 01bc
.org 0xea228
	bx r0	@ 000ea228 0047
