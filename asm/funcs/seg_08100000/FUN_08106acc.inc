@ FUN_08106acc  entry 0x08106acc  size 44
.thumb
.org 0x106acc
FUN_08106acc:
	push {r4, r5, r6, r7, lr}	@ 00106acc f0b5
.org 0x106ace
	mov r7, r8	@ 00106ace 4746
.org 0x106ad0
	push {r7}	@ 00106ad0 80b4
.org 0x106ad2
	adds r7, r0, #0	@ 00106ad2 071c
.org 0x106ad4
	ldr r0, [r7, #40]	@ 00106ad4 b86a
.org 0x106ad6
	ldr r0, [r0, #24]	@ 00106ad6 8069
.org 0x106ad8
	ldr r0, [r0, #4]	@ 00106ad8 4068
.org 0x106ada
	mov r8, r0	@ 00106ada 8046
.org 0x106adc
	ldrb r0, [r7, #13]	@ 00106adc 787b
.org 0x106ade
	cmp r0, #5	@ 00106ade 0528
.org 0x106ae0
	bls.n 0x106ae4	@ 00106ae0 00d9
.org 0x106ae2
	b.n 0x106d46	@ 00106ae2 30e1
.org 0x106ae4
	lsls r0, r0, #2	@ 00106ae4 8000
.org 0x106ae6
	ldr r1, [pc, #8]	@ 00106ae6 0249
.org 0x106ae8
	adds r0, r0, r1	@ 00106ae8 4018
.org 0x106aea
	ldr r0, [r0, #0]	@ 00106aea 0068
.org 0x106aec
	mov pc, r0	@ 00106aec 8746
.org 0x106aee
	.byte 0x00	@ 00106aee data
.org 0x106aef
	.byte 0x00	@ 00106aef data
.org 0x106af0
	.byte 0xf4,0x6a,0x10,0x08	@ 00106af0 data
.org 0x106af4
	.byte 0x0c,0x6b,0x10,0x08	@ 00106af4 data
