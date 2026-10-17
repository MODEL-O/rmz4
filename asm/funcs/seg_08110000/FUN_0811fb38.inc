@ FUN_0811fb38  entry 0x0811fb38  size 50
.thumb
.org 0x11fb38
FUN_0811fb38:
	push {r4, lr}	@ 0011fb38 10b5
.org 0x11fb3a
	adds r4, r0, #0	@ 0011fb3a 041c
.org 0x11fb3c
	movs r0, #47	@ 0011fb3c 2f20
.org 0x11fb3e
	bl 0x2624	@ 0011fb3e e2f671fd
.org 0x11fb42
	movs r0, #149	@ 0011fb42 9520
.org 0x11fb44
	bl 0x2b5c	@ 0011fb44 e3f60af8
.org 0x11fb48
	ldr r2, [pc, #32]	@ 0011fb48 084a
.org 0x11fb4a
	ldrh r1, [r2, #0]	@ 0011fb4a 1188
.org 0x11fb4c
	ldr r0, [pc, #32]	@ 0011fb4c 0848
.org 0x11fb4e
	ands r0, r1	@ 0011fb4e 0840
.org 0x11fb50
	movs r1, #0	@ 0011fb50 0021
.org 0x11fb52
	strh r0, [r2, #0]	@ 0011fb52 1080
.org 0x11fb54
	ldr r0, [pc, #28]	@ 0011fb54 0748
.org 0x11fb56
	strh r1, [r0, #0]	@ 0011fb56 0180
.org 0x11fb58
	ldr r0, [pc, #28]	@ 0011fb58 0748
.org 0x11fb5a
	adds r4, r4, r0	@ 0011fb5a 2418
.org 0x11fb5c
	movs r0, #1	@ 0011fb5c 0120
.org 0x11fb5e
	strb r0, [r4, #5]	@ 0011fb5e 6071
.org 0x11fb60
	bl 0x1354	@ 0011fb60 e1f6f8fb
.org 0x11fb64
	pop {r4}	@ 0011fb64 10bc
.org 0x11fb66
	pop {r0}	@ 0011fb66 01bc
.org 0x11fb68
	bx r0	@ 0011fb68 0047
