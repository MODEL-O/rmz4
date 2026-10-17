@ FUN_0806eda4  entry 0x0806eda4  size 32
.thumb
.org 0x6eda4
FUN_0806eda4:
	push {r4, r5, lr}	@ 0006eda4 30b5
.org 0x6eda6
	sub sp, #8	@ 0006eda6 82b0
.org 0x6eda8
	adds r4, r0, #0	@ 0006eda8 041c
.org 0x6edaa
	ldrb r0, [r4, #15]	@ 0006edaa e07b
.org 0x6edac
	cmp r0, #7	@ 0006edac 0728
.org 0x6edae
	bls.n 0x6edb2	@ 0006edae 00d9
.org 0x6edb0
	b.n 0x6eeca	@ 0006edb0 8be0
.org 0x6edb2
	lsls r0, r0, #2	@ 0006edb2 8000
.org 0x6edb4
	ldr r1, [pc, #4]	@ 0006edb4 0149
.org 0x6edb6
	adds r0, r0, r1	@ 0006edb6 4018
.org 0x6edb8
	ldr r0, [r0, #0]	@ 0006edb8 0068
.org 0x6edba
	mov pc, r0	@ 0006edba 8746
.org 0x6edbc
	.byte 0xc0,0xed,0x06,0x08	@ 0006edbc data
.org 0x6edc0
	.byte 0xe0,0xed,0x06,0x08	@ 0006edc0 data
