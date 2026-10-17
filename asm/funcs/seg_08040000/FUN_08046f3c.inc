@ FUN_08046f3c  entry 0x08046f3c  size 40
.thumb
.org 0x46f3c
FUN_08046f3c:
	push {r4, lr}	@ 00046f3c 10b5
.org 0x46f3e
	adds r4, r0, #0	@ 00046f3e 041c
.org 0x46f40
	adds r0, #189	@ 00046f40 bd30
.org 0x46f42
	ldrb r0, [r0, #0]	@ 00046f42 0078
.org 0x46f44
	cmp r0, #0	@ 00046f44 0028
.org 0x46f46
	beq.n 0x46f58	@ 00046f46 07d0
.org 0x46f48
	adds r1, r4, #0	@ 00046f48 211c
.org 0x46f4a
	adds r1, #84	@ 00046f4a 5431
.org 0x46f4c
	movs r0, #1	@ 00046f4c 0120
.org 0x46f4e
	bl 0xd0c88	@ 00046f4e 89f09bfe
.org 0x46f52
	movs r0, #53	@ 00046f52 3520
.org 0x46f54
	bl 0x2b10	@ 00046f54 bbf7dcfd
.org 0x46f58
	adds r0, r4, #0	@ 00046f58 201c
.org 0x46f5a
	bl 0x3a8b4	@ 00046f5a f3f7abfc
.org 0x46f5e
	pop {r4}	@ 00046f5e 10bc
.org 0x46f60
	pop {r0}	@ 00046f60 01bc
.org 0x46f62
	bx r0	@ 00046f62 0047
