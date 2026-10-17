@ FUN_080cf4c8  entry 0x080cf4c8  size 58
.thumb
.org 0xcf4c8
FUN_080cf4c8:
	push {lr}	@ 000cf4c8 00b5
.org 0xcf4ca
	adds r2, r0, #0	@ 000cf4ca 021c
.org 0xcf4cc
	adds r0, #188	@ 000cf4cc bc30
.org 0xcf4ce
	ldrb r0, [r0, #0]	@ 000cf4ce 0078
.org 0xcf4d0
	cmp r0, #0	@ 000cf4d0 0028
.org 0xcf4d2
	beq.n 0xcf4f4	@ 000cf4d2 0fd0
.org 0xcf4d4
	ldr r1, [pc, #24]	@ 000cf4d4 0649
.org 0xcf4d6
	ldrb r0, [r2, #9]	@ 000cf4d6 507a
.org 0xcf4d8
	lsls r0, r0, #2	@ 000cf4d8 8000
.org 0xcf4da
	adds r0, r0, r1	@ 000cf4da 4018
.org 0xcf4dc
	movs r1, #2	@ 000cf4dc 0221
.org 0xcf4de
	str r1, [r2, #12]	@ 000cf4de d160
.org 0xcf4e0
	ldr r0, [r0, #0]	@ 000cf4e0 0068
.org 0xcf4e2
	ldr r0, [r0, #8]	@ 000cf4e2 8068
.org 0xcf4e4
	str r0, [r2, #20]	@ 000cf4e4 5061
.org 0xcf4e6
	adds r0, r2, #0	@ 000cf4e6 101c
.org 0xcf4e8
	bl 0xcf7a8	@ 000cf4e8 00f05ef9
.org 0xcf4ec
	b.n 0xcf504	@ 000cf4ec 0ae0
.org 0xcf4ee
	.byte 0x00	@ 000cf4ee data
.org 0xcf4ef
	.byte 0x00	@ 000cf4ef data
.org 0xcf4f0
	.byte 0xf4,0x49,0x86,0x08	@ 000cf4f0 data
.org 0xcf4f4
	ldr r0, [pc, #16]	@ 000cf4f4 0448
.org 0xcf4f6
	ldrb r1, [r2, #13]	@ 000cf4f6 517b
.org 0xcf4f8
	lsls r1, r1, #2	@ 000cf4f8 8900
.org 0xcf4fa
	adds r1, r1, r0	@ 000cf4fa 0918
.org 0xcf4fc
	ldr r1, [r1, #0]	@ 000cf4fc 0968
.org 0xcf4fe
	adds r0, r2, #0	@ 000cf4fe 101c
.org 0xcf500
	bl 0x128f80	@ 000cf500 59f03efd
