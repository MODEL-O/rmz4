@ FUN_080d9b9c  entry 0x080d9b9c  size 88
.thumb
.org 0xd9b9c
FUN_080d9b9c:
	push {r4, r5, r6, r7, lr}	@ 000d9b9c f0b5
.org 0xd9b9e
	adds r6, r0, #0	@ 000d9b9e 061c
.org 0xd9ba0
	adds r7, r1, #0	@ 000d9ba0 0f1c
.org 0xd9ba2
	lsls r2, r2, #24	@ 000d9ba2 1206
.org 0xd9ba4
	lsrs r5, r2, #24	@ 000d9ba4 150e
.org 0xd9ba6
	lsls r3, r3, #24	@ 000d9ba6 1b06
.org 0xd9ba8
	lsrs r4, r3, #24	@ 000d9ba8 1c0e
.org 0xd9baa
	ldr r0, [pc, #72]	@ 000d9baa 1248
.org 0xd9bac
	ldr r0, [r0, #0]	@ 000d9bac 0068
.org 0xd9bae
	bl 0x5500	@ 000d9bae 2bf7a7fc
.org 0xd9bb2
	adds r3, r0, #0	@ 000d9bb2 031c
.org 0xd9bb4
	cmp r3, #0	@ 000d9bb4 002b
.org 0xd9bb6
	beq.n 0xd9bec	@ 000d9bb6 19d0
.org 0xd9bb8
	adds r1, r3, #0	@ 000d9bb8 191c
.org 0xd9bba
	adds r1, #37	@ 000d9bba 2531
.org 0xd9bbc
	movs r2, #0	@ 000d9bbc 0022
.org 0xd9bbe
	movs r0, #1	@ 000d9bbe 0120
.org 0xd9bc0
	strb r0, [r1, #0]	@ 000d9bc0 0870
.org 0xd9bc2
	ldr r1, [pc, #52]	@ 000d9bc2 0d49
.org 0xd9bc4
	movs r0, #31	@ 000d9bc4 1f20
.org 0xd9bc6
	strb r0, [r3, #9]	@ 000d9bc6 5872
.org 0xd9bc8
	ldr r0, [r1, #124]	@ 000d9bc8 c86f
.org 0xd9bca
	ldr r0, [r0, #0]	@ 000d9bca 0068
.org 0xd9bcc
	str r0, [r3, #20]	@ 000d9bcc 5861
.org 0xd9bce
	movs r0, #0	@ 000d9bce 0020
.org 0xd9bd0
	strh r2, [r3, #32]	@ 000d9bd0 1a84
.org 0xd9bd2
	adds r1, r3, #0	@ 000d9bd2 191c
.org 0xd9bd4
	adds r1, #34	@ 000d9bd4 2231
.org 0xd9bd6
	strb r0, [r1, #0]	@ 000d9bd6 0870
.org 0xd9bd8
	ldr r0, [r6, #0]	@ 000d9bd8 3068
.org 0xd9bda
	ldr r1, [r6, #4]	@ 000d9bda 7168
.org 0xd9bdc
	str r0, [r3, #84]	@ 000d9bdc 5865
.org 0xd9bde
	str r1, [r3, #88]	@ 000d9bde 9965
.org 0xd9be0
	ldr r0, [r7, #0]	@ 000d9be0 3868
.org 0xd9be2
	ldr r1, [r7, #4]	@ 000d9be2 7968
.org 0xd9be4
	str r0, [r3, #92]	@ 000d9be4 d865
.org 0xd9be6
	str r1, [r3, #96]	@ 000d9be6 1966
.org 0xd9be8
	strb r5, [r3, #16]	@ 000d9be8 1d74
.org 0xd9bea
	strb r4, [r3, #17]	@ 000d9bea 5c74
.org 0xd9bec
	adds r0, r3, #0	@ 000d9bec 181c
.org 0xd9bee
	pop {r4, r5, r6, r7}	@ 000d9bee f0bc
.org 0xd9bf0
	pop {r1}	@ 000d9bf0 02bc
.org 0xd9bf2
	bx r1	@ 000d9bf2 0847
