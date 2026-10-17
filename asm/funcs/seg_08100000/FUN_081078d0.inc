@ FUN_081078d0  entry 0x081078d0  size 96
.thumb
.org 0x1078d0
FUN_081078d0:
	push {r4, r5, r6, r7, lr}	@ 001078d0 f0b5
.org 0x1078d2
	adds r5, r0, #0	@ 001078d2 051c
.org 0x1078d4
	adds r7, r2, #0	@ 001078d4 171c
.org 0x1078d6
	lsls r4, r1, #16	@ 001078d6 0c04
.org 0x1078d8
	lsrs r6, r4, #16	@ 001078d8 260c
.org 0x1078da
	ldr r0, [pc, #84]	@ 001078da 1548
.org 0x1078dc
	ldr r0, [r0, #0]	@ 001078dc 0068
.org 0x1078de
	bl 0x5500	@ 001078de fdf60ffe
.org 0x1078e2
	adds r3, r0, #0	@ 001078e2 031c
.org 0x1078e4
	cmp r3, #0	@ 001078e4 002b
.org 0x1078e6
	beq.n 0x107928	@ 001078e6 1fd0
.org 0x1078e8
	adds r1, r3, #0	@ 001078e8 191c
.org 0x1078ea
	adds r1, #37	@ 001078ea 2531
.org 0x1078ec
	movs r2, #0	@ 001078ec 0022
.org 0x1078ee
	movs r0, #30	@ 001078ee 1e20
.org 0x1078f0
	strb r0, [r1, #0]	@ 001078f0 0870
.org 0x1078f2
	ldr r0, [pc, #64]	@ 001078f2 1048
.org 0x1078f4
	movs r1, #81	@ 001078f4 5121
.org 0x1078f6
	strb r1, [r3, #9]	@ 001078f6 5972
.org 0x1078f8
	adds r1, #243	@ 001078f8 f331
.org 0x1078fa
	adds r0, r0, r1	@ 001078fa 4018
.org 0x1078fc
	ldr r0, [r0, #0]	@ 001078fc 0068
.org 0x1078fe
	ldr r0, [r0, #0]	@ 001078fe 0068
.org 0x107900
	str r0, [r3, #20]	@ 00107900 5861
.org 0x107902
	movs r0, #0	@ 00107902 0020
.org 0x107904
	strh r2, [r3, #32]	@ 00107904 1a84
.org 0x107906
	adds r1, r3, #0	@ 00107906 191c
.org 0x107908
	adds r1, #34	@ 00107908 2231
.org 0x10790a
	strb r0, [r1, #0]	@ 0010790a 0870
.org 0x10790c
	ldrb r1, [r3, #11]	@ 0010790c d97a
.org 0x10790e
	movs r0, #16	@ 0010790e 1020
.org 0x107910
	orrs r0, r1	@ 00107910 0843
.org 0x107912
	strb r0, [r3, #11]	@ 00107912 d872
.org 0x107914
	ldrb r0, [r3, #28]	@ 00107914 187f
.org 0x107916
	strb r0, [r3, #29]	@ 00107916 5877
.org 0x107918
	ldr r0, [r5, #0]	@ 00107918 2868
.org 0x10791a
	ldr r1, [r5, #4]	@ 0010791a 6968
.org 0x10791c
	str r0, [r3, #84]	@ 0010791c 5865
.org 0x10791e
	str r1, [r3, #88]	@ 0010791e 9965
.org 0x107920
	lsrs r0, r4, #24	@ 00107920 200e
.org 0x107922
	strb r0, [r3, #16]	@ 00107922 1874
.org 0x107924
	strb r6, [r3, #17]	@ 00107924 5e74
.org 0x107926
	str r7, [r3, #44]	@ 00107926 df62
.org 0x107928
	adds r0, r3, #0	@ 00107928 181c
.org 0x10792a
	pop {r4, r5, r6, r7}	@ 0010792a f0bc
.org 0x10792c
	pop {r1}	@ 0010792c 02bc
.org 0x10792e
	bx r1	@ 0010792e 0847
