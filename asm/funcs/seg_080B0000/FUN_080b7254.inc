@ FUN_080b7254  entry 0x080b7254  size 36
.thumb
.org 0xb7254
FUN_080b7254:
	push {r4, lr}	@ 000b7254 10b5
.org 0xb7256
	adds r3, r0, #0	@ 000b7256 031c
.org 0xb7258
	ldr r0, [r3, #40]	@ 000b7258 986a
.org 0xb725a
	adds r1, r0, #0	@ 000b725a 011c
.org 0xb725c
	adds r1, #204	@ 000b725c cc31
.org 0xb725e
	ldrh r2, [r1, #0]	@ 000b725e 0a88
.org 0xb7260
	movs r4, #0	@ 000b7260 0024
.org 0xb7262
	ldrsh r0, [r1, r4]	@ 000b7262 085f
.org 0xb7264
	cmp r0, #0	@ 000b7264 0028
.org 0xb7266
	beq.n 0xb726c	@ 000b7266 01d0
.org 0xb7268
	subs r0, r2, #1	@ 000b7268 501e
.org 0xb726a
	strh r0, [r1, #0]	@ 000b726a 0880
.org 0xb726c
	adds r0, r3, #0	@ 000b726c 181c
.org 0xb726e
	bl 0x7f8ec	@ 000b726e c8f73dfb
.org 0xb7272
	pop {r4}	@ 000b7272 10bc
.org 0xb7274
	pop {r0}	@ 000b7274 01bc
.org 0xb7276
	bx r0	@ 000b7276 0047
