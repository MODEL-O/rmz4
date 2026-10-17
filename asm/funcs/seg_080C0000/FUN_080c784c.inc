@ FUN_080c784c  entry 0x080c784c  size 58
.thumb
.org 0xc784c
FUN_080c784c:
	push {lr}	@ 000c784c 00b5
.org 0xc784e
	adds r2, r0, #0	@ 000c784e 021c
.org 0xc7850
	ldr r0, [r2, #40]	@ 000c7850 906a
.org 0xc7852
	ldrb r0, [r0, #12]	@ 000c7852 007b
.org 0xc7854
	cmp r0, #1	@ 000c7854 0128
.org 0xc7856
	bls.n 0xc7878	@ 000c7856 0fd9
.org 0xc7858
	ldr r1, [pc, #24]	@ 000c7858 0649
.org 0xc785a
	ldrb r0, [r2, #9]	@ 000c785a 507a
.org 0xc785c
	lsls r0, r0, #2	@ 000c785c 8000
.org 0xc785e
	adds r0, r0, r1	@ 000c785e 4018
.org 0xc7860
	movs r1, #2	@ 000c7860 0221
.org 0xc7862
	str r1, [r2, #12]	@ 000c7862 d160
.org 0xc7864
	ldr r0, [r0, #0]	@ 000c7864 0068
.org 0xc7866
	ldr r0, [r0, #8]	@ 000c7866 8068
.org 0xc7868
	str r0, [r2, #20]	@ 000c7868 5061
.org 0xc786a
	adds r0, r2, #0	@ 000c786a 101c
.org 0xc786c
	bl 0xc7d40	@ 000c786c 00f068fa
.org 0xc7870
	b.n 0xc7888	@ 000c7870 0ae0
.org 0xc7872
	.byte 0x00	@ 000c7872 data
.org 0xc7873
	.byte 0x00	@ 000c7873 data
.org 0xc7874
	.byte 0xf4,0x49,0x86,0x08	@ 000c7874 data
.org 0xc7878
	ldr r0, [pc, #16]	@ 000c7878 0448
.org 0xc787a
	ldrb r1, [r2, #13]	@ 000c787a 517b
.org 0xc787c
	lsls r1, r1, #2	@ 000c787c 8900
.org 0xc787e
	adds r1, r1, r0	@ 000c787e 0918
.org 0xc7880
	ldr r1, [r1, #0]	@ 000c7880 0968
.org 0xc7882
	adds r0, r2, #0	@ 000c7882 101c
.org 0xc7884
	bl 0x128f80	@ 000c7884 61f07cfb
