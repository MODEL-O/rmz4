@ FUN_080f4964  entry 0x080f4964  size 38
.thumb
.org 0xf4964
FUN_080f4964:
	push {r4, r5, lr}	@ 000f4964 30b5
.org 0xf4966
	sub sp, #8	@ 000f4966 82b0
.org 0xf4968
	adds r5, r0, #0	@ 000f4968 051c
.org 0xf496a
	ldrb r0, [r5, #13]	@ 000f496a 687b
.org 0xf496c
	cmp r0, #5	@ 000f496c 0528
.org 0xf496e
	bls.n 0xf4972	@ 000f496e 00d9
.org 0xf4970
	b.n 0xf4c6c	@ 000f4970 7ce1
.org 0xf4972
	lsls r0, r0, #2	@ 000f4972 8000
.org 0xf4974
	ldr r1, [pc, #4]	@ 000f4974 0149
.org 0xf4976
	adds r0, r0, r1	@ 000f4976 4018
.org 0xf4978
	ldr r0, [r0, #0]	@ 000f4978 0068
.org 0xf497a
	mov pc, r0	@ 000f497a 8746
.org 0xf497c
	.byte 0x80,0x49,0x0f,0x08	@ 000f497c data
.org 0xf4980
	.byte 0x98,0x49,0x0f,0x08	@ 000f4980 data
.org 0xf4984
	.byte 0x22,0x4a,0x0f,0x08	@ 000f4984 data
.org 0xf4988
	.byte 0x70,0x4a,0x0f,0x08	@ 000f4988 data
