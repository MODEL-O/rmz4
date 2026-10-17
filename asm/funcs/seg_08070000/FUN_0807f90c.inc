@ FUN_0807f90c  entry 0x0807f90c  size 40
.thumb
.org 0x7f90c
FUN_0807f90c:
	push {r4, lr}	@ 0007f90c 10b5
.org 0x7f90e
	adds r2, r0, #0	@ 0007f90e 021c
.org 0x7f910
	movs r4, #0	@ 0007f910 0024
.org 0x7f912
	ldr r0, [pc, #32]	@ 0007f912 0848
.org 0x7f914
	ldrb r1, [r0, #8]	@ 0007f914 017a
.org 0x7f916
	movs r3, #128	@ 0007f916 8023
.org 0x7f918
	adds r0, r3, #0	@ 0007f918 181c
.org 0x7f91a
	ands r0, r1	@ 0007f91a 0840
.org 0x7f91c
	cmp r0, #0	@ 0007f91c 0028
.org 0x7f91e
	bne.n 0x7f92a	@ 0007f91e 04d1
.org 0x7f920
	ldrb r1, [r2, #11]	@ 0007f920 d17a
.org 0x7f922
	adds r0, r3, #0	@ 0007f922 181c
.org 0x7f924
	ands r0, r1	@ 0007f924 0840
.org 0x7f926
	cmp r0, #0	@ 0007f926 0028
.org 0x7f928
	beq.n 0x7f92c	@ 0007f928 00d0
.org 0x7f92a
	movs r4, #1	@ 0007f92a 0124
.org 0x7f92c
	adds r0, r4, #0	@ 0007f92c 201c
.org 0x7f92e
	pop {r4}	@ 0007f92e 10bc
.org 0x7f930
	pop {r1}	@ 0007f930 02bc
.org 0x7f932
	bx r1	@ 0007f932 0847
