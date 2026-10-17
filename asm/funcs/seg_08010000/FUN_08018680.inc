@ FUN_08018680  entry 0x08018680  size 34
.thumb
.org 0x18680
FUN_08018680:
	push {r4, lr}	@ 00018680 10b5
.org 0x18682
	ldr r0, [pc, #32]	@ 00018682 0848
.org 0x18684
	ldr r1, [pc, #32]	@ 00018684 0849
.org 0x18686
	adds r4, r0, r1	@ 00018686 4418
.org 0x18688
	ldrb r0, [r4, #0]	@ 00018688 2078
.org 0x1868a
	cmp r0, #1	@ 0001868a 0128
.org 0x1868c
	bne.n 0x1869c	@ 0001868c 06d1
.org 0x1868e
	movs r0, #16	@ 0001868e 1020
.org 0x18690
	movs r1, #4	@ 00018690 0421
.org 0x18692
	movs r2, #47	@ 00018692 2f22
.org 0x18694
	bl 0x74c0	@ 00018694 eef714ff
.org 0x18698
	movs r0, #2	@ 00018698 0220
.org 0x1869a
	strb r0, [r4, #0]	@ 0001869a 2070
.org 0x1869c
	pop {r4}	@ 0001869c 10bc
.org 0x1869e
	pop {r0}	@ 0001869e 01bc
.org 0x186a0
	bx r0	@ 000186a0 0047
