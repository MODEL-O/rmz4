@ FUN_080fac64  entry 0x080fac64  size 56
.thumb
.org 0xfac64
FUN_080fac64:
	push {lr}	@ 000fac64 00b5
.org 0xfac66
	adds r2, r0, #0	@ 000fac66 021c
.org 0xfac68
	ldr r0, [r2, #20]	@ 000fac68 5069
.org 0xfac6a
	movs r1, #1	@ 000fac6a 0121
.org 0xfac6c
	ands r0, r1	@ 000fac6c 0840
.org 0xfac6e
	cmp r0, #0	@ 000fac6e 0028
.org 0xfac70
	beq.n 0xfac98	@ 000fac70 12d0
.org 0xfac72
	ldr r0, [r2, #12]	@ 000fac72 d068
.org 0xfac74
	ldr r1, [r0, #44]	@ 000fac74 c16a
.org 0xfac76
	ldr r2, [r2, #44]	@ 000fac76 d26a
.org 0xfac78
	movs r0, #8	@ 000fac78 0820
.org 0xfac7a
	ldrsb r0, [r1, r0]	@ 000fac7a 0856
.org 0xfac7c
	cmp r0, #3	@ 000fac7c 0328
.org 0xfac7e
	bne.n 0xfac98	@ 000fac7e 0bd1
.org 0xfac80
	ldrb r0, [r1, #9]	@ 000fac80 487a
.org 0xfac82
	cmp r0, #66	@ 000fac82 4228
.org 0xfac84
	bne.n 0xfac98	@ 000fac84 08d1
.org 0xfac86
	ldr r1, [pc, #20]	@ 000fac86 0549
.org 0xfac88
	ldrb r0, [r2, #9]	@ 000fac88 507a
.org 0xfac8a
	lsls r0, r0, #2	@ 000fac8a 8000
.org 0xfac8c
	adds r0, r0, r1	@ 000fac8c 4018
.org 0xfac8e
	movs r1, #2	@ 000fac8e 0221
.org 0xfac90
	str r1, [r2, #12]	@ 000fac90 d160
.org 0xfac92
	ldr r0, [r0, #0]	@ 000fac92 0068
.org 0xfac94
	ldr r0, [r0, #8]	@ 000fac94 8068
.org 0xfac96
	str r0, [r2, #20]	@ 000fac96 5061
.org 0xfac98
	pop {r0}	@ 000fac98 01bc
.org 0xfac9a
	bx r0	@ 000fac9a 0047
