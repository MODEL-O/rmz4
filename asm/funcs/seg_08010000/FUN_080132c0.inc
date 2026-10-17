@ FUN_080132c0  entry 0x080132c0  size 52
.thumb
.org 0x132c0
FUN_080132c0:
	push {r4, r5, r6, lr}	@ 000132c0 70b5
.org 0x132c2
	ldr r4, [r0, #92]	@ 000132c2 c46d
.org 0x132c4
	lsls r4, r4, #16	@ 000132c4 2404
.org 0x132c6
	lsrs r4, r4, #20	@ 000132c6 240d
.org 0x132c8
	lsls r4, r4, #2	@ 000132c8 a400
.org 0x132ca
	ldr r5, [pc, #40]	@ 000132ca 0a4d
.org 0x132cc
	adds r6, r4, r5	@ 000132cc 6619
.org 0x132ce
	adds r1, r0, #0	@ 000132ce 011c
.org 0x132d0
	adds r1, #104	@ 000132d0 6831
.org 0x132d2
	ldrh r2, [r1, #0]	@ 000132d2 0a88
.org 0x132d4
	lsrs r2, r2, #4	@ 000132d4 1209
.org 0x132d6
	ldr r1, [r0, #108]	@ 000132d6 c16e
.org 0x132d8
	ldr r3, [r0, #52]	@ 000132d8 436b
.org 0x132da
	subs r1, r1, r3	@ 000132da c91a
.org 0x132dc
	subs r2, r2, r1	@ 000132dc 521a
.org 0x132de
	strh r2, [r6, #0]	@ 000132de 3280
.org 0x132e0
	adds r5, #2	@ 000132e0 0235
.org 0x132e2
	adds r4, r4, r5	@ 000132e2 6419
.org 0x132e4
	ldr r1, [r0, #56]	@ 000132e4 816b
.org 0x132e6
	lsls r0, r1, #1	@ 000132e6 4800
.org 0x132e8
	adds r0, r0, r1	@ 000132e8 4018
.org 0x132ea
	lsrs r0, r0, #2	@ 000132ea 8008
.org 0x132ec
	strh r0, [r4, #0]	@ 000132ec 2080
.org 0x132ee
	pop {r4, r5, r6}	@ 000132ee 70bc
.org 0x132f0
	pop {r0}	@ 000132f0 01bc
.org 0x132f2
	bx r0	@ 000132f2 0047
