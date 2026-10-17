@ FUN_080c0a5c  entry 0x080c0a5c  size 40
.thumb
.org 0xc0a5c
FUN_080c0a5c:
	push {r4, lr}	@ 000c0a5c 10b5
.org 0xc0a5e
	adds r4, r0, #0	@ 000c0a5e 041c
.org 0xc0a60
	ldrb r0, [r4, #15]	@ 000c0a60 e07b
.org 0xc0a62
	cmp r0, #0	@ 000c0a62 0028
.org 0xc0a64
	bne.n 0xc0a7e	@ 000c0a64 0bd1
.org 0xc0a66
	adds r0, r4, #0	@ 000c0a66 201c
.org 0xc0a68
	adds r0, #116	@ 000c0a68 7430
.org 0xc0a6a
	ldr r1, [pc, #24]	@ 000c0a6a 0649
.org 0xc0a6c
	bl 0x5784	@ 000c0a6c 44f78afe
.org 0xc0a70
	ldrb r1, [r4, #10]	@ 000c0a70 a17a
.org 0xc0a72
	movs r0, #254	@ 000c0a72 fe20
.org 0xc0a74
	ands r0, r1	@ 000c0a74 0840
.org 0xc0a76
	strb r0, [r4, #10]	@ 000c0a76 a072
.org 0xc0a78
	ldrb r0, [r4, #15]	@ 000c0a78 e07b
.org 0xc0a7a
	adds r0, #1	@ 000c0a7a 0130
.org 0xc0a7c
	strb r0, [r4, #15]	@ 000c0a7c e073
.org 0xc0a7e
	pop {r4}	@ 000c0a7e 10bc
.org 0xc0a80
	pop {r0}	@ 000c0a80 01bc
.org 0xc0a82
	bx r0	@ 000c0a82 0047
