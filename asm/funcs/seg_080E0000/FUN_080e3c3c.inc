@ FUN_080e3c3c  entry 0x080e3c3c  size 34
.thumb
.org 0xe3c3c
FUN_080e3c3c:
	push {r4, lr}	@ 000e3c3c 10b5
.org 0xe3c3e
	adds r4, r0, #0	@ 000e3c3e 041c
.org 0xe3c40
	ldr r0, [r4, #88]	@ 000e3c40 a06d
.org 0xe3c42
	ldr r1, [pc, #28]	@ 000e3c42 0749
.org 0xe3c44
	adds r0, r0, r1	@ 000e3c44 4018
.org 0xe3c46
	str r0, [r4, #88]	@ 000e3c46 a065
.org 0xe3c48
	ldr r1, [pc, #24]	@ 000e3c48 0649
.org 0xe3c4a
	adds r0, r4, #0	@ 000e3c4a 201c
.org 0xe3c4c
	bl 0x1cf00	@ 000e3c4c 39f758f9
.org 0xe3c50
	movs r0, #180	@ 000e3c50 b420
.org 0xe3c52
	strb r0, [r4, #18]	@ 000e3c52 a074
.org 0xe3c54
	movs r0, #2	@ 000e3c54 0220
.org 0xe3c56
	strb r0, [r4, #13]	@ 000e3c56 6073
.org 0xe3c58
	pop {r4}	@ 000e3c58 10bc
.org 0xe3c5a
	pop {r0}	@ 000e3c5a 01bc
.org 0xe3c5c
	bx r0	@ 000e3c5c 0047
