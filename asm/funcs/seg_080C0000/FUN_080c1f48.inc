@ FUN_080c1f48  entry 0x080c1f48  size 68
.thumb
.org 0xc1f48
FUN_080c1f48:
	push {r4, r5, r6, lr}	@ 000c1f48 70b5
.org 0xc1f4a
	adds r4, r0, #0	@ 000c1f4a 041c
.org 0xc1f4c
	ldr r1, [pc, #60]	@ 000c1f4c 0f49
.org 0xc1f4e
	ldrb r0, [r4, #9]	@ 000c1f4e 607a
.org 0xc1f50
	lsls r0, r0, #2	@ 000c1f50 8000
.org 0xc1f52
	adds r0, r0, r1	@ 000c1f52 4018
.org 0xc1f54
	movs r1, #1	@ 000c1f54 0121
.org 0xc1f56
	str r1, [r4, #12]	@ 000c1f56 e160
.org 0xc1f58
	ldr r0, [r0, #0]	@ 000c1f58 0068
.org 0xc1f5a
	ldr r0, [r0, #4]	@ 000c1f5a 4068
.org 0xc1f5c
	str r0, [r4, #20]	@ 000c1f5c 6061
.org 0xc1f5e
	ldrb r1, [r4, #10]	@ 000c1f5e a17a
.org 0xc1f60
	movs r0, #4	@ 000c1f60 0420
.org 0xc1f62
	movs r6, #0	@ 000c1f62 0026
.org 0xc1f64
	orrs r0, r1	@ 000c1f64 0843
.org 0xc1f66
	strb r0, [r4, #10]	@ 000c1f66 a072
.org 0xc1f68
	adds r5, r4, #0	@ 000c1f68 251c
.org 0xc1f6a
	adds r5, #116	@ 000c1f6a 7435
.org 0xc1f6c
	ldr r1, [pc, #32]	@ 000c1f6c 0849
.org 0xc1f6e
	adds r2, r4, #0	@ 000c1f6e 221c
.org 0xc1f70
	adds r2, #84	@ 000c1f70 5432
.org 0xc1f72
	adds r0, r5, #0	@ 000c1f72 281c
.org 0xc1f74
	movs r3, #64	@ 000c1f74 4023
.org 0xc1f76
	bl 0x5760	@ 000c1f76 43f7f3fb
.org 0xc1f7a
	str r4, [r5, #44]	@ 000c1f7a ec62
.org 0xc1f7c
	str r6, [r5, #36]	@ 000c1f7c 6e62
.org 0xc1f7e
	strb r6, [r4, #18]	@ 000c1f7e a674
.org 0xc1f80
	adds r0, r4, #0	@ 000c1f80 201c
.org 0xc1f82
	bl 0xc1b90	@ 000c1f82 fff705fe
.org 0xc1f86
	pop {r4, r5, r6}	@ 000c1f86 70bc
.org 0xc1f88
	pop {r0}	@ 000c1f88 01bc
.org 0xc1f8a
	bx r0	@ 000c1f8a 0047
