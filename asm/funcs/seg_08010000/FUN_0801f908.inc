@ FUN_0801f908  entry 0x0801f908  size 22
.thumb
.org 0x1f908
FUN_0801f908:
	movs r2, #0	@ 0001f908 0022
.org 0x1f90a
	strb r1, [r0, #24]	@ 0001f90a 0176
.org 0x1f90c
	str r2, [r0, #28]	@ 0001f90c c261
.org 0x1f90e
	strh r2, [r0, #32]	@ 0001f90e 0284
.org 0x1f910
	strh r2, [r0, #26]	@ 0001f910 4283
.org 0x1f912
	ldr r2, [pc, #12]	@ 0001f912 034a
.org 0x1f914
	lsls r1, r1, #2	@ 0001f914 8900
.org 0x1f916
	adds r1, r1, r2	@ 0001f916 8918
.org 0x1f918
	ldr r1, [r1, #0]	@ 0001f918 0968
.org 0x1f91a
	str r1, [r0, #20]	@ 0001f91a 4161
.org 0x1f91c
	bx lr	@ 0001f91c 7047
