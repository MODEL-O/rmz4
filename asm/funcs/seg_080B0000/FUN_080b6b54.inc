@ FUN_080b6b54  entry 0x080b6b54  size 108
.thumb
.org 0xb6b54
FUN_080b6b54:
	push {r4, r5, r6, lr}	@ 000b6b54 70b5
.org 0xb6b56
	adds r4, r0, #0	@ 000b6b56 041c
.org 0xb6b58
	adds r5, r1, #0	@ 000b6b58 0d1c
.org 0xb6b5a
	lsls r2, r2, #24	@ 000b6b5a 1206
.org 0xb6b5c
	lsrs r6, r2, #24	@ 000b6b5c 160e
.org 0xb6b5e
	ldr r0, [pc, #96]	@ 000b6b5e 1848
.org 0xb6b60
	ldr r0, [r0, #0]	@ 000b6b60 0068
.org 0xb6b62
	bl 0x5500	@ 000b6b62 4ef7cdfc
.org 0xb6b66
	adds r3, r0, #0	@ 000b6b66 031c
.org 0xb6b68
	cmp r3, #0	@ 000b6b68 002b
.org 0xb6b6a
	beq.n 0xb6bb8	@ 000b6b6a 25d0
.org 0xb6b6c
	adds r1, r3, #0	@ 000b6b6c 191c
.org 0xb6b6e
	adds r1, #37	@ 000b6b6e 2531
.org 0xb6b70
	movs r2, #0	@ 000b6b70 0022
.org 0xb6b72
	movs r0, #24	@ 000b6b72 1820
.org 0xb6b74
	strb r0, [r1, #0]	@ 000b6b74 0870
.org 0xb6b76
	ldr r0, [pc, #76]	@ 000b6b76 1348
.org 0xb6b78
	movs r1, #100	@ 000b6b78 6421
.org 0xb6b7a
	strb r1, [r3, #9]	@ 000b6b7a 5972
.org 0xb6b7c
	movs r1, #200	@ 000b6b7c c821
.org 0xb6b7e
	lsls r1, r1, #1	@ 000b6b7e 4900
.org 0xb6b80
	adds r0, r0, r1	@ 000b6b80 4018
.org 0xb6b82
	ldr r0, [r0, #0]	@ 000b6b82 0068
.org 0xb6b84
	ldr r0, [r0, #0]	@ 000b6b84 0068
.org 0xb6b86
	str r0, [r3, #20]	@ 000b6b86 5861
.org 0xb6b88
	movs r0, #0	@ 000b6b88 0020
.org 0xb6b8a
	strh r2, [r3, #32]	@ 000b6b8a 1a84
.org 0xb6b8c
	adds r1, r3, #0	@ 000b6b8c 191c
.org 0xb6b8e
	adds r1, #34	@ 000b6b8e 2231
.org 0xb6b90
	strb r0, [r1, #0]	@ 000b6b90 0870
.org 0xb6b92
	ldrb r1, [r3, #11]	@ 000b6b92 d97a
.org 0xb6b94
	movs r0, #16	@ 000b6b94 1020
.org 0xb6b96
	orrs r0, r1	@ 000b6b96 0843
.org 0xb6b98
	strb r0, [r3, #11]	@ 000b6b98 d872
.org 0xb6b9a
	ldrb r0, [r3, #28]	@ 000b6b9a 187f
.org 0xb6b9c
	strb r0, [r3, #29]	@ 000b6b9c 5877
.org 0xb6b9e
	str r4, [r3, #40]	@ 000b6b9e 9c62
.org 0xb6ba0
	ldr r0, [r5, #0]	@ 000b6ba0 2868
.org 0xb6ba2
	ldr r1, [r5, #4]	@ 000b6ba2 6968
.org 0xb6ba4
	str r0, [r3, #84]	@ 000b6ba4 5865
.org 0xb6ba6
	str r1, [r3, #88]	@ 000b6ba6 9965
.org 0xb6ba8
	movs r0, #1	@ 000b6ba8 0120
.org 0xb6baa
	strb r0, [r3, #16]	@ 000b6baa 1874
.org 0xb6bac
	strb r6, [r3, #17]	@ 000b6bac 5e74
.org 0xb6bae
	ldr r1, [r4, #40]	@ 000b6bae a16a
.org 0xb6bb0
	adds r1, #204	@ 000b6bb0 cc31
.org 0xb6bb2
	ldrh r0, [r1, #0]	@ 000b6bb2 0888
.org 0xb6bb4
	adds r0, #1	@ 000b6bb4 0130
.org 0xb6bb6
	strh r0, [r1, #0]	@ 000b6bb6 0880
.org 0xb6bb8
	adds r0, r3, #0	@ 000b6bb8 181c
.org 0xb6bba
	pop {r4, r5, r6}	@ 000b6bba 70bc
.org 0xb6bbc
	pop {r1}	@ 000b6bbc 02bc
.org 0xb6bbe
	bx r1	@ 000b6bbe 0847
