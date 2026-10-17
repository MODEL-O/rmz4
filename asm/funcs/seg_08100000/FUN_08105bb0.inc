@ FUN_08105bb0  entry 0x08105bb0  size 28
.thumb
.org 0x105bb0
FUN_08105bb0:
	push {r4, lr}	@ 00105bb0 10b5
.org 0x105bb2
	adds r4, r0, #0	@ 00105bb2 041c
.org 0x105bb4
	ldrb r0, [r4, #13]	@ 00105bb4 607b
.org 0x105bb6
	cmp r0, #9	@ 00105bb6 0928
.org 0x105bb8
	bls.n 0x105bbc	@ 00105bb8 00d9
.org 0x105bba
	b.n 0x105d84	@ 00105bba e3e0
.org 0x105bbc
	lsls r0, r0, #2	@ 00105bbc 8000
.org 0x105bbe
	ldr r1, [pc, #8]	@ 00105bbe 0249
.org 0x105bc0
	adds r0, r0, r1	@ 00105bc0 4018
.org 0x105bc2
	ldr r0, [r0, #0]	@ 00105bc2 0068
.org 0x105bc4
	mov pc, r0	@ 00105bc4 8746
.org 0x105bc6
	.byte 0x00	@ 00105bc6 data
.org 0x105bc7
	.byte 0x00	@ 00105bc7 data
.org 0x105bc8
	.byte 0xcc,0x5b,0x10,0x08	@ 00105bc8 data
