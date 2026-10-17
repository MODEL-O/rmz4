@ FUN_080d5b08  entry 0x080d5b08  size 82
.thumb
.org 0xd5b08
FUN_080d5b08:
	push {r4, r5, lr}	@ 000d5b08 30b5
.org 0xd5b0a
	adds r3, r0, #0	@ 000d5b0a 031c
.org 0xd5b0c
	ldrb r4, [r3, #14]	@ 000d5b0c 9c7b
.org 0xd5b0e
	cmp r4, #0	@ 000d5b0e 002c
.org 0xd5b10
	bne.n 0xd5b38	@ 000d5b10 12d1
.org 0xd5b12
	ldr r2, [pc, #72]	@ 000d5b12 124a
.org 0xd5b14
	ldrh r1, [r2, #0]	@ 000d5b14 1188
.org 0xd5b16
	movs r5, #128	@ 000d5b16 8025
.org 0xd5b18
	lsls r5, r5, #7	@ 000d5b18 ed01
.org 0xd5b1a
	adds r0, r5, #0	@ 000d5b1a 281c
.org 0xd5b1c
	orrs r0, r1	@ 000d5b1c 0843
.org 0xd5b1e
	strh r0, [r2, #0]	@ 000d5b1e 1080
.org 0xd5b20
	adds r0, r3, #0	@ 000d5b20 181c
.org 0xd5b22
	adds r0, #120	@ 000d5b22 7830
.org 0xd5b24
	ldrb r0, [r0, #0]	@ 000d5b24 0078
.org 0xd5b26
	strb r0, [r2, #13]	@ 000d5b26 5073
.org 0xd5b28
	adds r1, r3, #0	@ 000d5b28 191c
.org 0xd5b2a
	adds r1, #121	@ 000d5b2a 7931
.org 0xd5b2c
	ldrb r0, [r2, #14]	@ 000d5b2c 907b
.org 0xd5b2e
	ldrb r1, [r1, #0]	@ 000d5b2e 0978
.org 0xd5b30
	orrs r0, r1	@ 000d5b30 0843
.org 0xd5b32
	strb r0, [r2, #14]	@ 000d5b32 9073
.org 0xd5b34
	adds r0, r4, #1	@ 000d5b34 601c
.org 0xd5b36
	strb r0, [r3, #14]	@ 000d5b36 9873
.org 0xd5b38
	adds r0, r3, #0	@ 000d5b38 181c
.org 0xd5b3a
	adds r0, #119	@ 000d5b3a 7730
.org 0xd5b3c
	ldrb r0, [r0, #0]	@ 000d5b3c 0078
.org 0xd5b3e
	cmp r0, #0	@ 000d5b3e 0028
.org 0xd5b40
	beq.n 0xd5b54	@ 000d5b40 08d0
.org 0xd5b42
	ldr r1, [pc, #28]	@ 000d5b42 0749
.org 0xd5b44
	ldrb r0, [r3, #9]	@ 000d5b44 587a
.org 0xd5b46
	lsls r0, r0, #2	@ 000d5b46 8000
.org 0xd5b48
	adds r0, r0, r1	@ 000d5b48 4018
.org 0xd5b4a
	movs r1, #2	@ 000d5b4a 0221
.org 0xd5b4c
	str r1, [r3, #12]	@ 000d5b4c d960
.org 0xd5b4e
	ldr r0, [r0, #0]	@ 000d5b4e 0068
.org 0xd5b50
	ldr r0, [r0, #8]	@ 000d5b50 8068
.org 0xd5b52
	str r0, [r3, #20]	@ 000d5b52 5861
.org 0xd5b54
	pop {r4, r5}	@ 000d5b54 30bc
.org 0xd5b56
	pop {r0}	@ 000d5b56 01bc
.org 0xd5b58
	bx r0	@ 000d5b58 0047
