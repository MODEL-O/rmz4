@ FUN_080a5b28  entry 0x080a5b28  size 80
.thumb
.org 0xa5b28
FUN_080a5b28:
	push {r4, lr}	@ 000a5b28 10b5
.org 0xa5b2a
	adds r4, r0, #0	@ 000a5b2a 041c
.org 0xa5b2c
	ldrb r0, [r4, #15]	@ 000a5b2c e07b
.org 0xa5b2e
	cmp r0, #0	@ 000a5b2e 0028
.org 0xa5b30
	bne.n 0xa5b56	@ 000a5b30 11d1
.org 0xa5b32
	adds r0, r4, #0	@ 000a5b32 201c
.org 0xa5b34
	adds r0, #116	@ 000a5b34 7430
.org 0xa5b36
	ldr r1, [pc, #64]	@ 000a5b36 1049
.org 0xa5b38
	bl 0x5784	@ 000a5b38 5ff724fe
.org 0xa5b3c
	movs r1, #136	@ 000a5b3c 8821
.org 0xa5b3e
	lsls r1, r1, #8	@ 000a5b3e 0902
.org 0xa5b40
	adds r0, r4, #0	@ 000a5b40 201c
.org 0xa5b42
	bl 0x1cf00	@ 000a5b42 77f7ddf9
.org 0xa5b46
	adds r0, r4, #0	@ 000a5b46 201c
.org 0xa5b48
	bl 0x1d3fc	@ 000a5b48 77f758fc
.org 0xa5b4c
	movs r0, #8	@ 000a5b4c 0820
.org 0xa5b4e
	strb r0, [r4, #18]	@ 000a5b4e a074
.org 0xa5b50
	ldrb r0, [r4, #15]	@ 000a5b50 e07b
.org 0xa5b52
	adds r0, #1	@ 000a5b52 0130
.org 0xa5b54
	strb r0, [r4, #15]	@ 000a5b54 e073
.org 0xa5b56
	adds r0, r4, #0	@ 000a5b56 201c
.org 0xa5b58
	bl 0x1cff0	@ 000a5b58 77f74afa
.org 0xa5b5c
	ldrb r0, [r4, #18]	@ 000a5b5c a07c
.org 0xa5b5e
	subs r0, #1	@ 000a5b5e 0138
.org 0xa5b60
	strb r0, [r4, #18]	@ 000a5b60 a074
.org 0xa5b62
	lsls r0, r0, #24	@ 000a5b62 0006
.org 0xa5b64
	lsrs r1, r0, #24	@ 000a5b64 010e
.org 0xa5b66
	cmp r1, #0	@ 000a5b66 0029
.org 0xa5b68
	bne.n 0xa5b72	@ 000a5b68 03d1
.org 0xa5b6a
	movs r0, #1	@ 000a5b6a 0120
.org 0xa5b6c
	strb r0, [r4, #13]	@ 000a5b6c 6073
.org 0xa5b6e
	strb r1, [r4, #14]	@ 000a5b6e a173
.org 0xa5b70
	strb r1, [r4, #15]	@ 000a5b70 e173
.org 0xa5b72
	pop {r4}	@ 000a5b72 10bc
.org 0xa5b74
	pop {r0}	@ 000a5b74 01bc
.org 0xa5b76
	bx r0	@ 000a5b76 0047
