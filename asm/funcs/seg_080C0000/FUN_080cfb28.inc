@ FUN_080cfb28  entry 0x080cfb28  size 68
.thumb
.org 0xcfb28
FUN_080cfb28:
	push {r4, lr}	@ 000cfb28 10b5
.org 0xcfb2a
	adds r4, r0, #0	@ 000cfb2a 041c
.org 0xcfb2c
	movs r0, #197	@ 000cfb2c c520
.org 0xcfb2e
	bl 0x25d8	@ 000cfb2e 32f753fd
.org 0xcfb32
	adds r0, r4, #0	@ 000cfb32 201c
.org 0xcfb34
	adds r0, #180	@ 000cfb34 b430
.org 0xcfb36
	ldrb r0, [r0, #0]	@ 000cfb36 0078
.org 0xcfb38
	cmp r0, #0	@ 000cfb38 0028
.org 0xcfb3a
	beq.n 0xcfb5c	@ 000cfb3a 0fd0
.org 0xcfb3c
	ldr r1, [pc, #24]	@ 000cfb3c 0649
.org 0xcfb3e
	ldrb r0, [r4, #9]	@ 000cfb3e 607a
.org 0xcfb40
	lsls r0, r0, #2	@ 000cfb40 8000
.org 0xcfb42
	adds r0, r0, r1	@ 000cfb42 4018
.org 0xcfb44
	movs r1, #2	@ 000cfb44 0221
.org 0xcfb46
	str r1, [r4, #12]	@ 000cfb46 e160
.org 0xcfb48
	ldr r0, [r0, #0]	@ 000cfb48 0068
.org 0xcfb4a
	ldr r0, [r0, #8]	@ 000cfb4a 8068
.org 0xcfb4c
	str r0, [r4, #20]	@ 000cfb4c 6061
.org 0xcfb4e
	adds r0, r4, #0	@ 000cfb4e 201c
.org 0xcfb50
	bl 0xcfc50	@ 000cfb50 00f07ef8
.org 0xcfb54
	b.n 0xcfb6c	@ 000cfb54 0ae0
.org 0xcfb56
	.byte 0x00	@ 000cfb56 data
.org 0xcfb57
	.byte 0x00	@ 000cfb57 data
.org 0xcfb58
	.byte 0xf4,0x49,0x86,0x08	@ 000cfb58 data
.org 0xcfb5c
	ldr r0, [pc, #20]	@ 000cfb5c 0548
.org 0xcfb5e
	ldrb r1, [r4, #13]	@ 000cfb5e 617b
.org 0xcfb60
	lsls r1, r1, #2	@ 000cfb60 8900
.org 0xcfb62
	adds r1, r1, r0	@ 000cfb62 0918
.org 0xcfb64
	ldr r1, [r1, #0]	@ 000cfb64 0968
.org 0xcfb66
	adds r0, r4, #0	@ 000cfb66 201c
.org 0xcfb68
	bl 0x128f80	@ 000cfb68 59f00afa
