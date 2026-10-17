@ FUN_08037af0  entry 0x08037af0  size 80
.thumb
.org 0x37af0
FUN_08037af0:
	push {r4, r5, r6, lr}	@ 00037af0 70b5
.org 0x37af2
	adds r5, r0, #0	@ 00037af2 051c
.org 0x37af4
	movs r0, #129	@ 00037af4 8120
.org 0x37af6
	lsls r0, r0, #1	@ 00037af6 4000
.org 0x37af8
	adds r6, r5, r0	@ 00037af8 2e18
.org 0x37afa
	ldrb r0, [r6, #0]	@ 00037afa 3078
.org 0x37afc
	cmp r0, #0	@ 00037afc 0028
.org 0x37afe
	bne.n 0x37b0e	@ 00037afe 06d1
.org 0x37b00
	ldr r1, [pc, #60]	@ 00037b00 0f49
.org 0x37b02
	adds r0, r5, #0	@ 00037b02 281c
.org 0x37b04
	bl 0x1cf00	@ 00037b04 e5f7fcf9
.org 0x37b08
	ldrb r0, [r6, #0]	@ 00037b08 3078
.org 0x37b0a
	adds r0, #1	@ 00037b0a 0130
.org 0x37b0c
	strb r0, [r6, #0]	@ 00037b0c 3070
.org 0x37b0e
	ldr r4, [pc, #48]	@ 00037b0e 0c4c
.org 0x37b10
	adds r0, r5, #0	@ 00037b10 281c
.org 0x37b12
	adds r1, r4, #0	@ 00037b12 211c
.org 0x37b14
	bl 0x3a3b0	@ 00037b14 02f04cfc
.org 0x37b18
	adds r0, r5, #0	@ 00037b18 281c
.org 0x37b1a
	adds r1, r4, #0	@ 00037b1a 211c
.org 0x37b1c
	bl 0x3a3f0	@ 00037b1c 02f068fc
.org 0x37b20
	ldr r1, [pc, #32]	@ 00037b20 0849
.org 0x37b22
	adds r0, r5, r1	@ 00037b22 6818
.org 0x37b24
	ldrb r2, [r0, #0]	@ 00037b24 0278
.org 0x37b26
	cmp r2, #3	@ 00037b26 032a
.org 0x37b28
	bne.n 0x37b3a	@ 00037b28 07d1
.org 0x37b2a
	ldr r0, [pc, #28]	@ 00037b2a 0748
.org 0x37b2c
	adds r1, r5, r0	@ 00037b2c 2918
.org 0x37b2e
	movs r0, #0	@ 00037b2e 0020
.org 0x37b30
	strb r2, [r1, #0]	@ 00037b30 0a70
.org 0x37b32
	strb r0, [r6, #0]	@ 00037b32 3070
.org 0x37b34
	adds r0, r5, #0	@ 00037b34 281c
.org 0x37b36
	bl 0x37b4c	@ 00037b36 00f009f8
.org 0x37b3a
	pop {r4, r5, r6}	@ 00037b3a 70bc
.org 0x37b3c
	pop {r0}	@ 00037b3c 01bc
.org 0x37b3e
	bx r0	@ 00037b3e 0047
