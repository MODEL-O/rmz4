@ FUN_08122a34  entry 0x08122a34  size 454
.thumb
.org 0x122a34
FUN_08122a34:
	push {r4, r5, r6, r7, lr}	@ 00122a34 f0b5
.org 0x122a36
	mov r7, sl	@ 00122a36 5746
.org 0x122a38
	mov r6, r9	@ 00122a38 4e46
.org 0x122a3a
	mov r5, r8	@ 00122a3a 4546
.org 0x122a3c
	push {r5, r6, r7}	@ 00122a3c e0b4
.org 0x122a3e
	sub sp, #4	@ 00122a3e 81b0
.org 0x122a40
	adds r4, r1, #0	@ 00122a40 0c1c
.org 0x122a42
	adds r5, r2, #0	@ 00122a42 151c
.org 0x122a44
	ldr r2, [sp, #36]	@ 00122a44 099a
.org 0x122a46
	ldr r1, [sp, #40]	@ 00122a46 0a99
.org 0x122a48
	lsls r0, r0, #24	@ 00122a48 0006
.org 0x122a4a
	lsls r4, r4, #24	@ 00122a4a 2406
.org 0x122a4c
	lsrs r4, r4, #24	@ 00122a4c 240e
.org 0x122a4e
	lsls r3, r3, #24	@ 00122a4e 1b06
.org 0x122a50
	lsrs r3, r3, #24	@ 00122a50 1b0e
.org 0x122a52
	mov r9, r3	@ 00122a52 9946
.org 0x122a54
	str r3, [sp, #0]	@ 00122a54 0093
.org 0x122a56
	lsls r2, r2, #24	@ 00122a56 1206
.org 0x122a58
	lsrs r2, r2, #24	@ 00122a58 120e
.org 0x122a5a
	mov sl, r2	@ 00122a5a 9246
.org 0x122a5c
	lsls r1, r1, #24	@ 00122a5c 0906
.org 0x122a5e
	movs r2, #128	@ 00122a5e 8022
.org 0x122a60
	lsls r2, r2, #19	@ 00122a60 d204
.org 0x122a62
	adds r1, r1, r2	@ 00122a62 8918
.org 0x122a64
	lsrs r6, r1, #24	@ 00122a64 0e0e
.org 0x122a66
	ldr r3, [pc, #336]	@ 00122a66 544b
.org 0x122a68
	mov r8, r3	@ 00122a68 9846
.org 0x122a6a
	lsrs r0, r0, #23	@ 00122a6a c00d
.org 0x122a6c
	adds r0, #62	@ 00122a6c 3e30
.org 0x122a6e
	add r0, r8	@ 00122a6e 4044
.org 0x122a70
	ldrh r0, [r0, #0]	@ 00122a70 0088
.org 0x122a72
	ldr r7, [pc, #328]	@ 00122a72 524f
.org 0x122a74
	adds r0, r0, r7	@ 00122a74 c019
.org 0x122a76
	movs r1, #5	@ 00122a76 0521
.org 0x122a78
	adds r2, r6, #0	@ 00122a78 321c
.org 0x122a7a
	bl 0x10d85c	@ 00122a7a eaf7effe
.org 0x122a7e
	adds r4, #40	@ 00122a7e 2834
.org 0x122a80
	lsls r4, r4, #1	@ 00122a80 6400
.org 0x122a82
	add r4, r8	@ 00122a82 4444
.org 0x122a84
	ldrh r0, [r4, #0]	@ 00122a84 2088
.org 0x122a86
	adds r0, r0, r7	@ 00122a86 c019
.org 0x122a88
	movs r1, #8	@ 00122a88 0821
.org 0x122a8a
	adds r2, r6, #0	@ 00122a8a 321c
.org 0x122a8c
	bl 0x10d85c	@ 00122a8c eaf7e6fe
.org 0x122a90
	ldr r1, [pc, #300]	@ 00122a90 4b49
.org 0x122a92
	adds r0, r5, #0	@ 00122a92 281c
.org 0x122a94
	bl 0x129120	@ 00122a94 06f044fb
.org 0x122a98
	adds r0, #30	@ 00122a98 1e30
.org 0x122a9a
	lsls r0, r0, #1	@ 00122a9a 4000
.org 0x122a9c
	add r0, r8	@ 00122a9c 4044
.org 0x122a9e
	ldrh r0, [r0, #0]	@ 00122a9e 0088
.org 0x122aa0
	adds r0, r0, r7	@ 00122aa0 c019
.org 0x122aa2
	movs r1, #13	@ 00122aa2 0d21
.org 0x122aa4
	adds r2, r6, #0	@ 00122aa4 321c
.org 0x122aa6
	bl 0x10d85c	@ 00122aa6 eaf7d9fe
.org 0x122aaa
	ldr r1, [pc, #280]	@ 00122aaa 4649
.org 0x122aac
	adds r0, r5, #0	@ 00122aac 281c
.org 0x122aae
	bl 0x129120	@ 00122aae 06f037fb
.org 0x122ab2
	movs r1, #10	@ 00122ab2 0a21
.org 0x122ab4
	bl 0x129198	@ 00122ab4 06f070fb
.org 0x122ab8
	adds r0, #30	@ 00122ab8 1e30
.org 0x122aba
	lsls r0, r0, #1	@ 00122aba 4000
.org 0x122abc
	add r0, r8	@ 00122abc 4044
.org 0x122abe
	ldrh r0, [r0, #0]	@ 00122abe 0088
.org 0x122ac0
	adds r0, r0, r7	@ 00122ac0 c019
.org 0x122ac2
	movs r1, #14	@ 00122ac2 0e21
.org 0x122ac4
	adds r2, r6, #0	@ 00122ac4 321c
.org 0x122ac6
	bl 0x10d85c	@ 00122ac6 eaf7c9fe
.org 0x122aca
	mov r1, r8	@ 00122aca 4146
.org 0x122acc
	ldrh r0, [r1, #14]	@ 00122acc c889
.org 0x122ace
	adds r0, r0, r7	@ 00122ace c019
.org 0x122ad0
	movs r1, #15	@ 00122ad0 0f21
.org 0x122ad2
	adds r2, r6, #0	@ 00122ad2 321c
.org 0x122ad4
	bl 0x10d85c	@ 00122ad4 eaf7c2fe
.org 0x122ad8
	ldr r1, [pc, #236]	@ 00122ad8 3b49
.org 0x122ada
	adds r0, r5, #0	@ 00122ada 281c
.org 0x122adc
	bl 0x129120	@ 00122adc 06f020fb
.org 0x122ae0
	movs r1, #6	@ 00122ae0 0621
.org 0x122ae2
	bl 0x129198	@ 00122ae2 06f059fb
.org 0x122ae6
	adds r0, #30	@ 00122ae6 1e30
.org 0x122ae8
	lsls r0, r0, #1	@ 00122ae8 4000
.org 0x122aea
	add r0, r8	@ 00122aea 4044
.org 0x122aec
	ldrh r0, [r0, #0]	@ 00122aec 0088
.org 0x122aee
	adds r0, r0, r7	@ 00122aee c019
.org 0x122af0
	movs r1, #16	@ 00122af0 1021
.org 0x122af2
	adds r2, r6, #0	@ 00122af2 321c
.org 0x122af4
	bl 0x10d85c	@ 00122af4 eaf7b2fe
.org 0x122af8
	movs r1, #225	@ 00122af8 e121
.org 0x122afa
	lsls r1, r1, #4	@ 00122afa 0901
.org 0x122afc
	adds r0, r5, #0	@ 00122afc 281c
.org 0x122afe
	bl 0x129120	@ 00122afe 06f00ffb
.org 0x122b02
	movs r1, #10	@ 00122b02 0a21
.org 0x122b04
	bl 0x129198	@ 00122b04 06f048fb
.org 0x122b08
	adds r0, #30	@ 00122b08 1e30
.org 0x122b0a
	lsls r0, r0, #1	@ 00122b0a 4000
.org 0x122b0c
	add r0, r8	@ 00122b0c 4044
.org 0x122b0e
	ldrh r0, [r0, #0]	@ 00122b0e 0088
.org 0x122b10
	adds r0, r0, r7	@ 00122b10 c019
.org 0x122b12
	movs r1, #17	@ 00122b12 1121
.org 0x122b14
	adds r2, r6, #0	@ 00122b14 321c
.org 0x122b16
	bl 0x10d85c	@ 00122b16 eaf7a1fe
.org 0x122b1a
	mov r2, r8	@ 00122b1a 4246
.org 0x122b1c
	ldrh r0, [r2, #16]	@ 00122b1c 108a
.org 0x122b1e
	adds r0, r0, r7	@ 00122b1e c019
.org 0x122b20
	movs r1, #18	@ 00122b20 1221
.org 0x122b22
	adds r2, r6, #0	@ 00122b22 321c
.org 0x122b24
	bl 0x10d85c	@ 00122b24 eaf79afe
.org 0x122b28
	movs r1, #150	@ 00122b28 9621
.org 0x122b2a
	lsls r1, r1, #2	@ 00122b2a 8900
.org 0x122b2c
	adds r0, r5, #0	@ 00122b2c 281c
.org 0x122b2e
	bl 0x129120	@ 00122b2e 06f0f7fa
.org 0x122b32
	movs r1, #6	@ 00122b32 0621
.org 0x122b34
	bl 0x129198	@ 00122b34 06f030fb
.org 0x122b38
	adds r0, #30	@ 00122b38 1e30
.org 0x122b3a
	lsls r0, r0, #1	@ 00122b3a 4000
.org 0x122b3c
	add r0, r8	@ 00122b3c 4044
.org 0x122b3e
	ldrh r0, [r0, #0]	@ 00122b3e 0088
.org 0x122b40
	adds r0, r0, r7	@ 00122b40 c019
.org 0x122b42
	movs r1, #19	@ 00122b42 1321
.org 0x122b44
	adds r2, r6, #0	@ 00122b44 321c
.org 0x122b46
	bl 0x10d85c	@ 00122b46 eaf789fe
.org 0x122b4a
	adds r0, r5, #0	@ 00122b4a 281c
.org 0x122b4c
	movs r1, #60	@ 00122b4c 3c21
.org 0x122b4e
	bl 0x129120	@ 00122b4e 06f0e7fa
.org 0x122b52
	movs r1, #10	@ 00122b52 0a21
.org 0x122b54
	bl 0x129198	@ 00122b54 06f020fb
.org 0x122b58
	adds r0, #30	@ 00122b58 1e30
.org 0x122b5a
	lsls r0, r0, #1	@ 00122b5a 4000
.org 0x122b5c
	add r0, r8	@ 00122b5c 4044
.org 0x122b5e
	ldrh r0, [r0, #0]	@ 00122b5e 0088
.org 0x122b60
	adds r0, r0, r7	@ 00122b60 c019
.org 0x122b62
	movs r1, #20	@ 00122b62 1421
.org 0x122b64
	adds r2, r6, #0	@ 00122b64 321c
.org 0x122b66
	bl 0x10d85c	@ 00122b66 eaf779fe
.org 0x122b6a
	mov r3, r9	@ 00122b6a 4b46
.org 0x122b6c
	cmp r3, #0	@ 00122b6c 002b
.org 0x122b6e
	beq.n 0x122bac	@ 00122b6e 1dd0
.org 0x122b70
	cmp r3, #9	@ 00122b70 092b
.org 0x122b72
	bls.n 0x122b90	@ 00122b72 0dd9
.org 0x122b74
	mov r0, r9	@ 00122b74 4846
.org 0x122b76
	movs r1, #10	@ 00122b76 0a21
.org 0x122b78
	bl 0x129120	@ 00122b78 06f0d2fa
.org 0x122b7c
	lsls r0, r0, #24	@ 00122b7c 0006
.org 0x122b7e
	lsrs r0, r0, #23	@ 00122b7e c00d
.org 0x122b80
	adds r0, #60	@ 00122b80 3c30
.org 0x122b82
	add r0, r8	@ 00122b82 4044
.org 0x122b84
	ldrh r0, [r0, #0]	@ 00122b84 0088
.org 0x122b86
	adds r0, r0, r7	@ 00122b86 c019
.org 0x122b88
	movs r1, #22	@ 00122b88 1621
.org 0x122b8a
	adds r2, r6, #0	@ 00122b8a 321c
.org 0x122b8c
	bl 0x10d85c	@ 00122b8c eaf766fe
.org 0x122b90
	ldr r0, [sp, #0]	@ 00122b90 0098
.org 0x122b92
	movs r1, #10	@ 00122b92 0a21
.org 0x122b94
	bl 0x129198	@ 00122b94 06f000fb
.org 0x122b98
	lsls r0, r0, #24	@ 00122b98 0006
.org 0x122b9a
	lsrs r0, r0, #23	@ 00122b9a c00d
.org 0x122b9c
	adds r0, #60	@ 00122b9c 3c30
.org 0x122b9e
	add r0, r8	@ 00122b9e 4044
.org 0x122ba0
	ldrh r0, [r0, #0]	@ 00122ba0 0088
.org 0x122ba2
	adds r0, r0, r7	@ 00122ba2 c019
.org 0x122ba4
	movs r1, #23	@ 00122ba4 1721
.org 0x122ba6
	adds r2, r6, #0	@ 00122ba6 321c
.org 0x122ba8
	bl 0x10d85c	@ 00122ba8 eaf758fe
.org 0x122bac
	mov r0, sl	@ 00122bac 5046
.org 0x122bae
	cmp r0, #1	@ 00122bae 0128
.org 0x122bb0
	bne.n 0x122bcc	@ 00122bb0 0cd1
.org 0x122bb2
	ldr r0, [pc, #4]	@ 00122bb2 0148
.org 0x122bb4
	ldrh r0, [r0, #6]	@ 00122bb4 c088
.org 0x122bb6
	b.n 0x122bd6	@ 00122bb6 0ee0
.org 0x122bb8
	.byte 0xf8,0xcf,0x86,0x08	@ 00122bb8 data
.org 0x122bbc
	.byte 0x5f,0x0e,0x01,0x09	@ 00122bbc data
.org 0x122bc0
	.byte 0x80,0xf5,0x20,0x00	@ 00122bc0 data
.org 0x122bc4
	.byte 0xc0,0x4b,0x03,0x00	@ 00122bc4 data
.org 0x122bc8
	.byte 0xa0,0x8c,0x00,0x00	@ 00122bc8 data
.org 0x122bcc
	mov r1, sl	@ 00122bcc 5146
.org 0x122bce
	cmp r1, #2	@ 00122bce 0229
.org 0x122bd0
	bne.n 0x122bf0	@ 00122bd0 0ed1
.org 0x122bd2
	ldr r0, [pc, #20]	@ 00122bd2 0548
.org 0x122bd4
	ldrh r0, [r0, #8]	@ 00122bd4 0089
.org 0x122bd6
	ldr r1, [pc, #20]	@ 00122bd6 0549
.org 0x122bd8
	adds r0, r0, r1	@ 00122bd8 4018
.org 0x122bda
	movs r1, #5	@ 00122bda 0521
.org 0x122bdc
	adds r1, #20	@ 00122bdc 1431
.org 0x122bde
	adds r2, r6, #0	@ 00122bde 321c
.org 0x122be0
	bl 0x10d85c	@ 00122be0 eaf73cfe
.org 0x122be4
	b.n 0x122c08	@ 00122be4 10e0
.org 0x122be6
	.byte 0x00	@ 00122be6 data
.org 0x122be7
	.byte 0x00	@ 00122be7 data
.org 0x122be8
	.byte 0xf8,0xcf,0x86,0x08	@ 00122be8 data
.org 0x122bec
	.byte 0x5f,0x0e,0x01,0x09	@ 00122bec data
.org 0x122bf0
	mov r2, sl	@ 00122bf0 5246
.org 0x122bf2
	cmp r2, #3	@ 00122bf2 032a
.org 0x122bf4
	bne.n 0x122c08	@ 00122bf4 08d1
.org 0x122bf6
	ldr r0, [pc, #32]	@ 00122bf6 0848
.org 0x122bf8
	ldrh r0, [r0, #22]	@ 00122bf8 c08a
