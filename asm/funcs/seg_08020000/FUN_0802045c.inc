@ FUN_0802045c  entry 0x0802045c  size 70
.thumb
.org 0x2045c
FUN_0802045c:
	push {r4, r5, r6, lr}	@ 0002045c 70b5
.org 0x2045e
	movs r1, #190	@ 0002045e be21
.org 0x20460
	lsls r1, r1, #1	@ 00020460 4900
.org 0x20462
	adds r5, r0, r1	@ 00020462 4518
.org 0x20464
	ldrb r0, [r5, #0]	@ 00020464 2878
.org 0x20466
	cmp r0, #0	@ 00020466 0028
.org 0x20468
	bne.n 0x2049a	@ 00020468 17d1
.org 0x2046a
	ldr r4, [pc, #56]	@ 0002046a 0e4c
.org 0x2046c
	ldrh r0, [r4, #8]	@ 0002046c 2089
.org 0x2046e
	movs r6, #1	@ 0002046e 0126
.org 0x20470
	orrs r0, r6	@ 00020470 3043
.org 0x20472
	strh r0, [r4, #8]	@ 00020472 2081
.org 0x20474
	ldr r2, [pc, #48]	@ 00020474 0c4a
.org 0x20476
	ldrb r1, [r2, #4]	@ 00020476 1179
.org 0x20478
	movs r0, #247	@ 00020478 f720
.org 0x2047a
	ands r0, r1	@ 0002047a 0840
.org 0x2047c
	strb r0, [r2, #4]	@ 0002047c 1071
.org 0x2047e
	ldrb r0, [r4, #2]	@ 0002047e a078
.org 0x20480
	cmp r0, #0	@ 00020480 0028
.org 0x20482
	bne.n 0x2049a	@ 00020482 0ad1
.org 0x20484
	movs r0, #1	@ 00020484 0120
.org 0x20486
	bl 0x1f63c	@ 00020486 fff7d9f8
.org 0x2048a
	strb r6, [r5, #0]	@ 0002048a 2e70
.org 0x2048c
	adds r0, r4, #0	@ 0002048c 201c
.org 0x2048e
	adds r0, #16	@ 0002048e 1030
.org 0x20490
	ldr r1, [pc, #24]	@ 00020490 0649
.org 0x20492
	ldr r1, [r1, #4]	@ 00020492 4968
.org 0x20494
	ldr r1, [r1, #4]	@ 00020494 4968
.org 0x20496
	bl 0x275f0	@ 00020496 07f0abf8
.org 0x2049a
	movs r0, #0	@ 0002049a 0020
.org 0x2049c
	pop {r4, r5, r6}	@ 0002049c 70bc
.org 0x2049e
	pop {r1}	@ 0002049e 02bc
.org 0x204a0
	bx r1	@ 000204a0 0847
