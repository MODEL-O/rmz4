@ FUN_08028e84  entry 0x08028e84  size 50
.thumb
.org 0x28e84
FUN_08028e84:
	push {r4, r5, r6, r7, lr}	@ 00028e84 f0b5
.org 0x28e86
	mov r7, r8	@ 00028e86 4746
.org 0x28e88
	push {r7}	@ 00028e88 80b4
.org 0x28e8a
	adds r5, r0, #0	@ 00028e8a 051c
.org 0x28e8c
	ldr r4, [r5, #16]	@ 00028e8c 2c69
.org 0x28e8e
	cmp r4, #0	@ 00028e8e 002c
.org 0x28e90
	bne.n 0x28e94	@ 00028e90 00d1
.org 0x28e92
	b.n 0x290fa	@ 00028e92 32e1
.org 0x28e94
	ldr r0, [r5, #12]	@ 00028e94 e868
.org 0x28e96
	ldrb r1, [r0, #1]	@ 00028e96 4178
.org 0x28e98
	adds r6, r0, #0	@ 00028e98 061c
.org 0x28e9a
	cmp r1, #18	@ 00028e9a 1229
.org 0x28e9c
	bls.n 0x28ea0	@ 00028e9c 00d9
.org 0x28e9e
	b.n 0x290fa	@ 00028e9e 2ce1
.org 0x28ea0
	lsls r0, r1, #2	@ 00028ea0 8800
.org 0x28ea2
	ldr r1, [pc, #8]	@ 00028ea2 0249
.org 0x28ea4
	adds r0, r0, r1	@ 00028ea4 4018
.org 0x28ea6
	ldr r0, [r0, #0]	@ 00028ea6 0068
.org 0x28ea8
	mov pc, r0	@ 00028ea8 8746
.org 0x28eaa
	.byte 0x00	@ 00028eaa data
.org 0x28eab
	.byte 0x00	@ 00028eab data
.org 0x28eac
	.byte 0xb0,0x8e,0x02,0x08	@ 00028eac data
.org 0x28eb0
	.byte 0xfc,0x8e,0x02,0x08	@ 00028eb0 data
.org 0x28eb4
	.byte 0x12,0x8f,0x02,0x08	@ 00028eb4 data
