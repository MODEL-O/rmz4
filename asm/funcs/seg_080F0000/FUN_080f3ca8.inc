@ FUN_080f3ca8  entry 0x080f3ca8  size 84
.thumb
.org 0xf3ca8
FUN_080f3ca8:
	push {r4, r5, lr}	@ 000f3ca8 30b5
.org 0xf3caa
	adds r5, r0, #0	@ 000f3caa 051c
.org 0xf3cac
	lsls r1, r1, #24	@ 000f3cac 0906
.org 0xf3cae
	lsrs r4, r1, #24	@ 000f3cae 0c0e
.org 0xf3cb0
	ldr r0, [pc, #72]	@ 000f3cb0 1248
.org 0xf3cb2
	ldr r0, [r0, #0]	@ 000f3cb2 0068
.org 0xf3cb4
	bl 0x5500	@ 000f3cb4 11f724fc
.org 0xf3cb8
	adds r3, r0, #0	@ 000f3cb8 031c
.org 0xf3cba
	cmp r3, #0	@ 000f3cba 002b
.org 0xf3cbc
	beq.n 0xf3cf4	@ 000f3cbc 1ad0
.org 0xf3cbe
	adds r1, r3, #0	@ 000f3cbe 191c
.org 0xf3cc0
	adds r1, #37	@ 000f3cc0 2531
.org 0xf3cc2
	movs r2, #0	@ 000f3cc2 0022
.org 0xf3cc4
	movs r0, #30	@ 000f3cc4 1e20
.org 0xf3cc6
	strb r0, [r1, #0]	@ 000f3cc6 0870
.org 0xf3cc8
	ldr r1, [pc, #52]	@ 000f3cc8 0d49
.org 0xf3cca
	movs r0, #18	@ 000f3cca 1220
.org 0xf3ccc
	strb r0, [r3, #9]	@ 000f3ccc 5872
.org 0xf3cce
	ldr r0, [r1, #72]	@ 000f3cce 886c
.org 0xf3cd0
	ldr r0, [r0, #0]	@ 000f3cd0 0068
.org 0xf3cd2
	str r0, [r3, #20]	@ 000f3cd2 5861
.org 0xf3cd4
	movs r0, #0	@ 000f3cd4 0020
.org 0xf3cd6
	strh r2, [r3, #32]	@ 000f3cd6 1a84
.org 0xf3cd8
	adds r1, r3, #0	@ 000f3cd8 191c
.org 0xf3cda
	adds r1, #34	@ 000f3cda 2231
.org 0xf3cdc
	strb r0, [r1, #0]	@ 000f3cdc 0870
.org 0xf3cde
	ldrb r1, [r3, #11]	@ 000f3cde d97a
.org 0xf3ce0
	movs r0, #16	@ 000f3ce0 1020
.org 0xf3ce2
	orrs r0, r1	@ 000f3ce2 0843
.org 0xf3ce4
	strb r0, [r3, #11]	@ 000f3ce4 d872
.org 0xf3ce6
	ldrb r0, [r3, #28]	@ 000f3ce6 187f
.org 0xf3ce8
	strb r0, [r3, #29]	@ 000f3ce8 5877
.org 0xf3cea
	ldr r0, [r5, #0]	@ 000f3cea 2868
.org 0xf3cec
	ldr r1, [r5, #4]	@ 000f3cec 6968
.org 0xf3cee
	str r0, [r3, #84]	@ 000f3cee 5865
.org 0xf3cf0
	str r1, [r3, #88]	@ 000f3cf0 9965
.org 0xf3cf2
	strb r4, [r3, #16]	@ 000f3cf2 1c74
.org 0xf3cf4
	adds r0, r3, #0	@ 000f3cf4 181c
.org 0xf3cf6
	pop {r4, r5}	@ 000f3cf6 30bc
.org 0xf3cf8
	pop {r1}	@ 000f3cf8 02bc
.org 0xf3cfa
	bx r1	@ 000f3cfa 0847
