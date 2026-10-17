@ FUN_0800f8f0  entry 0x0800f8f0  size 64
.thumb
.org 0xf8f0
FUN_0800f8f0:
	push {r4, lr}	@ 0000f8f0 10b5
.org 0xf8f2
	adds r3, r0, #0	@ 0000f8f2 031c
.org 0xf8f4
	ldrb r4, [r3, #14]	@ 0000f8f4 9c7b
.org 0xf8f6
	cmp r4, #0	@ 0000f8f6 002c
.org 0xf8f8
	bne.n 0xf912	@ 0000f8f8 0bd1
.org 0xf8fa
	ldr r2, [pc, #52]	@ 0000f8fa 0d4a
.org 0xf8fc
	ldr r1, [r3, #92]	@ 0000f8fc d96d
.org 0xf8fe
	lsls r1, r1, #8	@ 0000f8fe 0902
.org 0xf900
	ldrh r0, [r2, #0]	@ 0000f900 1088
.org 0xf902
	bics r0, r1	@ 0000f902 8843
.org 0xf904
	strh r0, [r2, #0]	@ 0000f904 1080
.org 0xf906
	ldr r1, [pc, #44]	@ 0000f906 0b49
.org 0xf908
	movs r0, #240	@ 0000f908 f020
.org 0xf90a
	lsls r0, r0, #9	@ 0000f90a 4002
.org 0xf90c
	str r0, [r1, #0]	@ 0000f90c 0860
.org 0xf90e
	adds r0, r4, #1	@ 0000f90e 601c
.org 0xf910
	strb r0, [r3, #14]	@ 0000f910 9873
.org 0xf912
	ldr r2, [pc, #36]	@ 0000f912 094a
.org 0xf914
	ldrh r1, [r2, #20]	@ 0000f914 918a
.org 0xf916
	movs r0, #1	@ 0000f916 0120
.org 0xf918
	ands r0, r1	@ 0000f918 0840
.org 0xf91a
	cmp r0, #0	@ 0000f91a 0028
.org 0xf91c
	beq.n 0xf92a	@ 0000f91c 05d0
.org 0xf91e
	movs r0, #162	@ 0000f91e a220
.org 0xf920
	lsls r0, r0, #1	@ 0000f920 4000
.org 0xf922
	adds r1, r2, r0	@ 0000f922 1118
.org 0xf924
	movs r0, #240	@ 0000f924 f020
.org 0xf926
	lsls r0, r0, #8	@ 0000f926 0002
.org 0xf928
	str r0, [r1, #0]	@ 0000f928 0860
.org 0xf92a
	pop {r4}	@ 0000f92a 10bc
.org 0xf92c
	pop {r0}	@ 0000f92c 01bc
.org 0xf92e
	bx r0	@ 0000f92e 0047
