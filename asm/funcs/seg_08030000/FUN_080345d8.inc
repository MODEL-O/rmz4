@ FUN_080345d8  entry 0x080345d8  size 64
.thumb
.org 0x345d8
FUN_080345d8:
	push {r4, r5, lr}	@ 000345d8 30b5
.org 0x345da
	adds r5, r0, #0	@ 000345da 051c
.org 0x345dc
	ldr r4, [pc, #56]	@ 000345dc 0e4c
.org 0x345de
	adds r1, r4, #0	@ 000345de 211c
.org 0x345e0
	bl 0x3a3b0	@ 000345e0 05f0e6fe
.org 0x345e4
	adds r0, r5, #0	@ 000345e4 281c
.org 0x345e6
	adds r1, r4, #0	@ 000345e6 211c
.org 0x345e8
	bl 0x3a3f0	@ 000345e8 05f002ff
.org 0x345ec
	adds r0, r5, #0	@ 000345ec 281c
.org 0x345ee
	adds r0, #115	@ 000345ee 7330
.org 0x345f0
	ldrb r0, [r0, #0]	@ 000345f0 0078
.org 0x345f2
	cmp r0, #3	@ 000345f2 0328
.org 0x345f4
	bne.n 0x34612	@ 000345f4 0dd1
.org 0x345f6
	movs r0, #128	@ 000345f6 8020
.org 0x345f8
	lsls r0, r0, #1	@ 000345f8 4000
.org 0x345fa
	adds r1, r5, r0	@ 000345fa 2918
.org 0x345fc
	movs r0, #0	@ 000345fc 0020
.org 0x345fe
	strb r0, [r1, #0]	@ 000345fe 0870
.org 0x34600
	adds r0, r5, #0	@ 00034600 281c
.org 0x34602
	bl 0x2b7d8	@ 00034602 f7f7e9f8
.org 0x34606
	adds r1, r0, #0	@ 00034606 011c
.org 0x34608
	lsls r1, r1, #16	@ 00034608 0904
.org 0x3460a
	lsrs r1, r1, #16	@ 0003460a 090c
.org 0x3460c
	adds r0, r5, #0	@ 0003460c 281c
.org 0x3460e
	bl 0x1cf00	@ 0003460e e8f777fc
.org 0x34612
	pop {r4, r5}	@ 00034612 30bc
.org 0x34614
	pop {r0}	@ 00034614 01bc
.org 0x34616
	bx r0	@ 00034616 0047
