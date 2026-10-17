@ FUN_080b3d68  entry 0x080b3d68  size 72
.thumb
.org 0xb3d68
FUN_080b3d68:
	push {r4, lr}	@ 000b3d68 10b5
.org 0xb3d6a
	adds r4, r0, #0	@ 000b3d6a 041c
.org 0xb3d6c
	adds r0, #181	@ 000b3d6c b530
.org 0xb3d6e
	ldrb r0, [r0, #0]	@ 000b3d6e 0078
.org 0xb3d70
	cmp r0, #0	@ 000b3d70 0028
.org 0xb3d72
	beq.n 0xb3daa	@ 000b3d72 1ad0
.org 0xb3d74
	ldr r0, [r4, #44]	@ 000b3d74 e06a
.org 0xb3d76
	cmp r0, #0	@ 000b3d76 0028
.org 0xb3d78
	bne.n 0xb3daa	@ 000b3d78 17d1
.org 0xb3d7a
	adds r0, r4, #0	@ 000b3d7a 201c
.org 0xb3d7c
	adds r0, #140	@ 000b3d7c 8c30
.org 0xb3d7e
	ldr r0, [r0, #0]	@ 000b3d7e 0068
.org 0xb3d80
	movs r1, #1	@ 000b3d80 0121
.org 0xb3d82
	ands r0, r1	@ 000b3d82 0840
.org 0xb3d84
	cmp r0, #0	@ 000b3d84 0028
.org 0xb3d86
	beq.n 0xb3daa	@ 000b3d86 10d0
.org 0xb3d88
	ldr r2, [pc, #36]	@ 000b3d88 094a
.org 0xb3d8a
	movs r0, #0	@ 000b3d8a 0020
.org 0xb3d8c
	adds r1, r4, #0	@ 000b3d8c 211c
.org 0xb3d8e
	bl 0x2adac	@ 000b3d8e 77f70df8
.org 0xb3d92
	str r0, [r4, #44]	@ 000b3d92 e062
.org 0xb3d94
	cmp r0, #0	@ 000b3d94 0028
.org 0xb3d96
	beq.n 0xb3daa	@ 000b3d96 08d0
.org 0xb3d98
	adds r0, r4, #0	@ 000b3d98 201c
.org 0xb3d9a
	adds r0, #116	@ 000b3d9a 7430
.org 0xb3d9c
	ldr r1, [pc, #20]	@ 000b3d9c 0549
.org 0xb3d9e
	bl 0x5784	@ 000b3d9e 51f7f1fc
.org 0xb3da2
	ldr r1, [pc, #20]	@ 000b3da2 0549
.org 0xb3da4
	adds r0, r4, #0	@ 000b3da4 201c
.org 0xb3da6
	bl 0x1cf00	@ 000b3da6 69f7abf8
.org 0xb3daa
	pop {r4}	@ 000b3daa 10bc
.org 0xb3dac
	pop {r0}	@ 000b3dac 01bc
.org 0xb3dae
	bx r0	@ 000b3dae 0047
