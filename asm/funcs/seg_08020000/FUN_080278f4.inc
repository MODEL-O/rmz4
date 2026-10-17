@ FUN_080278f4  entry 0x080278f4  size 78
.thumb
.org 0x278f4
FUN_080278f4:
	push {r4, lr}	@ 000278f4 10b5
.org 0x278f6
	ldr r3, [r0, #16]	@ 000278f6 0369
.org 0x278f8
	movs r1, #164	@ 000278f8 a421
.org 0x278fa
	lsls r1, r1, #1	@ 000278fa 4900
.org 0x278fc
	adds r0, r0, r1	@ 000278fc 4018
.org 0x278fe
	ldrh r1, [r0, #0]	@ 000278fe 0188
.org 0x27900
	adds r2, r1, #0	@ 00027900 0a1c
.org 0x27902
	cmp r2, #0	@ 00027902 002a
.org 0x27904
	bne.n 0x27928	@ 00027904 10d1
.org 0x27906
	ldr r4, [pc, #20]	@ 00027906 054c
.org 0x27908
	ldr r3, [pc, #20]	@ 00027908 054b
.org 0x2790a
	ldrh r2, [r3, #0]	@ 0002790a 1a88
.org 0x2790c
	ldr r1, [pc, #20]	@ 0002790c 0549
.org 0x2790e
	adds r0, r1, #0	@ 0002790e 081c
.org 0x27910
	ands r0, r2	@ 00027910 1040
.org 0x27912
	strh r0, [r4, #4]	@ 00027912 a080
.org 0x27914
	ldrh r0, [r3, #24]	@ 00027914 188b
.org 0x27916
	ands r1, r0	@ 00027916 0140
.org 0x27918
	strh r1, [r4, #6]	@ 00027918 e180
.org 0x2791a
	b.n 0x27952	@ 0002791a 1ae0
.org 0x2791c
	.byte 0x10,0xe9,0x02,0x02	@ 0002791c data
.org 0x27920
	.byte 0x60,0x07,0x00,0x02	@ 00027920 data
.org 0x27924
	.byte 0xff,0x7f,0x00,0x00	@ 00027924 data
.org 0x27928
	ldr r0, [pc, #24]	@ 00027928 0648
.org 0x2792a
	cmp r2, r0	@ 0002792a 8242
.org 0x2792c
	bne.n 0x2794c	@ 0002792c 0ed1
.org 0x2792e
	ldr r1, [pc, #24]	@ 0002792e 0649
.org 0x27930
	movs r0, #0	@ 00027930 0020
.org 0x27932
	strh r0, [r1, #4]	@ 00027932 8880
.org 0x27934
	strh r0, [r1, #6]	@ 00027934 c880
.org 0x27936
	cmp r3, #0	@ 00027936 002b
.org 0x27938
	beq.n 0x27952	@ 00027938 0bd0
.org 0x2793a
	adds r0, r3, #0	@ 0002793a 181c
.org 0x2793c
	bl 0x2b7a4	@ 0002793c 03f032ff
.org 0x27940
	b.n 0x27952	@ 00027940 07e0
