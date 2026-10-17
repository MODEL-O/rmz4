@ FUN_0804890c  entry 0x0804890c  size 42
.thumb
.org 0x4890c
FUN_0804890c:
	push {lr}	@ 0004890c 00b5
.org 0x4890e
	adds r2, r0, #0	@ 0004890e 021c
.org 0x48910
	ldr r0, [r2, #20]	@ 00048910 5069
.org 0x48912
	movs r1, #1	@ 00048912 0121
.org 0x48914
	ands r0, r1	@ 00048914 0840
.org 0x48916
	cmp r0, #0	@ 00048916 0028
.org 0x48918
	beq.n 0x48932	@ 00048918 0bd0
.org 0x4891a
	ldr r0, [r2, #12]	@ 0004891a d068
.org 0x4891c
	ldr r0, [r0, #44]	@ 0004891c c06a
.org 0x4891e
	ldr r2, [r2, #44]	@ 0004891e d26a
.org 0x48920
	movs r3, #0	@ 00048920 0023
.org 0x48922
	ldr r1, [r0, #84]	@ 00048922 416d
.org 0x48924
	ldr r0, [r2, #84]	@ 00048924 506d
.org 0x48926
	cmp r1, r0	@ 00048926 8142
.org 0x48928
	ble.n 0x4892c	@ 00048928 00dd
.org 0x4892a
	movs r3, #1	@ 0004892a 0123
.org 0x4892c
	adds r0, r2, #0	@ 0004892c 101c
.org 0x4892e
	adds r0, #188	@ 0004892e bc30
.org 0x48930
	strb r3, [r0, #0]	@ 00048930 0370
.org 0x48932
	pop {r0}	@ 00048932 01bc
.org 0x48934
	bx r0	@ 00048934 0047
