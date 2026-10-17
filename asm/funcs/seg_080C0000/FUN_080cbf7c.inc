@ FUN_080cbf7c  entry 0x080cbf7c  size 80
.thumb
.org 0xcbf7c
FUN_080cbf7c:
	push {r4, r5, r6, lr}	@ 000cbf7c 70b5
.org 0xcbf7e
	adds r4, r0, #0	@ 000cbf7e 041c
.org 0xcbf80
	lsls r1, r1, #24	@ 000cbf80 0906
.org 0xcbf82
	lsrs r6, r1, #24	@ 000cbf82 0e0e
.org 0xcbf84
	lsls r2, r2, #24	@ 000cbf84 1206
.org 0xcbf86
	lsrs r5, r2, #24	@ 000cbf86 150e
.org 0xcbf88
	ldr r0, [pc, #64]	@ 000cbf88 1048
.org 0xcbf8a
	ldr r0, [r0, #0]	@ 000cbf8a 0068
.org 0xcbf8c
	bl 0x5500	@ 000cbf8c 39f7b8fa
.org 0xcbf90
	adds r3, r0, #0	@ 000cbf90 031c
.org 0xcbf92
	cmp r3, #0	@ 000cbf92 002b
.org 0xcbf94
	beq.n 0xcbfc6	@ 000cbf94 17d0
.org 0xcbf96
	adds r1, r3, #0	@ 000cbf96 191c
.org 0xcbf98
	adds r1, #37	@ 000cbf98 2531
.org 0xcbf9a
	movs r2, #0	@ 000cbf9a 0022
.org 0xcbf9c
	movs r0, #8	@ 000cbf9c 0820
.org 0xcbf9e
	strb r0, [r1, #0]	@ 000cbf9e 0870
.org 0xcbfa0
	ldr r0, [pc, #44]	@ 000cbfa0 0b48
.org 0xcbfa2
	movs r1, #42	@ 000cbfa2 2a21
.org 0xcbfa4
	strb r1, [r3, #9]	@ 000cbfa4 5972
.org 0xcbfa6
	adds r0, #168	@ 000cbfa6 a830
.org 0xcbfa8
	ldr r0, [r0, #0]	@ 000cbfa8 0068
.org 0xcbfaa
	ldr r0, [r0, #0]	@ 000cbfaa 0068
.org 0xcbfac
	str r0, [r3, #20]	@ 000cbfac 5861
.org 0xcbfae
	movs r0, #0	@ 000cbfae 0020
.org 0xcbfb0
	strh r2, [r3, #32]	@ 000cbfb0 1a84
.org 0xcbfb2
	adds r1, r3, #0	@ 000cbfb2 191c
.org 0xcbfb4
	adds r1, #34	@ 000cbfb4 2231
.org 0xcbfb6
	strb r0, [r1, #0]	@ 000cbfb6 0870
.org 0xcbfb8
	str r4, [r3, #40]	@ 000cbfb8 9c62
.org 0xcbfba
	ldr r0, [r4, #84]	@ 000cbfba 606d
.org 0xcbfbc
	ldr r1, [r4, #88]	@ 000cbfbc a16d
.org 0xcbfbe
	str r0, [r3, #84]	@ 000cbfbe 5865
.org 0xcbfc0
	str r1, [r3, #88]	@ 000cbfc0 9965
.org 0xcbfc2
	strb r6, [r3, #16]	@ 000cbfc2 1e74
.org 0xcbfc4
	strb r5, [r3, #17]	@ 000cbfc4 5d74
.org 0xcbfc6
	pop {r4, r5, r6}	@ 000cbfc6 70bc
.org 0xcbfc8
	pop {r0}	@ 000cbfc8 01bc
.org 0xcbfca
	bx r0	@ 000cbfca 0047
