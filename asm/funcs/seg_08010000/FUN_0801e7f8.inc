@ FUN_0801e7f8  entry 0x0801e7f8  size 62
.thumb
.org 0x1e7f8
FUN_0801e7f8:
	push {lr}	@ 0001e7f8 00b5
.org 0x1e7fa
	adds r1, r0, #0	@ 0001e7fa 011c
.org 0x1e7fc
	ldr r2, [r1, #4]	@ 0001e7fc 4a68
.org 0x1e7fe
	ldr r0, [pc, #24]	@ 0001e7fe 0648
.org 0x1e800
	cmp r2, r0	@ 0001e800 8242
.org 0x1e802
	bgt.n 0x1e828	@ 0001e802 11dc
.org 0x1e804
	ldr r0, [pc, #20]	@ 0001e804 0548
.org 0x1e806
	cmp r2, r0	@ 0001e806 8242
.org 0x1e808
	bgt.n 0x1e844	@ 0001e808 1cdc
.org 0x1e80a
	ldr r1, [r1, #0]	@ 0001e80a 0968
.org 0x1e80c
	ldr r0, [pc, #16]	@ 0001e80c 0448
.org 0x1e80e
	cmp r1, r0	@ 0001e80e 8142
.org 0x1e810
	bgt.n 0x1e824	@ 0001e810 08dc
.org 0x1e812
	movs r0, #7	@ 0001e812 0720
.org 0x1e814
	b.n 0x1e84a	@ 0001e814 19e0
.org 0x1e816
	.byte 0x00	@ 0001e816 data
.org 0x1e817
	.byte 0x00	@ 0001e817 data
.org 0x1e818
	.byte 0xff,0x3f,0x06,0x00	@ 0001e818 data
.org 0x1e81c
	.byte 0xff,0xdf,0x01,0x00	@ 0001e81c data
.org 0x1e820
	.byte 0xff,0x9f,0x0d,0x00	@ 0001e820 data
.org 0x1e824
	movs r0, #3	@ 0001e824 0320
.org 0x1e826
	b.n 0x1e84a	@ 0001e826 10e0
.org 0x1e828
	ldr r1, [r1, #0]	@ 0001e828 0968
.org 0x1e82a
	ldr r0, [pc, #16]	@ 0001e82a 0448
.org 0x1e82c
	cmp r1, r0	@ 0001e82c 8142
.org 0x1e82e
	ble.n 0x1e848	@ 0001e82e 0bdd
.org 0x1e830
	ldr r0, [pc, #12]	@ 0001e830 0348
.org 0x1e832
	cmp r1, r0	@ 0001e832 8142
.org 0x1e834
	bgt.n 0x1e844	@ 0001e834 06dc
