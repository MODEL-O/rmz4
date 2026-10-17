@ FUN_080c8b98  entry 0x080c8b98  size 156
.thumb
.org 0xc8b98
FUN_080c8b98:
	push {r4, r5, r6, r7, lr}	@ 000c8b98 f0b5
.org 0xc8b9a
	mov r7, r8	@ 000c8b9a 4746
.org 0xc8b9c
	push {r7}	@ 000c8b9c 80b4
.org 0xc8b9e
	adds r7, r0, #0	@ 000c8b9e 071c
.org 0xc8ba0
	ldr r5, [r7, #40]	@ 000c8ba0 bd6a
.org 0xc8ba2
	ldrb r1, [r7, #10]	@ 000c8ba2 b97a
.org 0xc8ba4
	movs r0, #2	@ 000c8ba4 0220
.org 0xc8ba6
	movs r2, #0	@ 000c8ba6 0022
.org 0xc8ba8
	mov r8, r2	@ 000c8ba8 9046
.org 0xc8baa
	movs r6, #0	@ 000c8baa 0026
.org 0xc8bac
	orrs r0, r1	@ 000c8bac 0843
.org 0xc8bae
	movs r1, #4	@ 000c8bae 0421
.org 0xc8bb0
	orrs r0, r1	@ 000c8bb0 0843
.org 0xc8bb2
	strb r0, [r7, #10]	@ 000c8bb2 b872
.org 0xc8bb4
	adds r4, r7, #0	@ 000c8bb4 3c1c
.org 0xc8bb6
	adds r4, #116	@ 000c8bb6 7434
.org 0xc8bb8
	ldr r1, [pc, #44]	@ 000c8bb8 0b49
.org 0xc8bba
	adds r2, r7, #0	@ 000c8bba 3a1c
.org 0xc8bbc
	adds r2, #84	@ 000c8bbc 5432
.org 0xc8bbe
	adds r0, r4, #0	@ 000c8bbe 201c
.org 0xc8bc0
	movs r3, #8	@ 000c8bc0 0823
.org 0xc8bc2
	bl 0x5760	@ 000c8bc2 3cf7cdfd
.org 0xc8bc6
	str r7, [r4, #44]	@ 000c8bc6 e762
.org 0xc8bc8
	str r6, [r4, #36]	@ 000c8bc8 6662
.org 0xc8bca
	ldr r0, [r5, #84]	@ 000c8bca 686d
.org 0xc8bcc
	ldr r1, [r5, #88]	@ 000c8bcc a96d
.org 0xc8bce
	str r0, [r7, #84]	@ 000c8bce 7865
.org 0xc8bd0
	str r1, [r7, #88]	@ 000c8bd0 b965
.org 0xc8bd2
	ldrb r0, [r5, #10]	@ 000c8bd2 a87a
.org 0xc8bd4
	lsrs r2, r0, #4	@ 000c8bd4 0209
.org 0xc8bd6
	movs r0, #1	@ 000c8bd6 0120
.org 0xc8bd8
	ands r2, r0	@ 000c8bd8 0240
.org 0xc8bda
	cmp r2, #0	@ 000c8bda 002a
.org 0xc8bdc
	beq.n 0xc8bec	@ 000c8bdc 06d0
.org 0xc8bde
	ldrb r0, [r7, #10]	@ 000c8bde b87a
.org 0xc8be0
	movs r1, #16	@ 000c8be0 1021
.org 0xc8be2
	orrs r0, r1	@ 000c8be2 0843
.org 0xc8be4
	b.n 0xc8bf2	@ 000c8be4 05e0
.org 0xc8be6
	.byte 0x00	@ 000c8be6 data
.org 0xc8be7
	.byte 0x00	@ 000c8be7 data
.org 0xc8be8
	.byte 0xe4,0x60,0x86,0x08	@ 000c8be8 data
.org 0xc8bec
	ldrb r1, [r7, #10]	@ 000c8bec b97a
.org 0xc8bee
	movs r0, #239	@ 000c8bee ef20
.org 0xc8bf0
	ands r0, r1	@ 000c8bf0 0840
.org 0xc8bf2
	strb r0, [r7, #10]	@ 000c8bf2 b872
.org 0xc8bf4
	movs r3, #1	@ 000c8bf4 0123
.org 0xc8bf6
	adds r1, r3, #0	@ 000c8bf6 191c
.org 0xc8bf8
	ands r1, r2	@ 000c8bf8 1140
.org 0xc8bfa
	adds r0, r7, #0	@ 000c8bfa 381c
.org 0xc8bfc
	adds r0, #76	@ 000c8bfc 4c30
.org 0xc8bfe
	strb r1, [r0, #0]	@ 000c8bfe 0170
.org 0xc8c00
	adds r4, r7, #0	@ 000c8c00 3c1c
.org 0xc8c02
	adds r4, #74	@ 000c8c02 4a34
.org 0xc8c04
	lsls r1, r1, #4	@ 000c8c04 0901
.org 0xc8c06
	ldrb r2, [r4, #0]	@ 000c8c06 2278
.org 0xc8c08
	movs r0, #17	@ 000c8c08 1120
.org 0xc8c0a
	negs r0, r0	@ 000c8c0a 4042
.org 0xc8c0c
	ands r0, r2	@ 000c8c0c 1040
.org 0xc8c0e
	orrs r0, r1	@ 000c8c0e 0843
.org 0xc8c10
	strb r0, [r4, #0]	@ 000c8c10 2070
.org 0xc8c12
	ldr r1, [pc, #40]	@ 000c8c12 0a49
.org 0xc8c14
	adds r0, r7, #0	@ 000c8c14 381c
.org 0xc8c16
	adds r0, #116	@ 000c8c16 7430
.org 0xc8c18
	str r1, [r0, #36]	@ 000c8c18 4162
.org 0xc8c1a
	ldr r1, [pc, #36]	@ 000c8c1a 0949
.org 0xc8c1c
	ldrb r0, [r7, #9]	@ 000c8c1c 787a
.org 0xc8c1e
	lsls r0, r0, #2	@ 000c8c1e 8000
.org 0xc8c20
	adds r0, r0, r1	@ 000c8c20 4018
.org 0xc8c22
	str r3, [r7, #12]	@ 000c8c22 fb60
.org 0xc8c24
	ldr r0, [r0, #0]	@ 000c8c24 0068
.org 0xc8c26
	ldr r0, [r0, #4]	@ 000c8c26 4068
.org 0xc8c28
	str r0, [r7, #20]	@ 000c8c28 7861
.org 0xc8c2a
	adds r0, r7, #0	@ 000c8c2a 381c
.org 0xc8c2c
	bl 0xc88a4	@ 000c8c2c fff73afe
.org 0xc8c30
	pop {r3}	@ 000c8c30 08bc
.org 0xc8c32
	mov r8, r3	@ 000c8c32 9846
