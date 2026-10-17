@ FUN_0810bc7c  entry 0x0810bc7c  size 72
.thumb
.org 0x10bc7c
FUN_0810bc7c:
	push {r4, r5, r6, lr}	@ 0010bc7c 70b5
.org 0x10bc7e
	adds r6, r0, #0	@ 0010bc7e 061c
.org 0x10bc80
	lsls r1, r1, #24	@ 0010bc80 0906
.org 0x10bc82
	lsrs r5, r1, #24	@ 0010bc82 0d0e
.org 0x10bc84
	lsls r2, r2, #24	@ 0010bc84 1206
.org 0x10bc86
	lsrs r4, r2, #24	@ 0010bc86 140e
.org 0x10bc88
	ldr r0, [pc, #56]	@ 0010bc88 0e48
.org 0x10bc8a
	ldr r0, [r0, #0]	@ 0010bc8a 0068
.org 0x10bc8c
	bl 0x5500	@ 0010bc8c f9f638fc
.org 0x10bc90
	adds r3, r0, #0	@ 0010bc90 031c
.org 0x10bc92
	cmp r3, #0	@ 0010bc92 002b
.org 0x10bc94
	beq.n 0x10bcbc	@ 0010bc94 12d0
.org 0x10bc96
	adds r1, r3, #0	@ 0010bc96 191c
.org 0x10bc98
	adds r1, #37	@ 0010bc98 2531
.org 0x10bc9a
	movs r2, #0	@ 0010bc9a 0022
.org 0x10bc9c
	movs r0, #16	@ 0010bc9c 1020
.org 0x10bc9e
	strb r0, [r1, #0]	@ 0010bc9e 0870
.org 0x10bca0
	ldr r1, [pc, #36]	@ 0010bca0 0949
.org 0x10bca2
	movs r0, #7	@ 0010bca2 0720
.org 0x10bca4
	strb r0, [r3, #9]	@ 0010bca4 5872
.org 0x10bca6
	ldr r0, [r1, #28]	@ 0010bca6 c869
.org 0x10bca8
	ldr r0, [r0, #0]	@ 0010bca8 0068
.org 0x10bcaa
	str r0, [r3, #20]	@ 0010bcaa 5861
.org 0x10bcac
	movs r0, #0	@ 0010bcac 0020
.org 0x10bcae
	strh r2, [r3, #32]	@ 0010bcae 1a84
.org 0x10bcb0
	adds r1, r3, #0	@ 0010bcb0 191c
.org 0x10bcb2
	adds r1, #34	@ 0010bcb2 2231
.org 0x10bcb4
	strb r0, [r1, #0]	@ 0010bcb4 0870
.org 0x10bcb6
	str r6, [r3, #40]	@ 0010bcb6 9e62
.org 0x10bcb8
	strb r5, [r3, #16]	@ 0010bcb8 1d74
.org 0x10bcba
	strb r4, [r3, #17]	@ 0010bcba 5c74
.org 0x10bcbc
	adds r0, r3, #0	@ 0010bcbc 181c
.org 0x10bcbe
	pop {r4, r5, r6}	@ 0010bcbe 70bc
.org 0x10bcc0
	pop {r1}	@ 0010bcc0 02bc
.org 0x10bcc2
	bx r1	@ 0010bcc2 0847
