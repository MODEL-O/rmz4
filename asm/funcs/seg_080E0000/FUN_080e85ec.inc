@ FUN_080e85ec  entry 0x080e85ec  size 36
.thumb
.org 0xe85ec
FUN_080e85ec:
	push {r4, lr}	@ 000e85ec 10b5
.org 0xe85ee
	adds r3, r0, #0	@ 000e85ee 031c
.org 0xe85f0
	ldr r0, [r3, #40]	@ 000e85f0 986a
.org 0xe85f2
	adds r1, r0, #0	@ 000e85f2 011c
.org 0xe85f4
	adds r1, #204	@ 000e85f4 cc31
.org 0xe85f6
	ldrh r2, [r1, #0]	@ 000e85f6 0a88
.org 0xe85f8
	movs r4, #0	@ 000e85f8 0024
.org 0xe85fa
	ldrsh r0, [r1, r4]	@ 000e85fa 085f
.org 0xe85fc
	cmp r0, #0	@ 000e85fc 0028
.org 0xe85fe
	beq.n 0xe8604	@ 000e85fe 01d0
.org 0xe8600
	subs r0, r2, #1	@ 000e8600 501e
.org 0xe8602
	strh r0, [r1, #0]	@ 000e8602 0880
.org 0xe8604
	adds r0, r3, #0	@ 000e8604 181c
.org 0xe8606
	bl 0xd0c30	@ 000e8606 e8f713fb
.org 0xe860a
	pop {r4}	@ 000e860a 10bc
.org 0xe860c
	pop {r0}	@ 000e860c 01bc
.org 0xe860e
	bx r0	@ 000e860e 0047
