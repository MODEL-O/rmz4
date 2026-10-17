@ FUN_0810e760  entry 0x0810e760  size 48
.thumb
.org 0x10e760
FUN_0810e760:
	push {r4, r5, lr}	@ 0010e760 30b5
.org 0x10e762
	adds r4, r0, #0	@ 0010e762 041c
.org 0x10e764
	ldr r3, [r4, #32]	@ 0010e764 236a
.org 0x10e766
	movs r5, #0	@ 0010e766 0025
.org 0x10e768
	b.n 0x10e782	@ 0010e768 0be0
.org 0x10e76a
	cmp r0, #243	@ 0010e76a f328
.org 0x10e76c
	bne.n 0x10e780	@ 0010e76c 08d1
.org 0x10e76e
	adds r3, #1	@ 0010e76e 0133
.org 0x10e770
	ldrb r0, [r3, #0]	@ 0010e770 1878
.org 0x10e772
	ldrb r1, [r4, #4]	@ 0010e772 2179
.org 0x10e774
	lsls r1, r1, #1	@ 0010e774 4900
.org 0x10e776
	ldrb r2, [r4, #6]	@ 0010e776 a279
.org 0x10e778
	orrs r1, r2	@ 0010e778 1143
.org 0x10e77a
	cmp r0, r1	@ 0010e77a 8842
.org 0x10e77c
	beq.n 0x10e780	@ 0010e77c 00d0
.org 0x10e77e
	movs r5, #1	@ 0010e77e 0125
.org 0x10e780
	adds r3, #1	@ 0010e780 0133
.org 0x10e782
	ldrb r0, [r3, #0]	@ 0010e782 1878
.org 0x10e784
	cmp r0, #252	@ 0010e784 fc28
.org 0x10e786
	bls.n 0x10e76a	@ 0010e786 f0d9
.org 0x10e788
	adds r0, r5, #0	@ 0010e788 281c
.org 0x10e78a
	pop {r4, r5}	@ 0010e78a 30bc
.org 0x10e78c
	pop {r1}	@ 0010e78c 02bc
.org 0x10e78e
	bx r1	@ 0010e78e 0847
