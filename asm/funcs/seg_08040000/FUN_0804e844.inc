@ FUN_0804e844  entry 0x0804e844  size 48
.thumb
.org 0x4e844
FUN_0804e844:
	adds r2, r0, #0	@ 0004e844 021c
.org 0x4e846
	adds r0, #140	@ 0004e846 8c30
.org 0x4e848
	movs r1, #0	@ 0004e848 0021
.org 0x4e84a
	str r1, [r0, #0]	@ 0004e84a 0160
.org 0x4e84c
	adds r0, #4	@ 0004e84c 0430
.org 0x4e84e
	str r1, [r0, #0]	@ 0004e84e 0160
.org 0x4e850
	adds r0, #4	@ 0004e850 0430
.org 0x4e852
	strb r1, [r0, #0]	@ 0004e852 0170
.org 0x4e854
	ldrb r1, [r2, #10]	@ 0004e854 917a
.org 0x4e856
	movs r0, #251	@ 0004e856 fb20
.org 0x4e858
	ands r0, r1	@ 0004e858 0840
.org 0x4e85a
	movs r1, #254	@ 0004e85a fe21
.org 0x4e85c
	ands r0, r1	@ 0004e85c 0840
.org 0x4e85e
	strb r0, [r2, #10]	@ 0004e85e 9072
.org 0x4e860
	ldr r1, [pc, #16]	@ 0004e860 0449
.org 0x4e862
	ldrb r0, [r2, #9]	@ 0004e862 507a
.org 0x4e864
	lsls r0, r0, #2	@ 0004e864 8000
.org 0x4e866
	adds r0, r0, r1	@ 0004e866 4018
.org 0x4e868
	movs r1, #4	@ 0004e868 0421
.org 0x4e86a
	str r1, [r2, #12]	@ 0004e86a d160
.org 0x4e86c
	ldr r0, [r0, #0]	@ 0004e86c 0068
.org 0x4e86e
	ldr r0, [r0, #16]	@ 0004e86e 0069
.org 0x4e870
	str r0, [r2, #20]	@ 0004e870 5061
.org 0x4e872
	bx lr	@ 0004e872 7047
