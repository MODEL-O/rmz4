@ FUN_080e38fc  entry 0x080e38fc  size 24
.thumb
.org 0xe38fc
FUN_080e38fc:
	push {lr}	@ 000e38fc 00b5
.org 0xe38fe
	adds r1, r0, #0	@ 000e38fe 011c
.org 0xe3900
	ldrb r0, [r1, #18]	@ 000e3900 887c
.org 0xe3902
	cmp r0, #0	@ 000e3902 0028
.org 0xe3904
	beq.n 0xe390e	@ 000e3904 03d0
.org 0xe3906
	subs r0, #1	@ 000e3906 0138
.org 0xe3908
	strb r0, [r1, #18]	@ 000e3908 8874
.org 0xe390a
	movs r0, #0	@ 000e390a 0020
.org 0xe390c
	b.n 0xe3910	@ 000e390c 00e0
.org 0xe390e
	movs r0, #1	@ 000e390e 0120
.org 0xe3910
	pop {r1}	@ 000e3910 02bc
.org 0xe3912
	bx r1	@ 000e3912 0847
