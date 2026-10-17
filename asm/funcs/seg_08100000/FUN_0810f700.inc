@ FUN_0810f700  entry 0x0810f700  size 44
.thumb
.org 0x10f700
FUN_0810f700:
	push {r4, r5, r6, lr}	@ 0010f700 70b5
.org 0x10f702
	sub sp, #4	@ 0010f702 81b0
.org 0x10f704
	adds r5, r0, #0	@ 0010f704 051c
.org 0x10f706
	ldr r0, [pc, #28]	@ 0010f706 0748
.org 0x10f708
	ldrh r0, [r0, #4]	@ 0010f708 8088
.org 0x10f70a
	cmp r0, #0	@ 0010f70a 0028
.org 0x10f70c
	beq.n 0x10f712	@ 0010f70c 01d0
.org 0x10f70e
	movs r0, #3	@ 0010f70e 0320
.org 0x10f710
	strh r0, [r5, #8]	@ 0010f710 2881
.org 0x10f712
	ldrb r0, [r5, #5]	@ 0010f712 6879
.org 0x10f714
	cmp r0, #6	@ 0010f714 0628
.org 0x10f716
	bls.n 0x10f71a	@ 0010f716 00d9
.org 0x10f718
	b.n 0x10f90a	@ 0010f718 f7e0
.org 0x10f71a
	lsls r0, r0, #2	@ 0010f71a 8000
.org 0x10f71c
	ldr r1, [pc, #8]	@ 0010f71c 0249
.org 0x10f71e
	adds r0, r0, r1	@ 0010f71e 4018
.org 0x10f720
	ldr r0, [r0, #0]	@ 0010f720 0068
.org 0x10f722
	mov pc, r0	@ 0010f722 8746
.org 0x10f724
	.byte 0x60,0x07,0x00,0x02	@ 0010f724 data
.org 0x10f728
	.byte 0x2c,0xf7,0x10,0x08	@ 0010f728 data
