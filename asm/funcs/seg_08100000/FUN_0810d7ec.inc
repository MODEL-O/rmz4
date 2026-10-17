@ FUN_0810d7ec  entry 0x0810d7ec  size 68
.thumb
.org 0x10d7ec
FUN_0810d7ec:
	push {r4, r5, r6, lr}	@ 0010d7ec 70b5
.org 0x10d7ee
	adds r4, r0, #0	@ 0010d7ee 041c
.org 0x10d7f0
	movs r5, #0	@ 0010d7f0 0025
.org 0x10d7f2
	ldrb r0, [r4, #0]	@ 0010d7f2 2078
.org 0x10d7f4
	cmp r0, #252	@ 0010d7f4 fc28
.org 0x10d7f6
	bhi.n 0x10d826	@ 0010d7f6 16d8
.org 0x10d7f8
	ldr r6, [pc, #52]	@ 0010d7f8 0d4e
.org 0x10d7fa
	cmp r0, #249	@ 0010d7fa f928
.org 0x10d7fc
	bne.n 0x10d80e	@ 0010d7fc 07d1
.org 0x10d7fe
	ldr r0, [r6, #0]	@ 0010d7fe 3068
.org 0x10d800
	bl 0x10d7ec	@ 0010d800 fff7f4ff
.org 0x10d804
	lsls r1, r5, #16	@ 0010d804 2904
.org 0x10d806
	asrs r1, r1, #16	@ 0010d806 0914
.org 0x10d808
	adds r1, r1, r0	@ 0010d808 0918
.org 0x10d80a
	lsls r1, r1, #16	@ 0010d80a 0904
.org 0x10d80c
	lsrs r5, r1, #16	@ 0010d80c 0d0c
.org 0x10d80e
	ldrb r0, [r4, #0]	@ 0010d80e 2078
.org 0x10d810
	cmp r0, #239	@ 0010d810 ef28
.org 0x10d812
	bhi.n 0x10d81e	@ 0010d812 04d8
.org 0x10d814
	lsls r0, r5, #16	@ 0010d814 2804
.org 0x10d816
	movs r1, #128	@ 0010d816 8021
.org 0x10d818
	lsls r1, r1, #9	@ 0010d818 4902
.org 0x10d81a
	adds r0, r0, r1	@ 0010d81a 4018
.org 0x10d81c
	lsrs r5, r0, #16	@ 0010d81c 050c
.org 0x10d81e
	adds r4, #1	@ 0010d81e 0134
.org 0x10d820
	ldrb r0, [r4, #0]	@ 0010d820 2078
.org 0x10d822
	cmp r0, #252	@ 0010d822 fc28
.org 0x10d824
	bls.n 0x10d7fa	@ 0010d824 e9d9
.org 0x10d826
	lsls r0, r5, #16	@ 0010d826 2804
.org 0x10d828
	asrs r0, r0, #16	@ 0010d828 0014
.org 0x10d82a
	pop {r4, r5, r6}	@ 0010d82a 70bc
.org 0x10d82c
	pop {r1}	@ 0010d82c 02bc
.org 0x10d82e
	bx r1	@ 0010d82e 0847
