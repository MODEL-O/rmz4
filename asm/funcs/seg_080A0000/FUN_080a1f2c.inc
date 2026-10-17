@ FUN_080a1f2c  entry 0x080a1f2c  size 102
.thumb
.org 0xa1f2c
FUN_080a1f2c:
	push {r4, lr}	@ 000a1f2c 10b5
.org 0xa1f2e
	sub sp, #4	@ 000a1f2e 81b0
.org 0xa1f30
	adds r4, r0, #0	@ 000a1f30 041c
.org 0xa1f32
	ldr r1, [pc, #64]	@ 000a1f32 1049
.org 0xa1f34
	mov r0, sp	@ 000a1f34 6846
.org 0xa1f36
	movs r2, #4	@ 000a1f36 0422
.org 0xa1f38
	bl 0x129258	@ 000a1f38 87f08ef9
.org 0xa1f3c
	ldrb r0, [r4, #14]	@ 000a1f3c a07b
.org 0xa1f3e
	cmp r0, #0	@ 000a1f3e 0028
.org 0xa1f40
	bne.n 0xa1f5e	@ 000a1f40 0dd1
.org 0xa1f42
	adds r0, r4, #0	@ 000a1f42 201c
.org 0xa1f44
	adds r0, #180	@ 000a1f44 b430
.org 0xa1f46
	ldrb r0, [r0, #0]	@ 000a1f46 0078
.org 0xa1f48
	lsls r0, r0, #1	@ 000a1f48 4000
.org 0xa1f4a
	add r0, sp	@ 000a1f4a 6844
.org 0xa1f4c
	ldrh r1, [r0, #0]	@ 000a1f4c 0188
.org 0xa1f4e
	adds r0, r4, #0	@ 000a1f4e 201c
.org 0xa1f50
	bl 0x1cf00	@ 000a1f50 7af7d6ff
.org 0xa1f54
	movs r0, #48	@ 000a1f54 3020
.org 0xa1f56
	strb r0, [r4, #18]	@ 000a1f56 a074
.org 0xa1f58
	ldrb r0, [r4, #14]	@ 000a1f58 a07b
.org 0xa1f5a
	adds r0, #1	@ 000a1f5a 0130
.org 0xa1f5c
	strb r0, [r4, #14]	@ 000a1f5c a073
.org 0xa1f5e
	ldrb r0, [r4, #18]	@ 000a1f5e a07c
.org 0xa1f60
	cmp r0, #0	@ 000a1f60 0028
.org 0xa1f62
	bne.n 0xa1f8a	@ 000a1f62 12d1
.org 0xa1f64
	adds r0, r4, #0	@ 000a1f64 201c
.org 0xa1f66
	adds r0, #180	@ 000a1f66 b430
.org 0xa1f68
	ldrb r0, [r0, #0]	@ 000a1f68 0078
.org 0xa1f6a
	cmp r0, #0	@ 000a1f6a 0028
.org 0xa1f6c
	beq.n 0xa1f78	@ 000a1f6c 04d0
.org 0xa1f6e
	movs r0, #3	@ 000a1f6e 0320
.org 0xa1f70
	strb r0, [r4, #13]	@ 000a1f70 6073
.org 0xa1f72
	b.n 0xa1f84	@ 000a1f72 07e0
.org 0xa1f74
	.byte 0x18,0x9d,0x12,0x08	@ 000a1f74 data
.org 0xa1f78
	movs r0, #1	@ 000a1f78 0120
.org 0xa1f7a
	strb r0, [r4, #13]	@ 000a1f7a 6073
.org 0xa1f7c
	movs r0, #159	@ 000a1f7c 9f20
.org 0xa1f7e
	lsls r0, r0, #1	@ 000a1f7e 4000
.org 0xa1f80
	bl 0x2b10	@ 000a1f80 60f7c6fd
.org 0xa1f84
	movs r0, #0	@ 000a1f84 0020
.org 0xa1f86
	strb r0, [r4, #14]	@ 000a1f86 a073
.org 0xa1f88
	b.n 0xa1f8e	@ 000a1f88 01e0
.org 0xa1f8a
	subs r0, #1	@ 000a1f8a 0138
.org 0xa1f8c
	strb r0, [r4, #18]	@ 000a1f8c a074
.org 0xa1f8e
	add sp, #4	@ 000a1f8e 01b0
.org 0xa1f90
	pop {r4}	@ 000a1f90 10bc
