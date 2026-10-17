@ FUN_080054cc  entry 0x080054cc  size 50
.thumb
.org 0x54cc
FUN_080054cc:
	push {lr}	@ 000054cc 00b5
.org 0x54ce
	adds r3, r0, #0	@ 000054ce 031c
.org 0x54d0
	ldr r2, [r3, #16]	@ 000054d0 1a69
.org 0x54d2
	cmp r2, #0	@ 000054d2 002a
.org 0x54d4
	beq.n 0x54f8	@ 000054d4 10d0
.org 0x54d6
	ldr r0, [r2, #0]	@ 000054d6 1068
.org 0x54d8
	str r0, [r3, #16]	@ 000054d8 1861
.org 0x54da
	ldrh r0, [r3, #10]	@ 000054da 5889
.org 0x54dc
	subs r0, #1	@ 000054dc 0138
.org 0x54de
	movs r1, #0	@ 000054de 0021
.org 0x54e0
	strh r0, [r3, #10]	@ 000054e0 5881
.org 0x54e2
	adds r0, r3, #0	@ 000054e2 181c
.org 0x54e4
	adds r0, #20	@ 000054e4 1430
.org 0x54e6
	str r0, [r2, #0]	@ 000054e6 1060
.org 0x54e8
	ldr r0, [r3, #24]	@ 000054e8 9869
.org 0x54ea
	str r0, [r2, #4]	@ 000054ea 5060
.org 0x54ec
	ldr r0, [r3, #24]	@ 000054ec 9869
.org 0x54ee
	str r2, [r0, #0]	@ 000054ee 0260
.org 0x54f0
	str r2, [r3, #24]	@ 000054f0 9a61
.org 0x54f2
	strh r1, [r2, #10]	@ 000054f2 5181
.org 0x54f4
	str r1, [r2, #12]	@ 000054f4 d160
.org 0x54f6
	str r1, [r2, #16]	@ 000054f6 1161
.org 0x54f8
	adds r0, r2, #0	@ 000054f8 101c
.org 0x54fa
	pop {r1}	@ 000054fa 02bc
.org 0x54fc
	bx r1	@ 000054fc 0847
