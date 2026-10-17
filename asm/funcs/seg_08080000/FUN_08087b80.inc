@ FUN_08087b80  entry 0x08087b80  size 90
.thumb
.org 0x87b80
FUN_08087b80:
	push {r4, lr}	@ 00087b80 10b5
.org 0x87b82
	sub sp, #8	@ 00087b82 82b0
.org 0x87b84
	adds r4, r0, #0	@ 00087b84 041c
.org 0x87b86
	ldrb r1, [r4, #15]	@ 00087b86 e17b
.org 0x87b88
	cmp r1, #0	@ 00087b88 0029
.org 0x87b8a
	bne.n 0x87bba	@ 00087b8a 16d1
.org 0x87b8c
	movs r0, #128	@ 00087b8c 8020
.org 0x87b8e
	lsls r0, r0, #4	@ 00087b8e 0001
.org 0x87b90
	str r0, [sp, #0]	@ 00087b90 0090
.org 0x87b92
	str r1, [sp, #4]	@ 00087b92 0191
.org 0x87b94
	adds r0, r4, #0	@ 00087b94 201c
.org 0x87b96
	adds r0, #84	@ 00087b96 5430
.org 0x87b98
	mov r1, sp	@ 00087b98 6946
.org 0x87b9a
	movs r2, #2	@ 00087b9a 0222
.org 0x87b9c
	movs r3, #3	@ 00087b9c 0323
.org 0x87b9e
	bl 0x88ff0	@ 00087b9e 01f027fa
.org 0x87ba2
	adds r0, r4, #0	@ 00087ba2 201c
.org 0x87ba4
	adds r0, #116	@ 00087ba4 7430
.org 0x87ba6
	ldr r1, [pc, #52]	@ 00087ba6 0d49
.org 0x87ba8
	bl 0x5784	@ 00087ba8 7df7ecfd
.org 0x87bac
	ldr r1, [pc, #48]	@ 00087bac 0c49
.org 0x87bae
	adds r0, r4, #0	@ 00087bae 201c
.org 0x87bb0
	bl 0x1cf00	@ 00087bb0 95f7a6f9
.org 0x87bb4
	ldrb r0, [r4, #15]	@ 00087bb4 e07b
.org 0x87bb6
	adds r0, #1	@ 00087bb6 0130
.org 0x87bb8
	strb r0, [r4, #15]	@ 00087bb8 e073
.org 0x87bba
	adds r0, r4, #0	@ 00087bba 201c
.org 0x87bbc
	bl 0x1cff0	@ 00087bbc 95f718fa
.org 0x87bc0
	adds r0, r4, #0	@ 00087bc0 201c
.org 0x87bc2
	adds r0, #115	@ 00087bc2 7330
.org 0x87bc4
	ldrb r0, [r0, #0]	@ 00087bc4 0078
.org 0x87bc6
	cmp r0, #3	@ 00087bc6 0328
.org 0x87bc8
	bne.n 0x87bd2	@ 00087bc8 03d1
.org 0x87bca
	movs r1, #0	@ 00087bca 0021
.org 0x87bcc
	movs r0, #5	@ 00087bcc 0520
.org 0x87bce
	strb r0, [r4, #14]	@ 00087bce a073
.org 0x87bd0
	strb r1, [r4, #15]	@ 00087bd0 e173
.org 0x87bd2
	add sp, #8	@ 00087bd2 02b0
.org 0x87bd4
	pop {r4}	@ 00087bd4 10bc
.org 0x87bd6
	pop {r0}	@ 00087bd6 01bc
.org 0x87bd8
	bx r0	@ 00087bd8 0047
