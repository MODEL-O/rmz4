@ FUN_080a5b7c  entry 0x080a5b7c  size 80
.thumb
.org 0xa5b7c
FUN_080a5b7c:
	push {r4, lr}	@ 000a5b7c 10b5
.org 0xa5b7e
	adds r4, r0, #0	@ 000a5b7e 041c
.org 0xa5b80
	ldrb r0, [r4, #15]	@ 000a5b80 e07b
.org 0xa5b82
	cmp r0, #0	@ 000a5b82 0028
.org 0xa5b84
	bne.n 0xa5bac	@ 000a5b84 12d1
.org 0xa5b86
	adds r0, r4, #0	@ 000a5b86 201c
.org 0xa5b88
	adds r0, #116	@ 000a5b88 7430
.org 0xa5b8a
	ldr r1, [pc, #64]	@ 000a5b8a 1049
.org 0xa5b8c
	bl 0x5784	@ 000a5b8c 5ff7fafd
.org 0xa5b90
	ldr r1, [pc, #60]	@ 000a5b90 0f49
.org 0xa5b92
	adds r0, r4, #0	@ 000a5b92 201c
.org 0xa5b94
	bl 0x1cf00	@ 000a5b94 77f7b4f9
.org 0xa5b98
	adds r0, r4, #0	@ 000a5b98 201c
.org 0xa5b9a
	bl 0x1d330	@ 000a5b9a 77f7c9fb
.org 0xa5b9e
	adds r0, r4, #0	@ 000a5b9e 201c
.org 0xa5ba0
	movs r1, #6	@ 000a5ba0 0621
.org 0xa5ba2
	bl 0x1d3d0	@ 000a5ba2 77f715fc
.org 0xa5ba6
	ldrb r0, [r4, #15]	@ 000a5ba6 e07b
.org 0xa5ba8
	adds r0, #1	@ 000a5ba8 0130
.org 0xa5baa
	strb r0, [r4, #15]	@ 000a5baa e073
.org 0xa5bac
	adds r0, r4, #0	@ 000a5bac 201c
.org 0xa5bae
	bl 0x1cff0	@ 000a5bae 77f71ffa
.org 0xa5bb2
	adds r0, r4, #0	@ 000a5bb2 201c
.org 0xa5bb4
	adds r0, #115	@ 000a5bb4 7330
.org 0xa5bb6
	ldrb r0, [r0, #0]	@ 000a5bb6 0078
.org 0xa5bb8
	cmp r0, #3	@ 000a5bb8 0328
.org 0xa5bba
	bne.n 0xa5bc6	@ 000a5bba 04d1
.org 0xa5bbc
	movs r1, #0	@ 000a5bbc 0021
.org 0xa5bbe
	movs r0, #2	@ 000a5bbe 0220
.org 0xa5bc0
	strb r0, [r4, #13]	@ 000a5bc0 6073
.org 0xa5bc2
	strb r1, [r4, #14]	@ 000a5bc2 a173
.org 0xa5bc4
	strb r1, [r4, #15]	@ 000a5bc4 e173
.org 0xa5bc6
	pop {r4}	@ 000a5bc6 10bc
.org 0xa5bc8
	pop {r0}	@ 000a5bc8 01bc
.org 0xa5bca
	bx r0	@ 000a5bca 0047
