@ FUN_080becfc  entry 0x080becfc  size 74
.thumb
.org 0xbecfc
FUN_080becfc:
	push {r4, r5, r6, lr}	@ 000becfc 70b5
.org 0xbecfe
	adds r5, r0, #0	@ 000becfe 051c
.org 0xbed00
	lsls r1, r1, #24	@ 000bed00 0906
.org 0xbed02
	lsrs r6, r1, #24	@ 000bed02 0e0e
.org 0xbed04
	ldr r0, [pc, #64]	@ 000bed04 1048
.org 0xbed06
	ldr r0, [r0, #0]	@ 000bed06 0068
.org 0xbed08
	bl 0x5500	@ 000bed08 46f7fafb
.org 0xbed0c
	adds r4, r0, #0	@ 000bed0c 041c
.org 0xbed0e
	cmp r4, #0	@ 000bed0e 002c
.org 0xbed10
	beq.n 0xbed3e	@ 000bed10 15d0
.org 0xbed12
	adds r1, r4, #0	@ 000bed12 211c
.org 0xbed14
	adds r1, #37	@ 000bed14 2531
.org 0xbed16
	movs r3, #0	@ 000bed16 0023
.org 0xbed18
	movs r0, #8	@ 000bed18 0820
.org 0xbed1a
	strb r0, [r1, #0]	@ 000bed1a 0870
.org 0xbed1c
	ldr r1, [pc, #44]	@ 000bed1c 0b49
.org 0xbed1e
	movs r0, #6	@ 000bed1e 0620
.org 0xbed20
	strb r0, [r4, #9]	@ 000bed20 6072
.org 0xbed22
	ldr r0, [r1, #24]	@ 000bed22 8869
.org 0xbed24
	ldr r0, [r0, #0]	@ 000bed24 0068
.org 0xbed26
	str r0, [r4, #20]	@ 000bed26 6061
.org 0xbed28
	movs r2, #0	@ 000bed28 0022
.org 0xbed2a
	strh r3, [r4, #32]	@ 000bed2a 2384
.org 0xbed2c
	adds r0, r4, #0	@ 000bed2c 201c
.org 0xbed2e
	adds r0, #34	@ 000bed2e 2230
.org 0xbed30
	strb r2, [r0, #0]	@ 000bed30 0270
.org 0xbed32
	ldr r0, [r5, #0]	@ 000bed32 2868
.org 0xbed34
	ldr r1, [r5, #4]	@ 000bed34 6968
.org 0xbed36
	str r0, [r4, #84]	@ 000bed36 6065
.org 0xbed38
	str r1, [r4, #88]	@ 000bed38 a165
.org 0xbed3a
	strb r2, [r4, #16]	@ 000bed3a 2274
.org 0xbed3c
	strb r6, [r4, #17]	@ 000bed3c 6674
.org 0xbed3e
	adds r0, r4, #0	@ 000bed3e 201c
.org 0xbed40
	pop {r4, r5, r6}	@ 000bed40 70bc
.org 0xbed42
	pop {r1}	@ 000bed42 02bc
.org 0xbed44
	bx r1	@ 000bed44 0847
