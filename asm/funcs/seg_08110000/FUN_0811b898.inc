@ FUN_0811b898  entry 0x0811b898  size 74
.thumb
.org 0x11b898
FUN_0811b898:
	push {lr}	@ 0011b898 00b5
.org 0x11b89a
	adds r2, r0, #0	@ 0011b89a 021c
.org 0x11b89c
	ldr r1, [pc, #16]	@ 0011b89c 0449
.org 0x11b89e
	adds r0, r2, r1	@ 0011b89e 5018
.org 0x11b8a0
	ldrb r0, [r0, #0]	@ 0011b8a0 0078
.org 0x11b8a2
	cmp r0, #3	@ 0011b8a2 0328
.org 0x11b8a4
	bne.n 0x11b8b8	@ 0011b8a4 08d1
.org 0x11b8a6
	ldr r1, [pc, #12]	@ 0011b8a6 0349
.org 0x11b8a8
	ldrh r0, [r1, #0]	@ 0011b8a8 0888
.org 0x11b8aa
	adds r0, #16	@ 0011b8aa 1030
.org 0x11b8ac
	b.n 0x11b8be	@ 0011b8ac 07e0
.org 0x11b8ae
	.byte 0x00	@ 0011b8ae data
.org 0x11b8af
	.byte 0x00	@ 0011b8af data
.org 0x11b8b0
	.byte 0xf9,0x0d,0x00,0x00	@ 0011b8b0 data
.org 0x11b8b4
	.byte 0x10,0x0a,0x00,0x02	@ 0011b8b4 data
.org 0x11b8b8
	ldr r1, [pc, #48]	@ 0011b8b8 0c49
.org 0x11b8ba
	ldrh r0, [r1, #0]	@ 0011b8ba 0888
.org 0x11b8bc
	subs r0, #16	@ 0011b8bc 1038
.org 0x11b8be
	strh r0, [r1, #0]	@ 0011b8be 0880
.org 0x11b8c0
	adds r3, r1, #0	@ 0011b8c0 0b1c
.org 0x11b8c2
	ldrh r0, [r3, #0]	@ 0011b8c2 1888
.org 0x11b8c4
	ldr r1, [pc, #40]	@ 0011b8c4 0a49
.org 0x11b8c6
	ands r1, r0	@ 0011b8c6 0140
.org 0x11b8c8
	strh r1, [r3, #0]	@ 0011b8c8 1980
.org 0x11b8ca
	movs r0, #255	@ 0011b8ca ff20
.org 0x11b8cc
	ands r0, r1	@ 0011b8cc 0840
.org 0x11b8ce
	cmp r0, #0	@ 0011b8ce 0028
.org 0x11b8d0
	bne.n 0x11b8e8	@ 0011b8d0 0ad1
.org 0x11b8d2
	ldr r3, [pc, #32]	@ 0011b8d2 084b
.org 0x11b8d4
	adds r0, r2, r3	@ 0011b8d4 d018
.org 0x11b8d6
	ldrb r1, [r0, #0]	@ 0011b8d6 0178
.org 0x11b8d8
	subs r3, #1	@ 0011b8d8 013b
.org 0x11b8da
	adds r0, r2, r3	@ 0011b8da d018
.org 0x11b8dc
	strb r1, [r0, #0]	@ 0011b8dc 0170
.org 0x11b8de
	movs r0, #1	@ 0011b8de 0120
.org 0x11b8e0
	strb r0, [r2, #2]	@ 0011b8e0 9070
