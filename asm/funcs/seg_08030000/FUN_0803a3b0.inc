@ FUN_0803a3b0  entry 0x0803a3b0  size 58
.thumb
.org 0x3a3b0
FUN_0803a3b0:
	push {lr}	@ 0003a3b0 00b5
.org 0x3a3b2
	mov ip, r0	@ 0003a3b2 8446
.org 0x3a3b4
	lsls r1, r1, #16	@ 0003a3b4 0904
.org 0x3a3b6
	lsrs r2, r1, #16	@ 0003a3b6 0a0c
.org 0x3a3b8
	ldrb r1, [r0, #30]	@ 0003a3b8 817f
.org 0x3a3ba
	lsls r1, r1, #8	@ 0003a3ba 0902
.org 0x3a3bc
	adds r0, #112	@ 0003a3bc 7030
.org 0x3a3be
	ldrb r0, [r0, #0]	@ 0003a3be 0078
.org 0x3a3c0
	orrs r0, r1	@ 0003a3c0 0843
.org 0x3a3c2
	cmp r0, r2	@ 0003a3c2 9042
.org 0x3a3c4
	beq.n 0x3a3e6	@ 0003a3c4 0fd0
.org 0x3a3c6
	movs r0, #182	@ 0003a3c6 b620
.org 0x3a3c8
	lsls r0, r0, #1	@ 0003a3c8 4000
.org 0x3a3ca
	add r0, ip	@ 0003a3ca 6044
.org 0x3a3cc
	ldrh r1, [r0, #0]	@ 0003a3cc 0188
.org 0x3a3ce
	cmp r1, r2	@ 0003a3ce 9142
.org 0x3a3d0
	bne.n 0x3a3e6	@ 0003a3d0 09d1
.org 0x3a3d2
	movs r0, #183	@ 0003a3d2 b720
.org 0x3a3d4
	lsls r0, r0, #1	@ 0003a3d4 4000
.org 0x3a3d6
	add r0, ip	@ 0003a3d6 6044
.org 0x3a3d8
	ldrb r2, [r0, #0]	@ 0003a3d8 0278
.org 0x3a3da
	ldr r0, [pc, #16]	@ 0003a3da 0448
.org 0x3a3dc
	add r0, ip	@ 0003a3dc 6044
.org 0x3a3de
	ldrb r3, [r0, #0]	@ 0003a3de 0378
.org 0x3a3e0
	mov r0, ip	@ 0003a3e0 6046
.org 0x3a3e2
	bl 0x1cfc8	@ 0003a3e2 e2f7f1fd
.org 0x3a3e6
	pop {r0}	@ 0003a3e6 01bc
.org 0x3a3e8
	bx r0	@ 0003a3e8 0047
