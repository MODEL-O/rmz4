@ FUN_08094b14  entry 0x08094b14  size 320
.thumb
.org 0x94b14
FUN_08094b14:
	push {r4, r5, r6, r7, lr}	@ 00094b14 f0b5
.org 0x94b16
	mov r7, r9	@ 00094b16 4f46
.org 0x94b18
	mov r6, r8	@ 00094b18 4646
.org 0x94b1a
	push {r6, r7}	@ 00094b1a c0b4
.org 0x94b1c
	sub sp, #8	@ 00094b1c 82b0
.org 0x94b1e
	mov r9, r0	@ 00094b1e 8146
.org 0x94b20
	ldr r0, [pc, #136]	@ 00094b20 2248
.org 0x94b22
	adds r7, r1, r0	@ 00094b22 0f18
.org 0x94b24
	str r7, [sp, #0]	@ 00094b24 0097
.org 0x94b26
	mov r2, r9	@ 00094b26 4a46
.org 0x94b28
	ldr r1, [r2, #88]	@ 00094b28 916d
.org 0x94b2a
	ldr r0, [pc, #132]	@ 00094b2a 2148
.org 0x94b2c
	adds r6, r1, r0	@ 00094b2c 0e18
.org 0x94b2e
	str r6, [sp, #4]	@ 00094b2e 0196
.org 0x94b30
	movs r2, #128	@ 00094b30 8022
.org 0x94b32
	lsls r2, r2, #24	@ 00094b32 1206
.org 0x94b34
	mov r8, r2	@ 00094b34 9046
.org 0x94b36
	mov r2, r9	@ 00094b36 4a46
.org 0x94b38
	ldr r0, [r2, #84]	@ 00094b38 506d
.org 0x94b3a
	bl 0x7020	@ 00094b3a 72f771fa
.org 0x94b3e
	lsls r0, r0, #16	@ 00094b3e 0004
.org 0x94b40
	lsrs r2, r0, #16	@ 00094b40 020c
.org 0x94b42
	movs r0, #15	@ 00094b42 0f20
.org 0x94b44
	ands r2, r0	@ 00094b44 0240
.org 0x94b46
	adds r0, r2, #0	@ 00094b46 101c
.org 0x94b48
	subs r0, #8	@ 00094b48 0838
.org 0x94b4a
	lsls r0, r0, #16	@ 00094b4a 0004
.org 0x94b4c
	lsrs r0, r0, #16	@ 00094b4c 000c
.org 0x94b4e
	cmp r0, #5	@ 00094b4e 0528
.org 0x94b50
	bhi.n 0x94bb4	@ 00094b50 30d8
.org 0x94b52
	adds r4, r7, #0	@ 00094b52 3c1c
.org 0x94b54
	movs r7, #2	@ 00094b54 0227
.org 0x94b56
	adds r0, r4, #0	@ 00094b56 201c
.org 0x94b58
	adds r1, r6, #0	@ 00094b58 311c
.org 0x94b5a
	bl 0x7020	@ 00094b5a 72f761fa
.org 0x94b5e
	lsls r0, r0, #16	@ 00094b5e 0004
.org 0x94b60
	lsrs r2, r0, #16	@ 00094b60 020c
.org 0x94b62
	cmp r2, #0	@ 00094b62 002a
.org 0x94b64
	beq.n 0x94b9c	@ 00094b64 1ad0
.org 0x94b66
	movs r0, #128	@ 00094b66 8020
.org 0x94b68
	lsls r0, r0, #8	@ 00094b68 0002
.org 0x94b6a
	adds r1, r0, #0	@ 00094b6a 011c
.org 0x94b6c
	adds r0, r2, #0	@ 00094b6c 101c
.org 0x94b6e
	ands r0, r1	@ 00094b6e 0840
.org 0x94b70
	cmp r0, #0	@ 00094b70 0028
.org 0x94b72
	bne.n 0x94b9c	@ 00094b72 13d1
.org 0x94b74
	movs r0, #15	@ 00094b74 0f20
.org 0x94b76
	ands r0, r2	@ 00094b76 1040
.org 0x94b78
	cmp r0, #15	@ 00094b78 0f28
.org 0x94b7a
	beq.n 0x94b9c	@ 00094b7a 0fd0
.org 0x94b7c
	subs r0, #8	@ 00094b7c 0838
.org 0x94b7e
	lsls r0, r0, #16	@ 00094b7e 0004
.org 0x94b80
	lsrs r0, r0, #16	@ 00094b80 000c
.org 0x94b82
	cmp r0, #5	@ 00094b82 0528
.org 0x94b84
	bls.n 0x94b9c	@ 00094b84 0ad9
.org 0x94b86
	adds r0, r4, #0	@ 00094b86 201c
.org 0x94b88
	adds r1, r6, #0	@ 00094b88 311c
.org 0x94b8a
	bl 0x834c	@ 00094b8a 73f7dffb
.org 0x94b8e
	cmp r0, #0	@ 00094b8e 0028
.org 0x94b90
	ble.n 0x94b9c	@ 00094b90 04dd
.org 0x94b92
	adds r0, r0, r4	@ 00094b92 0019
.org 0x94b94
	cmp r0, r8	@ 00094b94 4045
.org 0x94b96
	ble.n 0x94b9c	@ 00094b96 01dd
.org 0x94b98
	adds r4, r0, #0	@ 00094b98 041c
.org 0x94b9a
	mov r8, r0	@ 00094b9a 8046
.org 0x94b9c
	movs r1, #128	@ 00094b9c 8021
.org 0x94b9e
	lsls r1, r1, #5	@ 00094b9e 4901
.org 0x94ba0
	adds r6, r6, r1	@ 00094ba0 7618
.org 0x94ba2
	subs r7, #1	@ 00094ba2 013f
.org 0x94ba4
	cmp r7, #0	@ 00094ba4 002f
.org 0x94ba6
	bne.n 0x94b56	@ 00094ba6 d6d1
.org 0x94ba8
	b.n 0x94c3e	@ 00094ba8 49e0
.org 0x94baa
	.byte 0x00	@ 00094baa data
.org 0x94bab
	.byte 0x00	@ 00094bab data
.org 0x94bac
	.byte 0x00,0xf9,0xff,0xff	@ 00094bac data
.org 0x94bb0
	.byte 0x00,0xe0,0xff,0xff	@ 00094bb0 data
.org 0x94bb4
	adds r4, r7, #0	@ 00094bb4 3c1c
.org 0x94bb6
	movs r7, #2	@ 00094bb6 0227
.org 0x94bb8
	adds r0, r4, #0	@ 00094bb8 201c
.org 0x94bba
	adds r1, r6, #0	@ 00094bba 311c
.org 0x94bbc
	bl 0x7020	@ 00094bbc 72f730fa
.org 0x94bc0
	lsls r0, r0, #16	@ 00094bc0 0004
.org 0x94bc2
	lsrs r2, r0, #16	@ 00094bc2 020c
.org 0x94bc4
	cmp r2, #0	@ 00094bc4 002a
.org 0x94bc6
	beq.n 0x94bf4	@ 00094bc6 15d0
.org 0x94bc8
	movs r0, #128	@ 00094bc8 8020
.org 0x94bca
	lsls r0, r0, #8	@ 00094bca 0002
.org 0x94bcc
	adds r1, r0, #0	@ 00094bcc 011c
.org 0x94bce
	adds r0, r2, #0	@ 00094bce 101c
.org 0x94bd0
	ands r0, r1	@ 00094bd0 0840
.org 0x94bd2
	cmp r0, #0	@ 00094bd2 0028
.org 0x94bd4
	bne.n 0x94bf4	@ 00094bd4 0ed1
.org 0x94bd6
	movs r0, #15	@ 00094bd6 0f20
.org 0x94bd8
	ands r2, r0	@ 00094bd8 0240
.org 0x94bda
	cmp r2, #15	@ 00094bda 0f2a
.org 0x94bdc
	beq.n 0x94bf4	@ 00094bdc 0ad0
.org 0x94bde
	adds r0, r4, #0	@ 00094bde 201c
.org 0x94be0
	adds r1, r6, #0	@ 00094be0 311c
.org 0x94be2
	bl 0x834c	@ 00094be2 73f7b3fb
.org 0x94be6
	cmp r0, #0	@ 00094be6 0028
.org 0x94be8
	ble.n 0x94bf4	@ 00094be8 04dd
.org 0x94bea
	adds r0, r0, r4	@ 00094bea 0019
.org 0x94bec
	cmp r0, r8	@ 00094bec 4045
.org 0x94bee
	ble.n 0x94bf4	@ 00094bee 01dd
.org 0x94bf0
	adds r4, r0, #0	@ 00094bf0 041c
.org 0x94bf2
	mov r8, r0	@ 00094bf2 8046
.org 0x94bf4
	movs r1, #128	@ 00094bf4 8021
.org 0x94bf6
	lsls r1, r1, #5	@ 00094bf6 4901
.org 0x94bf8
	adds r6, r6, r1	@ 00094bf8 7618
.org 0x94bfa
	subs r7, #1	@ 00094bfa 013f
.org 0x94bfc
	cmp r7, #0	@ 00094bfc 002f
.org 0x94bfe
	bne.n 0x94bb8	@ 00094bfe dbd1
.org 0x94c00
	ldr r4, [sp, #0]	@ 00094c00 009c
.org 0x94c02
	ldr r2, [sp, #4]	@ 00094c02 019a
.org 0x94c04
	ldr r0, [pc, #88]	@ 00094c04 1648
.org 0x94c06
	adds r6, r2, r0	@ 00094c06 1618
.org 0x94c08
	adds r0, r4, #0	@ 00094c08 201c
.org 0x94c0a
	adds r1, r6, #0	@ 00094c0a 311c
.org 0x94c0c
	bl 0x7c7c	@ 00094c0c 73f736f8
.org 0x94c10
	lsls r0, r0, #16	@ 00094c10 0004
.org 0x94c12
	lsrs r2, r0, #16	@ 00094c12 020c
.org 0x94c14
	cmp r2, #0	@ 00094c14 002a
.org 0x94c16
	beq.n 0x94c3e	@ 00094c16 12d0
.org 0x94c18
	movs r0, #128	@ 00094c18 8020
.org 0x94c1a
	lsls r0, r0, #8	@ 00094c1a 0002
.org 0x94c1c
	ands r0, r2	@ 00094c1c 1040
.org 0x94c1e
	cmp r0, #0	@ 00094c1e 0028
.org 0x94c20
	bne.n 0x94c3e	@ 00094c20 0dd1
.org 0x94c22
	movs r0, #15	@ 00094c22 0f20
.org 0x94c24
	ands r2, r0	@ 00094c24 0240
.org 0x94c26
	cmp r2, #15	@ 00094c26 0f2a
.org 0x94c28
	beq.n 0x94c3e	@ 00094c28 09d0
.org 0x94c2a
	ldr r0, [sp, #0]	@ 00094c2a 0098
.org 0x94c2c
	adds r1, r6, #0	@ 00094c2c 311c
.org 0x94c2e
	bl 0x834c	@ 00094c2e 73f78dfb
.org 0x94c32
	cmp r0, #0	@ 00094c32 0028
.org 0x94c34
	ble.n 0x94c3e	@ 00094c34 03dd
.org 0x94c36
	adds r0, r0, r4	@ 00094c36 0019
.org 0x94c38
	cmp r0, r8	@ 00094c38 4045
.org 0x94c3a
	ble.n 0x94c3e	@ 00094c3a 00dd
.org 0x94c3c
	mov r8, r0	@ 00094c3c 8046
.org 0x94c3e
	movs r0, #128	@ 00094c3e 8020
.org 0x94c40
	lsls r0, r0, #24	@ 00094c40 0006
.org 0x94c42
	cmp r8, r0	@ 00094c42 8045
.org 0x94c44
	beq.n 0x94c50	@ 00094c44 04d0
.org 0x94c46
	movs r0, #224	@ 00094c46 e020
.org 0x94c48
	lsls r0, r0, #3	@ 00094c48 c000
.org 0x94c4a
	add r0, r8	@ 00094c4a 4044
.org 0x94c4c
	mov r1, r9	@ 00094c4c 4946
.org 0x94c4e
	str r0, [r1, #84]	@ 00094c4e 4865
.org 0x94c50
	add sp, #8	@ 00094c50 02b0
.org 0x94c52
	pop {r3, r4}	@ 00094c52 18bc
