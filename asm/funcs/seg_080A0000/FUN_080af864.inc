@ FUN_080af864  entry 0x080af864  size 64
.thumb
.org 0xaf864
FUN_080af864:
	push {lr}	@ 000af864 00b5
.org 0xaf866
	adds r2, r0, #0	@ 000af866 021c
.org 0xaf868
	ldr r0, [pc, #44]	@ 000af868 0b48
.org 0xaf86a
	ldr r3, [r0, #0]	@ 000af86a 0368
.org 0xaf86c
	ldr r0, [r3, #84]	@ 000af86c 586d
.org 0xaf86e
	ldr r1, [r2, #84]	@ 000af86e 516d
.org 0xaf870
	subs r0, r0, r1	@ 000af870 401a
.org 0xaf872
	asrs r0, r0, #8	@ 000af872 0012
.org 0xaf874
	cmp r0, #0	@ 000af874 0028
.org 0xaf876
	bge.n 0xaf87a	@ 000af876 00da
.org 0xaf878
	negs r0, r0	@ 000af878 4042
.org 0xaf87a
	cmp r0, #120	@ 000af87a 7828
.org 0xaf87c
	bgt.n 0xaf890	@ 000af87c 08dc
.org 0xaf87e
	ldr r0, [r3, #88]	@ 000af87e 986d
.org 0xaf880
	ldr r1, [r2, #88]	@ 000af880 916d
.org 0xaf882
	subs r0, r0, r1	@ 000af882 401a
.org 0xaf884
	asrs r0, r0, #8	@ 000af884 0012
.org 0xaf886
	cmp r0, #0	@ 000af886 0028
.org 0xaf888
	bge.n 0xaf88c	@ 000af888 00da
.org 0xaf88a
	negs r0, r0	@ 000af88a 4042
.org 0xaf88c
	cmp r0, #80	@ 000af88c 5028
.org 0xaf88e
	ble.n 0xaf89c	@ 000af88e 05dd
.org 0xaf890
	adds r1, r2, #0	@ 000af890 111c
.org 0xaf892
	adds r1, #182	@ 000af892 b631
.org 0xaf894
	movs r0, #0	@ 000af894 0020
.org 0xaf896
	b.n 0xaf8a2	@ 000af896 04e0
.org 0xaf898
	.byte 0xf0,0xdb,0x02,0x02	@ 000af898 data
.org 0xaf89c
	adds r1, r2, #0	@ 000af89c 111c
.org 0xaf89e
	adds r1, #182	@ 000af89e b631
.org 0xaf8a0
	movs r0, #1	@ 000af8a0 0120
.org 0xaf8a2
	strb r0, [r1, #0]	@ 000af8a2 0870
