@ FUN_0803a964  entry 0x0803a964  size 50
.thumb
.org 0x3a964
FUN_0803a964:
	push {r4, r5, r6, lr}	@ 0003a964 70b5
.org 0x3a966
	adds r6, r0, #0	@ 0003a966 061c
.org 0x3a968
	ldr r0, [pc, #44]	@ 0003a968 0b48
.org 0x3a96a
	ldr r4, [r0, #0]	@ 0003a96a 0468
.org 0x3a96c
	adds r0, r4, #0	@ 0003a96c 201c
.org 0x3a96e
	bl 0x54c4	@ 0003a96e caf7a9fd
.org 0x3a972
	ldr r0, [r4, #12]	@ 0003a972 e068
.org 0x3a974
	ldr r0, [r0, #4]	@ 0003a974 4068
.org 0x3a976
	str r0, [r4, #12]	@ 0003a976 e060
.org 0x3a978
	adds r1, r4, #0	@ 0003a978 211c
.org 0x3a97a
	adds r1, #20	@ 0003a97a 1431
.org 0x3a97c
	cmp r0, r1	@ 0003a97c 8842
.org 0x3a97e
	beq.n 0x3a990	@ 0003a97e 07d0
.org 0x3a980
	adds r5, r1, #0	@ 0003a980 0d1c
.org 0x3a982
	bl 0x128f94	@ 0003a982 eef007fb
.org 0x3a986
	ldr r0, [r4, #12]	@ 0003a986 e068
.org 0x3a988
	ldr r0, [r0, #4]	@ 0003a988 4068
.org 0x3a98a
	str r0, [r4, #12]	@ 0003a98a e060
.org 0x3a98c
	cmp r0, r5	@ 0003a98c a842
.org 0x3a98e
	bne.n 0x3a982	@ 0003a98e f8d1
.org 0x3a990
	pop {r4, r5, r6}	@ 0003a990 70bc
.org 0x3a992
	pop {r0}	@ 0003a992 01bc
.org 0x3a994
	bx r0	@ 0003a994 0047
