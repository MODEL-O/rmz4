@ FUN_080c56ec  entry 0x080c56ec  size 58
.thumb
.org 0xc56ec
FUN_080c56ec:
	push {lr}	@ 000c56ec 00b5
.org 0xc56ee
	adds r2, r0, #0	@ 000c56ee 021c
.org 0xc56f0
	ldr r0, [r2, #40]	@ 000c56f0 906a
.org 0xc56f2
	ldrb r0, [r0, #12]	@ 000c56f2 007b
.org 0xc56f4
	cmp r0, #1	@ 000c56f4 0128
.org 0xc56f6
	bls.n 0xc5718	@ 000c56f6 0fd9
.org 0xc56f8
	ldr r1, [pc, #24]	@ 000c56f8 0649
.org 0xc56fa
	ldrb r0, [r2, #9]	@ 000c56fa 507a
.org 0xc56fc
	lsls r0, r0, #2	@ 000c56fc 8000
.org 0xc56fe
	adds r0, r0, r1	@ 000c56fe 4018
.org 0xc5700
	movs r1, #2	@ 000c5700 0221
.org 0xc5702
	str r1, [r2, #12]	@ 000c5702 d160
.org 0xc5704
	ldr r0, [r0, #0]	@ 000c5704 0068
.org 0xc5706
	ldr r0, [r0, #8]	@ 000c5706 8068
.org 0xc5708
	str r0, [r2, #20]	@ 000c5708 5061
.org 0xc570a
	adds r0, r2, #0	@ 000c570a 101c
.org 0xc570c
	bl 0xc5e50	@ 000c570c 00f0a0fb
.org 0xc5710
	b.n 0xc5728	@ 000c5710 0ae0
.org 0xc5712
	.byte 0x00	@ 000c5712 data
.org 0xc5713
	.byte 0x00	@ 000c5713 data
.org 0xc5714
	.byte 0xf4,0x49,0x86,0x08	@ 000c5714 data
.org 0xc5718
	ldr r0, [pc, #16]	@ 000c5718 0448
.org 0xc571a
	ldrb r1, [r2, #13]	@ 000c571a 517b
.org 0xc571c
	lsls r1, r1, #2	@ 000c571c 8900
.org 0xc571e
	adds r1, r1, r0	@ 000c571e 0918
.org 0xc5720
	ldr r1, [r1, #0]	@ 000c5720 0968
.org 0xc5722
	adds r0, r2, #0	@ 000c5722 101c
.org 0xc5724
	bl 0x128f80	@ 000c5724 63f02cfc
