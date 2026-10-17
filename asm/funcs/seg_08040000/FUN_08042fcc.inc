@ FUN_08042fcc  entry 0x08042fcc  size 42
.thumb
.org 0x42fcc
FUN_08042fcc:
	push {lr}	@ 00042fcc 00b5
.org 0x42fce
	adds r2, r0, #0	@ 00042fce 021c
.org 0x42fd0
	ldr r0, [r2, #20]	@ 00042fd0 5069
.org 0x42fd2
	movs r1, #1	@ 00042fd2 0121
.org 0x42fd4
	ands r0, r1	@ 00042fd4 0840
.org 0x42fd6
	cmp r0, #0	@ 00042fd6 0028
.org 0x42fd8
	beq.n 0x42ff2	@ 00042fd8 0bd0
.org 0x42fda
	ldr r0, [r2, #12]	@ 00042fda d068
.org 0x42fdc
	ldr r0, [r0, #44]	@ 00042fdc c06a
.org 0x42fde
	ldr r2, [r2, #44]	@ 00042fde d26a
.org 0x42fe0
	movs r3, #0	@ 00042fe0 0023
.org 0x42fe2
	ldr r1, [r0, #84]	@ 00042fe2 416d
.org 0x42fe4
	ldr r0, [r2, #84]	@ 00042fe4 506d
.org 0x42fe6
	cmp r1, r0	@ 00042fe6 8142
.org 0x42fe8
	ble.n 0x42fec	@ 00042fe8 00dd
.org 0x42fea
	movs r3, #1	@ 00042fea 0123
.org 0x42fec
	adds r0, r2, #0	@ 00042fec 101c
.org 0x42fee
	adds r0, #188	@ 00042fee bc30
.org 0x42ff0
	strb r3, [r0, #0]	@ 00042ff0 0370
.org 0x42ff2
	pop {r0}	@ 00042ff2 01bc
.org 0x42ff4
	bx r0	@ 00042ff4 0047
