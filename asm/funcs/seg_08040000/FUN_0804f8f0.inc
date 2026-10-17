@ FUN_0804f8f0  entry 0x0804f8f0  size 100
.thumb
.org 0x4f8f0
FUN_0804f8f0:
	push {r4, r5, lr}	@ 0004f8f0 30b5
.org 0x4f8f2
	adds r4, r0, #0	@ 0004f8f2 041c
.org 0x4f8f4
	ldr r5, [r4, #40]	@ 0004f8f4 a56a
.org 0x4f8f6
	ldrb r0, [r4, #13]	@ 0004f8f6 607b
.org 0x4f8f8
	cmp r0, #0	@ 0004f8f8 0028
.org 0x4f8fa
	bne.n 0x4f910	@ 0004f8fa 09d1
.org 0x4f8fc
	ldr r1, [pc, #84]	@ 0004f8fc 1549
.org 0x4f8fe
	adds r0, r4, #0	@ 0004f8fe 201c
.org 0x4f900
	bl 0x1cf00	@ 0004f900 cdf7fefa
.org 0x4f904
	adds r0, r5, #0	@ 0004f904 281c
.org 0x4f906
	bl 0x3aabc	@ 0004f906 ebf7d9f8
.org 0x4f90a
	ldrb r0, [r4, #13]	@ 0004f90a 607b
.org 0x4f90c
	adds r0, #1	@ 0004f90c 0130
.org 0x4f90e
	strb r0, [r4, #13]	@ 0004f90e 6073
.org 0x4f910
	adds r0, r4, #0	@ 0004f910 201c
.org 0x4f912
	bl 0x1cff0	@ 0004f912 cdf76dfb
.org 0x4f916
	adds r0, r4, #0	@ 0004f916 201c
.org 0x4f918
	adds r0, #115	@ 0004f918 7330
.org 0x4f91a
	ldrb r0, [r0, #0]	@ 0004f91a 0078
.org 0x4f91c
	cmp r0, #3	@ 0004f91c 0328
.org 0x4f91e
	bne.n 0x4f94e	@ 0004f91e 16d1
.org 0x4f920
	adds r0, r4, #0	@ 0004f920 201c
.org 0x4f922
	adds r0, #140	@ 0004f922 8c30
.org 0x4f924
	movs r1, #0	@ 0004f924 0021
.org 0x4f926
	str r1, [r0, #0]	@ 0004f926 0160
.org 0x4f928
	adds r0, #4	@ 0004f928 0430
.org 0x4f92a
	str r1, [r0, #0]	@ 0004f92a 0160
.org 0x4f92c
	adds r0, #4	@ 0004f92c 0430
.org 0x4f92e
	strb r1, [r0, #0]	@ 0004f92e 0170
.org 0x4f930
	ldrb r1, [r4, #10]	@ 0004f930 a17a
.org 0x4f932
	movs r0, #251	@ 0004f932 fb20
.org 0x4f934
	ands r0, r1	@ 0004f934 0840
.org 0x4f936
	movs r1, #254	@ 0004f936 fe21
.org 0x4f938
	ands r0, r1	@ 0004f938 0840
.org 0x4f93a
	strb r0, [r4, #10]	@ 0004f93a a072
.org 0x4f93c
	ldr r1, [pc, #24]	@ 0004f93c 0649
.org 0x4f93e
	ldrb r0, [r4, #9]	@ 0004f93e 607a
.org 0x4f940
	lsls r0, r0, #2	@ 0004f940 8000
.org 0x4f942
	adds r0, r0, r1	@ 0004f942 4018
.org 0x4f944
	movs r1, #4	@ 0004f944 0421
.org 0x4f946
	str r1, [r4, #12]	@ 0004f946 e160
.org 0x4f948
	ldr r0, [r0, #0]	@ 0004f948 0068
.org 0x4f94a
	ldr r0, [r0, #16]	@ 0004f94a 0069
.org 0x4f94c
	str r0, [r4, #20]	@ 0004f94c 6061
.org 0x4f94e
	pop {r4, r5}	@ 0004f94e 30bc
.org 0x4f950
	pop {r0}	@ 0004f950 01bc
.org 0x4f952
	bx r0	@ 0004f952 0047
