@ FUN_080e2c6c  entry 0x080e2c6c  size 20
.thumb
.org 0xe2c6c
FUN_080e2c6c:
	push {r4, lr}	@ 000e2c6c 10b5
.org 0xe2c6e
	adds r4, r0, #0	@ 000e2c6e 041c
.org 0xe2c70
	ldr r1, [pc, #12]	@ 000e2c70 0349
.org 0xe2c72
	bl 0x1cf00	@ 000e2c72 3af745f9
.org 0xe2c76
	movs r0, #3	@ 000e2c76 0320
.org 0xe2c78
	strb r0, [r4, #13]	@ 000e2c78 6073
.org 0xe2c7a
	pop {r4}	@ 000e2c7a 10bc
.org 0xe2c7c
	pop {r0}	@ 000e2c7c 01bc
.org 0xe2c7e
	bx r0	@ 000e2c7e 0047
