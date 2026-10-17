@ FUN_080ed7f8  entry 0x080ed7f8  size 38
.thumb
.org 0xed7f8
FUN_080ed7f8:
	push {r4, r5, r6, lr}	@ 000ed7f8 70b5
.org 0xed7fa
	adds r4, r0, #0	@ 000ed7fa 041c
.org 0xed7fc
	lsls r1, r1, #16	@ 000ed7fc 0904
.org 0xed7fe
	lsrs r6, r1, #16	@ 000ed7fe 0e0c
.org 0xed800
	lsls r2, r2, #24	@ 000ed800 1206
.org 0xed802
	lsrs r5, r2, #24	@ 000ed802 150e
.org 0xed804
	ldrb r0, [r4, #15]	@ 000ed804 e07b
.org 0xed806
	cmp r0, #5	@ 000ed806 0528
.org 0xed808
	bls.n 0xed80c	@ 000ed808 00d9
.org 0xed80a
	b.n 0xed96c	@ 000ed80a afe0
.org 0xed80c
	lsls r0, r0, #2	@ 000ed80c 8000
.org 0xed80e
	ldr r1, [pc, #8]	@ 000ed80e 0249
.org 0xed810
	adds r0, r0, r1	@ 000ed810 4018
.org 0xed812
	ldr r0, [r0, #0]	@ 000ed812 0068
.org 0xed814
	mov pc, r0	@ 000ed814 8746
.org 0xed816
	.byte 0x00	@ 000ed816 data
.org 0xed817
	.byte 0x00	@ 000ed817 data
.org 0xed818
	.byte 0x1c,0xd8,0x0e,0x08	@ 000ed818 data
.org 0xed81c
	.byte 0x34,0xd8,0x0e,0x08	@ 000ed81c data
