@ FUN_080a5c64  entry 0x080a5c64  size 74
.thumb
.org 0xa5c64
FUN_080a5c64:
	push {r4, lr}	@ 000a5c64 10b5
.org 0xa5c66
	adds r4, r0, #0	@ 000a5c66 041c
.org 0xa5c68
	ldrb r0, [r4, #15]	@ 000a5c68 e07b
.org 0xa5c6a
	cmp r0, #0	@ 000a5c6a 0028
.org 0xa5c6c
	bne.n 0xa5c8e	@ 000a5c6c 0fd1
.org 0xa5c6e
	adds r0, r4, #0	@ 000a5c6e 201c
.org 0xa5c70
	adds r0, #116	@ 000a5c70 7430
.org 0xa5c72
	ldr r1, [pc, #60]	@ 000a5c72 0f49
.org 0xa5c74
	bl 0x5784	@ 000a5c74 5ff786fd
.org 0xa5c78
	ldr r1, [pc, #56]	@ 000a5c78 0e49
.org 0xa5c7a
	adds r0, r4, #0	@ 000a5c7a 201c
.org 0xa5c7c
	bl 0x1cf00	@ 000a5c7c 77f740f9
.org 0xa5c80
	adds r0, r4, #0	@ 000a5c80 201c
.org 0xa5c82
	movs r1, #5	@ 000a5c82 0521
.org 0xa5c84
	bl 0x1d3d0	@ 000a5c84 77f7a4fb
.org 0xa5c88
	ldrb r0, [r4, #15]	@ 000a5c88 e07b
.org 0xa5c8a
	adds r0, #1	@ 000a5c8a 0130
.org 0xa5c8c
	strb r0, [r4, #15]	@ 000a5c8c e073
.org 0xa5c8e
	adds r0, r4, #0	@ 000a5c8e 201c
.org 0xa5c90
	bl 0x1cff0	@ 000a5c90 77f7aef9
.org 0xa5c94
	adds r0, r4, #0	@ 000a5c94 201c
.org 0xa5c96
	adds r0, #115	@ 000a5c96 7330
.org 0xa5c98
	ldrb r0, [r0, #0]	@ 000a5c98 0078
.org 0xa5c9a
	cmp r0, #3	@ 000a5c9a 0328
.org 0xa5c9c
	bne.n 0xa5ca8	@ 000a5c9c 04d1
.org 0xa5c9e
	movs r1, #0	@ 000a5c9e 0021
.org 0xa5ca0
	movs r0, #4	@ 000a5ca0 0420
.org 0xa5ca2
	strb r0, [r4, #13]	@ 000a5ca2 6073
.org 0xa5ca4
	strb r1, [r4, #14]	@ 000a5ca4 a173
.org 0xa5ca6
	strb r1, [r4, #15]	@ 000a5ca6 e173
.org 0xa5ca8
	pop {r4}	@ 000a5ca8 10bc
.org 0xa5caa
	pop {r0}	@ 000a5caa 01bc
.org 0xa5cac
	bx r0	@ 000a5cac 0047
