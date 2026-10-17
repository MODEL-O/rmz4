@ FUN_080e9494  entry 0x080e9494  size 38
.thumb
.org 0xe9494
FUN_080e9494:
	push {lr}	@ 000e9494 00b5
.org 0xe9496
	adds r2, r0, #0	@ 000e9496 021c
.org 0xe9498
	ldrb r0, [r2, #18]	@ 000e9498 907c
.org 0xe949a
	cmp r0, #0	@ 000e949a 0028
.org 0xe949c
	bne.n 0xe94b0	@ 000e949c 08d1
.org 0xe949e
	ldr r1, [pc, #28]	@ 000e949e 0749
.org 0xe94a0
	ldrb r0, [r2, #9]	@ 000e94a0 507a
.org 0xe94a2
	lsls r0, r0, #2	@ 000e94a2 8000
.org 0xe94a4
	adds r0, r0, r1	@ 000e94a4 4018
.org 0xe94a6
	movs r1, #2	@ 000e94a6 0221
.org 0xe94a8
	str r1, [r2, #12]	@ 000e94a8 d160
.org 0xe94aa
	ldr r0, [r0, #0]	@ 000e94aa 0068
.org 0xe94ac
	ldr r0, [r0, #8]	@ 000e94ac 8068
.org 0xe94ae
	str r0, [r2, #20]	@ 000e94ae 5061
.org 0xe94b0
	ldrb r0, [r2, #18]	@ 000e94b0 907c
.org 0xe94b2
	subs r0, #1	@ 000e94b2 0138
.org 0xe94b4
	strb r0, [r2, #18]	@ 000e94b4 9074
.org 0xe94b6
	pop {r0}	@ 000e94b6 01bc
.org 0xe94b8
	bx r0	@ 000e94b8 0047
