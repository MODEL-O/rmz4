@ FUN_0803a8f8  entry 0x0803a8f8  size 40
.thumb
.org 0x3a8f8
FUN_0803a8f8:
	push {lr}	@ 0003a8f8 00b5
.org 0x3a8fa
	adds r2, r1, #0	@ 0003a8fa 0a1c
.org 0x3a8fc
	lsls r0, r0, #16	@ 0003a8fc 0004
.org 0x3a8fe
	lsrs r0, r0, #16	@ 0003a8fe 000c
.org 0x3a900
	lsls r2, r2, #16	@ 0003a900 1204
.org 0x3a902
	lsrs r2, r2, #11	@ 0003a902 d20a
.org 0x3a904
	ldr r1, [pc, #24]	@ 0003a904 0649
.org 0x3a906
	adds r2, r2, r1	@ 0003a906 5218
.org 0x3a908
	ldr r1, [pc, #24]	@ 0003a908 0649
.org 0x3a90a
	adds r0, r0, r1	@ 0003a90a 4018
.org 0x3a90c
	ldrb r1, [r0, #0]	@ 0003a90c 0178
.org 0x3a90e
	lsls r1, r1, #5	@ 0003a90e 4901
.org 0x3a910
	ldr r0, [pc, #20]	@ 0003a910 0548
.org 0x3a912
	adds r1, r1, r0	@ 0003a912 0918
.org 0x3a914
	adds r0, r2, #0	@ 0003a914 101c
.org 0x3a916
	movs r2, #8	@ 0003a916 0822
.org 0x3a918
	bl 0x128be0	@ 0003a918 eef062f9
.org 0x3a91c
	pop {r0}	@ 0003a91c 01bc
.org 0x3a91e
	bx r0	@ 0003a91e 0047
