@ FUN_080c9724  entry 0x080c9724  size 38
.thumb
.org 0xc9724
FUN_080c9724:
	push {r4, lr}	@ 000c9724 10b5
.org 0xc9726
	adds r4, r0, #0	@ 000c9726 041c
.org 0xc9728
	adds r1, r4, #0	@ 000c9728 211c
.org 0xc972a
	adds r1, #84	@ 000c972a 5431
.org 0xc972c
	movs r0, #3	@ 000c972c 0320
.org 0xc972e
	bl 0xd0c88	@ 000c972e 07f0abfa
.org 0xc9732
	ldr r1, [pc, #24]	@ 000c9732 0649
.org 0xc9734
	ldrb r0, [r4, #9]	@ 000c9734 607a
.org 0xc9736
	lsls r0, r0, #2	@ 000c9736 8000
.org 0xc9738
	adds r0, r0, r1	@ 000c9738 4018
.org 0xc973a
	movs r1, #4	@ 000c973a 0421
.org 0xc973c
	str r1, [r4, #12]	@ 000c973c e160
.org 0xc973e
	ldr r0, [r0, #0]	@ 000c973e 0068
.org 0xc9740
	ldr r0, [r0, #16]	@ 000c9740 0069
.org 0xc9742
	str r0, [r4, #20]	@ 000c9742 6061
.org 0xc9744
	pop {r4}	@ 000c9744 10bc
.org 0xc9746
	pop {r0}	@ 000c9746 01bc
.org 0xc9748
	bx r0	@ 000c9748 0047
