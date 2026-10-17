@ FUN_080378f0  entry 0x080378f0  size 66
.thumb
.org 0x378f0
FUN_080378f0:
	push {r4, r5, lr}	@ 000378f0 30b5
.org 0x378f2
	adds r5, r0, #0	@ 000378f2 051c
.org 0x378f4
	movs r4, #176	@ 000378f4 b024
.org 0x378f6
	lsls r4, r4, #6	@ 000378f6 a401
.org 0x378f8
	adds r1, r4, #0	@ 000378f8 211c
.org 0x378fa
	bl 0x3a3b0	@ 000378fa 02f059fd
.org 0x378fe
	adds r0, r5, #0	@ 000378fe 281c
.org 0x37900
	adds r1, r4, #0	@ 00037900 211c
.org 0x37902
	bl 0x3a3f0	@ 00037902 02f075fd
.org 0x37906
	movs r0, #169	@ 00037906 a920
.org 0x37908
	lsls r0, r0, #1	@ 00037908 4000
.org 0x3790a
	adds r1, r5, r0	@ 0003790a 2918
.org 0x3790c
	ldrb r0, [r1, #0]	@ 0003790c 0878
.org 0x3790e
	subs r0, #1	@ 0003790e 0138
.org 0x37910
	strb r0, [r1, #0]	@ 00037910 0870
.org 0x37912
	lsls r0, r0, #24	@ 00037912 0006
.org 0x37914
	lsrs r0, r0, #24	@ 00037914 000e
.org 0x37916
	cmp r0, #255	@ 00037916 ff28
.org 0x37918
	bne.n 0x3792c	@ 00037918 08d1
.org 0x3791a
	ldr r0, [pc, #24]	@ 0003791a 0648
.org 0x3791c
	adds r1, r5, r0	@ 0003791c 2918
.org 0x3791e
	movs r0, #2	@ 0003791e 0220
.org 0x37920
	strb r0, [r1, #0]	@ 00037920 0870
.org 0x37922
	movs r0, #129	@ 00037922 8120
.org 0x37924
	lsls r0, r0, #1	@ 00037924 4000
.org 0x37926
	adds r1, r5, r0	@ 00037926 2918
.org 0x37928
	movs r0, #0	@ 00037928 0020
.org 0x3792a
	strb r0, [r1, #0]	@ 0003792a 0870
.org 0x3792c
	pop {r4, r5}	@ 0003792c 30bc
.org 0x3792e
	pop {r0}	@ 0003792e 01bc
.org 0x37930
	bx r0	@ 00037930 0047
