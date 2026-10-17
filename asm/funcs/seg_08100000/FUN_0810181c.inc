@ FUN_0810181c  entry 0x0810181c  size 34
.thumb
.org 0x10181c
FUN_0810181c:
	push {r4, r5, r6, r7, lr}	@ 0010181c f0b5
.org 0x10181e
	adds r4, r0, #0	@ 0010181e 041c
.org 0x101820
	ldrb r0, [r4, #13]	@ 00101820 607b
.org 0x101822
	cmp r0, #4	@ 00101822 0428
.org 0x101824
	bls.n 0x101828	@ 00101824 00d9
.org 0x101826
	b.n 0x101958	@ 00101826 97e0
.org 0x101828
	lsls r0, r0, #2	@ 00101828 8000
.org 0x10182a
	ldr r1, [pc, #8]	@ 0010182a 0249
.org 0x10182c
	adds r0, r0, r1	@ 0010182c 4018
.org 0x10182e
	ldr r0, [r0, #0]	@ 0010182e 0068
.org 0x101830
	mov pc, r0	@ 00101830 8746
.org 0x101832
	.byte 0x00	@ 00101832 data
.org 0x101833
	.byte 0x00	@ 00101833 data
.org 0x101834
	.byte 0x38,0x18,0x10,0x08	@ 00101834 data
.org 0x101838
	.byte 0x4c,0x18,0x10,0x08	@ 00101838 data
.org 0x10183c
	.byte 0x94,0x18,0x10,0x08	@ 0010183c data
