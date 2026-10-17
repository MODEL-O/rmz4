@ FUN_08113ac0  entry 0x08113ac0  size 326
.thumb
.org 0x113ac0
FUN_08113ac0:
	push {r4, r5, r6, r7, lr}	@ 00113ac0 f0b5
.org 0x113ac2
	adds r6, r0, #0	@ 00113ac2 061c
.org 0x113ac4
	bl 0x1f4a4	@ 00113ac4 0bf7eefc
.org 0x113ac8
	ldr r5, [pc, #16]	@ 00113ac8 044d
.org 0x113aca
	ldrb r1, [r5, #4]	@ 00113aca 2979
.org 0x113acc
	movs r0, #64	@ 00113acc 4020
.org 0x113ace
	ands r0, r1	@ 00113ace 0840
.org 0x113ad0
	cmp r0, #0	@ 00113ad0 0028
.org 0x113ad2
	beq.n 0x113ae0	@ 00113ad2 05d0
.org 0x113ad4
	bl 0x1354	@ 00113ad4 edf63efc
.org 0x113ad8
	b.n 0x113c18	@ 00113ad8 9ee0
.org 0x113ada
	.byte 0x00	@ 00113ada data
.org 0x113adb
	.byte 0x00	@ 00113adb data
.org 0x113adc
	.byte 0xb0,0xe8,0x02,0x02	@ 00113adc data
.org 0x113ae0
	ldr r0, [pc, #24]	@ 00113ae0 0648
.org 0x113ae2
	ldrh r1, [r0, #8]	@ 00113ae2 0189
.org 0x113ae4
	movs r0, #8	@ 00113ae4 0820
.org 0x113ae6
	ands r0, r1	@ 00113ae6 0840
.org 0x113ae8
	cmp r0, #0	@ 00113ae8 0028
.org 0x113aea
	beq.n 0x113b1c	@ 00113aea 17d0
.org 0x113aec
	ldr r1, [pc, #16]	@ 00113aec 0449
.org 0x113aee
	ldr r0, [r1, #0]	@ 00113aee 0868
.org 0x113af0
	ldrb r0, [r0, #0]	@ 00113af0 0078
.org 0x113af2
	cmp r0, #0	@ 00113af2 0028
.org 0x113af4
	bne.n 0x113b04	@ 00113af4 06d1
.org 0x113af6
	movs r1, #144	@ 00113af6 9021
.org 0x113af8
	lsls r1, r1, #4	@ 00113af8 0901
.org 0x113afa
	b.n 0x113b46	@ 00113afa 24e0
.org 0x113afc
	.byte 0x10,0xe9,0x02,0x02	@ 00113afc data
.org 0x113b00
	.byte 0xe0,0xe8,0x02,0x02	@ 00113b00 data
.org 0x113b04
	ldrh r0, [r1, #18]	@ 00113b04 488a
.org 0x113b06
	cmp r0, #98	@ 00113b06 6228
.org 0x113b08
	bhi.n 0x113b0e	@ 00113b08 01d8
.org 0x113b0a
	adds r0, #1	@ 00113b0a 0130
.org 0x113b0c
	strh r0, [r1, #18]	@ 00113b0c 4882
.org 0x113b0e
	ldr r0, [r1, #0]	@ 00113b0e 0868
.org 0x113b10
	ldrb r1, [r0, #0]	@ 00113b10 0178
.org 0x113b12
	subs r1, #1	@ 00113b12 0139
.org 0x113b14
	strb r1, [r0, #0]	@ 00113b14 0170
.org 0x113b16
	movs r1, #192	@ 00113b16 c021
.org 0x113b18
	lsls r1, r1, #2	@ 00113b18 8900
.org 0x113b1a
	b.n 0x113b46	@ 00113b1a 14e0
.org 0x113b1c
	ldr r2, [pc, #48]	@ 00113b1c 0c4a
.org 0x113b1e
	ldr r1, [r2, #0]	@ 00113b1e 1168
.org 0x113b20
	adds r1, #66	@ 00113b20 4231
.org 0x113b22
	ldrb r0, [r1, #0]	@ 00113b22 0878
.org 0x113b24
	adds r0, #1	@ 00113b24 0130
.org 0x113b26
	strb r0, [r1, #0]	@ 00113b26 0870
.org 0x113b28
	ldr r0, [r2, #0]	@ 00113b28 1068
.org 0x113b2a
	adds r1, r0, #0	@ 00113b2a 011c
.org 0x113b2c
	adds r1, #66	@ 00113b2c 4231
.org 0x113b2e
	ldrb r0, [r1, #0]	@ 00113b2e 0878
.org 0x113b30
	cmp r0, #100	@ 00113b30 6428
.org 0x113b32
	bls.n 0x113b38	@ 00113b32 01d9
.org 0x113b34
	movs r0, #99	@ 00113b34 6320
.org 0x113b36
	strb r0, [r1, #0]	@ 00113b36 0870
.org 0x113b38
	ldr r7, [pc, #24]	@ 00113b38 064f
.org 0x113b3a
	adds r2, r6, r7	@ 00113b3a f219
.org 0x113b3c
	ldrh r3, [r2, #0]	@ 00113b3c 1388
.org 0x113b3e
	cmp r3, #18	@ 00113b3e 122b
.org 0x113b40
	bne.n 0x113b58	@ 00113b40 0ad1
.org 0x113b42
	movs r1, #176	@ 00113b42 b021
.org 0x113b44
	lsls r1, r1, #4	@ 00113b44 0901
.org 0x113b46
	adds r0, r6, #0	@ 00113b46 301c
.org 0x113b48
	bl 0x1126ac	@ 00113b48 fef7b0fd
.org 0x113b4c
	b.n 0x113c18	@ 00113b4c 64e0
.org 0x113b4e
	.byte 0x00	@ 00113b4e data
.org 0x113b4f
	.byte 0x00	@ 00113b4f data
.org 0x113b50
	.byte 0xe0,0xe8,0x02,0x02	@ 00113b50 data
.org 0x113b54
	.byte 0x60,0x62,0x00,0x00	@ 00113b54 data
.org 0x113b58
	ldrb r1, [r5, #4]	@ 00113b58 2979
.org 0x113b5a
	movs r4, #32	@ 00113b5a 2024
.org 0x113b5c
	adds r0, r4, #0	@ 00113b5c 201c
.org 0x113b5e
	ands r0, r1	@ 00113b5e 0840
.org 0x113b60
	cmp r0, #0	@ 00113b60 0028
.org 0x113b62
	beq.n 0x113b70	@ 00113b62 05d0
.org 0x113b64
	movs r0, #17	@ 00113b64 1120
.org 0x113b66
	strh r0, [r2, #0]	@ 00113b66 1080
.org 0x113b68
	movs r1, #6	@ 00113b68 0621
.org 0x113b6a
	bl 0x1f134	@ 00113b6a 0bf7e3fa
.org 0x113b6e
	b.n 0x113c0e	@ 00113b6e 4ee0
.org 0x113b70
	cmp r3, #1	@ 00113b70 012b
.org 0x113b72
	bne.n 0x113b80	@ 00113b72 05d1
.org 0x113b74
	movs r0, #17	@ 00113b74 1120
.org 0x113b76
	strh r0, [r2, #0]	@ 00113b76 1080
.org 0x113b78
	movs r1, #7	@ 00113b78 0721
.org 0x113b7a
	bl 0x1f134	@ 00113b7a 0bf7dbfa
.org 0x113b7e
	b.n 0x113c0e	@ 00113b7e 46e0
.org 0x113b80
	cmp r3, #2	@ 00113b80 022b
.org 0x113b82
	bne.n 0x113b8a	@ 00113b82 02d1
.org 0x113b84
	movs r0, #17	@ 00113b84 1120
.org 0x113b86
	strh r0, [r2, #0]	@ 00113b86 1080
.org 0x113b88
	b.n 0x113bec	@ 00113b88 30e0
.org 0x113b8a
	ldrb r1, [r5, #6]	@ 00113b8a a979
.org 0x113b8c
	adds r0, r4, #0	@ 00113b8c 201c
.org 0x113b8e
	ands r0, r1	@ 00113b8e 0840
.org 0x113b90
	cmp r0, #0	@ 00113b90 0028
.org 0x113b92
	bne.n 0x113b9a	@ 00113b92 02d1
.org 0x113b94
	movs r0, #17	@ 00113b94 1120
.org 0x113b96
	strh r0, [r2, #0]	@ 00113b96 1080
.org 0x113b98
	b.n 0x113bec	@ 00113b98 28e0
.org 0x113b9a
	movs r0, #96	@ 00113b9a 6020
.org 0x113b9c
	ands r0, r1	@ 00113b9c 0840
.org 0x113b9e
	cmp r0, #32	@ 00113b9e 2028
.org 0x113ba0
	bne.n 0x113ba8	@ 00113ba0 02d1
.org 0x113ba2
	movs r0, #17	@ 00113ba2 1120
.org 0x113ba4
	strh r0, [r2, #0]	@ 00113ba4 1080
.org 0x113ba6
	b.n 0x113bec	@ 00113ba6 21e0
.org 0x113ba8
	cmp r3, #11	@ 00113ba8 0b2b
.org 0x113baa
	bne.n 0x113bb2	@ 00113baa 02d1
.org 0x113bac
	movs r0, #17	@ 00113bac 1120
.org 0x113bae
	strh r0, [r2, #0]	@ 00113bae 1080
.org 0x113bb0
	b.n 0x113bec	@ 00113bb0 1ce0
.org 0x113bb2
	cmp r3, #12	@ 00113bb2 0c2b
.org 0x113bb4
	bne.n 0x113bbc	@ 00113bb4 02d1
.org 0x113bb6
	movs r0, #17	@ 00113bb6 1120
.org 0x113bb8
	strh r0, [r2, #0]	@ 00113bb8 1080
.org 0x113bba
	b.n 0x113bec	@ 00113bba 17e0
.org 0x113bbc
	ldrb r1, [r5, #7]	@ 00113bbc e979
.org 0x113bbe
	movs r0, #1	@ 00113bbe 0120
.org 0x113bc0
	ands r0, r1	@ 00113bc0 0840
.org 0x113bc2
	cmp r0, #0	@ 00113bc2 0028
.org 0x113bc4
	bne.n 0x113bcc	@ 00113bc4 02d1
.org 0x113bc6
	movs r0, #17	@ 00113bc6 1120
.org 0x113bc8
	strh r0, [r2, #0]	@ 00113bc8 1080
.org 0x113bca
	b.n 0x113bec	@ 00113bca 0fe0
.org 0x113bcc
	cmp r3, #13	@ 00113bcc 0d2b
.org 0x113bce
	bne.n 0x113bdc	@ 00113bce 05d1
.org 0x113bd0
	movs r0, #17	@ 00113bd0 1120
.org 0x113bd2
	strh r0, [r2, #0]	@ 00113bd2 1080
.org 0x113bd4
	movs r1, #8	@ 00113bd4 0821
.org 0x113bd6
	bl 0x1f134	@ 00113bd6 0bf7adfa
.org 0x113bda
	b.n 0x113c0e	@ 00113bda 18e0
.org 0x113bdc
	adds r1, r6, r7	@ 00113bdc f119
.org 0x113bde
	ldrh r0, [r1, #0]	@ 00113bde 0888
.org 0x113be0
	cmp r0, #14	@ 00113be0 0e28
.org 0x113be2
	beq.n 0x113be8	@ 00113be2 01d0
.org 0x113be4
	cmp r0, #15	@ 00113be4 0f28
.org 0x113be6
	bne.n 0x113bf4	@ 00113be6 05d1
.org 0x113be8
	movs r0, #17	@ 00113be8 1120
.org 0x113bea
	strh r0, [r1, #0]	@ 00113bea 0880
.org 0x113bec
	movs r1, #4	@ 00113bec 0421
.org 0x113bee
	bl 0x1f134	@ 00113bee 0bf7a1fa
.org 0x113bf2
	b.n 0x113c0e	@ 00113bf2 0ce0
.org 0x113bf4
	cmp r0, #16	@ 00113bf4 1028
.org 0x113bf6
	bne.n 0x113c04	@ 00113bf6 05d1
.org 0x113bf8
	movs r0, #18	@ 00113bf8 1220
.org 0x113bfa
	strh r0, [r1, #0]	@ 00113bfa 0880
.org 0x113bfc
	movs r1, #0	@ 00113bfc 0021
.org 0x113bfe
	bl 0x1f134	@ 00113bfe 0bf799fa
.org 0x113c02
	b.n 0x113c0e	@ 00113c02 04e0
.org 0x113c04
	movs r0, #17	@ 00113c04 1120
