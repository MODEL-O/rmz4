@ FUN_080f6ab8  entry 0x080f6ab8  size 178
.thumb
.org 0xf6ab8
FUN_080f6ab8:
	push {r4, r5, r6, r7, lr}	@ 000f6ab8 f0b5
.org 0xf6aba
	lsls r1, r1, #24	@ 000f6aba 0906
.org 0xf6abc
	lsrs r1, r1, #24	@ 000f6abc 090e
.org 0xf6abe
	adds r2, r1, #0	@ 000f6abe 0a1c
.org 0xf6ac0
	ldr r4, [r0, #0]	@ 000f6ac0 0468
.org 0xf6ac2
	ldr r5, [r0, #4]	@ 000f6ac2 4568
.org 0xf6ac4
	movs r6, #0	@ 000f6ac4 0026
.org 0xf6ac6
	cmp r1, #1	@ 000f6ac6 0129
.org 0xf6ac8
	beq.n 0xf6b04	@ 000f6ac8 1cd0
.org 0xf6aca
	cmp r1, #1	@ 000f6aca 0129
.org 0xf6acc
	bgt.n 0xf6ad4	@ 000f6acc 02dc
.org 0xf6ace
	cmp r1, #0	@ 000f6ace 0029
.org 0xf6ad0
	beq.n 0xf6ae4	@ 000f6ad0 08d0
.org 0xf6ad2
	b.n 0xf6b6a	@ 000f6ad2 4ae0
.org 0xf6ad4
	cmp r2, #2	@ 000f6ad4 022a
.org 0xf6ad6
	beq.n 0xf6b2a	@ 000f6ad6 28d0
.org 0xf6ad8
	cmp r2, #3	@ 000f6ad8 032a
.org 0xf6ada
	beq.n 0xf6b52	@ 000f6ada 3ad0
.org 0xf6adc
	b.n 0xf6b6a	@ 000f6adc 45e0
.org 0xf6ade
	adds r0, r6, #1	@ 000f6ade 701c
.org 0xf6ae0
	lsls r0, r0, #24	@ 000f6ae0 0006
.org 0xf6ae2
	lsrs r6, r0, #24	@ 000f6ae2 060e
.org 0xf6ae4
	cmp r6, #254	@ 000f6ae4 fe2e
.org 0xf6ae6
	bhi.n 0xf6b6a	@ 000f6ae6 40d8
.org 0xf6ae8
	ldr r0, [pc, #16]	@ 000f6ae8 0448
.org 0xf6aea
	adds r1, r5, r0	@ 000f6aea 2918
.org 0xf6aec
	adds r5, r1, #0	@ 000f6aec 0d1c
.org 0xf6aee
	ldr r2, [pc, #16]	@ 000f6aee 044a
.org 0xf6af0
	adds r0, r4, r2	@ 000f6af0 a018
.org 0xf6af2
	bl 0x7db4	@ 000f6af2 11f75ff9
.org 0xf6af6
	cmp r0, #0	@ 000f6af6 0028
.org 0xf6af8
	beq.n 0xf6ade	@ 000f6af8 f1d0
.org 0xf6afa
	b.n 0xf6b6a	@ 000f6afa 36e0
.org 0xf6afc
	.byte 0x00,0xf0,0xff,0xff	@ 000f6afc data
.org 0xf6b00
	.byte 0x00,0xf1,0xff,0xff	@ 000f6b00 data
.org 0xf6b04
	movs r6, #1	@ 000f6b04 0126
.org 0xf6b06
	b.n 0xf6b0e	@ 000f6b06 02e0
.org 0xf6b08
	adds r0, r6, #1	@ 000f6b08 701c
.org 0xf6b0a
	lsls r0, r0, #24	@ 000f6b0a 0006
.org 0xf6b0c
	lsrs r6, r0, #24	@ 000f6b0c 060e
.org 0xf6b0e
	cmp r6, #254	@ 000f6b0e fe2e
.org 0xf6b10
	bhi.n 0xf6b6a	@ 000f6b10 2bd8
.org 0xf6b12
	movs r0, #128	@ 000f6b12 8020
.org 0xf6b14
	lsls r0, r0, #5	@ 000f6b14 4001
.org 0xf6b16
	adds r5, r5, r0	@ 000f6b16 2d18
.org 0xf6b18
	movs r2, #128	@ 000f6b18 8022
.org 0xf6b1a
	lsls r2, r2, #6	@ 000f6b1a 9201
.org 0xf6b1c
	adds r1, r5, r2	@ 000f6b1c a918
.org 0xf6b1e
	adds r0, r4, #0	@ 000f6b1e 201c
.org 0xf6b20
	bl 0x7f8c	@ 000f6b20 11f734fa
.org 0xf6b24
	cmp r0, #0	@ 000f6b24 0028
.org 0xf6b26
	beq.n 0xf6b08	@ 000f6b26 efd0
.org 0xf6b28
	b.n 0xf6b6a	@ 000f6b28 1fe0
.org 0xf6b2a
	movs r6, #1	@ 000f6b2a 0126
.org 0xf6b2c
	movs r7, #128	@ 000f6b2c 8027
.org 0xf6b2e
	lsls r7, r7, #5	@ 000f6b2e 7f01
.org 0xf6b30
	b.n 0xf6b38	@ 000f6b30 02e0
.org 0xf6b32
	adds r0, r6, #1	@ 000f6b32 701c
.org 0xf6b34
	lsls r0, r0, #24	@ 000f6b34 0006
.org 0xf6b36
	lsrs r6, r0, #24	@ 000f6b36 060e
.org 0xf6b38
	cmp r6, #254	@ 000f6b38 fe2e
.org 0xf6b3a
	bhi.n 0xf6b6a	@ 000f6b3a 16d8
.org 0xf6b3c
	adds r4, r4, r7	@ 000f6b3c e419
.org 0xf6b3e
	adds r0, r4, r7	@ 000f6b3e e019
.org 0xf6b40
	adds r1, r5, r7	@ 000f6b40 e919
.org 0xf6b42
	bl 0x834c	@ 000f6b42 11f703fc
.org 0xf6b46
	cmp r0, #0	@ 000f6b46 0028
.org 0xf6b48
	beq.n 0xf6b32	@ 000f6b48 f3d0
.org 0xf6b4a
	b.n 0xf6b6a	@ 000f6b4a 0ee0
.org 0xf6b4c
	adds r0, r6, #1	@ 000f6b4c 701c
.org 0xf6b4e
	lsls r0, r0, #24	@ 000f6b4e 0006
.org 0xf6b50
	lsrs r6, r0, #24	@ 000f6b50 060e
.org 0xf6b52
	cmp r6, #254	@ 000f6b52 fe2e
.org 0xf6b54
	bhi.n 0xf6b6a	@ 000f6b54 09d8
.org 0xf6b56
	ldr r1, [pc, #28]	@ 000f6b56 0749
.org 0xf6b58
	adds r0, r4, r1	@ 000f6b58 6018
.org 0xf6b5a
	adds r4, r0, #0	@ 000f6b5a 041c
.org 0xf6b5c
	movs r2, #128	@ 000f6b5c 8022
.org 0xf6b5e
	lsls r2, r2, #5	@ 000f6b5e 5201
.org 0xf6b60
	adds r1, r5, r2	@ 000f6b60 a918
.org 0xf6b62
	bl 0x816c	@ 000f6b62 11f703fb
.org 0xf6b66
	cmp r0, #0	@ 000f6b66 0028
.org 0xf6b68
	beq.n 0xf6b4c	@ 000f6b68 f0d0
