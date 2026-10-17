@ FUN_0801b90c  entry 0x0801b90c  size 56
.thumb
.org 0x1b90c
FUN_0801b90c:
	push {lr}	@ 0001b90c 00b5
.org 0x1b90e
	adds r2, r0, #0	@ 0001b90e 021c
.org 0x1b910
	ldrb r0, [r2, #14]	@ 0001b910 907b
.org 0x1b912
	cmp r0, #0	@ 0001b912 0028
.org 0x1b914
	bne.n 0x1b946	@ 0001b914 17d1
.org 0x1b916
	str r0, [r2, #68]	@ 0001b916 5064
.org 0x1b918
	str r0, [r2, #72]	@ 0001b918 9064
.org 0x1b91a
	ldr r1, [r2, #52]	@ 0001b91a 516b
.org 0x1b91c
	ldr r0, [pc, #16]	@ 0001b91c 0448
.org 0x1b91e
	cmp r1, r0	@ 0001b91e 8142
.org 0x1b920
	bgt.n 0x1b934	@ 0001b920 08dc
.org 0x1b922
	movs r0, #180	@ 0001b922 b420
.org 0x1b924
	lsls r0, r0, #2	@ 0001b924 8000
.org 0x1b926
	str r0, [r2, #76]	@ 0001b926 d064
.org 0x1b928
	movs r0, #220	@ 0001b928 dc20
.org 0x1b92a
	lsls r0, r0, #3	@ 0001b92a c000
.org 0x1b92c
	b.n 0x1b93e	@ 0001b92c 07e0
.org 0x1b92e
	.byte 0x00	@ 0001b92e data
.org 0x1b92f
	.byte 0x00	@ 0001b92f data
.org 0x1b930
	.byte 0x7f,0x07,0x00,0x00	@ 0001b930 data
.org 0x1b934
	movs r0, #180	@ 0001b934 b420
.org 0x1b936
	lsls r0, r0, #4	@ 0001b936 0001
.org 0x1b938
	str r0, [r2, #76]	@ 0001b938 d064
.org 0x1b93a
	movs r0, #240	@ 0001b93a f020
.org 0x1b93c
	lsls r0, r0, #2	@ 0001b93c 8000
.org 0x1b93e
	str r0, [r2, #80]	@ 0001b93e 1065
.org 0x1b940
	ldrb r0, [r2, #14]	@ 0001b940 907b
.org 0x1b942
	adds r0, #1	@ 0001b942 0130
