@ FUN_080a3a88  entry 0x080a3a88  size 124
.thumb
.org 0xa3a88
FUN_080a3a88:
	push {r4, r5, r6, r7, lr}	@ 000a3a88 f0b5
.org 0xa3a8a
	mov r7, r8	@ 000a3a8a 4746
.org 0xa3a8c
	push {r7}	@ 000a3a8c 80b4
.org 0xa3a8e
	adds r4, r0, #0	@ 000a3a8e 041c
.org 0xa3a90
	mov r8, r1	@ 000a3a90 8846
.org 0xa3a92
	ldr r0, [sp, #24]	@ 000a3a92 0698
.org 0xa3a94
	lsls r2, r2, #24	@ 000a3a94 1206
.org 0xa3a96
	lsrs r7, r2, #24	@ 000a3a96 170e
.org 0xa3a98
	lsls r3, r3, #24	@ 000a3a98 1b06
.org 0xa3a9a
	lsrs r6, r3, #24	@ 000a3a9a 1e0e
.org 0xa3a9c
	lsls r0, r0, #24	@ 000a3a9c 0006
.org 0xa3a9e
	lsrs r5, r0, #24	@ 000a3a9e 050e
.org 0xa3aa0
	ldr r0, [pc, #96]	@ 000a3aa0 1848
.org 0xa3aa2
	ldr r0, [r0, #0]	@ 000a3aa2 0068
.org 0xa3aa4
	bl 0x5500	@ 000a3aa4 61f72cfd
.org 0xa3aa8
	adds r3, r0, #0	@ 000a3aa8 031c
.org 0xa3aaa
	cmp r3, #0	@ 000a3aaa 002b
.org 0xa3aac
	beq.n 0xa3af8	@ 000a3aac 24d0
.org 0xa3aae
	adds r1, r3, #0	@ 000a3aae 191c
.org 0xa3ab0
	adds r1, #37	@ 000a3ab0 2531
.org 0xa3ab2
	movs r2, #0	@ 000a3ab2 0022
.org 0xa3ab4
	movs r0, #24	@ 000a3ab4 1820
.org 0xa3ab6
	strb r0, [r1, #0]	@ 000a3ab6 0870
.org 0xa3ab8
	ldr r0, [pc, #76]	@ 000a3ab8 1348
.org 0xa3aba
	movs r1, #58	@ 000a3aba 3a21
.org 0xa3abc
	strb r1, [r3, #9]	@ 000a3abc 5972
.org 0xa3abe
	adds r0, #232	@ 000a3abe e830
.org 0xa3ac0
	ldr r0, [r0, #0]	@ 000a3ac0 0068
.org 0xa3ac2
	ldr r0, [r0, #0]	@ 000a3ac2 0068
.org 0xa3ac4
	str r0, [r3, #20]	@ 000a3ac4 5861
.org 0xa3ac6
	movs r0, #0	@ 000a3ac6 0020
.org 0xa3ac8
	strh r2, [r3, #32]	@ 000a3ac8 1a84
.org 0xa3aca
	adds r1, r3, #0	@ 000a3aca 191c
.org 0xa3acc
	adds r1, #34	@ 000a3acc 2231
.org 0xa3ace
	strb r0, [r1, #0]	@ 000a3ace 0870
.org 0xa3ad0
	ldrb r1, [r3, #11]	@ 000a3ad0 d97a
.org 0xa3ad2
	movs r0, #16	@ 000a3ad2 1020
.org 0xa3ad4
	orrs r0, r1	@ 000a3ad4 0843
.org 0xa3ad6
	strb r0, [r3, #11]	@ 000a3ad6 d872
.org 0xa3ad8
	ldrb r0, [r3, #28]	@ 000a3ad8 187f
.org 0xa3ada
	strb r0, [r3, #29]	@ 000a3ada 5877
.org 0xa3adc
	str r4, [r3, #40]	@ 000a3adc 9c62
.org 0xa3ade
	mov r2, r8	@ 000a3ade 4246
.org 0xa3ae0
	ldr r0, [r2, #0]	@ 000a3ae0 1068
.org 0xa3ae2
	ldr r1, [r2, #4]	@ 000a3ae2 5168
.org 0xa3ae4
	str r0, [r3, #84]	@ 000a3ae4 5865
.org 0xa3ae6
	str r1, [r3, #88]	@ 000a3ae6 9965
.org 0xa3ae8
	strb r7, [r3, #16]	@ 000a3ae8 1f74
.org 0xa3aea
	strb r6, [r3, #17]	@ 000a3aea 5e74
.org 0xa3aec
	strb r5, [r3, #18]	@ 000a3aec 9d74
.org 0xa3aee
	adds r1, r4, #0	@ 000a3aee 211c
.org 0xa3af0
	adds r1, #218	@ 000a3af0 da31
.org 0xa3af2
	ldrb r0, [r1, #0]	@ 000a3af2 0878
.org 0xa3af4
	adds r0, #1	@ 000a3af4 0130
.org 0xa3af6
	strb r0, [r1, #0]	@ 000a3af6 0870
.org 0xa3af8
	adds r0, r3, #0	@ 000a3af8 181c
.org 0xa3afa
	pop {r3}	@ 000a3afa 08bc
.org 0xa3afc
	mov r8, r3	@ 000a3afc 9846
.org 0xa3afe
	pop {r4, r5, r6, r7}	@ 000a3afe f0bc
.org 0xa3b00
	pop {r1}	@ 000a3b00 02bc
.org 0xa3b02
	bx r1	@ 000a3b02 0847
