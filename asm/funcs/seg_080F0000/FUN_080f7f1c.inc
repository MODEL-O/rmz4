@ FUN_080f7f1c  entry 0x080f7f1c  size 80
.thumb
.org 0xf7f1c
FUN_080f7f1c:
	push {r4, r5, lr}	@ 000f7f1c 30b5
.org 0xf7f1e
	lsls r0, r0, #24	@ 000f7f1e 0006
.org 0xf7f20
	lsrs r5, r0, #24	@ 000f7f20 050e
.org 0xf7f22
	lsls r1, r1, #24	@ 000f7f22 0906
.org 0xf7f24
	lsrs r4, r1, #24	@ 000f7f24 0c0e
.org 0xf7f26
	ldr r0, [pc, #68]	@ 000f7f26 1148
.org 0xf7f28
	ldr r0, [r0, #0]	@ 000f7f28 0068
.org 0xf7f2a
	bl 0x5500	@ 000f7f2a 0df7e9fa
.org 0xf7f2e
	adds r3, r0, #0	@ 000f7f2e 031c
.org 0xf7f30
	cmp r3, #0	@ 000f7f30 002b
.org 0xf7f32
	beq.n 0xf7f64	@ 000f7f32 17d0
.org 0xf7f34
	adds r1, r3, #0	@ 000f7f34 191c
.org 0xf7f36
	adds r1, #37	@ 000f7f36 2531
.org 0xf7f38
	movs r2, #0	@ 000f7f38 0022
.org 0xf7f3a
	movs r0, #30	@ 000f7f3a 1e20
.org 0xf7f3c
	strb r0, [r1, #0]	@ 000f7f3c 0870
.org 0xf7f3e
	ldr r1, [pc, #48]	@ 000f7f3e 0c49
.org 0xf7f40
	movs r0, #29	@ 000f7f40 1d20
.org 0xf7f42
	strb r0, [r3, #9]	@ 000f7f42 5872
.org 0xf7f44
	ldr r0, [r1, #116]	@ 000f7f44 486f
.org 0xf7f46
	ldr r0, [r0, #0]	@ 000f7f46 0068
.org 0xf7f48
	str r0, [r3, #20]	@ 000f7f48 5861
.org 0xf7f4a
	movs r0, #0	@ 000f7f4a 0020
.org 0xf7f4c
	strh r2, [r3, #32]	@ 000f7f4c 1a84
.org 0xf7f4e
	adds r1, r3, #0	@ 000f7f4e 191c
.org 0xf7f50
	adds r1, #34	@ 000f7f50 2231
.org 0xf7f52
	strb r0, [r1, #0]	@ 000f7f52 0870
.org 0xf7f54
	ldrb r1, [r3, #11]	@ 000f7f54 d97a
.org 0xf7f56
	movs r0, #16	@ 000f7f56 1020
.org 0xf7f58
	orrs r0, r1	@ 000f7f58 0843
.org 0xf7f5a
	strb r0, [r3, #11]	@ 000f7f5a d872
.org 0xf7f5c
	ldrb r0, [r3, #28]	@ 000f7f5c 187f
.org 0xf7f5e
	strb r0, [r3, #29]	@ 000f7f5e 5877
.org 0xf7f60
	strb r5, [r3, #16]	@ 000f7f60 1d74
.org 0xf7f62
	strb r4, [r3, #17]	@ 000f7f62 5c74
.org 0xf7f64
	adds r0, r3, #0	@ 000f7f64 181c
.org 0xf7f66
	pop {r4, r5}	@ 000f7f66 30bc
.org 0xf7f68
	pop {r1}	@ 000f7f68 02bc
.org 0xf7f6a
	bx r1	@ 000f7f6a 0847
