@ FUN_080cb8ec  entry 0x080cb8ec  size 80
.thumb
.org 0xcb8ec
FUN_080cb8ec:
	push {r4, r5, r6, r7, lr}	@ 000cb8ec f0b5
.org 0xcb8ee
	adds r5, r0, #0	@ 000cb8ee 051c
.org 0xcb8f0
	adds r6, r1, #0	@ 000cb8f0 0e1c
.org 0xcb8f2
	lsls r2, r2, #24	@ 000cb8f2 1206
.org 0xcb8f4
	lsrs r7, r2, #24	@ 000cb8f4 170e
.org 0xcb8f6
	ldr r0, [pc, #68]	@ 000cb8f6 1148
.org 0xcb8f8
	ldr r0, [r0, #0]	@ 000cb8f8 0068
.org 0xcb8fa
	bl 0x5500	@ 000cb8fa 39f701fe
.org 0xcb8fe
	adds r4, r0, #0	@ 000cb8fe 041c
.org 0xcb900
	cmp r4, #0	@ 000cb900 002c
.org 0xcb902
	beq.n 0xcb934	@ 000cb902 17d0
.org 0xcb904
	adds r1, r4, #0	@ 000cb904 211c
.org 0xcb906
	adds r1, #37	@ 000cb906 2531
.org 0xcb908
	movs r3, #0	@ 000cb908 0023
.org 0xcb90a
	movs r0, #8	@ 000cb90a 0820
.org 0xcb90c
	strb r0, [r1, #0]	@ 000cb90c 0870
.org 0xcb90e
	ldr r0, [pc, #48]	@ 000cb90e 0c48
.org 0xcb910
	movs r1, #41	@ 000cb910 2921
.org 0xcb912
	strb r1, [r4, #9]	@ 000cb912 6172
.org 0xcb914
	adds r0, #164	@ 000cb914 a430
.org 0xcb916
	ldr r0, [r0, #0]	@ 000cb916 0068
.org 0xcb918
	ldr r0, [r0, #0]	@ 000cb918 0068
.org 0xcb91a
	str r0, [r4, #20]	@ 000cb91a 6061
.org 0xcb91c
	movs r2, #0	@ 000cb91c 0022
.org 0xcb91e
	strh r3, [r4, #32]	@ 000cb91e 2384
.org 0xcb920
	adds r0, r4, #0	@ 000cb920 201c
.org 0xcb922
	adds r0, #34	@ 000cb922 2230
.org 0xcb924
	strb r2, [r0, #0]	@ 000cb924 0270
.org 0xcb926
	str r5, [r4, #40]	@ 000cb926 a562
.org 0xcb928
	ldr r0, [r6, #0]	@ 000cb928 3068
.org 0xcb92a
	ldr r1, [r6, #4]	@ 000cb92a 7168
.org 0xcb92c
	str r0, [r4, #84]	@ 000cb92c 6065
.org 0xcb92e
	str r1, [r4, #88]	@ 000cb92e a165
.org 0xcb930
	strb r2, [r4, #16]	@ 000cb930 2274
.org 0xcb932
	strb r7, [r4, #17]	@ 000cb932 6774
.org 0xcb934
	adds r0, r4, #0	@ 000cb934 201c
.org 0xcb936
	pop {r4, r5, r6, r7}	@ 000cb936 f0bc
.org 0xcb938
	pop {r1}	@ 000cb938 02bc
.org 0xcb93a
	bx r1	@ 000cb93a 0847
