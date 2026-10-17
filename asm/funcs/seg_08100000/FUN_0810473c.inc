@ FUN_0810473c  entry 0x0810473c  size 92
.thumb
.org 0x10473c
FUN_0810473c:
	push {r4, r5, r6, lr}	@ 0010473c 70b5
.org 0x10473e
	adds r6, r0, #0	@ 0010473e 061c
.org 0x104740
	movs r5, #0	@ 00104740 0025
.org 0x104742
	lsls r1, r5, #2	@ 00104742 a900
.org 0x104744
	adds r0, r6, #0	@ 00104744 301c
.org 0x104746
	adds r0, #180	@ 00104746 b430
.org 0x104748
	adds r4, r0, r1	@ 00104748 4418
.org 0x10474a
	ldr r0, [r4, #0]	@ 0010474a 2068
.org 0x10474c
	cmp r0, #0	@ 0010474c 0028
.org 0x10474e
	beq.n 0x104758	@ 0010474e 03d0
.org 0x104750
	bl 0xe954c	@ 00104750 e4f7fcfe
.org 0x104754
	movs r0, #0	@ 00104754 0020
.org 0x104756
	str r0, [r4, #0]	@ 00104756 2060
.org 0x104758
	adds r0, r5, #1	@ 00104758 681c
.org 0x10475a
	lsls r0, r0, #24	@ 0010475a 0006
.org 0x10475c
	lsrs r5, r0, #24	@ 0010475c 050e
.org 0x10475e
	cmp r5, #3	@ 0010475e 032d
.org 0x104760
	bls.n 0x104742	@ 00104760 efd9
.org 0x104762
	movs r5, #0	@ 00104762 0025
.org 0x104764
	lsls r0, r5, #2	@ 00104764 a800
.org 0x104766
	adds r4, r0, r6	@ 00104766 8419
.org 0x104768
	ldr r0, [r4, #92]	@ 00104768 e06d
.org 0x10476a
	cmp r0, #0	@ 0010476a 0028
.org 0x10476c
	beq.n 0x104776	@ 0010476c 03d0
.org 0x10476e
	bl 0xe954c	@ 0010476e e4f7edfe
.org 0x104772
	movs r0, #0	@ 00104772 0020
.org 0x104774
	str r0, [r4, #92]	@ 00104774 e065
.org 0x104776
	adds r0, r5, #1	@ 00104776 681c
.org 0x104778
	lsls r0, r0, #24	@ 00104778 0006
.org 0x10477a
	lsrs r5, r0, #24	@ 0010477a 050e
.org 0x10477c
	cmp r5, #3	@ 0010477c 032d
.org 0x10477e
	bls.n 0x104764	@ 0010477e f1d9
.org 0x104780
	ldr r1, [pc, #20]	@ 00104780 0549
.org 0x104782
	ldrb r0, [r6, #9]	@ 00104782 707a
.org 0x104784
	lsls r0, r0, #2	@ 00104784 8000
.org 0x104786
	adds r0, r0, r1	@ 00104786 4018
.org 0x104788
	movs r1, #4	@ 00104788 0421
.org 0x10478a
	str r1, [r6, #12]	@ 0010478a f160
.org 0x10478c
	ldr r0, [r0, #0]	@ 0010478c 0068
.org 0x10478e
	ldr r0, [r0, #16]	@ 0010478e 0069
.org 0x104790
	str r0, [r6, #20]	@ 00104790 7061
.org 0x104792
	pop {r4, r5, r6}	@ 00104792 70bc
.org 0x104794
	pop {r0}	@ 00104794 01bc
.org 0x104796
	bx r0	@ 00104796 0047
