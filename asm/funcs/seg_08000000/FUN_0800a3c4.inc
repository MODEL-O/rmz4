@ FUN_0800a3c4  entry 0x0800a3c4  size 58
.thumb
.org 0xa3c4
FUN_0800a3c4:
	asrs r0, r0, #12	@ 0000a3c4 0013
.org 0xa3c6
	subs r0, #1	@ 0000a3c6 0138
.org 0xa3c8
	asrs r1, r1, #12	@ 0000a3c8 0913
.org 0xa3ca
	subs r1, #1	@ 0000a3ca 0139
.org 0xa3cc
	ldr r3, [pc, #48]	@ 0000a3cc 0c4b
.org 0xa3ce
	movs r2, #252	@ 0000a3ce fc22
.org 0xa3d0
	lsls r2, r2, #3	@ 0000a3d0 d200
.org 0xa3d2
	adds r3, r3, r2	@ 0000a3d2 9b18
.org 0xa3d4
	ldrh r2, [r3, #0]	@ 0000a3d4 1a88
.org 0xa3d6
	lsls r1, r1, #16	@ 0000a3d6 0904
.org 0xa3d8
	asrs r1, r1, #16	@ 0000a3d8 0914
.org 0xa3da
	muls r2, r1	@ 0000a3da 4a43
.org 0xa3dc
	lsls r0, r0, #16	@ 0000a3dc 0004
.org 0xa3de
	asrs r0, r0, #16	@ 0000a3de 0014
.org 0xa3e0
	adds r1, r2, r0	@ 0000a3e0 1118
.org 0xa3e2
	adds r1, #2	@ 0000a3e2 0231
.org 0xa3e4
	lsls r1, r1, #1	@ 0000a3e4 4900
.org 0xa3e6
	adds r1, r1, r3	@ 0000a3e6 c918
.org 0xa3e8
	adds r2, r2, r0	@ 0000a3e8 1218
.org 0xa3ea
	adds r2, #122	@ 0000a3ea 7a32
.org 0xa3ec
	lsls r2, r2, #1	@ 0000a3ec 5200
.org 0xa3ee
	adds r2, r2, r3	@ 0000a3ee d218
.org 0xa3f0
	ldrh r1, [r1, #0]	@ 0000a3f0 0988
.org 0xa3f2
	ldrh r0, [r2, #0]	@ 0000a3f2 1088
.org 0xa3f4
	eors r1, r0	@ 0000a3f4 4140
.org 0xa3f6
	negs r0, r1	@ 0000a3f6 4842
.org 0xa3f8
	orrs r0, r1	@ 0000a3f8 0843
.org 0xa3fa
	lsrs r0, r0, #31	@ 0000a3fa c00f
.org 0xa3fc
	bx lr	@ 0000a3fc 7047
