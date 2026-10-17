@ FUN_08091578  entry 0x08091578  size 120
.thumb
.org 0x91578
FUN_08091578:
	push {r4, r5, lr}	@ 00091578 30b5
.org 0x9157a
	adds r4, r0, #0	@ 0009157a 041c
.org 0x9157c
	ldr r5, [r4, #40]	@ 0009157c a56a
.org 0x9157e
	bl 0x1cff0	@ 0009157e 8bf737fd
.org 0x91582
	ldrb r2, [r4, #15]	@ 00091582 e27b
.org 0x91584
	adds r3, r2, #0	@ 00091584 131c
.org 0x91586
	cmp r3, #0	@ 00091586 002b
.org 0x91588
	bne.n 0x915ae	@ 00091588 11d1
.org 0x9158a
	ldr r0, [r4, #84]	@ 0009158a 606d
.org 0x9158c
	ldr r1, [r4, #92]	@ 0009158c e16d
.org 0x9158e
	adds r0, r0, r1	@ 0009158e 4018
.org 0x91590
	str r0, [r4, #84]	@ 00091590 6065
.org 0x91592
	ldr r0, [r4, #100]	@ 00091592 606e
.org 0x91594
	adds r1, r1, r0	@ 00091594 0918
.org 0x91596
	str r1, [r4, #92]	@ 00091596 e165
.org 0x91598
	ldrb r0, [r4, #18]	@ 00091598 a07c
.org 0x9159a
	adds r1, r0, #1	@ 0009159a 411c
.org 0x9159c
	strb r1, [r4, #18]	@ 0009159c a174
.org 0x9159e
	lsls r0, r0, #24	@ 0009159e 0006
.org 0x915a0
	lsrs r0, r0, #24	@ 000915a0 000e
.org 0x915a2
	cmp r0, #64	@ 000915a2 4028
.org 0x915a4
	bls.n 0x915ea	@ 000915a4 21d9
.org 0x915a6
	adds r0, r2, #1	@ 000915a6 501c
.org 0x915a8
	strb r0, [r4, #15]	@ 000915a8 e073
.org 0x915aa
	strb r3, [r4, #18]	@ 000915aa a374
.org 0x915ac
	b.n 0x915ea	@ 000915ac 1de0
.org 0x915ae
	ldrb r0, [r5, #13]	@ 000915ae 687b
.org 0x915b0
	cmp r0, #3	@ 000915b0 0328
.org 0x915b2
	bls.n 0x915ea	@ 000915b2 1ad9
.org 0x915b4
	ldrb r1, [r4, #10]	@ 000915b4 a17a
.org 0x915b6
	movs r0, #254	@ 000915b6 fe20
.org 0x915b8
	ands r0, r1	@ 000915b8 0840
.org 0x915ba
	movs r2, #0	@ 000915ba 0022
.org 0x915bc
	movs r1, #253	@ 000915bc fd21
.org 0x915be
	ands r0, r1	@ 000915be 0840
.org 0x915c0
	strb r0, [r4, #10]	@ 000915c0 a072
.org 0x915c2
	adds r0, r4, #0	@ 000915c2 201c
.org 0x915c4
	adds r0, #140	@ 000915c4 8c30
.org 0x915c6
	str r2, [r0, #0]	@ 000915c6 0260
.org 0x915c8
	adds r0, #4	@ 000915c8 0430
.org 0x915ca
	str r2, [r0, #0]	@ 000915ca 0260
.org 0x915cc
	adds r0, #4	@ 000915cc 0430
.org 0x915ce
	strb r2, [r0, #0]	@ 000915ce 0270
.org 0x915d0
	ldrb r1, [r4, #10]	@ 000915d0 a17a
.org 0x915d2
	movs r0, #251	@ 000915d2 fb20
.org 0x915d4
	ands r0, r1	@ 000915d4 0840
.org 0x915d6
	strb r0, [r4, #10]	@ 000915d6 a072
.org 0x915d8
	ldr r1, [pc, #20]	@ 000915d8 0549
.org 0x915da
	ldrb r0, [r4, #9]	@ 000915da 607a
.org 0x915dc
	lsls r0, r0, #2	@ 000915dc 8000
.org 0x915de
	adds r0, r0, r1	@ 000915de 4018
.org 0x915e0
	movs r1, #3	@ 000915e0 0321
.org 0x915e2
	str r1, [r4, #12]	@ 000915e2 e160
.org 0x915e4
	ldr r0, [r0, #0]	@ 000915e4 0068
.org 0x915e6
	ldr r0, [r0, #12]	@ 000915e6 c068
.org 0x915e8
	str r0, [r4, #20]	@ 000915e8 6061
.org 0x915ea
	pop {r4, r5}	@ 000915ea 30bc
.org 0x915ec
	pop {r0}	@ 000915ec 01bc
.org 0x915ee
	bx r0	@ 000915ee 0047
