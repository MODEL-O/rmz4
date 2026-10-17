@ FUN_080b4e54  entry 0x080b4e54  size 80
.thumb
.org 0xb4e54
FUN_080b4e54:
	push {r4, r5, r6, lr}	@ 000b4e54 70b5
.org 0xb4e56
	adds r4, r0, #0	@ 000b4e56 041c
.org 0xb4e58
	ldr r0, [r4, #20]	@ 000b4e58 6069
.org 0xb4e5a
	movs r6, #1	@ 000b4e5a 0126
.org 0xb4e5c
	ands r0, r6	@ 000b4e5c 3040
.org 0xb4e5e
	cmp r0, #0	@ 000b4e5e 0028
.org 0xb4e60
	beq.n 0xb4e9e	@ 000b4e60 1dd0
.org 0xb4e62
	ldr r5, [r4, #44]	@ 000b4e62 e56a
.org 0xb4e64
	movs r0, #26	@ 000b4e64 1a20
.org 0xb4e66
	bl 0x6984	@ 000b4e66 51f78dfd
.org 0xb4e6a
	ldr r1, [r4, #20]	@ 000b4e6a 6169
.org 0xb4e6c
	movs r0, #128	@ 000b4e6c 8020
.org 0xb4e6e
	lsls r0, r0, #2	@ 000b4e6e 8000
.org 0xb4e70
	ands r0, r1	@ 000b4e70 0840
.org 0xb4e72
	cmp r0, #0	@ 000b4e72 0028
.org 0xb4e74
	beq.n 0xb4e96	@ 000b4e74 0fd0
.org 0xb4e76
	movs r0, #128	@ 000b4e76 8020
.org 0xb4e78
	lsls r0, r0, #10	@ 000b4e78 8002
.org 0xb4e7a
	ands r1, r0	@ 000b4e7a 0140
.org 0xb4e7c
	cmp r1, #0	@ 000b4e7c 0029
.org 0xb4e7e
	beq.n 0xb4e96	@ 000b4e7e 0ad0
.org 0xb4e80
	adds r0, r5, #0	@ 000b4e80 281c
.org 0xb4e82
	adds r0, #180	@ 000b4e82 b430
.org 0xb4e84
	strb r6, [r0, #0]	@ 000b4e84 0670
.org 0xb4e86
	ldr r0, [pc, #28]	@ 000b4e86 0748
.org 0xb4e88
	ldr r0, [r0, #0]	@ 000b4e88 0068
.org 0xb4e8a
	cmp r0, #0	@ 000b4e8a 0028
.org 0xb4e8c
	beq.n 0xb4e96	@ 000b4e8c 03d0
.org 0xb4e8e
	movs r1, #6	@ 000b4e8e 0621
.org 0xb4e90
	movs r2, #11	@ 000b4e90 0b22
.org 0xb4e92
	bl 0x3a578	@ 000b4e92 85f771fb
.org 0xb4e96
	movs r1, #0	@ 000b4e96 0021
.org 0xb4e98
	movs r0, #5	@ 000b4e98 0520
.org 0xb4e9a
	strb r0, [r5, #13]	@ 000b4e9a 6873
.org 0xb4e9c
	strb r1, [r5, #14]	@ 000b4e9c a973
.org 0xb4e9e
	pop {r4, r5, r6}	@ 000b4e9e 70bc
.org 0xb4ea0
	pop {r0}	@ 000b4ea0 01bc
.org 0xb4ea2
	bx r0	@ 000b4ea2 0047
