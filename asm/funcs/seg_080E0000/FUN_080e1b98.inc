@ FUN_080e1b98  entry 0x080e1b98  size 134
.thumb
.org 0xe1b98
FUN_080e1b98:
	push {r4, r5, r6, r7, lr}	@ 000e1b98 f0b5
.org 0xe1b9a
	mov r7, r8	@ 000e1b9a 4746
.org 0xe1b9c
	push {r7}	@ 000e1b9c 80b4
.org 0xe1b9e
	adds r6, r0, #0	@ 000e1b9e 061c
.org 0xe1ba0
	lsls r1, r1, #24	@ 000e1ba0 0906
.org 0xe1ba2
	lsrs r5, r1, #24	@ 000e1ba2 0d0e
.org 0xe1ba4
	lsls r2, r2, #16	@ 000e1ba4 1204
.org 0xe1ba6
	lsrs r7, r2, #16	@ 000e1ba6 170c
.org 0xe1ba8
	lsls r3, r3, #24	@ 000e1ba8 1b06
.org 0xe1baa
	lsrs r3, r3, #24	@ 000e1baa 1b0e
.org 0xe1bac
	mov r8, r3	@ 000e1bac 9846
.org 0xe1bae
	ldr r0, [pc, #112]	@ 000e1bae 1c48
.org 0xe1bb0
	ldr r0, [r0, #0]	@ 000e1bb0 0068
.org 0xe1bb2
	bl 0x5500	@ 000e1bb2 23f7a5fc
.org 0xe1bb6
	adds r4, r0, #0	@ 000e1bb6 041c
.org 0xe1bb8
	cmp r4, #0	@ 000e1bb8 002c
.org 0xe1bba
	beq.n 0xe1c14	@ 000e1bba 2bd0
.org 0xe1bbc
	adds r1, r4, #0	@ 000e1bbc 211c
.org 0xe1bbe
	adds r1, #37	@ 000e1bbe 2531
.org 0xe1bc0
	movs r2, #0	@ 000e1bc0 0022
.org 0xe1bc2
	movs r0, #1	@ 000e1bc2 0120
.org 0xe1bc4
	strb r0, [r1, #0]	@ 000e1bc4 0870
.org 0xe1bc6
	ldr r0, [pc, #92]	@ 000e1bc6 1748
.org 0xe1bc8
	movs r1, #62	@ 000e1bc8 3e21
.org 0xe1bca
	strb r1, [r4, #9]	@ 000e1bca 6172
.org 0xe1bcc
	adds r0, #248	@ 000e1bcc f830
.org 0xe1bce
	ldr r0, [r0, #0]	@ 000e1bce 0068
.org 0xe1bd0
	ldr r0, [r0, #0]	@ 000e1bd0 0068
.org 0xe1bd2
	str r0, [r4, #20]	@ 000e1bd2 6061
.org 0xe1bd4
	movs r3, #0	@ 000e1bd4 0023
.org 0xe1bd6
	strh r2, [r4, #32]	@ 000e1bd6 2284
.org 0xe1bd8
	adds r0, r4, #0	@ 000e1bd8 201c
.org 0xe1bda
	adds r0, #34	@ 000e1bda 2230
.org 0xe1bdc
	strb r3, [r0, #0]	@ 000e1bdc 0370
.org 0xe1bde
	ldr r0, [r6, #0]	@ 000e1bde 3068
.org 0xe1be0
	ldr r1, [r6, #4]	@ 000e1be0 7168
.org 0xe1be2
	str r0, [r4, #84]	@ 000e1be2 6065
.org 0xe1be4
	str r1, [r4, #88]	@ 000e1be4 a165
.org 0xe1be6
	ldr r2, [pc, #64]	@ 000e1be6 104a
.org 0xe1be8
	adds r0, r5, #0	@ 000e1be8 281c
.org 0xe1bea
	adds r0, #64	@ 000e1bea 4030
.org 0xe1bec
	lsls r0, r0, #24	@ 000e1bec 0006
.org 0xe1bee
	lsrs r0, r0, #23	@ 000e1bee c00d
.org 0xe1bf0
	adds r0, r0, r2	@ 000e1bf0 8018
.org 0xe1bf2
	movs r1, #0	@ 000e1bf2 0021
.org 0xe1bf4
	ldrsh r0, [r0, r1]	@ 000e1bf4 405e
.org 0xe1bf6
	lsls r1, r7, #16	@ 000e1bf6 3904
.org 0xe1bf8
	asrs r1, r1, #16	@ 000e1bf8 0914
.org 0xe1bfa
	muls r0, r1	@ 000e1bfa 4843
.org 0xe1bfc
	asrs r0, r0, #8	@ 000e1bfc 0012
.org 0xe1bfe
	str r0, [r4, #92]	@ 000e1bfe e065
.org 0xe1c00
	lsls r0, r5, #1	@ 000e1c00 6800
.org 0xe1c02
	adds r0, r0, r2	@ 000e1c02 8018
.org 0xe1c04
	movs r2, #0	@ 000e1c04 0022
.org 0xe1c06
	ldrsh r0, [r0, r2]	@ 000e1c06 805e
.org 0xe1c08
	muls r0, r1	@ 000e1c08 4843
.org 0xe1c0a
	asrs r0, r0, #8	@ 000e1c0a 0012
.org 0xe1c0c
	str r0, [r4, #96]	@ 000e1c0c 2066
.org 0xe1c0e
	strb r3, [r4, #16]	@ 000e1c0e 2374
.org 0xe1c10
	mov r0, r8	@ 000e1c10 4046
.org 0xe1c12
	strb r0, [r4, #17]	@ 000e1c12 6074
.org 0xe1c14
	pop {r3}	@ 000e1c14 08bc
.org 0xe1c16
	mov r8, r3	@ 000e1c16 9846
.org 0xe1c18
	pop {r4, r5, r6, r7}	@ 000e1c18 f0bc
.org 0xe1c1a
	pop {r0}	@ 000e1c1a 01bc
.org 0xe1c1c
	bx r0	@ 000e1c1c 0047
