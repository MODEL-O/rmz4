@ FUN_080dae04  entry 0x080dae04  size 82
.thumb
.org 0xdae04
FUN_080dae04:
	push {r4, lr}	@ 000dae04 10b5
.org 0xdae06
	adds r3, r0, #0	@ 000dae06 031c
.org 0xdae08
	ldrb r0, [r3, #14]	@ 000dae08 987b
.org 0xdae0a
	cmp r0, #0	@ 000dae0a 0028
.org 0xdae0c
	bne.n 0xdae12	@ 000dae0c 01d1
.org 0xdae0e
	adds r0, #1	@ 000dae0e 0130
.org 0xdae10
	strb r0, [r3, #14]	@ 000dae10 9873
.org 0xdae12
	ldr r2, [pc, #68]	@ 000dae12 114a
.org 0xdae14
	ldrh r1, [r2, #0]	@ 000dae14 1188
.org 0xdae16
	movs r4, #128	@ 000dae16 8024
.org 0xdae18
	lsls r4, r4, #7	@ 000dae18 e401
.org 0xdae1a
	adds r0, r4, #0	@ 000dae1a 201c
.org 0xdae1c
	orrs r0, r1	@ 000dae1c 0843
.org 0xdae1e
	strh r0, [r2, #0]	@ 000dae1e 1080
.org 0xdae20
	adds r0, r3, #0	@ 000dae20 181c
.org 0xdae22
	adds r0, #120	@ 000dae22 7830
.org 0xdae24
	ldrb r0, [r0, #0]	@ 000dae24 0078
.org 0xdae26
	strb r0, [r2, #13]	@ 000dae26 5073
.org 0xdae28
	adds r1, r3, #0	@ 000dae28 191c
.org 0xdae2a
	adds r1, #121	@ 000dae2a 7931
.org 0xdae2c
	ldrb r0, [r2, #14]	@ 000dae2c 907b
.org 0xdae2e
	ldrb r1, [r1, #0]	@ 000dae2e 0978
.org 0xdae30
	orrs r0, r1	@ 000dae30 0843
.org 0xdae32
	strb r0, [r2, #14]	@ 000dae32 9073
.org 0xdae34
	adds r0, r3, #0	@ 000dae34 181c
.org 0xdae36
	adds r0, #119	@ 000dae36 7730
.org 0xdae38
	ldrb r0, [r0, #0]	@ 000dae38 0078
.org 0xdae3a
	cmp r0, #0	@ 000dae3a 0028
.org 0xdae3c
	beq.n 0xdae50	@ 000dae3c 08d0
.org 0xdae3e
	ldr r1, [pc, #28]	@ 000dae3e 0749
.org 0xdae40
	ldrb r0, [r3, #9]	@ 000dae40 587a
.org 0xdae42
	lsls r0, r0, #2	@ 000dae42 8000
.org 0xdae44
	adds r0, r0, r1	@ 000dae44 4018
.org 0xdae46
	movs r1, #2	@ 000dae46 0221
.org 0xdae48
	str r1, [r3, #12]	@ 000dae48 d960
.org 0xdae4a
	ldr r0, [r0, #0]	@ 000dae4a 0068
.org 0xdae4c
	ldr r0, [r0, #8]	@ 000dae4c 8068
.org 0xdae4e
	str r0, [r3, #20]	@ 000dae4e 5861
.org 0xdae50
	pop {r4}	@ 000dae50 10bc
.org 0xdae52
	pop {r0}	@ 000dae52 01bc
.org 0xdae54
	bx r0	@ 000dae54 0047
