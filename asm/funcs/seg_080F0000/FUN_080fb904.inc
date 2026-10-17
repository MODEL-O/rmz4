@ FUN_080fb904  entry 0x080fb904  size 48
.thumb
.org 0xfb904
FUN_080fb904:
	push {lr}	@ 000fb904 00b5
.org 0xfb906
	ldr r1, [r0, #12]	@ 000fb906 c168
.org 0xfb908
	ldr r1, [r1, #44]	@ 000fb908 c96a
.org 0xfb90a
	ldr r2, [r0, #44]	@ 000fb90a c26a
.org 0xfb90c
	movs r0, #8	@ 000fb90c 0820
.org 0xfb90e
	ldrsb r0, [r1, r0]	@ 000fb90e 0856
.org 0xfb910
	cmp r0, #0	@ 000fb910 0028
.org 0xfb912
	bne.n 0xfb930	@ 000fb912 0dd1
.org 0xfb914
	ldrb r0, [r2, #16]	@ 000fb914 107c
.org 0xfb916
	cmp r0, #0	@ 000fb916 0028
.org 0xfb918
	bne.n 0xfb922	@ 000fb918 03d1
.org 0xfb91a
	adds r1, #180	@ 000fb91a b431
.org 0xfb91c
	movs r0, #225	@ 000fb91c e120
.org 0xfb91e
	lsls r0, r0, #3	@ 000fb91e c000
.org 0xfb920
	b.n 0xfb926	@ 000fb920 01e0
.org 0xfb922
	adds r1, #180	@ 000fb922 b431
.org 0xfb924
	ldr r0, [pc, #12]	@ 000fb924 0348
.org 0xfb926
	str r0, [r1, #56]	@ 000fb926 8863
.org 0xfb928
	adds r1, r2, #0	@ 000fb928 111c
.org 0xfb92a
	adds r1, #189	@ 000fb92a bd31
.org 0xfb92c
	movs r0, #1	@ 000fb92c 0120
.org 0xfb92e
	strb r0, [r1, #0]	@ 000fb92e 0870
.org 0xfb930
	pop {r0}	@ 000fb930 01bc
.org 0xfb932
	bx r0	@ 000fb932 0047
