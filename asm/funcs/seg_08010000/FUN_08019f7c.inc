@ FUN_08019f7c  entry 0x08019f7c  size 70
.thumb
.org 0x19f7c
FUN_08019f7c:
	push {r4, r5, r6, r7, lr}	@ 00019f7c f0b5
.org 0x19f7e
	mov r7, r8	@ 00019f7e 4746
.org 0x19f80
	push {r7}	@ 00019f80 80b4
.org 0x19f82
	adds r6, r0, #0	@ 00019f82 061c
.org 0x19f84
	movs r3, #0	@ 00019f84 0023
.org 0x19f86
	ldr r1, [r6, #56]	@ 00019f86 b16b
.org 0x19f88
	ldr r0, [pc, #16]	@ 00019f88 0448
.org 0x19f8a
	cmp r1, r0	@ 00019f8a 8142
.org 0x19f8c
	ble.n 0x19fac	@ 00019f8c 0edd
.org 0x19f8e
	movs r0, #160	@ 00019f8e a020
.org 0x19f90
	lsls r0, r0, #4	@ 00019f90 0001
.org 0x19f92
	cmp r1, r0	@ 00019f92 8142
.org 0x19f94
	ble.n 0x19fa0	@ 00019f94 04dd
.org 0x19f96
	movs r3, #1	@ 00019f96 0123
.org 0x19f98
	b.n 0x19fac	@ 00019f98 08e0
.org 0x19f9a
	.byte 0x00	@ 00019f9a data
.org 0x19f9b
	.byte 0x00	@ 00019f9b data
.org 0x19f9c
	.byte 0xdf,0x01,0x00,0x00	@ 00019f9c data
.org 0x19fa0
	ldr r1, [r6, #52]	@ 00019fa0 716b
.org 0x19fa2
	ldr r0, [pc, #28]	@ 00019fa2 0748
.org 0x19fa4
	movs r3, #3	@ 00019fa4 0323
.org 0x19fa6
	cmp r1, r0	@ 00019fa6 8142
.org 0x19fa8
	bgt.n 0x19fac	@ 00019fa8 00dc
.org 0x19faa
	movs r3, #2	@ 00019faa 0223
.org 0x19fac
	ldrb r0, [r6, #14]	@ 00019fac b07b
.org 0x19fae
	cmp r0, #17	@ 00019fae 1128
.org 0x19fb0
	bls.n 0x19fb4	@ 00019fb0 00d9
.org 0x19fb2
	b.n 0x1a628	@ 00019fb2 39e3
.org 0x19fb4
	lsls r0, r0, #2	@ 00019fb4 8000
.org 0x19fb6
	ldr r1, [pc, #12]	@ 00019fb6 0349
.org 0x19fb8
	adds r0, r0, r1	@ 00019fb8 4018
.org 0x19fba
	ldr r0, [r0, #0]	@ 00019fba 0068
.org 0x19fbc
	mov pc, r0	@ 00019fbc 8746
.org 0x19fbe
	.byte 0x00	@ 00019fbe data
.org 0x19fbf
	.byte 0x00	@ 00019fbf data
.org 0x19fc0
	.byte 0xcf,0x02,0x00,0x00	@ 00019fc0 data
