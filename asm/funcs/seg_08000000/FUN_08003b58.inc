@ FUN_08003b58  entry 0x08003b58  size 136
.thumb
.org 0x3b58
FUN_08003b58:
	push {r4, r5, r6, r7, lr}	@ 00003b58 f0b5
.org 0x3b5a
	mov r7, r8	@ 00003b5a 4746
.org 0x3b5c
	push {r7}	@ 00003b5c 80b4
.org 0x3b5e
	sub sp, #8	@ 00003b5e 82b0
.org 0x3b60
	mov ip, r0	@ 00003b60 8446
.org 0x3b62
	adds r7, r1, #0	@ 00003b62 0f1c
.org 0x3b64
	mov r8, r2	@ 00003b64 9046
.org 0x3b66
	movs r1, #0	@ 00003b66 0021
.org 0x3b68
	movs r3, #0	@ 00003b68 0023
.org 0x3b6a
	lsls r4, r1, #16	@ 00003b6a 0c04
.org 0x3b6c
	asrs r0, r4, #16	@ 00003b6c 2014
.org 0x3b6e
	lsls r6, r0, #6	@ 00003b6e 8601
.org 0x3b70
	lsls r1, r0, #4	@ 00003b70 0101
.org 0x3b72
	subs r5, r1, r0	@ 00003b72 0d1a
.org 0x3b74
	lsls r2, r3, #16	@ 00003b74 1a04
.org 0x3b76
	asrs r2, r2, #16	@ 00003b76 1214
.org 0x3b78
	lsls r3, r2, #1	@ 00003b78 5300
.org 0x3b7a
	adds r3, r6, r3	@ 00003b7a f318
.org 0x3b7c
	lsls r3, r3, #1	@ 00003b7c 5b00
.org 0x3b7e
	add r3, ip	@ 00003b7e 6344
.org 0x3b80
	adds r1, r5, r2	@ 00003b80 a918
.org 0x3b82
	lsls r1, r1, #1	@ 00003b82 4900
.org 0x3b84
	add r1, r8	@ 00003b84 4144
.org 0x3b86
	ldrh r0, [r1, #0]	@ 00003b86 0888
.org 0x3b88
	lsls r0, r0, #3	@ 00003b88 c000
.org 0x3b8a
	adds r0, r0, r7	@ 00003b8a c019
.org 0x3b8c
	ldr r0, [r0, #0]	@ 00003b8c 0068
.org 0x3b8e
	str r0, [r3, #0]	@ 00003b8e 1860
.org 0x3b90
	ldrh r0, [r1, #0]	@ 00003b90 0888
.org 0x3b92
	lsls r0, r0, #3	@ 00003b92 c000
.org 0x3b94
	adds r0, r0, r7	@ 00003b94 c019
.org 0x3b96
	ldr r0, [r0, #4]	@ 00003b96 4068
.org 0x3b98
	str r0, [r3, #64]	@ 00003b98 1864
.org 0x3b9a
	adds r2, #1	@ 00003b9a 0132
.org 0x3b9c
	lsls r2, r2, #16	@ 00003b9c 1204
.org 0x3b9e
	lsrs r3, r2, #16	@ 00003b9e 130c
.org 0x3ba0
	asrs r2, r2, #16	@ 00003ba0 1214
.org 0x3ba2
	cmp r2, #14	@ 00003ba2 0e2a
.org 0x3ba4
	ble.n 0x3b74	@ 00003ba4 e6dd
.org 0x3ba6
	asrs r0, r4, #16	@ 00003ba6 2014
.org 0x3ba8
	lsls r1, r0, #6	@ 00003ba8 8101
.org 0x3baa
	lsls r2, r2, #1	@ 00003baa 5200
.org 0x3bac
	adds r1, r1, r2	@ 00003bac 8918
.org 0x3bae
	lsls r1, r1, #1	@ 00003bae 4900
.org 0x3bb0
	add r1, ip	@ 00003bb0 6144
.org 0x3bb2
	movs r2, #0	@ 00003bb2 0022
.org 0x3bb4
	str r2, [r1, #0]	@ 00003bb4 0a60
.org 0x3bb6
	str r2, [r1, #64]	@ 00003bb6 0a64
.org 0x3bb8
	adds r0, #1	@ 00003bb8 0130
.org 0x3bba
	lsls r0, r0, #16	@ 00003bba 0004
.org 0x3bbc
	lsrs r1, r0, #16	@ 00003bbc 010c
.org 0x3bbe
	asrs r0, r0, #16	@ 00003bbe 0014
.org 0x3bc0
	cmp r0, #9	@ 00003bc0 0928
.org 0x3bc2
	ble.n 0x3b68	@ 00003bc2 d1dd
.org 0x3bc4
	movs r1, #160	@ 00003bc4 a021
.org 0x3bc6
	lsls r1, r1, #3	@ 00003bc6 c900
.org 0x3bc8
	add r1, ip	@ 00003bc8 6144
.org 0x3bca
	str r2, [sp, #0]	@ 00003bca 0092
.org 0x3bcc
	ldr r2, [pc, #16]	@ 00003bcc 044a
.org 0x3bce
	mov r0, sp	@ 00003bce 6846
.org 0x3bd0
	bl 0x128be0	@ 00003bd0 25f106f8
.org 0x3bd4
	add sp, #8	@ 00003bd4 02b0
.org 0x3bd6
	pop {r3}	@ 00003bd6 08bc
.org 0x3bd8
	mov r8, r3	@ 00003bd8 9846
.org 0x3bda
	pop {r4, r5, r6, r7}	@ 00003bda f0bc
.org 0x3bdc
	pop {r0}	@ 00003bdc 01bc
.org 0x3bde
	bx r0	@ 00003bde 0047
