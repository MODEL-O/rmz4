@ FUN_080ebe18  entry 0x080ebe18  size 76
.thumb
.org 0xebe18
FUN_080ebe18:
	push {r4, r5, lr}	@ 000ebe18 30b5
.org 0xebe1a
	lsls r0, r0, #24	@ 000ebe1a 0006
.org 0xebe1c
	lsrs r5, r0, #24	@ 000ebe1c 050e
.org 0xebe1e
	ldr r0, [pc, #68]	@ 000ebe1e 1148
.org 0xebe20
	ldr r0, [r0, #0]	@ 000ebe20 0068
.org 0xebe22
	bl 0x5500	@ 000ebe22 19f76dfb
.org 0xebe26
	adds r4, r0, #0	@ 000ebe26 041c
.org 0xebe28
	cmp r4, #0	@ 000ebe28 002c
.org 0xebe2a
	beq.n 0xebe5c	@ 000ebe2a 17d0
.org 0xebe2c
	adds r1, r4, #0	@ 000ebe2c 211c
.org 0xebe2e
	adds r1, #37	@ 000ebe2e 2531
.org 0xebe30
	movs r3, #0	@ 000ebe30 0023
.org 0xebe32
	movs r0, #30	@ 000ebe32 1e20
.org 0xebe34
	strb r0, [r1, #0]	@ 000ebe34 0870
.org 0xebe36
	ldr r1, [pc, #48]	@ 000ebe36 0c49
.org 0xebe38
	movs r0, #6	@ 000ebe38 0620
.org 0xebe3a
	strb r0, [r4, #9]	@ 000ebe3a 6072
.org 0xebe3c
	ldr r0, [r1, #24]	@ 000ebe3c 8869
.org 0xebe3e
	ldr r0, [r0, #0]	@ 000ebe3e 0068
.org 0xebe40
	str r0, [r4, #20]	@ 000ebe40 6061
.org 0xebe42
	movs r2, #0	@ 000ebe42 0022
.org 0xebe44
	strh r3, [r4, #32]	@ 000ebe44 2384
.org 0xebe46
	adds r0, r4, #0	@ 000ebe46 201c
.org 0xebe48
	adds r0, #34	@ 000ebe48 2230
.org 0xebe4a
	strb r2, [r0, #0]	@ 000ebe4a 0270
.org 0xebe4c
	ldrb r1, [r4, #11]	@ 000ebe4c e17a
.org 0xebe4e
	movs r0, #16	@ 000ebe4e 1020
.org 0xebe50
	orrs r0, r1	@ 000ebe50 0843
.org 0xebe52
	strb r0, [r4, #11]	@ 000ebe52 e072
.org 0xebe54
	ldrb r0, [r4, #28]	@ 000ebe54 207f
.org 0xebe56
	strb r0, [r4, #29]	@ 000ebe56 6077
.org 0xebe58
	strb r5, [r4, #16]	@ 000ebe58 2574
.org 0xebe5a
	strb r2, [r4, #17]	@ 000ebe5a 6274
.org 0xebe5c
	adds r0, r4, #0	@ 000ebe5c 201c
.org 0xebe5e
	pop {r4, r5}	@ 000ebe5e 30bc
.org 0xebe60
	pop {r1}	@ 000ebe60 02bc
.org 0xebe62
	bx r1	@ 000ebe62 0847
