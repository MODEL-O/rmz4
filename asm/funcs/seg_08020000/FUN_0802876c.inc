@ FUN_0802876c  entry 0x0802876c  size 46
.thumb
.org 0x2876c
FUN_0802876c:
	push {r4, lr}	@ 0002876c 10b5
.org 0x2876e
	adds r1, r0, #0	@ 0002876e 011c
.org 0x28770
	ldr r2, [r1, #12]	@ 00028770 ca68
.org 0x28772
	ldrb r0, [r2, #1]	@ 00028772 5078
.org 0x28774
	lsls r3, r0, #4	@ 00028774 0301
.org 0x28776
	adds r0, r1, #0	@ 00028776 081c
.org 0x28778
	adds r0, #16	@ 00028778 1030
.org 0x2877a
	adds r0, r0, r3	@ 0002877a c018
.org 0x2877c
	ldr r0, [r0, #0]	@ 0002877c 0068
.org 0x2877e
	cmp r0, #0	@ 0002877e 0028
.org 0x28780
	beq.n 0x28792	@ 00028780 07d0
.org 0x28782
	movs r4, #2	@ 00028782 0224
.org 0x28784
	ldrsh r0, [r2, r4]	@ 00028784 105f
.org 0x28786
	lsls r0, r0, #1	@ 00028786 4000
.org 0x28788
	adds r0, r0, r3	@ 00028788 c018
.org 0x2878a
	adds r1, #26	@ 0002878a 1a31
.org 0x2878c
	adds r1, r1, r0	@ 0002878c 0918
.org 0x2878e
	ldr r0, [r2, #4]	@ 0002878e 5068
.org 0x28790
	strh r0, [r1, #0]	@ 00028790 0880
.org 0x28792
	movs r0, #0	@ 00028792 0020
.org 0x28794
	pop {r4}	@ 00028794 10bc
.org 0x28796
	pop {r1}	@ 00028796 02bc
.org 0x28798
	bx r1	@ 00028798 0847
