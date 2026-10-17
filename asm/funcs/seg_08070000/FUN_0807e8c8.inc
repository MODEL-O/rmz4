@ FUN_0807e8c8  entry 0x0807e8c8  size 108
.thumb
.org 0x7e8c8
FUN_0807e8c8:
	push {r4, r5, r6, lr}	@ 0007e8c8 70b5
.org 0x7e8ca
	adds r2, r0, #0	@ 0007e8ca 021c
.org 0x7e8cc
	lsls r1, r1, #24	@ 0007e8cc 0906
.org 0x7e8ce
	lsrs r4, r1, #24	@ 0007e8ce 0c0e
.org 0x7e8d0
	ldr r1, [pc, #24]	@ 0007e8d0 0649
.org 0x7e8d2
	lsls r0, r4, #2	@ 0007e8d2 a000
.org 0x7e8d4
	adds r0, r0, r1	@ 0007e8d4 4018
.org 0x7e8d6
	ldr r3, [r0, #0]	@ 0007e8d6 0368
.org 0x7e8d8
	adds r6, r1, #0	@ 0007e8d8 0e1c
.org 0x7e8da
	cmp r4, #0	@ 0007e8da 002c
.org 0x7e8dc
	beq.n 0x7e8e2	@ 0007e8dc 01d0
.org 0x7e8de
	cmp r4, #20	@ 0007e8de 142c
.org 0x7e8e0
	bne.n 0x7e8f0	@ 0007e8e0 06d1
.org 0x7e8e2
	ldrb r1, [r2, #10]	@ 0007e8e2 917a
.org 0x7e8e4
	movs r0, #254	@ 0007e8e4 fe20
.org 0x7e8e6
	ands r0, r1	@ 0007e8e6 0840
.org 0x7e8e8
	b.n 0x7e8f6	@ 0007e8e8 05e0
.org 0x7e8ea
	.byte 0x00	@ 0007e8ea data
.org 0x7e8eb
	.byte 0x00	@ 0007e8eb data
.org 0x7e8ec
	.byte 0x64,0xd6,0x85,0x08	@ 0007e8ec data
.org 0x7e8f0
	ldrb r1, [r2, #10]	@ 0007e8f0 917a
.org 0x7e8f2
	movs r0, #1	@ 0007e8f2 0120
.org 0x7e8f4
	orrs r0, r1	@ 0007e8f4 0843
.org 0x7e8f6
	strb r0, [r2, #10]	@ 0007e8f6 9072
.org 0x7e8f8
	adds r0, r2, #0	@ 0007e8f8 101c
.org 0x7e8fa
	adds r0, #188	@ 0007e8fa bc30
.org 0x7e8fc
	ldrb r1, [r0, #0]	@ 0007e8fc 0178
.org 0x7e8fe
	adds r5, r0, #0	@ 0007e8fe 051c
.org 0x7e900
	cmp r1, #255	@ 0007e900 ff29
.org 0x7e902
	beq.n 0x7e92c	@ 0007e902 13d0
.org 0x7e904
	ldrb r0, [r5, #0]	@ 0007e904 2878
.org 0x7e906
	lsls r0, r0, #2	@ 0007e906 8000
.org 0x7e908
	adds r0, r0, r6	@ 0007e908 8019
.org 0x7e90a
	ldr r1, [r0, #0]	@ 0007e90a 0168
.org 0x7e90c
	ldr r0, [pc, #24]	@ 0007e90c 0648
.org 0x7e90e
	cmp r3, r0	@ 0007e90e 8342
.org 0x7e910
	beq.n 0x7e918	@ 0007e910 02d0
.org 0x7e912
	adds r0, #18	@ 0007e912 1230
.org 0x7e914
	cmp r3, r0	@ 0007e914 8342
.org 0x7e916
	bne.n 0x7e91c	@ 0007e916 01d1
.org 0x7e918
	cmp r3, r1	@ 0007e918 8b42
.org 0x7e91a
	beq.n 0x7e936	@ 0007e91a 0cd0
.org 0x7e91c
	lsls r1, r3, #16	@ 0007e91c 1904
.org 0x7e91e
	lsrs r1, r1, #16	@ 0007e91e 090c
.org 0x7e920
	adds r0, r2, #0	@ 0007e920 101c
.org 0x7e922
	bl 0x1cf00	@ 0007e922 9ef7edfa
.org 0x7e926
	b.n 0x7e936	@ 0007e926 06e0
.org 0x7e928
	.byte 0x02,0xb4,0x00,0x00	@ 0007e928 data
.org 0x7e92c
	lsls r1, r3, #16	@ 0007e92c 1904
.org 0x7e92e
	lsrs r1, r1, #16	@ 0007e92e 090c
.org 0x7e930
	adds r0, r2, #0	@ 0007e930 101c
.org 0x7e932
	bl 0x1cf00	@ 0007e932 9ef7e5fa
