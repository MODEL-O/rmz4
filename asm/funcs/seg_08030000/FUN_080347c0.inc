@ FUN_080347c0  entry 0x080347c0  size 108
.thumb
.org 0x347c0
FUN_080347c0:
	push {r4, r5, r6, r7, lr}	@ 000347c0 f0b5
.org 0x347c2
	adds r5, r0, #0	@ 000347c2 051c
.org 0x347c4
	movs r0, #129	@ 000347c4 8120
.org 0x347c6
	lsls r0, r0, #1	@ 000347c6 4000
.org 0x347c8
	adds r7, r5, r0	@ 000347c8 2f18
.org 0x347ca
	ldrb r0, [r7, #0]	@ 000347ca 3878
.org 0x347cc
	cmp r0, #0	@ 000347cc 0028
.org 0x347ce
	bne.n 0x347ea	@ 000347ce 0cd1
.org 0x347d0
	ldr r1, [pc, #88]	@ 000347d0 1649
.org 0x347d2
	adds r2, r5, r1	@ 000347d2 6a18
.org 0x347d4
	ldrb r0, [r2, #0]	@ 000347d4 1078
.org 0x347d6
	movs r1, #65	@ 000347d6 4121
.org 0x347d8
	negs r1, r1	@ 000347d8 4942
.org 0x347da
	ands r1, r0	@ 000347da 0140
.org 0x347dc
	strb r1, [r2, #0]	@ 000347dc 1170
.org 0x347de
	adds r0, r5, #0	@ 000347de 281c
.org 0x347e0
	bl 0x3a2b8	@ 000347e0 05f06afd
.org 0x347e4
	ldrb r0, [r7, #0]	@ 000347e4 3878
.org 0x347e6
	adds r0, #1	@ 000347e6 0130
.org 0x347e8
	strb r0, [r7, #0]	@ 000347e8 3870
.org 0x347ea
	ldr r4, [pc, #68]	@ 000347ea 114c
.org 0x347ec
	ldr r0, [pc, #68]	@ 000347ec 1148
.org 0x347ee
	adds r6, r5, r0	@ 000347ee 2e18
.org 0x347f0
	ldrb r0, [r6, #0]	@ 000347f0 3078
.org 0x347f2
	lsls r0, r0, #1	@ 000347f2 4000
.org 0x347f4
	adds r0, r0, r4	@ 000347f4 0019
.org 0x347f6
	ldrh r1, [r0, #0]	@ 000347f6 0188
.org 0x347f8
	adds r0, r5, #0	@ 000347f8 281c
.org 0x347fa
	bl 0x3a3b0	@ 000347fa 05f0d9fd
.org 0x347fe
	ldrb r0, [r6, #0]	@ 000347fe 3078
.org 0x34800
	lsls r0, r0, #1	@ 00034800 4000
.org 0x34802
	adds r0, r0, r4	@ 00034802 0019
.org 0x34804
	ldrh r1, [r0, #0]	@ 00034804 0188
.org 0x34806
	adds r0, r5, #0	@ 00034806 281c
.org 0x34808
	bl 0x3a3f0	@ 00034808 05f0f2fd
.org 0x3480c
	ldr r1, [pc, #28]	@ 0003480c 0749
.org 0x3480e
	adds r0, r5, r1	@ 0003480e 6818
.org 0x34810
	ldrb r1, [r0, #0]	@ 00034810 0178
.org 0x34812
	movs r0, #64	@ 00034812 4020
.org 0x34814
	ands r0, r1	@ 00034814 0840
.org 0x34816
	cmp r0, #0	@ 00034816 0028
.org 0x34818
	beq.n 0x34826	@ 00034818 05d0
.org 0x3481a
	ldr r0, [pc, #28]	@ 0003481a 0748
.org 0x3481c
	adds r2, r5, r0	@ 0003481c 2a18
.org 0x3481e
	movs r1, #0	@ 0003481e 0021
.org 0x34820
	movs r0, #4	@ 00034820 0420
.org 0x34822
	strb r0, [r2, #0]	@ 00034822 1070
.org 0x34824
	strb r1, [r7, #0]	@ 00034824 3970
.org 0x34826
	pop {r4, r5, r6, r7}	@ 00034826 f0bc
.org 0x34828
	pop {r0}	@ 00034828 01bc
.org 0x3482a
	bx r0	@ 0003482a 0047
