@ FUN_080af1d4  entry 0x080af1d4  size 42
.thumb
.org 0xaf1d4
FUN_080af1d4:
	push {lr}	@ 000af1d4 00b5
.org 0xaf1d6
	adds r2, r0, #0	@ 000af1d6 021c
.org 0xaf1d8
	ldr r0, [r2, #20]	@ 000af1d8 5069
.org 0xaf1da
	movs r1, #1	@ 000af1da 0121
.org 0xaf1dc
	ands r0, r1	@ 000af1dc 0840
.org 0xaf1de
	cmp r0, #0	@ 000af1de 0028
.org 0xaf1e0
	beq.n 0xaf1fa	@ 000af1e0 0bd0
.org 0xaf1e2
	ldr r0, [r2, #12]	@ 000af1e2 d068
.org 0xaf1e4
	ldr r0, [r0, #44]	@ 000af1e4 c06a
.org 0xaf1e6
	ldr r2, [r2, #44]	@ 000af1e6 d26a
.org 0xaf1e8
	movs r3, #0	@ 000af1e8 0023
.org 0xaf1ea
	ldr r1, [r0, #84]	@ 000af1ea 416d
.org 0xaf1ec
	ldr r0, [r2, #84]	@ 000af1ec 506d
.org 0xaf1ee
	cmp r1, r0	@ 000af1ee 8142
.org 0xaf1f0
	ble.n 0xaf1f4	@ 000af1f0 00dd
.org 0xaf1f2
	movs r3, #1	@ 000af1f2 0123
.org 0xaf1f4
	adds r0, r2, #0	@ 000af1f4 101c
.org 0xaf1f6
	adds r0, #188	@ 000af1f6 bc30
.org 0xaf1f8
	strb r3, [r0, #0]	@ 000af1f8 0370
.org 0xaf1fa
	pop {r0}	@ 000af1fa 01bc
.org 0xaf1fc
	bx r0	@ 000af1fc 0047
