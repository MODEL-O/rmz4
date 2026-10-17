@ FUN_081277e0  entry 0x081277e0  size 66
.thumb
.org 0x1277e0
FUN_081277e0:
	push {lr}	@ 001277e0 00b5
.org 0x1277e2
	lsls r0, r0, #16	@ 001277e2 0004
.org 0x1277e4
	ldr r2, [pc, #36]	@ 001277e4 094a
.org 0x1277e6
	ldr r1, [pc, #40]	@ 001277e6 0a49
.org 0x1277e8
	lsrs r0, r0, #13	@ 001277e8 400b
.org 0x1277ea
	adds r0, r0, r1	@ 001277ea 4018
.org 0x1277ec
	ldrh r3, [r0, #4]	@ 001277ec 8388
.org 0x1277ee
	lsls r1, r3, #1	@ 001277ee 5900
.org 0x1277f0
	adds r1, r1, r3	@ 001277f0 c918
.org 0x1277f2
	lsls r1, r1, #2	@ 001277f2 8900
.org 0x1277f4
	adds r1, r1, r2	@ 001277f4 8918
.org 0x1277f6
	ldr r1, [r1, #0]	@ 001277f6 0968
.org 0x1277f8
	ldr r3, [r1, #0]	@ 001277f8 0b68
.org 0x1277fa
	ldr r2, [r0, #0]	@ 001277fa 0268
.org 0x1277fc
	cmp r3, r2	@ 001277fc 9342
.org 0x1277fe
	beq.n 0x127814	@ 001277fe 09d0
.org 0x127800
	adds r0, r1, #0	@ 00127800 081c
.org 0x127802
	adds r1, r2, #0	@ 00127802 111c
.org 0x127804
	bl 0x127ea0	@ 00127804 00f04cfb
.org 0x127808
	b.n 0x127828	@ 00127808 0ee0
.org 0x12780a
	.byte 0x00	@ 0012780a data
.org 0x12780b
	.byte 0x00	@ 0012780b data
.org 0x12780c
	.byte 0x58,0xbb,0x13,0x08	@ 0012780c data
.org 0x127810
	.byte 0x00,0xbc,0x13,0x08	@ 00127810 data
.org 0x127814
	ldr r2, [r1, #4]	@ 00127814 4a68
.org 0x127816
	ldrh r0, [r1, #4]	@ 00127816 8888
.org 0x127818
	cmp r0, #0	@ 00127818 0028
.org 0x12781a
	beq.n 0x127820	@ 0012781a 01d0
.org 0x12781c
	cmp r2, #0	@ 0012781c 002a
.org 0x12781e
	bge.n 0x127828	@ 0012781e 03da
.org 0x127820
	adds r0, r1, #0	@ 00127820 081c
