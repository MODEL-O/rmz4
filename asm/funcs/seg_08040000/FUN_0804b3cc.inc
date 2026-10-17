@ FUN_0804b3cc  entry 0x0804b3cc  size 42
.thumb
.org 0x4b3cc
FUN_0804b3cc:
	push {lr}	@ 0004b3cc 00b5
.org 0x4b3ce
	adds r2, r0, #0	@ 0004b3ce 021c
.org 0x4b3d0
	ldr r0, [r2, #20]	@ 0004b3d0 5069
.org 0x4b3d2
	movs r1, #1	@ 0004b3d2 0121
.org 0x4b3d4
	ands r0, r1	@ 0004b3d4 0840
.org 0x4b3d6
	cmp r0, #0	@ 0004b3d6 0028
.org 0x4b3d8
	beq.n 0x4b3f2	@ 0004b3d8 0bd0
.org 0x4b3da
	ldr r0, [r2, #12]	@ 0004b3da d068
.org 0x4b3dc
	ldr r0, [r0, #44]	@ 0004b3dc c06a
.org 0x4b3de
	ldr r2, [r2, #44]	@ 0004b3de d26a
.org 0x4b3e0
	movs r3, #0	@ 0004b3e0 0023
.org 0x4b3e2
	ldr r1, [r0, #84]	@ 0004b3e2 416d
.org 0x4b3e4
	ldr r0, [r2, #84]	@ 0004b3e4 506d
.org 0x4b3e6
	cmp r1, r0	@ 0004b3e6 8142
.org 0x4b3e8
	ble.n 0x4b3ec	@ 0004b3e8 00dd
.org 0x4b3ea
	movs r3, #1	@ 0004b3ea 0123
.org 0x4b3ec
	adds r0, r2, #0	@ 0004b3ec 101c
.org 0x4b3ee
	adds r0, #188	@ 0004b3ee bc30
.org 0x4b3f0
	strb r3, [r0, #0]	@ 0004b3f0 0370
.org 0x4b3f2
	pop {r0}	@ 0004b3f2 01bc
.org 0x4b3f4
	bx r0	@ 0004b3f4 0047
