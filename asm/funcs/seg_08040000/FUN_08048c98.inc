@ FUN_08048c98  entry 0x08048c98  size 40
.thumb
.org 0x48c98
FUN_08048c98:
	push {r4, lr}	@ 00048c98 10b5
.org 0x48c9a
	adds r4, r0, #0	@ 00048c9a 041c
.org 0x48c9c
	adds r0, #189	@ 00048c9c bd30
.org 0x48c9e
	ldrb r0, [r0, #0]	@ 00048c9e 0078
.org 0x48ca0
	cmp r0, #0	@ 00048ca0 0028
.org 0x48ca2
	beq.n 0x48cb4	@ 00048ca2 07d0
.org 0x48ca4
	adds r1, r4, #0	@ 00048ca4 211c
.org 0x48ca6
	adds r1, #84	@ 00048ca6 5431
.org 0x48ca8
	movs r0, #1	@ 00048ca8 0120
.org 0x48caa
	bl 0xd0c88	@ 00048caa 87f0edff
.org 0x48cae
	movs r0, #53	@ 00048cae 3520
.org 0x48cb0
	bl 0x2b10	@ 00048cb0 b9f72eff
.org 0x48cb4
	adds r0, r4, #0	@ 00048cb4 201c
.org 0x48cb6
	bl 0x3a8b4	@ 00048cb6 f1f7fdfd
.org 0x48cba
	pop {r4}	@ 00048cba 10bc
.org 0x48cbc
	pop {r0}	@ 00048cbc 01bc
.org 0x48cbe
	bx r0	@ 00048cbe 0047
