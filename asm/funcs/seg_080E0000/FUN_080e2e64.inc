@ FUN_080e2e64  entry 0x080e2e64  size 34
.thumb
.org 0xe2e64
FUN_080e2e64:
	push {lr}	@ 000e2e64 00b5
.org 0xe2e66
	adds r2, r0, #0	@ 000e2e66 021c
.org 0xe2e68
	adds r0, #115	@ 000e2e68 7330
.org 0xe2e6a
	ldrb r0, [r0, #0]	@ 000e2e6a 0078
.org 0xe2e6c
	cmp r0, #3	@ 000e2e6c 0328
.org 0xe2e6e
	bne.n 0xe2e82	@ 000e2e6e 08d1
.org 0xe2e70
	ldr r1, [pc, #20]	@ 000e2e70 0549
.org 0xe2e72
	ldrb r0, [r2, #9]	@ 000e2e72 507a
.org 0xe2e74
	lsls r0, r0, #2	@ 000e2e74 8000
.org 0xe2e76
	adds r0, r0, r1	@ 000e2e76 4018
.org 0xe2e78
	movs r1, #2	@ 000e2e78 0221
.org 0xe2e7a
	str r1, [r2, #12]	@ 000e2e7a d160
.org 0xe2e7c
	ldr r0, [r0, #0]	@ 000e2e7c 0068
.org 0xe2e7e
	ldr r0, [r0, #8]	@ 000e2e7e 8068
.org 0xe2e80
	str r0, [r2, #20]	@ 000e2e80 5061
.org 0xe2e82
	pop {r0}	@ 000e2e82 01bc
.org 0xe2e84
	bx r0	@ 000e2e84 0047
