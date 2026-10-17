@ FUN_080bdfec  entry 0x080bdfec  size 62
.thumb
.org 0xbdfec
FUN_080bdfec:
	push {r4, r5, lr}	@ 000bdfec 30b5
.org 0xbdfee
	adds r4, r0, #0	@ 000bdfee 041c
.org 0xbdff0
	adds r5, r1, #0	@ 000bdff0 0d1c
.org 0xbdff2
	ldr r0, [pc, #56]	@ 000bdff2 0e48
.org 0xbdff4
	ldr r0, [r0, #0]	@ 000bdff4 0068
.org 0xbdff6
	bl 0x5500	@ 000bdff6 47f783fa
.org 0xbdffa
	adds r3, r0, #0	@ 000bdffa 031c
.org 0xbdffc
	cmp r3, #0	@ 000bdffc 002b
.org 0xbdffe
	beq.n 0xbe024	@ 000bdffe 11d0
.org 0xbe000
	adds r1, r3, #0	@ 000be000 191c
.org 0xbe002
	adds r1, #37	@ 000be002 2531
.org 0xbe004
	movs r2, #0	@ 000be004 0022
.org 0xbe006
	movs r0, #8	@ 000be006 0820
.org 0xbe008
	strb r0, [r1, #0]	@ 000be008 0870
.org 0xbe00a
	ldr r1, [pc, #36]	@ 000be00a 0949
.org 0xbe00c
	movs r0, #2	@ 000be00c 0220
.org 0xbe00e
	strb r0, [r3, #9]	@ 000be00e 5872
.org 0xbe010
	ldr r0, [r1, #8]	@ 000be010 8868
.org 0xbe012
	ldr r0, [r0, #0]	@ 000be012 0068
.org 0xbe014
	str r0, [r3, #20]	@ 000be014 5861
.org 0xbe016
	movs r0, #0	@ 000be016 0020
.org 0xbe018
	strh r2, [r3, #32]	@ 000be018 1a84
.org 0xbe01a
	adds r1, r3, #0	@ 000be01a 191c
.org 0xbe01c
	adds r1, #34	@ 000be01c 2231
.org 0xbe01e
	strb r0, [r1, #0]	@ 000be01e 0870
.org 0xbe020
	str r4, [r3, #84]	@ 000be020 5c65
.org 0xbe022
	str r5, [r3, #88]	@ 000be022 9d65
.org 0xbe024
	pop {r4, r5}	@ 000be024 30bc
.org 0xbe026
	pop {r0}	@ 000be026 01bc
.org 0xbe028
	bx r0	@ 000be028 0047
