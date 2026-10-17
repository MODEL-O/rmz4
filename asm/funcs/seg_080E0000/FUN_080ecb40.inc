@ FUN_080ecb40  entry 0x080ecb40  size 104
.thumb
.org 0xecb40
FUN_080ecb40:
	push {r4, r5, lr}	@ 000ecb40 30b5
.org 0xecb42
	sub sp, #4	@ 000ecb42 81b0
.org 0xecb44
	adds r4, r0, #0	@ 000ecb44 041c
.org 0xecb46
	ldr r1, [pc, #96]	@ 000ecb46 1849
.org 0xecb48
	mov r0, sp	@ 000ecb48 6846
.org 0xecb4a
	movs r2, #4	@ 000ecb4a 0422
.org 0xecb4c
	bl 0x129258	@ 000ecb4c 3cf084fb
.org 0xecb50
	ldrb r5, [r4, #15]	@ 000ecb50 e57b
.org 0xecb52
	cmp r5, #0	@ 000ecb52 002d
.org 0xecb54
	bne.n 0xecb66	@ 000ecb54 07d1
.org 0xecb56
	ldr r1, [pc, #84]	@ 000ecb56 1549
.org 0xecb58
	adds r0, r4, #0	@ 000ecb58 201c
.org 0xecb5a
	bl 0x1cf00	@ 000ecb5a 30f7d1f9
.org 0xecb5e
	strb r5, [r4, #18]	@ 000ecb5e a574
.org 0xecb60
	ldrb r0, [r4, #15]	@ 000ecb60 e07b
.org 0xecb62
	adds r0, #1	@ 000ecb62 0130
.org 0xecb64
	strb r0, [r4, #15]	@ 000ecb64 e073
.org 0xecb66
	adds r0, r4, #0	@ 000ecb66 201c
.org 0xecb68
	bl 0x1cff0	@ 000ecb68 30f742fa
.org 0xecb6c
	adds r0, r4, #0	@ 000ecb6c 201c
.org 0xecb6e
	adds r0, #113	@ 000ecb6e 7130
.org 0xecb70
	ldrb r0, [r0, #0]	@ 000ecb70 0078
.org 0xecb72
	lsls r0, r0, #24	@ 000ecb72 0006
.org 0xecb74
	asrs r0, r0, #24	@ 000ecb74 0016
.org 0xecb76
	ldrb r1, [r4, #18]	@ 000ecb76 a17c
.org 0xecb78
	add r1, sp	@ 000ecb78 6944
.org 0xecb7a
	ldrb r1, [r1, #0]	@ 000ecb7a 0978
.org 0xecb7c
	cmp r0, r1	@ 000ecb7c 8842
.org 0xecb7e
	blt.n 0xecb8c	@ 000ecb7e 05db
.org 0xecb80
	movs r0, #91	@ 000ecb80 5b20
.org 0xecb82
	bl 0x2b10	@ 000ecb82 15f7c5ff
.org 0xecb86
	ldrb r0, [r4, #18]	@ 000ecb86 a07c
.org 0xecb88
	adds r0, #1	@ 000ecb88 0130
.org 0xecb8a
	strb r0, [r4, #18]	@ 000ecb8a a074
.org 0xecb8c
	adds r0, r4, #0	@ 000ecb8c 201c
.org 0xecb8e
	adds r0, #115	@ 000ecb8e 7330
.org 0xecb90
	ldrb r0, [r0, #0]	@ 000ecb90 0078
.org 0xecb92
	cmp r0, #3	@ 000ecb92 0328
.org 0xecb94
	bne.n 0xecba0	@ 000ecb94 04d1
.org 0xecb96
	movs r1, #0	@ 000ecb96 0021
.org 0xecb98
	movs r0, #2	@ 000ecb98 0220
.org 0xecb9a
	strb r0, [r4, #13]	@ 000ecb9a 6073
.org 0xecb9c
	strb r1, [r4, #14]	@ 000ecb9c a173
.org 0xecb9e
	strb r1, [r4, #15]	@ 000ecb9e e173
.org 0xecba0
	add sp, #4	@ 000ecba0 01b0
.org 0xecba2
	pop {r4, r5}	@ 000ecba2 30bc
.org 0xecba4
	pop {r0}	@ 000ecba4 01bc
.org 0xecba6
	bx r0	@ 000ecba6 0047
