@ FUN_080396c0  entry 0x080396c0  size 80
.thumb
.org 0x396c0
FUN_080396c0:
	push {r4, lr}	@ 000396c0 10b5
.org 0x396c2
	adds r2, r0, #0	@ 000396c2 021c
.org 0x396c4
	lsls r1, r1, #24	@ 000396c4 0906
.org 0x396c6
	cmp r1, #0	@ 000396c6 0029
.org 0x396c8
	bne.n 0x396d0	@ 000396c8 02d1
.org 0x396ca
	movs r1, #152	@ 000396ca 9821
.org 0x396cc
	lsls r1, r1, #2	@ 000396cc 8900
.org 0x396ce
	b.n 0x396d2	@ 000396ce 00e0
.org 0x396d0
	ldr r1, [pc, #60]	@ 000396d0 0f49
.org 0x396d2
	adds r0, r2, r1	@ 000396d2 5018
.org 0x396d4
	ldrh r3, [r0, #0]	@ 000396d4 0388
.org 0x396d6
	movs r4, #0	@ 000396d6 0024
.org 0x396d8
	movs r1, #0	@ 000396d8 0021
.org 0x396da
	movs r0, #232	@ 000396da e820
.org 0x396dc
	lsls r0, r0, #1	@ 000396dc 4000
.org 0x396de
	adds r2, r2, r0	@ 000396de 1218
.org 0x396e0
	lsls r0, r1, #1	@ 000396e0 4800
.org 0x396e2
	adds r0, r2, r0	@ 000396e2 1018
.org 0x396e4
	ldrh r0, [r0, #0]	@ 000396e4 0088
.org 0x396e6
	ands r0, r3	@ 000396e6 1840
.org 0x396e8
	adds r1, #1	@ 000396e8 0131
.org 0x396ea
	cmp r0, #0	@ 000396ea 0028
.org 0x396ec
	beq.n 0x39700	@ 000396ec 08d0
.org 0x396ee
	lsls r0, r1, #1	@ 000396ee 4800
.org 0x396f0
	adds r0, r2, r0	@ 000396f0 1018
.org 0x396f2
	ldrh r0, [r0, #0]	@ 000396f2 0088
.org 0x396f4
	ands r0, r3	@ 000396f4 1840
.org 0x396f6
	cmp r0, #0	@ 000396f6 0028
.org 0x396f8
	bne.n 0x39700	@ 000396f8 02d1
.org 0x396fa
	adds r0, r4, #1	@ 000396fa 601c
.org 0x396fc
	lsls r0, r0, #24	@ 000396fc 0006
.org 0x396fe
	lsrs r4, r0, #24	@ 000396fe 040e
.org 0x39700
	lsls r0, r1, #24	@ 00039700 0806
.org 0x39702
	lsrs r1, r0, #24	@ 00039702 010e
.org 0x39704
	cmp r1, #31	@ 00039704 1f29
.org 0x39706
	bls.n 0x396e0	@ 00039706 ebd9
.org 0x39708
	adds r0, r4, #0	@ 00039708 201c
.org 0x3970a
	pop {r4}	@ 0003970a 10bc
.org 0x3970c
	pop {r1}	@ 0003970c 02bc
.org 0x3970e
	bx r1	@ 0003970e 0847
