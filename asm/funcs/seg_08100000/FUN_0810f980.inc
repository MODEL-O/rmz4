@ FUN_0810f980  entry 0x0810f980  size 48
.thumb
.org 0x10f980
FUN_0810f980:
	push {r4, r5, r6, r7, lr}	@ 0010f980 f0b5
.org 0x10f982
	mov r7, sl	@ 0010f982 5746
.org 0x10f984
	mov r6, r9	@ 0010f984 4e46
.org 0x10f986
	mov r5, r8	@ 0010f986 4546
.org 0x10f988
	push {r5, r6, r7}	@ 0010f988 e0b4
.org 0x10f98a
	sub sp, #12	@ 0010f98a 83b0
.org 0x10f98c
	adds r7, r0, #0	@ 0010f98c 071c
.org 0x10f98e
	ldrb r0, [r7, #5]	@ 0010f98e 7879
.org 0x10f990
	cmp r0, #4	@ 0010f990 0428
.org 0x10f992
	bls.n 0x10f996	@ 0010f992 00d9
.org 0x10f994
	b.n 0x10fdec	@ 0010f994 2ae2
.org 0x10f996
	lsls r0, r0, #2	@ 0010f996 8000
.org 0x10f998
	ldr r1, [pc, #4]	@ 0010f998 0149
.org 0x10f99a
	adds r0, r0, r1	@ 0010f99a 4018
.org 0x10f99c
	ldr r0, [r0, #0]	@ 0010f99c 0068
.org 0x10f99e
	mov pc, r0	@ 0010f99e 8746
.org 0x10f9a0
	.byte 0xa4,0xf9,0x10,0x08	@ 0010f9a0 data
.org 0x10f9a4
	.byte 0xb8,0xf9,0x10,0x08	@ 0010f9a4 data
.org 0x10f9a8
	.byte 0x16,0xfb,0x10,0x08	@ 0010f9a8 data
.org 0x10f9ac
	.byte 0xa2,0xfb,0x10,0x08	@ 0010f9ac data
