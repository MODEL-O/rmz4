@ FUN_0803492c  entry 0x0803492c  size 38
.thumb
.org 0x3492c
FUN_0803492c:
	push {r4, lr}	@ 0003492c 10b5
.org 0x3492e
	adds r4, r0, #0	@ 0003492e 041c
.org 0x34930
	ldr r1, [pc, #32]	@ 00034930 0849
.org 0x34932
	bl 0x1cf00	@ 00034932 e8f7e5fa
.org 0x34936
	adds r0, r4, #0	@ 00034936 201c
.org 0x34938
	movs r1, #0	@ 00034938 0021
.org 0x3493a
	bl 0x3a39c	@ 0003493a 05f02ffd
.org 0x3493e
	ldr r0, [pc, #24]	@ 0003493e 0648
.org 0x34940
	adds r1, r4, r0	@ 00034940 2118
.org 0x34942
	movs r0, #1	@ 00034942 0120
.org 0x34944
	strb r0, [r1, #0]	@ 00034944 0870
.org 0x34946
	adds r0, r4, #0	@ 00034946 201c
.org 0x34948
	bl 0x3495c	@ 00034948 00f008f8
.org 0x3494c
	pop {r4}	@ 0003494c 10bc
.org 0x3494e
	pop {r0}	@ 0003494e 01bc
.org 0x34950
	bx r0	@ 00034950 0047
