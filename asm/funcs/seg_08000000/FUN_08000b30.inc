@ FUN_08000b30  entry 0x08000b30  size 116
.thumb
.org 0xb30
FUN_08000b30:
	push {r4, r5, r6, lr}	@ 00000b30 70b5
.org 0xb32
	adds r5, r0, #0	@ 00000b32 051c
.org 0xb34
	adds r6, r1, #0	@ 00000b34 0e1c
.org 0xb36
	adds r4, r2, #0	@ 00000b36 141c
.org 0xb38
	movs r0, #2	@ 00000b38 0220
.org 0xb3a
	negs r0, r0	@ 00000b3a 4042
.org 0xb3c
	ands r4, r0	@ 00000b3c 0440
.org 0xb3e
	cmp r4, #0	@ 00000b3e 002c
.org 0xb40
	beq.n 0xb9e	@ 00000b40 2dd0
.org 0xb42
	ands r5, r0	@ 00000b42 0540
.org 0xb44
	ands r6, r0	@ 00000b44 0640
.org 0xb46
	movs r1, #2	@ 00000b46 0221
.org 0xb48
	adds r0, r5, #0	@ 00000b48 281c
.org 0xb4a
	ands r0, r1	@ 00000b4a 0840
.org 0xb4c
	cmp r0, #0	@ 00000b4c 0028
.org 0xb4e
	bne.n 0xb58	@ 00000b4e 03d1
.org 0xb50
	adds r0, r6, #0	@ 00000b50 301c
.org 0xb52
	ands r0, r1	@ 00000b52 0840
.org 0xb54
	cmp r0, #0	@ 00000b54 0028
.org 0xb56
	beq.n 0xb66	@ 00000b56 06d0
.org 0xb58
	lsls r2, r4, #10	@ 00000b58 a202
.org 0xb5a
	lsrs r2, r2, #11	@ 00000b5a d20a
.org 0xb5c
	adds r0, r5, #0	@ 00000b5c 281c
.org 0xb5e
	adds r1, r6, #0	@ 00000b5e 311c
.org 0xb60
	bl 0x128be4	@ 00000b60 28f140f8
.org 0xb64
	b.n 0xb9e	@ 00000b64 1be0
.org 0xb66
	cmp r4, #31	@ 00000b66 1f2c
.org 0xb68
	bls.n 0xb86	@ 00000b68 0dd9
.org 0xb6a
	movs r2, #32	@ 00000b6a 2022
.org 0xb6c
	negs r2, r2	@ 00000b6c 5242
.org 0xb6e
	ands r2, r4	@ 00000b6e 2240
.org 0xb70
	lsrs r2, r2, #2	@ 00000b70 9208
.org 0xb72
	ldr r0, [pc, #48]	@ 00000b72 0c48
.org 0xb74
	ands r2, r0	@ 00000b74 0240
.org 0xb76
	adds r0, r5, #0	@ 00000b76 281c
.org 0xb78
	adds r1, r6, #0	@ 00000b78 311c
.org 0xb7a
	bl 0x128be0	@ 00000b7a 28f131f8
.org 0xb7e
	movs r0, #31	@ 00000b7e 1f20
.org 0xb80
	ands r0, r4	@ 00000b80 2040
.org 0xb82
	cmp r0, #0	@ 00000b82 0028
.org 0xb84
	beq.n 0xb9e	@ 00000b84 0bd0
.org 0xb86
	movs r0, #32	@ 00000b86 2020
.org 0xb88
	negs r0, r0	@ 00000b88 4042
.org 0xb8a
	ands r0, r4	@ 00000b8a 2040
.org 0xb8c
	adds r5, r5, r0	@ 00000b8c 2d18
.org 0xb8e
	adds r6, r6, r0	@ 00000b8e 3618
.org 0xb90
	movs r2, #31	@ 00000b90 1f22
.org 0xb92
	ands r2, r4	@ 00000b92 2240
.org 0xb94
	lsrs r2, r2, #1	@ 00000b94 5208
.org 0xb96
	adds r0, r5, #0	@ 00000b96 281c
.org 0xb98
	adds r1, r6, #0	@ 00000b98 311c
.org 0xb9a
	bl 0x128be4	@ 00000b9a 28f123f8
.org 0xb9e
	pop {r4, r5, r6}	@ 00000b9e 70bc
.org 0xba0
	pop {r0}	@ 00000ba0 01bc
.org 0xba2
	bx r0	@ 00000ba2 0047
