@ FUN_0800e71c  entry 0x0800e71c  size 50
.thumb
.org 0xe71c
FUN_0800e71c:
	push {r4, lr}	@ 0000e71c 10b5
.org 0xe71e
	ldr r2, [pc, #48]	@ 0000e71e 0c4a
.org 0xe720
	ldrh r1, [r2, #0]	@ 0000e720 1188
.org 0xe722
	ldr r0, [pc, #48]	@ 0000e722 0c48
.org 0xe724
	ands r0, r1	@ 0000e724 0840
.org 0xe726
	strh r0, [r2, #0]	@ 0000e726 1080
.org 0xe728
	ldr r3, [pc, #44]	@ 0000e728 0b4b
.org 0xe72a
	movs r0, #174	@ 0000e72a ae20
.org 0xe72c
	lsls r0, r0, #1	@ 0000e72c 4000
.org 0xe72e
	adds r2, r3, r0	@ 0000e72e 1a18
.org 0xe730
	ldrh r1, [r2, #0]	@ 0000e730 1188
.org 0xe732
	movs r4, #128	@ 0000e732 8024
.org 0xe734
	lsls r4, r4, #7	@ 0000e734 e401
.org 0xe736
	adds r0, r4, #0	@ 0000e736 201c
.org 0xe738
	orrs r0, r1	@ 0000e738 0843
.org 0xe73a
	strh r0, [r2, #0]	@ 0000e73a 1080
.org 0xe73c
	movs r0, #175	@ 0000e73c af20
.org 0xe73e
	lsls r0, r0, #1	@ 0000e73e 4000
.org 0xe740
	adds r1, r3, r0	@ 0000e740 1918
.org 0xe742
	movs r0, #128	@ 0000e742 8020
.org 0xe744
	lsls r0, r0, #8	@ 0000e744 0002
.org 0xe746
	strh r0, [r1, #0]	@ 0000e746 0880
.org 0xe748
	pop {r4}	@ 0000e748 10bc
.org 0xe74a
	pop {r0}	@ 0000e74a 01bc
.org 0xe74c
	bx r0	@ 0000e74c 0047
