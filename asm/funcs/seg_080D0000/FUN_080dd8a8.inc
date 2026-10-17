@ FUN_080dd8a8  entry 0x080dd8a8  size 94
.thumb
.org 0xdd8a8
FUN_080dd8a8:
	push {r4, lr}	@ 000dd8a8 10b5
.org 0xdd8aa
	adds r4, r0, #0	@ 000dd8aa 041c
.org 0xdd8ac
	bl 0x1cc9c	@ 000dd8ac 3ff7f6f9
.org 0xdd8b0
	ldrb r1, [r4, #10]	@ 000dd8b0 a17a
.org 0xdd8b2
	movs r0, #1	@ 000dd8b2 0120
.org 0xdd8b4
	orrs r0, r1	@ 000dd8b4 0843
.org 0xdd8b6
	movs r1, #2	@ 000dd8b6 0221
.org 0xdd8b8
	orrs r0, r1	@ 000dd8b8 0843
.org 0xdd8ba
	strb r0, [r4, #10]	@ 000dd8ba a072
.org 0xdd8bc
	ldr r1, [pc, #28]	@ 000dd8bc 0749
.org 0xdd8be
	adds r0, r4, #0	@ 000dd8be 201c
.org 0xdd8c0
	bl 0x1cf00	@ 000dd8c0 3ff71efb
.org 0xdd8c4
	adds r0, r4, #0	@ 000dd8c4 201c
.org 0xdd8c6
	bl 0x1cff0	@ 000dd8c6 3ff793fb
.org 0xdd8ca
	ldrb r1, [r4, #10]	@ 000dd8ca a17a
.org 0xdd8cc
	movs r2, #16	@ 000dd8cc 1022
.org 0xdd8ce
	adds r0, r2, #0	@ 000dd8ce 101c
.org 0xdd8d0
	ands r0, r1	@ 000dd8d0 0840
.org 0xdd8d2
	cmp r0, #0	@ 000dd8d2 0028
.org 0xdd8d4
	beq.n 0xdd8e0	@ 000dd8d4 04d0
.org 0xdd8d6
	str r2, [r4, #100]	@ 000dd8d6 6266
.org 0xdd8d8
	b.n 0xdd8e6	@ 000dd8d8 05e0
.org 0xdd8da
	.byte 0x00	@ 000dd8da data
.org 0xdd8db
	.byte 0x00	@ 000dd8db data
.org 0xdd8dc
	.byte 0x07,0x8b,0x00,0x00	@ 000dd8dc data
.org 0xdd8e0
	movs r0, #16	@ 000dd8e0 1020
.org 0xdd8e2
	negs r0, r0	@ 000dd8e2 4042
.org 0xdd8e4
	str r0, [r4, #100]	@ 000dd8e4 6066
.org 0xdd8e6
	ldr r0, [r4, #100]	@ 000dd8e6 606e
.org 0xdd8e8
	lsls r0, r0, #4	@ 000dd8e8 0001
.org 0xdd8ea
	negs r0, r0	@ 000dd8ea 4042
.org 0xdd8ec
	str r0, [r4, #92]	@ 000dd8ec e065
.org 0xdd8ee
	ldr r1, [pc, #28]	@ 000dd8ee 0749
.org 0xdd8f0
	ldrb r0, [r4, #9]	@ 000dd8f0 607a
.org 0xdd8f2
	lsls r0, r0, #2	@ 000dd8f2 8000
.org 0xdd8f4
	adds r0, r0, r1	@ 000dd8f4 4018
.org 0xdd8f6
	movs r1, #1	@ 000dd8f6 0121
.org 0xdd8f8
	str r1, [r4, #12]	@ 000dd8f8 e160
.org 0xdd8fa
	ldr r0, [r0, #0]	@ 000dd8fa 0068
.org 0xdd8fc
	ldr r0, [r0, #4]	@ 000dd8fc 4068
.org 0xdd8fe
	str r0, [r4, #20]	@ 000dd8fe 6061
.org 0xdd900
	adds r0, r4, #0	@ 000dd900 201c
.org 0xdd902
	bl 0xdd6c8	@ 000dd902 fff7e1fe
