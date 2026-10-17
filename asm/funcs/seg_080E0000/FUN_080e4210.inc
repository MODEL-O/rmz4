@ FUN_080e4210  entry 0x080e4210  size 82
.thumb
.org 0xe4210
FUN_080e4210:
	push {r4, r5, r6, lr}	@ 000e4210 70b5
.org 0xe4212
	adds r4, r0, #0	@ 000e4212 041c
.org 0xe4214
	lsls r1, r1, #24	@ 000e4214 0906
.org 0xe4216
	lsrs r6, r1, #24	@ 000e4216 0e0e
.org 0xe4218
	lsls r2, r2, #24	@ 000e4218 1206
.org 0xe421a
	lsrs r5, r2, #24	@ 000e421a 150e
.org 0xe421c
	ldr r0, [pc, #68]	@ 000e421c 1148
.org 0xe421e
	ldr r0, [r0, #0]	@ 000e421e 0068
.org 0xe4220
	bl 0x5500	@ 000e4220 21f76ef9
.org 0xe4224
	adds r3, r0, #0	@ 000e4224 031c
.org 0xe4226
	cmp r3, #0	@ 000e4226 002b
.org 0xe4228
	beq.n 0xe425c	@ 000e4228 18d0
.org 0xe422a
	adds r1, r3, #0	@ 000e422a 191c
.org 0xe422c
	adds r1, #37	@ 000e422c 2531
.org 0xe422e
	movs r2, #0	@ 000e422e 0022
.org 0xe4230
	movs r0, #1	@ 000e4230 0120
.org 0xe4232
	strb r0, [r1, #0]	@ 000e4232 0870
.org 0xe4234
	ldr r0, [pc, #48]	@ 000e4234 0c48
.org 0xe4236
	movs r1, #73	@ 000e4236 4921
.org 0xe4238
	strb r1, [r3, #9]	@ 000e4238 5972
.org 0xe423a
	adds r1, #219	@ 000e423a db31
.org 0xe423c
	adds r0, r0, r1	@ 000e423c 4018
.org 0xe423e
	ldr r0, [r0, #0]	@ 000e423e 0068
.org 0xe4240
	ldr r0, [r0, #0]	@ 000e4240 0068
.org 0xe4242
	str r0, [r3, #20]	@ 000e4242 5861
.org 0xe4244
	movs r0, #0	@ 000e4244 0020
.org 0xe4246
	strh r2, [r3, #32]	@ 000e4246 1a84
.org 0xe4248
	adds r1, r3, #0	@ 000e4248 191c
.org 0xe424a
	adds r1, #34	@ 000e424a 2231
.org 0xe424c
	strb r0, [r1, #0]	@ 000e424c 0870
.org 0xe424e
	str r4, [r3, #40]	@ 000e424e 9c62
.org 0xe4250
	ldr r0, [r4, #84]	@ 000e4250 606d
.org 0xe4252
	ldr r1, [r4, #88]	@ 000e4252 a16d
.org 0xe4254
	str r0, [r3, #84]	@ 000e4254 5865
.org 0xe4256
	str r1, [r3, #88]	@ 000e4256 9965
.org 0xe4258
	strb r6, [r3, #16]	@ 000e4258 1e74
.org 0xe425a
	strb r5, [r3, #17]	@ 000e425a 5d74
.org 0xe425c
	pop {r4, r5, r6}	@ 000e425c 70bc
.org 0xe425e
	pop {r0}	@ 000e425e 01bc
.org 0xe4260
	bx r0	@ 000e4260 0047
