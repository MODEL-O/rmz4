@ FUN_080cab5c  entry 0x080cab5c  size 88
.thumb
.org 0xcab5c
FUN_080cab5c:
	push {r4, r5, lr}	@ 000cab5c 30b5
.org 0xcab5e
	adds r5, r0, #0	@ 000cab5e 051c
.org 0xcab60
	lsls r1, r1, #24	@ 000cab60 0906
.org 0xcab62
	lsrs r4, r1, #24	@ 000cab62 0c0e
.org 0xcab64
	ldr r0, [pc, #76]	@ 000cab64 1348
.org 0xcab66
	ldr r0, [r0, #0]	@ 000cab66 0068
.org 0xcab68
	bl 0x5500	@ 000cab68 3af7cafc
.org 0xcab6c
	adds r3, r0, #0	@ 000cab6c 031c
.org 0xcab6e
	cmp r3, #0	@ 000cab6e 002b
.org 0xcab70
	beq.n 0xcabae	@ 000cab70 1dd0
.org 0xcab72
	adds r1, r3, #0	@ 000cab72 191c
.org 0xcab74
	adds r1, #37	@ 000cab74 2531
.org 0xcab76
	movs r2, #0	@ 000cab76 0022
.org 0xcab78
	movs r0, #8	@ 000cab78 0820
.org 0xcab7a
	strb r0, [r1, #0]	@ 000cab7a 0870
.org 0xcab7c
	ldr r0, [pc, #56]	@ 000cab7c 0e48
.org 0xcab7e
	movs r1, #37	@ 000cab7e 2521
.org 0xcab80
	strb r1, [r3, #9]	@ 000cab80 5972
.org 0xcab82
	adds r0, #148	@ 000cab82 9430
.org 0xcab84
	ldr r0, [r0, #0]	@ 000cab84 0068
.org 0xcab86
	ldr r0, [r0, #0]	@ 000cab86 0068
.org 0xcab88
	str r0, [r3, #20]	@ 000cab88 5861
.org 0xcab8a
	movs r0, #0	@ 000cab8a 0020
.org 0xcab8c
	strh r2, [r3, #32]	@ 000cab8c 1a84
.org 0xcab8e
	adds r1, r3, #0	@ 000cab8e 191c
.org 0xcab90
	adds r1, #34	@ 000cab90 2231
.org 0xcab92
	strb r0, [r1, #0]	@ 000cab92 0870
.org 0xcab94
	ldr r0, [r5, #0]	@ 000cab94 2868
.org 0xcab96
	ldr r1, [r5, #4]	@ 000cab96 6968
.org 0xcab98
	str r0, [r3, #84]	@ 000cab98 5865
.org 0xcab9a
	str r1, [r3, #88]	@ 000cab9a 9965
.org 0xcab9c
	strb r4, [r3, #16]	@ 000cab9c 1c74
.org 0xcab9e
	cmp r4, #6	@ 000cab9e 062c
.org 0xcaba0
	bhi.n 0xcabae	@ 000caba0 05d8
.org 0xcaba2
	adds r1, r4, #1	@ 000caba2 611c
.org 0xcaba4
	lsls r1, r1, #24	@ 000caba4 0906
.org 0xcaba6
	lsrs r1, r1, #24	@ 000caba6 090e
.org 0xcaba8
	adds r0, r5, #0	@ 000caba8 281c
.org 0xcabaa
	bl 0xcab5c	@ 000cabaa fff7d7ff
.org 0xcabae
	pop {r4, r5}	@ 000cabae 30bc
.org 0xcabb0
	pop {r0}	@ 000cabb0 01bc
.org 0xcabb2
	bx r0	@ 000cabb2 0047
