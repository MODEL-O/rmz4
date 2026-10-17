@ FUN_0810bb50  entry 0x0810bb50  size 72
.thumb
.org 0x10bb50
FUN_0810bb50:
	push {r4, r5, lr}	@ 0010bb50 30b5
.org 0x10bb52
	adds r4, r0, #0	@ 0010bb52 041c
.org 0x10bb54
	ldr r0, [r4, #40]	@ 0010bb54 a06a
.org 0x10bb56
	ldr r1, [pc, #64]	@ 0010bb56 1049
.org 0x10bb58
	adds r0, r0, r1	@ 0010bb58 4018
.org 0x10bb5a
	ldr r0, [r0, #0]	@ 0010bb5a 0068
.org 0x10bb5c
	adds r5, r0, #0	@ 0010bb5c 051c
.org 0x10bb5e
	adds r5, #240	@ 0010bb5e f035
.org 0x10bb60
	ldrb r0, [r4, #18]	@ 0010bb60 a07c
.org 0x10bb62
	ldrb r2, [r5, #0]	@ 0010bb62 2a78
.org 0x10bb64
	cmp r0, r2	@ 0010bb64 9042
.org 0x10bb66
	beq.n 0x10bb6c	@ 0010bb66 01d0
.org 0x10bb68
	movs r0, #0	@ 0010bb68 0020
.org 0x10bb6a
	strb r0, [r4, #14]	@ 0010bb6a a073
.org 0x10bb6c
	ldrb r0, [r4, #14]	@ 0010bb6c a07b
.org 0x10bb6e
	cmp r0, #0	@ 0010bb6e 0028
.org 0x10bb70
	bne.n 0x10bb8c	@ 0010bb70 0cd1
.org 0x10bb72
	ldrb r1, [r5, #0]	@ 0010bb72 2978
.org 0x10bb74
	movs r2, #147	@ 0010bb74 9322
.org 0x10bb76
	lsls r2, r2, #8	@ 0010bb76 1202
.org 0x10bb78
	adds r0, r2, #0	@ 0010bb78 101c
.org 0x10bb7a
	orrs r1, r0	@ 0010bb7a 0143
.org 0x10bb7c
	adds r0, r4, #0	@ 0010bb7c 201c
.org 0x10bb7e
	bl 0x1cf00	@ 0010bb7e 11f7bff9
.org 0x10bb82
	ldrb r0, [r5, #0]	@ 0010bb82 2878
.org 0x10bb84
	strb r0, [r4, #18]	@ 0010bb84 a074
.org 0x10bb86
	ldrb r0, [r4, #14]	@ 0010bb86 a07b
.org 0x10bb88
	adds r0, #1	@ 0010bb88 0130
.org 0x10bb8a
	strb r0, [r4, #14]	@ 0010bb8a a073
.org 0x10bb8c
	adds r0, r4, #0	@ 0010bb8c 201c
.org 0x10bb8e
	bl 0x1cff0	@ 0010bb8e 11f72ffa
.org 0x10bb92
	pop {r4, r5}	@ 0010bb92 30bc
.org 0x10bb94
	pop {r0}	@ 0010bb94 01bc
.org 0x10bb96
	bx r0	@ 0010bb96 0047
