@ FUN_08036b5c  entry 0x08036b5c  size 108
.thumb
.org 0x36b5c
FUN_08036b5c:
	push {r4, r5, r6, r7, lr}	@ 00036b5c f0b5
.org 0x36b5e
	adds r5, r0, #0	@ 00036b5e 051c
.org 0x36b60
	movs r0, #129	@ 00036b60 8120
.org 0x36b62
	lsls r0, r0, #1	@ 00036b62 4000
.org 0x36b64
	adds r7, r5, r0	@ 00036b64 2f18
.org 0x36b66
	ldrb r0, [r7, #0]	@ 00036b66 3878
.org 0x36b68
	cmp r0, #0	@ 00036b68 0028
.org 0x36b6a
	bne.n 0x36b86	@ 00036b6a 0cd1
.org 0x36b6c
	ldr r1, [pc, #88]	@ 00036b6c 1649
.org 0x36b6e
	adds r2, r5, r1	@ 00036b6e 6a18
.org 0x36b70
	ldrb r0, [r2, #0]	@ 00036b70 1078
.org 0x36b72
	movs r1, #65	@ 00036b72 4121
.org 0x36b74
	negs r1, r1	@ 00036b74 4942
.org 0x36b76
	ands r1, r0	@ 00036b76 0140
.org 0x36b78
	strb r1, [r2, #0]	@ 00036b78 1170
.org 0x36b7a
	adds r0, r5, #0	@ 00036b7a 281c
.org 0x36b7c
	bl 0x3a2b8	@ 00036b7c 03f09cfb
.org 0x36b80
	ldrb r0, [r7, #0]	@ 00036b80 3878
.org 0x36b82
	adds r0, #1	@ 00036b82 0130
.org 0x36b84
	strb r0, [r7, #0]	@ 00036b84 3870
.org 0x36b86
	ldr r4, [pc, #68]	@ 00036b86 114c
.org 0x36b88
	ldr r0, [pc, #68]	@ 00036b88 1148
.org 0x36b8a
	adds r6, r5, r0	@ 00036b8a 2e18
.org 0x36b8c
	ldrb r0, [r6, #0]	@ 00036b8c 3078
.org 0x36b8e
	lsls r0, r0, #1	@ 00036b8e 4000
.org 0x36b90
	adds r0, r0, r4	@ 00036b90 0019
.org 0x36b92
	ldrh r1, [r0, #0]	@ 00036b92 0188
.org 0x36b94
	adds r0, r5, #0	@ 00036b94 281c
.org 0x36b96
	bl 0x3a3b0	@ 00036b96 03f00bfc
.org 0x36b9a
	ldrb r0, [r6, #0]	@ 00036b9a 3078
.org 0x36b9c
	lsls r0, r0, #1	@ 00036b9c 4000
.org 0x36b9e
	adds r0, r0, r4	@ 00036b9e 0019
.org 0x36ba0
	ldrh r1, [r0, #0]	@ 00036ba0 0188
.org 0x36ba2
	adds r0, r5, #0	@ 00036ba2 281c
.org 0x36ba4
	bl 0x3a3f0	@ 00036ba4 03f024fc
.org 0x36ba8
	ldr r1, [pc, #28]	@ 00036ba8 0749
.org 0x36baa
	adds r0, r5, r1	@ 00036baa 6818
.org 0x36bac
	ldrb r1, [r0, #0]	@ 00036bac 0178
.org 0x36bae
	movs r0, #64	@ 00036bae 4020
.org 0x36bb0
	ands r0, r1	@ 00036bb0 0840
.org 0x36bb2
	cmp r0, #0	@ 00036bb2 0028
.org 0x36bb4
	beq.n 0x36bc2	@ 00036bb4 05d0
.org 0x36bb6
	ldr r0, [pc, #28]	@ 00036bb6 0748
.org 0x36bb8
	adds r2, r5, r0	@ 00036bb8 2a18
.org 0x36bba
	movs r1, #0	@ 00036bba 0021
.org 0x36bbc
	movs r0, #4	@ 00036bbc 0420
.org 0x36bbe
	strb r0, [r2, #0]	@ 00036bbe 1070
.org 0x36bc0
	strb r1, [r7, #0]	@ 00036bc0 3970
.org 0x36bc2
	pop {r4, r5, r6, r7}	@ 00036bc2 f0bc
.org 0x36bc4
	pop {r0}	@ 00036bc4 01bc
.org 0x36bc6
	bx r0	@ 00036bc6 0047
